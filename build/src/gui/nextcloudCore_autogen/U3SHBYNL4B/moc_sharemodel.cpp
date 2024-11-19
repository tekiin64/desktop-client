/****************************************************************************
** Meta object code from reading C++ file 'sharemodel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/gui/filedetails/sharemodel.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>
#include <QtCore/QSharedPointer>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sharemodel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.8.0. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSOCCSCOPEShareModelENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPEShareModelENDCLASS = QtMocHelpers::stringData(
    "OCC::ShareModel",
    "localPathChanged",
    "",
    "accountStateChanged",
    "accountConnectedChanged",
    "sharingEnabledChanged",
    "publicLinkSharesEnabledChanged",
    "userGroupSharingEnabledChanged",
    "sharePermissionsChanged",
    "isShareDisabledEncryptedFolderChanged",
    "lockExpireStringChanged",
    "fetchOngoingChanged",
    "hasInitialShareFetchCompletedChanged",
    "shareesChanged",
    "internalLinkReady",
    "serverAllowsResharingChanged",
    "serverError",
    "code",
    "message",
    "passwordSetError",
    "shareId",
    "requestPasswordForLinkShare",
    "requestPasswordForEmailSharee",
    "OCC::ShareePtr",
    "sharee",
    "sharesChanged",
    "setAccountState",
    "OCC::AccountState*",
    "accountState",
    "setLocalPath",
    "localPath",
    "createNewLinkShare",
    "createNewLinkShareWithPassword",
    "password",
    "createNewUserGroupShare",
    "createNewUserGroupShareFromQml",
    "QVariant",
    "createNewUserGroupShareWithPassword",
    "createNewUserGroupShareWithPasswordFromQml",
    "deleteShare",
    "OCC::SharePtr",
    "share",
    "deleteShareFromQml",
    "toggleHideDownloadFromQml",
    "enable",
    "toggleShareAllowEditing",
    "toggleShareAllowEditingFromQml",
    "toggleShareAllowResharing",
    "toggleShareAllowResharingFromQml",
    "toggleSharePasswordProtect",
    "toggleSharePasswordProtectFromQml",
    "toggleShareExpirationDate",
    "toggleShareExpirationDateFromQml",
    "toggleShareNoteToRecipient",
    "toggleShareNoteToRecipientFromQml",
    "changePermissionModeFromQml",
    "OCC::ShareModel::SharePermissionsMode",
    "permissionMode",
    "setLinkShareLabel",
    "QSharedPointer<OCC::LinkShare>",
    "linkShare",
    "label",
    "setLinkShareLabelFromQml",
    "setShareExpireDate",
    "milliseconds",
    "setShareExpireDateFromQml",
    "setSharePassword",
    "setSharePasswordFromQml",
    "setShareNote",
    "note",
    "setShareNoteFromQml",
    "resetData",
    "updateData",
    "initShareManager",
    "handlePlaceholderLinkShare",
    "handleSecureFileDropLinkShare",
    "handleLinkShare",
    "setupInternalLinkShare",
    "setSharePermissionChangeInProgress",
    "isInProgress",
    "setHideDownloadEnabledChangeInProgress",
    "slotPropfindReceived",
    "QVariantMap",
    "result",
    "slotServerError",
    "slotAddShare",
    "slotRemoveShareWithId",
    "slotSharesFetched",
    "QList<OCC::SharePtr>",
    "shares",
    "slotAddSharee",
    "slotRemoveSharee",
    "slotSharePermissionsSet",
    "slotSharePasswordSet",
    "slotShareNoteSet",
    "slotHideDownloadSet",
    "slotShareNameSet",
    "slotShareLabelSet",
    "slotShareExpireDateSet",
    "slotDeleteE2EeShare",
    "SharePtr",
    "generatePassword",
    "AccountState*",
    "accountConnected",
    "sharingEnabled",
    "publicLinkSharesEnabled",
    "userGroupSharingEnabled",
    "canShare",
    "isShareDisabledEncryptedFolder",
    "fetchOngoing",
    "hasInitialShareFetchCompleted",
    "serverAllowsResharing",
    "sharees",
    "QVariantList",
    "Roles",
    "ShareRole",
    "ShareTypeRole",
    "ShareIdRole",
    "IconUrlRole",
    "AvatarUrlRole",
    "LinkRole",
    "LinkShareNameRole",
    "LinkShareLabelRole",
    "NoteEnabledRole",
    "NoteRole",
    "ExpireDateEnabledRole",
    "ExpireDateEnforcedRole",
    "ExpireDateRole",
    "EnforcedMaximumExpireDateRole",
    "PasswordProtectEnabledRole",
    "PasswordRole",
    "PasswordEnforcedRole",
    "EditingAllowedRole",
    "CurrentPermissionModeRole",
    "SharedItemTypeRole",
    "IsSharePermissionsChangeInProgress",
    "HideDownloadEnabledRole",
    "IsHideDownloadEnabledChangeInProgress",
    "ResharingAllowedRole",
    "ShareType",
    "ShareTypeUser",
    "ShareTypeGroup",
    "ShareTypeLink",
    "ShareTypeEmail",
    "ShareTypeRemote",
    "ShareTypeCircle",
    "ShareTypeRoom",
    "ShareTypePlaceholderLink",
    "ShareTypeInternalLink",
    "ShareTypeSecureFileDropPlaceholderLink",
    "SharedItemType",
    "SharedItemTypeUndefined",
    "SharedItemTypeFile",
    "SharedItemTypeFolder",
    "SharedItemTypeEncryptedFile",
    "SharedItemTypeEncryptedFolder",
    "SharedItemTypeEncryptedTopLevelFolder",
    "SharePermissionsMode",
    "ModeViewOnly",
    "ModeUploadAndEditing",
    "ModeFileDropOnly"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPEShareModelENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      74,   14, // methods
      12,  686, // properties
       4,  746, // enums/sets
       0,    0, // constructors
       0,       // flags
      19,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  458,    2, 0x06,   17 /* Public */,
       3,    0,  459,    2, 0x06,   18 /* Public */,
       4,    0,  460,    2, 0x06,   19 /* Public */,
       5,    0,  461,    2, 0x06,   20 /* Public */,
       6,    0,  462,    2, 0x06,   21 /* Public */,
       7,    0,  463,    2, 0x06,   22 /* Public */,
       8,    0,  464,    2, 0x06,   23 /* Public */,
       9,    0,  465,    2, 0x06,   24 /* Public */,
      10,    0,  466,    2, 0x06,   25 /* Public */,
      11,    0,  467,    2, 0x06,   26 /* Public */,
      12,    0,  468,    2, 0x06,   27 /* Public */,
      13,    0,  469,    2, 0x06,   28 /* Public */,
      14,    0,  470,    2, 0x06,   29 /* Public */,
      15,    0,  471,    2, 0x06,   30 /* Public */,
      16,    2,  472,    2, 0x106,   31 /* Public | MethodIsConst  */,
      19,    3,  477,    2, 0x06,   34 /* Public */,
      21,    0,  484,    2, 0x06,   38 /* Public */,
      22,    1,  485,    2, 0x06,   39 /* Public */,
      25,    0,  488,    2, 0x06,   41 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      26,    1,  489,    2, 0x0a,   42 /* Public */,
      29,    1,  492,    2, 0x0a,   44 /* Public */,
      31,    0,  495,    2, 0x10a,   46 /* Public | MethodIsConst  */,
      32,    1,  496,    2, 0x10a,   47 /* Public | MethodIsConst  */,
      34,    1,  499,    2, 0x0a,   49 /* Public */,
      35,    1,  502,    2, 0x0a,   51 /* Public */,
      37,    2,  505,    2, 0x10a,   53 /* Public | MethodIsConst  */,
      38,    2,  510,    2, 0x10a,   56 /* Public | MethodIsConst  */,
      39,    1,  515,    2, 0x10a,   59 /* Public | MethodIsConst  */,
      42,    1,  518,    2, 0x10a,   61 /* Public | MethodIsConst  */,
      43,    2,  521,    2, 0x0a,   63 /* Public */,
      45,    2,  526,    2, 0x0a,   66 /* Public */,
      46,    2,  531,    2, 0x0a,   69 /* Public */,
      47,    2,  536,    2, 0x0a,   72 /* Public */,
      48,    2,  541,    2, 0x0a,   75 /* Public */,
      49,    2,  546,    2, 0x0a,   78 /* Public */,
      50,    2,  551,    2, 0x0a,   81 /* Public */,
      51,    2,  556,    2, 0x10a,   84 /* Public | MethodIsConst  */,
      52,    2,  561,    2, 0x10a,   87 /* Public | MethodIsConst  */,
      53,    2,  566,    2, 0x10a,   90 /* Public | MethodIsConst  */,
      54,    2,  571,    2, 0x10a,   93 /* Public | MethodIsConst  */,
      55,    2,  576,    2, 0x0a,   96 /* Public */,
      58,    2,  581,    2, 0x10a,   99 /* Public | MethodIsConst  */,
      62,    2,  586,    2, 0x10a,  102 /* Public | MethodIsConst  */,
      63,    2,  591,    2, 0x10a,  105 /* Public | MethodIsConst  */,
      65,    2,  596,    2, 0x10a,  108 /* Public | MethodIsConst  */,
      66,    2,  601,    2, 0x0a,  111 /* Public */,
      67,    2,  606,    2, 0x0a,  114 /* Public */,
      68,    2,  611,    2, 0x10a,  117 /* Public | MethodIsConst  */,
      70,    2,  616,    2, 0x10a,  120 /* Public | MethodIsConst  */,
      71,    0,  621,    2, 0x08,  123 /* Private */,
      72,    0,  622,    2, 0x08,  124 /* Private */,
      73,    0,  623,    2, 0x08,  125 /* Private */,
      74,    0,  624,    2, 0x08,  126 /* Private */,
      75,    0,  625,    2, 0x08,  127 /* Private */,
      76,    0,  626,    2, 0x08,  128 /* Private */,
      77,    0,  627,    2, 0x08,  129 /* Private */,
      78,    2,  628,    2, 0x08,  130 /* Private */,
      80,    2,  633,    2, 0x08,  133 /* Private */,
      81,    1,  638,    2, 0x08,  136 /* Private */,
      84,    2,  641,    2, 0x08,  138 /* Private */,
      85,    1,  646,    2, 0x08,  141 /* Private */,
      86,    1,  649,    2, 0x08,  143 /* Private */,
      87,    1,  652,    2, 0x08,  145 /* Private */,
      90,    1,  655,    2, 0x08,  147 /* Private */,
      91,    1,  658,    2, 0x08,  149 /* Private */,
      92,    1,  661,    2, 0x08,  151 /* Private */,
      93,    1,  664,    2, 0x08,  153 /* Private */,
      94,    1,  667,    2, 0x08,  155 /* Private */,
      95,    1,  670,    2, 0x08,  157 /* Private */,
      96,    1,  673,    2, 0x08,  159 /* Private */,
      97,    1,  676,    2, 0x08,  161 /* Private */,
      98,    1,  679,    2, 0x08,  163 /* Private */,
      99,    1,  682,    2, 0x108,  165 /* Private | MethodIsConst  */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
     101,    0,  685,    2, 0x02,  167 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   17,   18,
    QMetaType::Void, QMetaType::QString, QMetaType::Int, QMetaType::QString,   20,   17,   18,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 23,   24,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 27,   28,
    QMetaType::Void, QMetaType::QString,   30,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   33,
    QMetaType::Void, 0x80000000 | 23,   24,
    QMetaType::Void, 0x80000000 | 36,   24,
    QMetaType::Void, 0x80000000 | 23, QMetaType::QString,   24,   33,
    QMetaType::Void, 0x80000000 | 36, QMetaType::QString,   24,   33,
    QMetaType::Void, 0x80000000 | 40,   41,
    QMetaType::Void, 0x80000000 | 36,   41,
    QMetaType::Void, 0x80000000 | 36, QMetaType::Bool,   41,   44,
    QMetaType::Void, 0x80000000 | 40, QMetaType::Bool,   41,   44,
    QMetaType::Void, 0x80000000 | 36, QMetaType::Bool,   41,   44,
    QMetaType::Void, 0x80000000 | 40, QMetaType::Bool,   41,   44,
    QMetaType::Void, 0x80000000 | 36, QMetaType::Bool,   41,   44,
    QMetaType::Void, 0x80000000 | 40, QMetaType::Bool,   41,   44,
    QMetaType::Void, 0x80000000 | 36, QMetaType::Bool,   41,   44,
    QMetaType::Void, 0x80000000 | 40, QMetaType::Bool,   41,   44,
    QMetaType::Void, 0x80000000 | 36, QMetaType::Bool,   41,   44,
    QMetaType::Void, 0x80000000 | 40, QMetaType::Bool,   41,   44,
    QMetaType::Void, 0x80000000 | 36, QMetaType::Bool,   41,   44,
    QMetaType::Void, 0x80000000 | 36, 0x80000000 | 56,   41,   57,
    QMetaType::Void, 0x80000000 | 59, QMetaType::QString,   60,   61,
    QMetaType::Void, 0x80000000 | 36, QMetaType::QString,   60,   61,
    QMetaType::Void, 0x80000000 | 40, QMetaType::LongLong,   41,   64,
    QMetaType::Void, 0x80000000 | 36, 0x80000000 | 36,   41,   64,
    QMetaType::Void, 0x80000000 | 40, QMetaType::QString,   41,   33,
    QMetaType::Void, 0x80000000 | 36, QMetaType::QString,   41,   33,
    QMetaType::Void, 0x80000000 | 40, QMetaType::QString,   41,   69,
    QMetaType::Void, 0x80000000 | 36, QMetaType::QString,   41,   69,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   20,   79,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   20,   79,
    QMetaType::Void, 0x80000000 | 82,   83,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   17,   18,
    QMetaType::Void, 0x80000000 | 40,   41,
    QMetaType::Void, QMetaType::QString,   20,
    QMetaType::Void, 0x80000000 | 88,   89,
    QMetaType::Void, 0x80000000 | 23,   24,
    QMetaType::Void, 0x80000000 | 23,   24,
    QMetaType::Void, QMetaType::QString,   20,
    QMetaType::Void, QMetaType::QString,   20,
    QMetaType::Void, QMetaType::QString,   20,
    QMetaType::Void, QMetaType::QString,   20,
    QMetaType::Void, QMetaType::QString,   20,
    QMetaType::Void, QMetaType::QString,   20,
    QMetaType::Void, QMetaType::QString,   20,
    QMetaType::Void, 0x80000000 | 100,   41,

 // methods: parameters
    QMetaType::QString,

 // properties: name, type, flags, notifyId, revision
      28, 0x80000000 | 102, 0x0001510b, uint(1), 0,
      30, QMetaType::QString, 0x00015103, uint(0), 0,
     103, QMetaType::Bool, 0x00015001, uint(2), 0,
     104, QMetaType::Bool, 0x00015001, uint(3), 0,
     105, QMetaType::Bool, 0x00015001, uint(4), 0,
     106, QMetaType::Bool, 0x00015001, uint(5), 0,
     107, QMetaType::Bool, 0x00015001, uint(6), 0,
     108, QMetaType::Bool, 0x00015001, uint(7), 0,
     109, QMetaType::Bool, 0x00015001, uint(9), 0,
     110, QMetaType::Bool, 0x00015001, uint(10), 0,
     111, QMetaType::Bool, 0x00015001, uint(13), 0,
     112, 0x80000000 | 113, 0x00015009, uint(11), 0,

 // enums: name, alias, flags, count, data
     114,  114, 0x0,   24,  766,
     139,  139, 0x0,   10,  814,
     150,  150, 0x2,    6,  834,
     157,  157, 0x2,    3,  846,

 // enum data: key, value
     115, uint(OCC::ShareModel::ShareRole),
     116, uint(OCC::ShareModel::ShareTypeRole),
     117, uint(OCC::ShareModel::ShareIdRole),
     118, uint(OCC::ShareModel::IconUrlRole),
     119, uint(OCC::ShareModel::AvatarUrlRole),
     120, uint(OCC::ShareModel::LinkRole),
     121, uint(OCC::ShareModel::LinkShareNameRole),
     122, uint(OCC::ShareModel::LinkShareLabelRole),
     123, uint(OCC::ShareModel::NoteEnabledRole),
     124, uint(OCC::ShareModel::NoteRole),
     125, uint(OCC::ShareModel::ExpireDateEnabledRole),
     126, uint(OCC::ShareModel::ExpireDateEnforcedRole),
     127, uint(OCC::ShareModel::ExpireDateRole),
     128, uint(OCC::ShareModel::EnforcedMaximumExpireDateRole),
     129, uint(OCC::ShareModel::PasswordProtectEnabledRole),
     130, uint(OCC::ShareModel::PasswordRole),
     131, uint(OCC::ShareModel::PasswordEnforcedRole),
     132, uint(OCC::ShareModel::EditingAllowedRole),
     133, uint(OCC::ShareModel::CurrentPermissionModeRole),
     134, uint(OCC::ShareModel::SharedItemTypeRole),
     135, uint(OCC::ShareModel::IsSharePermissionsChangeInProgress),
     136, uint(OCC::ShareModel::HideDownloadEnabledRole),
     137, uint(OCC::ShareModel::IsHideDownloadEnabledChangeInProgress),
     138, uint(OCC::ShareModel::ResharingAllowedRole),
     140, uint(OCC::ShareModel::ShareTypeUser),
     141, uint(OCC::ShareModel::ShareTypeGroup),
     142, uint(OCC::ShareModel::ShareTypeLink),
     143, uint(OCC::ShareModel::ShareTypeEmail),
     144, uint(OCC::ShareModel::ShareTypeRemote),
     145, uint(OCC::ShareModel::ShareTypeCircle),
     146, uint(OCC::ShareModel::ShareTypeRoom),
     147, uint(OCC::ShareModel::ShareTypePlaceholderLink),
     148, uint(OCC::ShareModel::ShareTypeInternalLink),
     149, uint(OCC::ShareModel::ShareTypeSecureFileDropPlaceholderLink),
     151, uint(OCC::ShareModel::SharedItemType::SharedItemTypeUndefined),
     152, uint(OCC::ShareModel::SharedItemType::SharedItemTypeFile),
     153, uint(OCC::ShareModel::SharedItemType::SharedItemTypeFolder),
     154, uint(OCC::ShareModel::SharedItemType::SharedItemTypeEncryptedFile),
     155, uint(OCC::ShareModel::SharedItemType::SharedItemTypeEncryptedFolder),
     156, uint(OCC::ShareModel::SharedItemType::SharedItemTypeEncryptedTopLevelFolder),
     158, uint(OCC::ShareModel::SharePermissionsMode::ModeViewOnly),
     159, uint(OCC::ShareModel::SharePermissionsMode::ModeUploadAndEditing),
     160, uint(OCC::ShareModel::SharePermissionsMode::ModeFileDropOnly),

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::ShareModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPEShareModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPEShareModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPEShareModelENDCLASS_t,
        // property 'accountState'
        QtPrivate::TypeAndForceComplete<AccountState*, std::true_type>,
        // property 'localPath'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'accountConnected'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'sharingEnabled'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'publicLinkSharesEnabled'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'userGroupSharingEnabled'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'canShare'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'isShareDisabledEncryptedFolder'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'fetchOngoing'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'hasInitialShareFetchCompleted'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'serverAllowsResharing'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'sharees'
        QtPrivate::TypeAndForceComplete<QVariantList, std::true_type>,
        // enum 'Roles'
        QtPrivate::TypeAndForceComplete<ShareModel::Roles, std::true_type>,
        // enum 'ShareType'
        QtPrivate::TypeAndForceComplete<ShareModel::ShareType, std::true_type>,
        // enum 'SharedItemType'
        QtPrivate::TypeAndForceComplete<ShareModel::SharedItemType, std::true_type>,
        // enum 'SharePermissionsMode'
        QtPrivate::TypeAndForceComplete<ShareModel::SharePermissionsMode, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ShareModel, std::true_type>,
        // method 'localPathChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'accountStateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'accountConnectedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sharingEnabledChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'publicLinkSharesEnabledChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'userGroupSharingEnabledChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sharePermissionsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'isShareDisabledEncryptedFolderChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'lockExpireStringChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'fetchOngoingChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'hasInitialShareFetchCompletedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'shareesChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'internalLinkReady'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'serverAllowsResharingChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'serverError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'passwordSetError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'requestPasswordForLinkShare'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'requestPasswordForEmailSharee'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::ShareePtr &, std::false_type>,
        // method 'sharesChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setAccountState'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::AccountState *, std::false_type>,
        // method 'setLocalPath'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'createNewLinkShare'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'createNewLinkShareWithPassword'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'createNewUserGroupShare'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::ShareePtr &, std::false_type>,
        // method 'createNewUserGroupShareFromQml'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariant &, std::false_type>,
        // method 'createNewUserGroupShareWithPassword'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::ShareePtr &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'createNewUserGroupShareWithPasswordFromQml'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariant &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'deleteShare'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::SharePtr &, std::false_type>,
        // method 'deleteShareFromQml'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariant &, std::false_type>,
        // method 'toggleHideDownloadFromQml'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariant &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'toggleShareAllowEditing'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::SharePtr &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'toggleShareAllowEditingFromQml'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariant &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'toggleShareAllowResharing'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::SharePtr &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'toggleShareAllowResharingFromQml'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariant &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'toggleSharePasswordProtect'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::SharePtr &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'toggleSharePasswordProtectFromQml'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariant &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'toggleShareExpirationDate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::SharePtr &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'toggleShareExpirationDateFromQml'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariant &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'toggleShareNoteToRecipient'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::SharePtr &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'toggleShareNoteToRecipientFromQml'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariant &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'changePermissionModeFromQml'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariant &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::ShareModel::SharePermissionsMode, std::false_type>,
        // method 'setLinkShareLabel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QSharedPointer<OCC::LinkShare> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setLinkShareLabelFromQml'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariant &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setShareExpireDate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::SharePtr &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const qint64, std::false_type>,
        // method 'setShareExpireDateFromQml'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariant &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariant, std::false_type>,
        // method 'setSharePassword'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::SharePtr &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setSharePasswordFromQml'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariant &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setShareNote'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::SharePtr &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setShareNoteFromQml'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariant &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'resetData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'initShareManager'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handlePlaceholderLinkShare'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleSecureFileDropLinkShare'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'handleLinkShare'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setupInternalLinkShare'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setSharePermissionChangeInProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'setHideDownloadEnabledChangeInProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'slotPropfindReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariantMap &, std::false_type>,
        // method 'slotServerError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'slotAddShare'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::SharePtr &, std::false_type>,
        // method 'slotRemoveShareWithId'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'slotSharesFetched'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<OCC::SharePtr> &, std::false_type>,
        // method 'slotAddSharee'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::ShareePtr &, std::false_type>,
        // method 'slotRemoveSharee'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::ShareePtr &, std::false_type>,
        // method 'slotSharePermissionsSet'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'slotSharePasswordSet'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'slotShareNoteSet'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'slotHideDownloadSet'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'slotShareNameSet'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'slotShareLabelSet'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'slotShareExpireDateSet'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'slotDeleteE2EeShare'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const SharePtr &, std::false_type>,
        // method 'generatePassword'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>
    >,
    nullptr
} };

