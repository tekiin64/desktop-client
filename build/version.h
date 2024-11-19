/*
 * Copyright (C) by Klaas Freitag <freitag@owncloud.com>
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA
 */

#ifndef VERSION_H
#define VERSION_H

#define GIT_SHA1 "b3f29300b582c150fae2dca16ca9c98743c5b76d"

#define MIRALL_STRINGIFY(s) MIRALL_TOSTRING(s)
#define MIRALL_TOSTRING(s) #s

/* MIRALL version */
#define MIRALL_VERSION_MAJOR 3
#define MIRALL_VERSION_MINOR 14
#define MIRALL_VERSION_PATCH 50
#define MIRALL_VERSION_BUILD 20241119

#define MIRALL_VERSION_SUFFIX daily-Win64

#define MIRALL_VERSION       3.14.50
#define MIRALL_VERSION_FULL  3.14.50.20241119

#define MIRALL_VERSION_STRING "3.14.50daily-Win64 (build 20241119)"

constexpr int NEXTCLOUD_SERVER_VERSION_MIN_SUPPORTED_MAJOR = 16;
constexpr int NEXTCLOUD_SERVER_VERSION_MIN_SUPPORTED_MINOR = 0;
constexpr int NEXTCLOUD_SERVER_VERSION_MIN_SUPPORTED_PATCH = 0;

constexpr int NEXTCLOUD_SERVER_VERSION_SECURE_FILEDROP_MIN_SUPPORTED_MAJOR = 26;
constexpr int NEXTCLOUD_SERVER_VERSION_SECURE_FILEDROP_MIN_SUPPORTED_MINOR = 0;
constexpr int NEXTCLOUD_SERVER_VERSION_SECURE_FILEDROP_MIN_SUPPORTED_PATCH = 0;

constexpr int NEXTCLOUD_SERVER_VERSION_MOUNT_ROOT_PROPERTY_SUPPORTED_MAJOR = 28;
constexpr int NEXTCLOUD_SERVER_VERSION_MOUNT_ROOT_PROPERTY_SUPPORTED_MINOR = 0;
constexpr int NEXTCLOUD_SERVER_VERSION_MOUNT_ROOT_PROPERTY_SUPPORTED_PATCH = 3;

#endif // VERSION_H
