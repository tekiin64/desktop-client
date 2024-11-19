/*
 * Copyright (C) 2022 by Claudio Cambra <claudio.cambra@nextcloud.com>
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

#pragma once

#include <QAbstractListModel>

#include "accountstate.h"
#include "folder.h"
#include "sharemanager.h"
#include "sharepermissions.h"

namespace OCC {

class ShareModel : public QAbstractListModel
{
    Q_OBJECT
    Q_PROPERTY(AccountState* accountState READ accountState WRITE setAccountState NOTIFY accountStateChanged)
    Q_PROPERTY(QString localPath READ localPath WRITE setLocalPath NOTIFY localPathChanged)
    Q_PROPERTY(bool accountConnected READ accountConnected NOTIFY accountConnectedChanged)
    Q_PROPERTY(bool sharingEnabled READ sharingEnabled NOTIFY sharingEnabledChanged)
    Q_PROPERTY(bool publicLinkSharesEnabled READ publicLinkSharesEnabled NOTIFY publicLinkSharesEnabledChanged)
    Q_PROPERTY(bool userGroupSharingEnabled READ userGroupSharingEnabled NOTIFY userGroupSharingEnabledChanged)
    Q_PROPERTY(bool canShare READ canShare NOTIFY sharePermissionsChanged)
    Q_PROPERTY(bool isShareDisabledEncryptedFolder READ isShareDisabledEncryptedFolder NOTIFY isShareDisabledEncryptedFolderChanged)
    Q_PROPERTY(bool fetchOngoing READ fetchOngoing NOTIFY fetchOngoingChanged)
    Q_PROPERTY(bool hasInitialShareFetchCompleted READ hasInitialShareFetchCompleted NOTIFY hasInitialShareFetchCompletedChanged)
    Q_PROPERTY(bool serverAllowsResharing READ serverAllowsResharing NOTIFY serverAllowsResharingChanged)
    Q_PROPERTY(QVariantList sharees READ sharees NOTIFY shareesChanged)

public:
    enum Roles {
        ShareRole = Qt::UserRole + 1,
        ShareTypeRole,
        ShareIdRole,
        IconUrlRole,
        AvatarUrlRole,
        LinkRole,
        LinkShareNameRole,
        LinkShareLabelRole,
        NoteEnabledRole,
        NoteRole,
        ExpireDateEnabledRole,
        ExpireDateEnforcedRole,
        ExpireDateRole,
        EnforcedMaximumExpireDateRole,
        PasswordProtectEnabledRole,
        PasswordRole,
        PasswordEnforcedRole,
        EditingAllowedRole,
        CurrentPermissionModeRole,
        SharedItemTypeRole,
        IsSharePermissionsChangeInProgress,
        HideDownloadEnabledRole,
        IsHideDownloadEnabledChangeInProgress,
        ResharingAllowedRole,
    };
    Q_ENUM(Roles)

    /**
     * Possible share types
     * Need to be in sync with Share::ShareType.
     * We use this in QML.
     */
    enum ShareType {
        ShareTypeUser = Share::TypeUser,
        ShareTypeGroup = Share::TypeGroup,
        ShareTypeLink = Share::TypeLink,
        ShareTypeEmail = Share::TypeEmail,
        ShareTypeRemote = Share::TypeRemote,
        ShareTypeCircle = Share::TypeCircle,
        ShareTypeRoom = Share::TypeRoom,
        ShareTypePlaceholderLink = Share::TypePlaceholderLink,
        ShareTypeInternalLink = Share::TypeInternalLink,
        ShareTypeSecureFileDropPlaceholderLink = Share::TypeSecureFileDropPlaceholderLink,
    };
    Q_ENUM(ShareType);
    
    enum class SharedItemType {
        SharedItemTypeUndefined = -1,
        SharedItemTypeFile,
        SharedItemTypeFolder,
        SharedItemTypeEncryptedFile,
        SharedItemTypeEncryptedFolder,
        SharedItemTypeEncryptedTopLevelFolder,
    };
    Q_ENUM(SharedItemType);
    
    enum class SharePermissionsMode {
        ModeViewOnly,
        ModeUploadAndEditing,
        ModeFileDropOnly,
    };
    Q_ENUM(SharePermissionsMode);

    explicit ShareModel(QObject *parent = nullptr);

    [[nodiscard]] QVariant data(const QModelIndex &index, const int role) const override;
    [[nodiscard]] int rowCount(const QModelIndex &parent = QModelIndex()) const override;
    [[nodiscard]] QHash<int, QByteArray> roleNames() const override;

    [[nodiscard]] AccountState *accountState() const;
    [[nodiscard]] QString localPath() const;

    [[nodiscard]] bool accountConnected() const;
    [[nodiscard]] bool sharingEnabled() const;
    [[nodiscard]] bool publicLinkSharesEnabled() const;
    [[nodiscard]] bool userGroupSharingEnabled() const;
    [[nodiscard]] bool canShare() const;
    [[nodiscard]] bool serverAllowsResharing() const;
    [[nodiscard]] bool isShareDisabledEncryptedFolder() const;

    [[nodiscard]] bool fetchOngoing() const;
    [[nodiscard]] bool hasInitialShareFetchCompleted() const;

    [[nodiscard]] QVariantList sharees() const;

    [[nodiscard]] Q_INVOKABLE static QString generatePassword();