void OCC::ShareModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ShareModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->localPathChanged(); break;
        case 1: _t->accountStateChanged(); break;
        case 2: _t->accountConnectedChanged(); break;
        case 3: _t->sharingEnabledChanged(); break;
        case 4: _t->publicLinkSharesEnabledChanged(); break;
        case 5: _t->userGroupSharingEnabledChanged(); break;
        case 6: _t->sharePermissionsChanged(); break;
        case 7: _t->isShareDisabledEncryptedFolderChanged(); break;
        case 8: _t->lockExpireStringChanged(); break;
        case 9: _t->fetchOngoingChanged(); break;
        case 10: _t->hasInitialShareFetchCompletedChanged(); break;
        case 11: _t->shareesChanged(); break;
        case 12: _t->internalLinkReady(); break;
        case 13: _t->serverAllowsResharingChanged(); break;
        case 14: _t->serverError((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 15: _t->passwordSetError((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 16: _t->requestPasswordForLinkShare(); break;
        case 17: _t->requestPasswordForEmailSharee((*reinterpret_cast< std::add_pointer_t<OCC::ShareePtr>>(_a[1]))); break;
        case 18: _t->sharesChanged(); break;
        case 19: _t->setAccountState((*reinterpret_cast< std::add_pointer_t<OCC::AccountState*>>(_a[1]))); break;
        case 20: _t->setLocalPath((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 21: _t->createNewLinkShare(); break;
        case 22: _t->createNewLinkShareWithPassword((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 23: _t->createNewUserGroupShare((*reinterpret_cast< std::add_pointer_t<OCC::ShareePtr>>(_a[1]))); break;
        case 24: _t->createNewUserGroupShareFromQml((*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[1]))); break;
        case 25: _t->createNewUserGroupShareWithPassword((*reinterpret_cast< std::add_pointer_t<OCC::ShareePtr>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 26: _t->createNewUserGroupShareWithPasswordFromQml((*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 27: _t->deleteShare((*reinterpret_cast< std::add_pointer_t<OCC::SharePtr>>(_a[1]))); break;
        case 28: _t->deleteShareFromQml((*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[1]))); break;
        case 29: _t->toggleHideDownloadFromQml((*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 30: _t->toggleShareAllowEditing((*reinterpret_cast< std::add_pointer_t<OCC::SharePtr>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 31: _t->toggleShareAllowEditingFromQml((*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 32: _t->toggleShareAllowResharing((*reinterpret_cast< std::add_pointer_t<OCC::SharePtr>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 33: _t->toggleShareAllowResharingFromQml((*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 34: _t->toggleSharePasswordProtect((*reinterpret_cast< std::add_pointer_t<OCC::SharePtr>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 35: _t->toggleSharePasswordProtectFromQml((*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 36: _t->toggleShareExpirationDate((*reinterpret_cast< std::add_pointer_t<OCC::SharePtr>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 37: _t->toggleShareExpirationDateFromQml((*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 38: _t->toggleShareNoteToRecipient((*reinterpret_cast< std::add_pointer_t<OCC::SharePtr>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 39: _t->toggleShareNoteToRecipientFromQml((*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 40: _t->changePermissionModeFromQml((*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<OCC::ShareModel::SharePermissionsMode>>(_a[2]))); break;
        case 41: _t->setLinkShareLabel((*reinterpret_cast< std::add_pointer_t<QSharedPointer<OCC::LinkShare>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 42: _t->setLinkShareLabelFromQml((*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 43: _t->setShareExpireDate((*reinterpret_cast< std::add_pointer_t<OCC::SharePtr>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<qint64>>(_a[2]))); break;
        case 44: _t->setShareExpireDateFromQml((*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[2]))); break;
        case 45: _t->setSharePassword((*reinterpret_cast< std::add_pointer_t<OCC::SharePtr>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 46: _t->setSharePasswordFromQml((*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 47: _t->setShareNote((*reinterpret_cast< std::add_pointer_t<OCC::SharePtr>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 48: _t->setShareNoteFromQml((*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 49: _t->resetData(); break;
        case 50: _t->updateData(); break;
        case 51: _t->initShareManager(); break;
        case 52: _t->handlePlaceholderLinkShare(); break;
        case 53: _t->handleSecureFileDropLinkShare(); break;
        case 54: _t->handleLinkShare(); break;
        case 55: _t->setupInternalLinkShare(); break;
        case 56: _t->setSharePermissionChangeInProgress((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 57: _t->setHideDownloadEnabledChangeInProgress((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 58: _t->slotPropfindReceived((*reinterpret_cast< std::add_pointer_t<QVariantMap>>(_a[1]))); break;
        case 59: _t->slotServerError((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 60: _t->slotAddShare((*reinterpret_cast< std::add_pointer_t<OCC::SharePtr>>(_a[1]))); break;
        case 61: _t->slotRemoveShareWithId((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 62: _t->slotSharesFetched((*reinterpret_cast< std::add_pointer_t<QList<OCC::SharePtr>>>(_a[1]))); break;
        case 63: _t->slotAddSharee((*reinterpret_cast< std::add_pointer_t<OCC::ShareePtr>>(_a[1]))); break;
        case 64: _t->slotRemoveSharee((*reinterpret_cast< std::add_pointer_t<OCC::ShareePtr>>(_a[1]))); break;
        case 65: _t->slotSharePermissionsSet((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 66: _t->slotSharePasswordSet((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 67: _t->slotShareNoteSet((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 68: _t->slotHideDownloadSet((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 69: _t->slotShareNameSet((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 70: _t->slotShareLabelSet((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 71: _t->slotShareExpireDateSet((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 72: _t->slotDeleteE2EeShare((*reinterpret_cast< std::add_pointer_t<SharePtr>>(_a[1]))); break;
        case 73: { QString _r = _t->generatePassword();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::ShareePtr >(); break;
            }
            break;
        case 19:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::AccountState* >(); break;
            }
            break;
        case 23:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::ShareePtr >(); break;
            }
            break;
        case 25:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::ShareePtr >(); break;
            }
            break;
        case 27:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::SharePtr >(); break;
            }
            break;
        case 30:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::SharePtr >(); break;
            }
            break;
        case 32:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::SharePtr >(); break;
            }
            break;
        case 34:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::SharePtr >(); break;
            }
            break;
        case 36:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::SharePtr >(); break;
            }
            break;
        case 38:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::SharePtr >(); break;
            }
            break;
        case 41:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QSharedPointer<OCC::LinkShare> >(); break;
            }
            break;
        case 43:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::SharePtr >(); break;
            }
            break;
        case 45:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::SharePtr >(); break;
            }
            break;
        case 47:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::SharePtr >(); break;
            }
            break;
        case 60:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::SharePtr >(); break;
            }
            break;
        case 62:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<OCC::SharePtr> >(); break;
            }
            break;
        case 63:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::ShareePtr >(); break;
            }
            break;
        case 64:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::ShareePtr >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ShareModel::*)();
            if (_t _q_method = &ShareModel::localPathChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ShareModel::*)();
            if (_t _q_method = &ShareModel::accountStateChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ShareModel::*)();
            if (_t _q_method = &ShareModel::accountConnectedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ShareModel::*)();
            if (_t _q_method = &ShareModel::sharingEnabledChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ShareModel::*)();
            if (_t _q_method = &ShareModel::publicLinkSharesEnabledChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ShareModel::*)();
            if (_t _q_method = &ShareModel::userGroupSharingEnabledChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ShareModel::*)();
            if (_t _q_method = &ShareModel::sharePermissionsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (ShareModel::*)();
            if (_t _q_method = &ShareModel::isShareDisabledEncryptedFolderChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (ShareModel::*)();
            if (_t _q_method = &ShareModel::lockExpireStringChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (ShareModel::*)();
            if (_t _q_method = &ShareModel::fetchOngoingChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (ShareModel::*)();
            if (_t _q_method = &ShareModel::hasInitialShareFetchCompletedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (ShareModel::*)();
            if (_t _q_method = &ShareModel::shareesChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (ShareModel::*)();
            if (_t _q_method = &ShareModel::internalLinkReady; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (ShareModel::*)();
            if (_t _q_method = &ShareModel::serverAllowsResharingChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (ShareModel::*)(const int , const QString & ) const;
            if (_t _q_method = &ShareModel::serverError; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (ShareModel::*)(const QString & , const int , const QString & );
            if (_t _q_method = &ShareModel::passwordSetError; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (ShareModel::*)();
            if (_t _q_method = &ShareModel::requestPasswordForLinkShare; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (ShareModel::*)(const OCC::ShareePtr & );
            if (_t _q_method = &ShareModel::requestPasswordForEmailSharee; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (ShareModel::*)();
            if (_t _q_method = &ShareModel::sharesChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 18;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AccountState* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ShareModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< AccountState**>(_v) = _t->accountState(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->localPath(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->accountConnected(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->sharingEnabled(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->publicLinkSharesEnabled(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->userGroupSharingEnabled(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->canShare(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->isShareDisabledEncryptedFolder(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->fetchOngoing(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->hasInitialShareFetchCompleted(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->serverAllowsResharing(); break;
        case 11: *reinterpret_cast< QVariantList*>(_v) = _t->sharees(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ShareModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAccountState(*reinterpret_cast< AccountState**>(_v)); break;
        case 1: _t->setLocalPath(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *OCC::ShareModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::ShareModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPEShareModelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int OCC::ShareModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 74)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 74;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 74)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 74;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void OCC::ShareModel::localPathChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void OCC::ShareModel::accountStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void OCC::ShareModel::accountConnectedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void OCC::ShareModel::sharingEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void OCC::ShareModel::publicLinkSharesEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void OCC::ShareModel::userGroupSharingEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void OCC::ShareModel::sharePermissionsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void OCC::ShareModel::isShareDisabledEncryptedFolderChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void OCC::ShareModel::lockExpireStringChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void OCC::ShareModel::fetchOngoingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void OCC::ShareModel::hasInitialShareFetchCompletedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void OCC::ShareModel::shareesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}

// SIGNAL 12
void OCC::ShareModel::internalLinkReady()
{
    QMetaObject::activate(this, &staticMetaObject, 12, nullptr);
}

// SIGNAL 13
void OCC::ShareModel::serverAllowsResharingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 13, nullptr);
}

// SIGNAL 14
void OCC::ShareModel::serverError(const int _t1, const QString & _t2)const
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(const_cast< OCC::ShareModel *>(this), &staticMetaObject, 14, _a);
}

// SIGNAL 15
void OCC::ShareModel::passwordSetError(const QString & _t1, const int _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 15, _a);
}

// SIGNAL 16
void OCC::ShareModel::requestPasswordForLinkShare()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void OCC::ShareModel::requestPasswordForEmailSharee(const OCC::ShareePtr & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 17, _a);
}

// SIGNAL 18
void OCC::ShareModel::sharesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 18, nullptr);
}
QT_WARNING_POP
