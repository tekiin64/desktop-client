/****************************************************************************
** Meta object code from reading C++ file 'usermodel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/gui/tray/usermodel.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'usermodel.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSOCCSCOPETrayFolderInfoENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPETrayFolderInfoENDCLASS = QtMocHelpers::stringData(
    "OCC::TrayFolderInfo",
    "name",
    "parentPath",
    "fullPath",
    "isGroupFolder"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPETrayFolderInfoENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       4,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // properties: name, type, flags, notifyId, revision
       1, QMetaType::QString, 0x00015003, uint(-1), 0,
       2, QMetaType::QString, 0x00015003, uint(-1), 0,
       3, QMetaType::QString, 0x00015003, uint(-1), 0,
       4, QMetaType::Bool, 0x00015401, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::TrayFolderInfo::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSOCCSCOPETrayFolderInfoENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPETrayFolderInfoENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPETrayFolderInfoENDCLASS_t,
        // property 'name'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'parentPath'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'fullPath'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'isGroupFolder'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TrayFolderInfo, std::true_type>
    >,
    nullptr
} };

void OCC::TrayFolderInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<TrayFolderInfo *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->_name; break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->_parentPath; break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->_fullPath; break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->isGroupFolder(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<TrayFolderInfo *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->_name != *reinterpret_cast< QString*>(_v)) {
                _t->_name = *reinterpret_cast< QString*>(_v);
            }
            break;
        case 1:
            if (_t->_parentPath != *reinterpret_cast< QString*>(_v)) {
                _t->_parentPath = *reinterpret_cast< QString*>(_v);
            }
            break;
        case 2:
            if (_t->_fullPath != *reinterpret_cast< QString*>(_v)) {
                _t->_fullPath = *reinterpret_cast< QString*>(_v);
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSOCCSCOPEUserENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPEUserENDCLASS = QtMocHelpers::stringData(
    "OCC::User",
    "nameChanged",
    "",
    "hasLocalFolderChanged",
    "featuredAppChanged",
    "avatarChanged",
    "accountStateChanged",
    "statusChanged",
    "desktopNotificationsAllowedChanged",
    "headerColorChanged",
    "headerTextColorChanged",
    "accentColorChanged",
    "sendReplyMessage",
    "activityIndex",
    "conversationToken",
    "message",
    "replyTo",
    "groupFoldersChanged",
    "slotItemCompleted",
    "folder",
    "OCC::SyncFileItemPtr",
    "item",
    "slotProgressInfo",
    "OCC::ProgressInfo",
    "progress",
    "slotAddError",
    "folderAlias",
    "OCC::ErrorCategory",
    "category",
    "slotAddErrorToGui",
    "OCC::SyncFileItem::Status",
    "status",
    "errorMessage",
    "subject",
    "slotAddNotification",
    "const OCC::Folder*",
    "OCC::Activity",
    "activity",
    "slotNotificationRequestFinished",
    "statusCode",
    "slotNotifyNetworkError",
    "QNetworkReply*",
    "reply",
    "slotEndNotificationRequest",
    "replyCode",
    "slotNotifyServerFinished",
    "slotSendNotificationRequest",
    "accountName",
    "link",
    "verb",
    "row",
    "slotBuildNotificationDisplay",
    "OCC::ActivityList",
    "list",
    "slotNotificationFetchFinished",
    "slotBuildIncomingCallDialogs",
    "slotRefreshNotifications",
    "slotRefreshActivitiesInitial",
    "slotRefreshActivities",
    "slotRefresh",
    "slotRefreshUserStatus",
    "slotRefreshImmediately",
    "setNotificationRefreshInterval",
    "std::chrono::milliseconds",
    "interval",
    "slotRebuildNavigationAppList",
    "slotSendReplyMessage",
    "forceSyncNow",
    "slotAccountCapabilitiesChangedRefreshGroupFolders",
    "slotFetchGroupFolders",
    "slotPushNotificationsReady",
    "slotDisconnectPushNotifications",
    "slotReceivedPushNotification",
    "OCC::Account*",
    "account",
    "slotReceivedPushActivity",
    "slotCheckExpiredActivities",
    "slotGroupFoldersFetched",
    "checkNotifiedNotifications",
    "showDesktopNotification",
    "title",
    "notificationId",
    "activityList",
    "showDesktopTalkNotification",
    "name",
    "server",
    "headerColor",
    "headerTextColor",
    "accentColor",
    "serverHasUserStatus",
    "statusIcon",
    "statusEmoji",
    "statusMessage",
    "desktopNotificationsAllowed",
    "hasLocalFolder",
    "isFeaturedAppEnabled",
    "featuredAppIcon",
    "featuredAppAccessibleName",
    "avatar",
    "isConnected",
    "unifiedSearchResultsListModel",
    "UnifiedSearchResultsListModel*",
    "groupFolders",
    "QVariantList"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPEUserENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      48,   14, // methods
      18,  436, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      12,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  302,    2, 0x06,   19 /* Public */,
       3,    0,  303,    2, 0x06,   20 /* Public */,
       4,    0,  304,    2, 0x06,   21 /* Public */,
       5,    0,  305,    2, 0x06,   22 /* Public */,
       6,    0,  306,    2, 0x06,   23 /* Public */,
       7,    0,  307,    2, 0x06,   24 /* Public */,
       8,    0,  308,    2, 0x06,   25 /* Public */,
       9,    0,  309,    2, 0x06,   26 /* Public */,
      10,    0,  310,    2, 0x06,   27 /* Public */,
      11,    0,  311,    2, 0x06,   28 /* Public */,
      12,    4,  312,    2, 0x06,   29 /* Public */,
      17,    0,  321,    2, 0x06,   34 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      18,    2,  322,    2, 0x0a,   35 /* Public */,
      22,    2,  327,    2, 0x0a,   38 /* Public */,
      25,    3,  332,    2, 0x0a,   41 /* Public */,
      29,    5,  339,    2, 0x0a,   45 /* Public */,
      34,    2,  350,    2, 0x0a,   51 /* Public */,
      38,    1,  355,    2, 0x0a,   54 /* Public */,
      40,    1,  358,    2, 0x0a,   56 /* Public */,
      43,    1,  361,    2, 0x0a,   58 /* Public */,
      45,    2,  364,    2, 0x0a,   60 /* Public */,
      46,    4,  369,    2, 0x0a,   63 /* Public */,
      51,    1,  378,    2, 0x0a,   68 /* Public */,
      54,    0,  381,    2, 0x0a,   70 /* Public */,
      55,    1,  382,    2, 0x0a,   71 /* Public */,
      56,    0,  385,    2, 0x0a,   73 /* Public */,
      57,    0,  386,    2, 0x0a,   74 /* Public */,
      58,    0,  387,    2, 0x0a,   75 /* Public */,
      59,    0,  388,    2, 0x0a,   76 /* Public */,
      60,    0,  389,    2, 0x0a,   77 /* Public */,
      61,    0,  390,    2, 0x0a,   78 /* Public */,
      62,    1,  391,    2, 0x0a,   79 /* Public */,
      65,    0,  394,    2, 0x0a,   81 /* Public */,
      66,    4,  395,    2, 0x0a,   82 /* Public */,
      67,    0,  404,    2, 0x10a,   87 /* Public | MethodIsConst  */,
      68,    0,  405,    2, 0x0a,   88 /* Public */,
      69,    0,  406,    2, 0x0a,   89 /* Public */,
      70,    0,  407,    2, 0x08,   90 /* Private */,
      71,    0,  408,    2, 0x08,   91 /* Private */,
      72,    1,  409,    2, 0x08,   92 /* Private */,
      75,    1,  412,    2, 0x08,   94 /* Private */,
      76,    0,  415,    2, 0x08,   96 /* Private */,
      77,    1,  416,    2, 0x08,   97 /* Private */,
      78,    0,  419,    2, 0x08,   99 /* Private */,
      79,    3,  420,    2, 0x08,  100 /* Private */,
      79,    1,  427,    2, 0x08,  104 /* Private */,
      79,    1,  430,    2, 0x08,  106 /* Private */,
      83,    1,  433,    2, 0x08,  108 /* Private */,

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
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::QString,   13,   14,   15,   16,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 20,   19,   21,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 23,   19,   24,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 27,   26,   15,   28,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 30, QMetaType::QString, QMetaType::QString, 0x80000000 | 27,   26,   31,   32,   33,   28,
    QMetaType::Void, 0x80000000 | 35, 0x80000000 | 36,   19,   37,
    QMetaType::Void, QMetaType::Int,   39,
    QMetaType::Void, 0x80000000 | 41,   42,
    QMetaType::Void, QMetaType::Int,   44,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,   42,   44,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QByteArray, QMetaType::Int,   47,   48,   49,   50,
    QMetaType::Void, 0x80000000 | 52,   53,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 52,   53,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 63,   64,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString, QMetaType::QString, QMetaType::QString,   13,   14,   15,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 73,   74,
    QMetaType::Void, 0x80000000 | 73,   74,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 41,   42,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Long,   80,   15,   81,
    QMetaType::Void, 0x80000000 | 36,   37,
    QMetaType::Void, 0x80000000 | 52,   82,
    QMetaType::Void, 0x80000000 | 36,   37,

 // properties: name, type, flags, notifyId, revision
      84, QMetaType::QString, 0x00015001, uint(0), 0,
      85, QMetaType::QString, 0x00015401, uint(-1), 0,
      86, QMetaType::QColor, 0x00015001, uint(7), 0,
      87, QMetaType::QColor, 0x00015001, uint(8), 0,
      88, QMetaType::QColor, 0x00015001, uint(9), 0,
      89, QMetaType::Bool, 0x00015401, uint(-1), 0,
      90, QMetaType::QUrl, 0x00015001, uint(5), 0,
      91, QMetaType::QString, 0x00015001, uint(5), 0,
      92, QMetaType::QString, 0x00015001, uint(5), 0,
      93, QMetaType::Bool, 0x00015001, uint(6), 0,
      94, QMetaType::Bool, 0x00015001, uint(1), 0,
      95, QMetaType::Bool, 0x00015001, uint(2), 0,
      96, QMetaType::QString, 0x00015001, uint(2), 0,
      97, QMetaType::QString, 0x00015001, uint(2), 0,
      98, QMetaType::QString, 0x00015001, uint(3), 0,
      99, QMetaType::Bool, 0x00015001, uint(4), 0,
     100, 0x80000000 | 101, 0x00015409, uint(-1), 0,
     102, 0x80000000 | 103, 0x00015009, uint(11), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::User::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPEUserENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPEUserENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPEUserENDCLASS_t,
        // property 'name'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'server'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'headerColor'
        QtPrivate::TypeAndForceComplete<QColor, std::true_type>,
        // property 'headerTextColor'
        QtPrivate::TypeAndForceComplete<QColor, std::true_type>,
        // property 'accentColor'
        QtPrivate::TypeAndForceComplete<QColor, std::true_type>,
        // property 'serverHasUserStatus'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'statusIcon'
        QtPrivate::TypeAndForceComplete<QUrl, std::true_type>,
        // property 'statusEmoji'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'statusMessage'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'desktopNotificationsAllowed'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'hasLocalFolder'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'isFeaturedAppEnabled'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'featuredAppIcon'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'featuredAppAccessibleName'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'avatar'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'isConnected'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'unifiedSearchResultsListModel'
        QtPrivate::TypeAndForceComplete<UnifiedSearchResultsListModel*, std::true_type>,
        // property 'groupFolders'
        QtPrivate::TypeAndForceComplete<QVariantList, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<User, std::true_type>,
        // method 'nameChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'hasLocalFolderChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'featuredAppChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'avatarChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'accountStateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'statusChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'desktopNotificationsAllowedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'headerColorChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'headerTextColorChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'accentColorChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sendReplyMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'groupFoldersChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotItemCompleted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::SyncFileItemPtr &, std::false_type>,
        // method 'slotProgressInfo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::ProgressInfo &, std::false_type>,
        // method 'slotAddError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::ErrorCategory, std::false_type>,
        // method 'slotAddErrorToGui'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::SyncFileItem::Status, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::ErrorCategory, std::false_type>,
        // method 'slotAddNotification'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::Folder *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::Activity &, std::false_type>,
        // method 'slotNotificationRequestFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'slotNotifyNetworkError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>,
        // method 'slotEndNotificationRequest'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'slotNotifyServerFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'slotSendNotificationRequest'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'slotBuildNotificationDisplay'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::ActivityList &, std::false_type>,
        // method 'slotNotificationFetchFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotBuildIncomingCallDialogs'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::ActivityList &, std::false_type>,
        // method 'slotRefreshNotifications'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotRefreshActivitiesInitial'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotRefreshActivities'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotRefresh'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotRefreshUserStatus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotRefreshImmediately'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setNotificationRefreshInterval'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::chrono::milliseconds, std::false_type>,
        // method 'slotRebuildNavigationAppList'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotSendReplyMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'forceSyncNow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotAccountCapabilitiesChangedRefreshGroupFolders'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotFetchGroupFolders'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotPushNotificationsReady'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotDisconnectPushNotifications'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotReceivedPushNotification'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::Account *, std::false_type>,
        // method 'slotReceivedPushActivity'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::Account *, std::false_type>,
        // method 'slotCheckExpiredActivities'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotGroupFoldersFetched'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>,
        // method 'checkNotifiedNotifications'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showDesktopNotification'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const long, std::false_type>,
        // method 'showDesktopNotification'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::Activity &, std::false_type>,
        // method 'showDesktopNotification'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::ActivityList &, std::false_type>,
        // method 'showDesktopTalkNotification'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::Activity &, std::false_type>
    >,
    nullptr
} };

