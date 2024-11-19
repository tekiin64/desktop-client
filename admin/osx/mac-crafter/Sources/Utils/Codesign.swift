/*
 * Copyright (C) 2024 by Claudio Cambra <claudio.cambra@nextcloud.com>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY
 * or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License
 * for more details.
 */

import Foundation

enum CodeSigningError: Error {
    case failedToCodeSign(String)
}

enum AppBundleSigningError: Error {
    case couldNotEnumerate(String)
}

func isLibrary(_ path: String) -> Bool {
    path.hasSuffix(".dylib") || path.hasSuffix(".framework")
}

func isAppExtension(_ path: String) -> Bool {
    path.hasSuffix(".appex")
}

func codesign(
    identity: String,
    path: String,
    options: String = "--timestamp --force --preserve-metadata=entitlements --verbose=4 --options runtime --deep"
) throws {
    print("Code-signing \(path)...")
    let command = "codesign -s \"\(identity)\" \(options) \(path)"
    guard shell(command) == 0 else {
        throw CodeSigningError.failedToCodeSign("Failed to code-sign \(path).")
    }
}

func recursivelyCodesign(path: String, identity: String) throws {
    let fm = FileManager.default
    guard let pathEnumerator = fm.enumerator(atPath: path) else {
        throw AppBundleSigningError.couldNotEnumerate(
            "Failed to enumerate directory at \(path)."
        )
    }

    for case let enumeratedItem as String in pathEnumerator {
        guard isLibrary(enumeratedItem) || isAppExtension(enumeratedItem) else { continue }
        try codesign(identity: identity, path: "\(path)/\(enumeratedItem)")
    }
}

func saveCodesignEntitlements(target: String, path: String) throws {
    let command = "codesign -d --entitlements \(path) --xml \(target)"
    guard shell(command) == 0 else {
        throw CodeSigningError.failedToCodeSign("Failed to save entitlements for \(target).")
    }
}

func codesignClientAppBundle(
    at clientAppDir: String, withCodeSignIdentity codeSignIdentity: String
) throws {
    print("Code-signing Nextcloud Desktop Client libraries, frameworks and plugins...")

    let clientContentsDir = "\(clientAppDir)/Contents"
    let frameworksPath = "\(clientContentsDir)/Frameworks"
    let pluginsPath = "\(clientContentsDir)/PlugIns"

    try recursivelyCodesign(path: frameworksPath, identity: codeSignIdentity)
    try recursivelyCodesign(path: pluginsPath, identity: codeSignIdentity)
    try recursivelyCodesign(path: "\(clientContentsDir)/Resources", identity: codeSignIdentity)

    print("Code-signing QtWebEngineProcess...")
    let qtWebEngineProcessPath =
        "\(frameworksPath)/QtWebEngineCore.framework/Versions/A/Helpers/QtWebEngineProcess.app"
    try codesign(identity: codeSignIdentity,
                 path: qtWebEngineProcessPath,
                 options: "--timestamp --force --verbose=4 --options runtime --deep --entitlements \(qtWebEngineProcessPath)/Contents/Resources/QtWebEngineProcess.entitlements")

    print("Code-signing QtWebEngine...")
    try codesign(identity: codeSignIdentity, path: "\(frameworksPath)/QtWebEngineCore.framework")

    // Time to fix notarisation issues.
    // Multiple components of the app will now have the get-task-allow entitlements.
    // We need to strip these out manually.

    print("Code-signing Sparkle autoupdater app (without entitlements)...")
    let sparkleFrameworkPath = "\(frameworksPath)/Sparkle.framework"
    try codesign(identity: codeSignIdentity,
                 path: "\(sparkleFrameworkPath)/Resources/Autoupdate.app/Contents/MacOS/*",
                 options: "--timestamp --force --verbose=4 --options runtime --deep")

    print("Re-codesigning Sparkle library...")
    try codesign(identity: codeSignIdentity, path: "\(sparkleFrameworkPath)/Sparkle")

    print("Code-signing app extensions (removing get-task-allow entitlements)...")
    let fm = FileManager.default
    let appExtensionPaths =
        try fm.contentsOfDirectory(atPath: pluginsPath).filter(isAppExtension)
    for appExtension in appExtensionPaths {
        let appExtensionPath = "\(pluginsPath)/\(appExtension)"
        let tmpEntitlementXmlPath =
            fm.temporaryDirectory.appendingPathComponent(UUID().uuidString).path.appending(".xml")
        try saveCodesignEntitlements(target: appExtensionPath, path: tmpEntitlementXmlPath)
        // Strip the get-task-allow entitlement from the XML entitlements file
        let xmlEntitlements = try String(contentsOfFile: tmpEntitlementXmlPath)
        let entitlementKeyValuePair = "<key>com.apple.security.get-task-allow</key><true/>"
        let strippedEntitlements =
            xmlEntitlements.replacingOccurrences(of: entitlementKeyValuePair, with: "")
        try strippedEntitlements.write(toFile: tmpEntitlementXmlPath,
                                       atomically: true,
                                       encoding: .utf8)
        try codesign(identity: codeSignIdentity,
                     path: appExtensionPath,
                     options: "--timestamp --force --verbose=4 --options runtime --deep --entitlements \(tmpEntitlementXmlPath)")
    }

    // Now we do the final codesign bit
    print("Code-signing Nextcloud Desktop Client binaries...")
    try codesign(identity: codeSignIdentity, path: "\(clientContentsDir)/MacOS/*")
}