signals:
    void localPathChanged();
    void accountStateChanged();
    void accountConnectedChanged();
    void sharingEnabledChanged();
    void publicLinkSharesEnabledChanged();
    void userGroupSharingEnabledChanged();
    void sharePermissionsChanged();
    void isShareDisabledEncryptedFolderChanged();
    void lockExpireStringChanged();
    void fetchOngoingChanged();
    void hasInitialShareFetchCompletedChanged();
    void shareesChanged();
    void internalLinkReady();
    void serverAllowsResharingChanged();

    void serverError(const int code, const QString &message) const;
    void passwordSetError(const QString &shareId, const int code, const QString &message);
    void requestPasswordForLinkShare();
    void requestPasswordForEmailSharee(const OCC::ShareePtr &sharee);

    void sharesChanged();

public slots:
    void setAccountState(OCC::AccountState *accountState);
    void setLocalPath(const QString &localPath);

    void createNewLinkShare() const;
    void createNewLinkShareWithPassword(const QString &password) const;
    void createNewUserGroupShare(const OCC::ShareePtr &sharee);
    void createNewUserGroupShareFromQml(const QVariant &sharee);
    void createNewUserGroupShareWithPassword(const OCC::ShareePtr &sharee, const QString &password) const;
    void createNewUserGroupShareWithPasswordFromQml(const QVariant &sharee, const QString &password) const;

    void deleteShare(const OCC::SharePtr &share) const;
    void deleteShareFromQml(const QVariant &share) const;

    void toggleHideDownloadFromQml(const QVariant &share, const bool enable);
    void toggleShareAllowEditing(const OCC::SharePtr &share, const bool enable);
    void toggleShareAllowEditingFromQml(const QVariant &share, const bool enable);
    void toggleShareAllowResharing(const OCC::SharePtr &share, const bool enable);
    void toggleShareAllowResharingFromQml(const QVariant &share, const bool enable);
    void toggleSharePasswordProtect(const OCC::SharePtr &share, const bool enable);
    void toggleSharePasswordProtectFromQml(const QVariant &share, const bool enable);
    void toggleShareExpirationDate(const OCC::SharePtr &share, const bool enable) const;
    void toggleShareExpirationDateFromQml(const QVariant &share, const bool enable) const;
    void toggleShareNoteToRecipient(const OCC::SharePtr &share, const bool enable) const;
    void toggleShareNoteToRecipientFromQml(const QVariant &share, const bool enable) const;
    void changePermissionModeFromQml(const QVariant &share, const OCC::ShareModel::SharePermissionsMode permissionMode);

    void setLinkShareLabel(const QSharedPointer<OCC::LinkShare> &linkShare, const QString &label) const;
    void setLinkShareLabelFromQml(const QVariant &linkShare, const QString &label) const;
    void setShareExpireDate(const OCC::SharePtr &share, const qint64 milliseconds) const;
    // Needed as ints in QML are 32 bits so we need to use a QVariant
    void setShareExpireDateFromQml(const QVariant &share, const QVariant milliseconds) const;
    void setSharePassword(const OCC::SharePtr &share, const QString &password);
    void setSharePasswordFromQml(const QVariant &share, const QString &password);
    void setShareNote(const OCC::SharePtr &share, const QString &note) const;
    void setShareNoteFromQml(const QVariant &share, const QString &note) const;