void OCC::User::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<User *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->nameChanged(); break;
        case 1: _t->hasLocalFolderChanged(); break;
        case 2: _t->featuredAppChanged(); break;
        case 3: _t->avatarChanged(); break;
        case 4: _t->accountStateChanged(); break;
        case 5: _t->statusChanged(); break;
        case 6: _t->desktopNotificationsAllowedChanged(); break;
        case 7: _t->headerColorChanged(); break;
        case 8: _t->headerTextColorChanged(); break;
        case 9: _t->accentColorChanged(); break;
        case 10: _t->sendReplyMessage((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4]))); break;
        case 11: _t->groupFoldersChanged(); break;
        case 12: _t->slotItemCompleted((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<OCC::SyncFileItemPtr>>(_a[2]))); break;
        case 13: _t->slotProgressInfo((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<OCC::ProgressInfo>>(_a[2]))); break;
        case 14: _t->slotAddError((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<OCC::ErrorCategory>>(_a[3]))); break;
        case 15: _t->slotAddErrorToGui((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<OCC::SyncFileItem::Status>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<OCC::ErrorCategory>>(_a[5]))); break;
        case 16: _t->slotAddNotification((*reinterpret_cast< std::add_pointer_t<const OCC::Folder*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<OCC::Activity>>(_a[2]))); break;
        case 17: _t->slotNotificationRequestFinished((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 18: _t->slotNotifyNetworkError((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1]))); break;
        case 19: _t->slotEndNotificationRequest((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 20: _t->slotNotifyServerFinished((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 21: _t->slotSendNotificationRequest((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        case 22: _t->slotBuildNotificationDisplay((*reinterpret_cast< std::add_pointer_t<OCC::ActivityList>>(_a[1]))); break;
        case 23: _t->slotNotificationFetchFinished(); break;
        case 24: _t->slotBuildIncomingCallDialogs((*reinterpret_cast< std::add_pointer_t<OCC::ActivityList>>(_a[1]))); break;
        case 25: _t->slotRefreshNotifications(); break;
        case 26: _t->slotRefreshActivitiesInitial(); break;
        case 27: _t->slotRefreshActivities(); break;
        case 28: _t->slotRefresh(); break;
        case 29: _t->slotRefreshUserStatus(); break;
        case 30: _t->slotRefreshImmediately(); break;
        case 31: _t->setNotificationRefreshInterval((*reinterpret_cast< std::add_pointer_t<std::chrono::milliseconds>>(_a[1]))); break;
        case 32: _t->slotRebuildNavigationAppList(); break;
        case 33: _t->slotSendReplyMessage((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4]))); break;
        case 34: _t->forceSyncNow(); break;
        case 35: _t->slotAccountCapabilitiesChangedRefreshGroupFolders(); break;
        case 36: _t->slotFetchGroupFolders(); break;
        case 37: _t->slotPushNotificationsReady(); break;
        case 38: _t->slotDisconnectPushNotifications(); break;
        case 39: _t->slotReceivedPushNotification((*reinterpret_cast< std::add_pointer_t<OCC::Account*>>(_a[1]))); break;
        case 40: _t->slotReceivedPushActivity((*reinterpret_cast< std::add_pointer_t<OCC::Account*>>(_a[1]))); break;
        case 41: _t->slotCheckExpiredActivities(); break;
        case 42: _t->slotGroupFoldersFetched((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1]))); break;
        case 43: _t->checkNotifiedNotifications(); break;
        case 44: _t->showDesktopNotification((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<long>>(_a[3]))); break;
        case 45: _t->showDesktopNotification((*reinterpret_cast< std::add_pointer_t<OCC::Activity>>(_a[1]))); break;
        case 46: _t->showDesktopNotification((*reinterpret_cast< std::add_pointer_t<OCC::ActivityList>>(_a[1]))); break;
        case 47: _t->showDesktopTalkNotification((*reinterpret_cast< std::add_pointer_t<OCC::Activity>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::SyncFileItemPtr >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::Activity >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkReply* >(); break;
            }
            break;
        case 22:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::ActivityList >(); break;
            }
            break;
        case 24:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::ActivityList >(); break;
            }
            break;
        case 39:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::Account* >(); break;
            }
            break;
        case 40:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::Account* >(); break;
            }
            break;
        case 42:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkReply* >(); break;
            }
            break;
        case 45:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::Activity >(); break;
            }
            break;
        case 46:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::ActivityList >(); break;
            }
            break;
        case 47:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::Activity >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (User::*)();
            if (_t _q_method = &User::nameChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (User::*)();
            if (_t _q_method = &User::hasLocalFolderChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (User::*)();
            if (_t _q_method = &User::featuredAppChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (User::*)();
            if (_t _q_method = &User::avatarChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (User::*)();
            if (_t _q_method = &User::accountStateChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (User::*)();
            if (_t _q_method = &User::statusChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (User::*)();
            if (_t _q_method = &User::desktopNotificationsAllowedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (User::*)();
            if (_t _q_method = &User::headerColorChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (User::*)();
            if (_t _q_method = &User::headerTextColorChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (User::*)();
            if (_t _q_method = &User::accentColorChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (User::*)(const int , const QString & , const QString & , const QString & );
            if (_t _q_method = &User::sendReplyMessage; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (User::*)();
            if (_t _q_method = &User::groupFoldersChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<User *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->server(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = _t->headerColor(); break;
        case 3: *reinterpret_cast< QColor*>(_v) = _t->headerTextColor(); break;
        case 4: *reinterpret_cast< QColor*>(_v) = _t->accentColor(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->serverHasUserStatus(); break;
        case 6: *reinterpret_cast< QUrl*>(_v) = _t->statusIcon(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->statusEmoji(); break;
        case 8: *reinterpret_cast< QString*>(_v) = _t->statusMessage(); break;
        case 9: *reinterpret_cast< bool*>(_v) = _t->isDesktopNotificationsAllowed(); break;
        case 10: *reinterpret_cast< bool*>(_v) = _t->hasLocalFolder(); break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->isFeaturedAppEnabled(); break;
        case 12: *reinterpret_cast< QString*>(_v) = _t->featuredAppIcon(); break;
        case 13: *reinterpret_cast< QString*>(_v) = _t->featuredAppAccessibleName(); break;
        case 14: *reinterpret_cast< QString*>(_v) = _t->avatarUrl(); break;
        case 15: *reinterpret_cast< bool*>(_v) = _t->isConnected(); break;
        case 16: *reinterpret_cast< UnifiedSearchResultsListModel**>(_v) = _t->getUnifiedSearchResultsListModel(); break;
        case 17: *reinterpret_cast< QVariantList*>(_v) = _t->groupFolders(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *OCC::User::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::User::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPEUserENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OCC::User::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 48)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 48;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 48)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 48;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void OCC::User::nameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void OCC::User::hasLocalFolderChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void OCC::User::featuredAppChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void OCC::User::avatarChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void OCC::User::accountStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void OCC::User::statusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void OCC::User::desktopNotificationsAllowedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void OCC::User::headerColorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void OCC::User::headerTextColorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void OCC::User::accentColorChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void OCC::User::sendReplyMessage(const int _t1, const QString & _t2, const QString & _t3, const QString & _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void OCC::User::groupFoldersChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 11, nullptr);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSOCCSCOPEUserModelENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPEUserModelENDCLASS = QtMocHelpers::stringData(
    "OCC::UserModel",
    "addAccount",
    "",
    "currentUserChanged",
    "fetchCurrentActivityModel",
    "openCurrentAccountLocalFolder",
    "openCurrentAccountServer",
    "openCurrentAccountFolderFromTrayInfo",
    "fullRemotePath",
    "openCurrentAccountFeaturedApp",
    "setCurrentUserId",
    "id",
    "login",
    "logout",
    "removeAccount",
    "numUsers",
    "currentUserServer",
    "isUserConnected",
    "userStatusConnector",
    "std::shared_ptr<OCC::UserStatusConnector>",
    "currentUser",
    "User*",
    "currentUserId"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPEUserModelENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       2,  133, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  104,    2, 0x06,    3 /* Public */,
       3,    0,  105,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,  106,    2, 0x0a,    5 /* Public */,
       5,    0,  107,    2, 0x0a,    6 /* Public */,
       6,    0,  108,    2, 0x0a,    7 /* Public */,
       7,    1,  109,    2, 0x0a,    8 /* Public */,
       9,    0,  112,    2, 0x0a,   10 /* Public */,
      10,    1,  113,    2, 0x0a,   11 /* Public */,
      12,    1,  116,    2, 0x0a,   13 /* Public */,
      13,    1,  119,    2, 0x0a,   15 /* Public */,
      14,    1,  122,    2, 0x0a,   17 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      15,    0,  125,    2, 0x02,   19 /* Public */,
      16,    0,  126,    2, 0x02,   20 /* Public */,
      17,    1,  127,    2, 0x02,   21 /* Public */,
      18,    1,  130,    2, 0x02,   23 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,

 // methods: parameters
    QMetaType::Int,
    QMetaType::QString,
    QMetaType::Bool, QMetaType::Int,   11,
    0x80000000 | 19, QMetaType::Int,   11,

 // properties: name, type, flags, notifyId, revision
      20, 0x80000000 | 21, 0x00015009, uint(1), 0,
      22, QMetaType::Int, 0x00015103, uint(1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::UserModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPEUserModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPEUserModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPEUserModelENDCLASS_t,
        // property 'currentUser'
        QtPrivate::TypeAndForceComplete<User*, std::true_type>,
        // property 'currentUserId'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<UserModel, std::true_type>,
        // method 'addAccount'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'currentUserChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'fetchCurrentActivityModel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'openCurrentAccountLocalFolder'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'openCurrentAccountServer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'openCurrentAccountFolderFromTrayInfo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'openCurrentAccountFeaturedApp'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setCurrentUserId'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'login'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'logout'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'removeAccount'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'numUsers'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'currentUserServer'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'isUserConnected'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'userStatusConnector'
        QtPrivate::TypeAndForceComplete<std::shared_ptr<OCC::UserStatusConnector>, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void OCC::UserModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UserModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->addAccount(); break;
        case 1: _t->currentUserChanged(); break;
        case 2: _t->fetchCurrentActivityModel(); break;
        case 3: _t->openCurrentAccountLocalFolder(); break;
        case 4: _t->openCurrentAccountServer(); break;
        case 5: _t->openCurrentAccountFolderFromTrayInfo((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->openCurrentAccountFeaturedApp(); break;
        case 7: _t->setCurrentUserId((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->login((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 9: _t->logout((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 10: _t->removeAccount((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 11: { int _r = _t->numUsers();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 12: { QString _r = _t->currentUserServer();
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        case 13: { bool _r = _t->isUserConnected((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 14: { std::shared_ptr<OCC::UserStatusConnector> _r = _t->userStatusConnector((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])));
            if (_a[0]) *reinterpret_cast< std::shared_ptr<OCC::UserStatusConnector>*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (UserModel::*)();
            if (_t _q_method = &UserModel::addAccount; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (UserModel::*)();
            if (_t _q_method = &UserModel::currentUserChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< User* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<UserModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< User**>(_v) = _t->currentUser(); break;
        case 1: *reinterpret_cast< int*>(_v) = _t->currentUserId(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<UserModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setCurrentUserId(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *OCC::UserModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::UserModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPEUserModelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int OCC::UserModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 15;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void OCC::UserModel::addAccount()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void OCC::UserModel::currentUserChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSOCCSCOPEUserAppsModelENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPEUserAppsModelENDCLASS = QtMocHelpers::stringData(
    "OCC::UserAppsModel",
    "openAppUrl",
    "",
    "url"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPEUserAppsModelENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   20,    2, 0x0a,    1 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QUrl,    3,

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::UserAppsModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPEUserAppsModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPEUserAppsModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPEUserAppsModelENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<UserAppsModel, std::true_type>,
        // method 'openAppUrl'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>
    >,
    nullptr
} };

void OCC::UserAppsModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UserAppsModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->openAppUrl((*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *OCC::UserAppsModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::UserAppsModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPEUserAppsModelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int OCC::UserAppsModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