private slots:
    void resetData();
    void updateData();
    void initShareManager();
    void handlePlaceholderLinkShare();
    void handleSecureFileDropLinkShare();
    void handleLinkShare();
    void setupInternalLinkShare();
    void setSharePermissionChangeInProgress(const QString &shareId, const bool isInProgress);
    void setHideDownloadEnabledChangeInProgress(const QString &shareId, const bool isInProgress);

    void slotPropfindReceived(const QVariantMap &result);
    void slotServerError(const int code, const QString &message);
    void slotAddShare(const OCC::SharePtr &share);
    void slotRemoveShareWithId(const QString &shareId);
    void slotSharesFetched(const QList<OCC::SharePtr> &shares);
    void slotAddSharee(const OCC::ShareePtr &sharee);
    void slotRemoveSharee(const OCC::ShareePtr &sharee);

    void slotSharePermissionsSet(const QString &shareId);
    void slotSharePasswordSet(const QString &shareId);
    void slotShareNoteSet(const QString &shareId);
    void slotHideDownloadSet(const QString &shareId);
    void slotShareNameSet(const QString &shareId);
    void slotShareLabelSet(const QString &shareId);
    void slotShareExpireDateSet(const QString &shareId);
    void slotDeleteE2EeShare(const SharePtr &share) const;

private:
    [[nodiscard]] QString displayStringForShare(const SharePtr &share, bool verbose = false) const;
    [[nodiscard]] QString iconUrlForShare(const SharePtr &share) const;
    [[nodiscard]] QString avatarUrlForShare(const SharePtr &share) const;
    [[nodiscard]] long long enforcedMaxExpireDateForShare(const SharePtr &share) const;
    [[nodiscard]] bool expireDateEnforcedForShare(const SharePtr &share) const;
    [[nodiscard]] bool validCapabilities() const;
    [[nodiscard]] bool isSecureFileDropSupportedFolder() const;
    [[nodiscard]] bool isEncryptedItem() const;

    bool _fetchOngoing = false;
    bool _hasInitialShareFetchCompleted = false;
    bool _sharePermissionsChangeInProgress = false;
    bool _hideDownloadEnabledChangeInProgress = false;
    bool _isShareDisabledEncryptedFolder = false;
    SharePtr _placeholderLinkShare;
    SharePtr _internalLinkShare;
    SharePtr _secureFileDropPlaceholderLinkShare;

    QPointer<AccountState> _accountState;
    QPointer<Folder> _synchronizationFolder;

    QString _localPath;
    QString _sharePath;
    SharePermissions _maxSharingPermissions;
    QByteArray _numericFileId;
    SharedItemType _sharedItemType = SharedItemType::SharedItemTypeUndefined;
    SyncJournalFileLockInfo _filelockState;
    QString _privateLinkUrl;
    QByteArray _fileRemoteId;

    QSharedPointer<ShareManager> _manager;

    QVector<SharePtr> _shares;
    QHash<QString, QPersistentModelIndex> _shareIdIndexHash;
    QHash<QString, QString> _shareIdRecentlySetPasswords;
    QVector<ShareePtr> _sharees;
    // Buckets of sharees with the same display name
    QHash<unsigned int, QSharedPointer<QSet<unsigned int>>> _duplicateDisplayNameShareIndices;
};

} // namespace OCC
