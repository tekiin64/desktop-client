/****************************************************************************
** Meta object code from reading C++ file 'activitylistmodel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/gui/tray/activitylistmodel.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'activitylistmodel.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSOCCSCOPEActivityListModelENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPEActivityListModelENDCLASS = QtMocHelpers::stringData(
    "OCC::ActivityListModel",
    "accountStateChanged",
    "",
    "hasSyncConflictsChanged",
    "allConflictsChanged",
    "activityJobStatusCode",
    "statusCode",
    "sendNotificationRequest",
    "accountName",
    "link",
    "verb",
    "row",
    "interactiveActivityReceived",
    "fetchMore",
    "QModelIndex",
    "slotRefreshActivity",
    "slotRefreshActivityInitial",
    "slotRemoveAccount",
    "slotTriggerDefaultAction",
    "activityIndex",
    "slotTriggerAction",
    "actionIndex",
    "slotTriggerDismiss",
    "addNotificationToActivityList",
    "OCC::Activity",
    "activity",
    "addErrorToActivityList",
    "OCC::ActivityListModel::ErrorType",
    "type",
    "addIgnoredFileToList",
    "newActivity",
    "addSyncFileItemToActivityList",
    "removeActivityFromActivityList",
    "checkAndRemoveSeenActivities",
    "OCC::ActivityList",
    "newActivities",
    "setAccountState",
    "OCC::AccountState*",
    "state",
    "setReplyMessageSent",
    "message",
    "setCurrentItem",
    "currentItem",
    "activitiesReceived",
    "json",
    "setAndRefreshCurrentlyFetching",
    "value",
    "setDoneFetching",
    "setHideOldActivities",
    "setDisplayActions",
    "startFetchJob",
    "addEntriesToActivityList",
    "activityList",
    "accountStateHasChanged",
    "ingestActivities",
    "activities",
    "appendMoreActivitiesAvailableEntry",
    "insertOrRemoveDummyFetchingActivity",
    "triggerCaseClashAction",
    "maxActionButtons",
    "accountState",
    "AccountState*",
    "hasSyncConflicts",
    "allConflicts",
    "DataRole",
    "DarkIconRole",
    "LightIconRole",
    "AccountRole",
    "ObjectTypeRole",
    "ObjectIdRole",
    "ObjectNameRole",
    "ActionsLinksRole",
    "ActionsLinksContextMenuRole",
    "ActionsLinksForActionButtonsRole",
    "ActionTextRole",
    "ActionTextColorRole",
    "ActionRole",
    "MessageRole",
    "DisplayPathRole",
    "PathRole",
    "OpenablePathRole",
    "DisplayLocationRole",
    "LinkRole",
    "PointInTimeRole",
    "AccountConnectedRole",
    "DisplayActions",
    "ShowFileDetailsRole",
    "ShareableRole",
    "DismissableRole",
    "IsCurrentUserFileActivityRole",
    "ThumbnailRole",
    "TalkNotificationConversationTokenRole",
    "TalkNotificationMessageIdRole",
    "TalkNotificationMessageSentRole",
    "TalkNotificationUserAvatarRole",
    "ActivityIndexRole",
    "ActivityRole",
    "ErrorType",
    "SyncError",
    "NetworkError"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPEActivityListModelENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      35,   14, // methods
       4,  321, // properties
       2,  341, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  224,    2, 0x06,    7 /* Public */,
       3,    0,  225,    2, 0x06,    8 /* Public */,
       4,    0,  226,    2, 0x06,    9 /* Public */,
       5,    1,  227,    2, 0x06,   10 /* Public */,
       7,    4,  230,    2, 0x06,   12 /* Public */,
      12,    0,  239,    2, 0x06,   17 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      13,    1,  240,    2, 0x0a,   18 /* Public */,
      15,    0,  243,    2, 0x0a,   20 /* Public */,
      16,    0,  244,    2, 0x0a,   21 /* Public */,
      17,    0,  245,    2, 0x0a,   22 /* Public */,
      18,    1,  246,    2, 0x0a,   23 /* Public */,
      20,    2,  249,    2, 0x0a,   25 /* Public */,
      22,    1,  254,    2, 0x0a,   28 /* Public */,
      23,    1,  257,    2, 0x0a,   30 /* Public */,
      26,    2,  260,    2, 0x0a,   32 /* Public */,
      29,    1,  265,    2, 0x0a,   35 /* Public */,
      31,    1,  268,    2, 0x0a,   37 /* Public */,
      32,    1,  271,    2, 0x0a,   39 /* Public */,
      32,    1,  274,    2, 0x0a,   41 /* Public */,
      33,    1,  277,    2, 0x0a,   43 /* Public */,
      36,    1,  280,    2, 0x0a,   45 /* Public */,
      39,    2,  283,    2, 0x0a,   47 /* Public */,
      41,    1,  288,    2, 0x0a,   50 /* Public */,
      43,    2,  291,    2, 0x09,   52 /* Protected */,
      45,    1,  296,    2, 0x09,   55 /* Protected */,
      47,    1,  299,    2, 0x09,   57 /* Protected */,
      48,    1,  302,    2, 0x09,   59 /* Protected */,
      49,    1,  305,    2, 0x09,   61 /* Protected */,
      50,    0,  308,    2, 0x09,   63 /* Protected */,
      51,    1,  309,    2, 0x08,   64 /* Private */,
      53,    0,  312,    2, 0x08,   66 /* Private */,
      54,    1,  313,    2, 0x08,   67 /* Private */,
      56,    0,  316,    2, 0x08,   69 /* Private */,
      57,    0,  317,    2, 0x08,   70 /* Private */,
      58,    1,  318,    2, 0x08,   71 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QByteArray, QMetaType::Int,    8,    9,   10,   11,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 14,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   19,   21,
    QMetaType::Void, QMetaType::Int,   19,
    QMetaType::Void, 0x80000000 | 24,   25,
    QMetaType::Void, 0x80000000 | 24, 0x80000000 | 27,   25,   28,
    QMetaType::Void, 0x80000000 | 24,   30,
    QMetaType::Void, 0x80000000 | 24,   25,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, 0x80000000 | 24,   25,
    QMetaType::Void, 0x80000000 | 34,   35,
    QMetaType::Void, 0x80000000 | 37,   38,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   19,   40,
    QMetaType::Void, QMetaType::Int,   42,
    QMetaType::Void, QMetaType::QJsonDocument, QMetaType::Int,   44,    6,
    QMetaType::Void, QMetaType::Bool,   46,
    QMetaType::Void, QMetaType::Bool,   46,
    QMetaType::Void, QMetaType::Bool,   46,
    QMetaType::Void, QMetaType::Bool,   46,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 34,   52,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QJsonArray,   55,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 24,   25,

 // properties: name, type, flags, notifyId, revision
      59, QMetaType::UInt, 0x00015401, uint(-1), 0,
      60, 0x80000000 | 61, 0x0001510b, uint(0), 0,
      62, QMetaType::Bool, 0x00015001, uint(1), 0,
      63, 0x80000000 | 34, 0x00015009, uint(2), 0,

 // enums: name, alias, flags, count, data
      64,   64, 0x0,   32,  351,
      97,   97, 0x2,    2,  415,

 // enum data: key, value
      65, uint(OCC::ActivityListModel::DarkIconRole),
      66, uint(OCC::ActivityListModel::LightIconRole),
      67, uint(OCC::ActivityListModel::AccountRole),
      68, uint(OCC::ActivityListModel::ObjectTypeRole),
      69, uint(OCC::ActivityListModel::ObjectIdRole),
      70, uint(OCC::ActivityListModel::ObjectNameRole),
      71, uint(OCC::ActivityListModel::ActionsLinksRole),
      72, uint(OCC::ActivityListModel::ActionsLinksContextMenuRole),
      73, uint(OCC::ActivityListModel::ActionsLinksForActionButtonsRole),
      74, uint(OCC::ActivityListModel::ActionTextRole),
      75, uint(OCC::ActivityListModel::ActionTextColorRole),
      76, uint(OCC::ActivityListModel::ActionRole),
      77, uint(OCC::ActivityListModel::MessageRole),
      78, uint(OCC::ActivityListModel::DisplayPathRole),
      79, uint(OCC::ActivityListModel::PathRole),
      80, uint(OCC::ActivityListModel::OpenablePathRole),
      81, uint(OCC::ActivityListModel::DisplayLocationRole),
      82, uint(OCC::ActivityListModel::LinkRole),
      83, uint(OCC::ActivityListModel::PointInTimeRole),
      84, uint(OCC::ActivityListModel::AccountConnectedRole),
      85, uint(OCC::ActivityListModel::DisplayActions),
      86, uint(OCC::ActivityListModel::ShowFileDetailsRole),
      87, uint(OCC::ActivityListModel::ShareableRole),
      88, uint(OCC::ActivityListModel::DismissableRole),
      89, uint(OCC::ActivityListModel::IsCurrentUserFileActivityRole),
      90, uint(OCC::ActivityListModel::ThumbnailRole),
      91, uint(OCC::ActivityListModel::TalkNotificationConversationTokenRole),
      92, uint(OCC::ActivityListModel::TalkNotificationMessageIdRole),
      93, uint(OCC::ActivityListModel::TalkNotificationMessageSentRole),
      94, uint(OCC::ActivityListModel::TalkNotificationUserAvatarRole),
      95, uint(OCC::ActivityListModel::ActivityIndexRole),
      96, uint(OCC::ActivityListModel::ActivityRole),
      98, uint(OCC::ActivityListModel::ErrorType::SyncError),
      99, uint(OCC::ActivityListModel::ErrorType::NetworkError),

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::ActivityListModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPEActivityListModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPEActivityListModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPEActivityListModelENDCLASS_t,
        // property 'maxActionButtons'
        QtPrivate::TypeAndForceComplete<quint32, std::true_type>,
        // property 'accountState'
        QtPrivate::TypeAndForceComplete<AccountState*, std::true_type>,
        // property 'hasSyncConflicts'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'allConflicts'
        QtPrivate::TypeAndForceComplete<OCC::ActivityList, std::true_type>,
        // enum 'DataRole'
        QtPrivate::TypeAndForceComplete<ActivityListModel::DataRole, std::true_type>,
        // enum 'ErrorType'
        QtPrivate::TypeAndForceComplete<ActivityListModel::ErrorType, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ActivityListModel, std::true_type>,
        // method 'accountStateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'hasSyncConflictsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'allConflictsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'activityJobStatusCode'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'sendNotificationRequest'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'interactiveActivityReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'fetchMore'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'slotRefreshActivity'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotRefreshActivityInitial'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotRemoveAccount'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotTriggerDefaultAction'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'slotTriggerAction'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'slotTriggerDismiss'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'addNotificationToActivityList'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::Activity &, std::false_type>,
        // method 'addErrorToActivityList'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::Activity &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::ActivityListModel::ErrorType, std::false_type>,
        // method 'addIgnoredFileToList'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::Activity &, std::false_type>,
        // method 'addSyncFileItemToActivityList'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::Activity &, std::false_type>,
        // method 'removeActivityFromActivityList'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'removeActivityFromActivityList'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::Activity &, std::false_type>,
        // method 'checkAndRemoveSeenActivities'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::ActivityList &, std::false_type>,
        // method 'setAccountState'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::AccountState *, std::false_type>,
        // method 'setReplyMessageSent'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setCurrentItem'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'activitiesReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QJsonDocument &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setAndRefreshCurrentlyFetching'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setDoneFetching'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setHideOldActivities'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setDisplayActions'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'startFetchJob'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'addEntriesToActivityList'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::ActivityList &, std::false_type>,
        // method 'accountStateHasChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'ingestActivities'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QJsonArray &, std::false_type>,
        // method 'appendMoreActivitiesAvailableEntry'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'insertOrRemoveDummyFetchingActivity'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'triggerCaseClashAction'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::Activity, std::false_type>
    >,
    nullptr
} };

void OCC::ActivityListModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ActivityListModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->accountStateChanged(); break;
        case 1: _t->hasSyncConflictsChanged(); break;
        case 2: _t->allConflictsChanged(); break;
        case 3: _t->activityJobStatusCode((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->sendNotificationRequest((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[4]))); break;
        case 5: _t->interactiveActivityReceived(); break;
        case 6: _t->fetchMore((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 7: _t->slotRefreshActivity(); break;
        case 8: _t->slotRefreshActivityInitial(); break;
        case 9: _t->slotRemoveAccount(); break;
        case 10: _t->slotTriggerDefaultAction((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 11: _t->slotTriggerAction((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 12: _t->slotTriggerDismiss((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 13: _t->addNotificationToActivityList((*reinterpret_cast< std::add_pointer_t<OCC::Activity>>(_a[1]))); break;
        case 14: _t->addErrorToActivityList((*reinterpret_cast< std::add_pointer_t<OCC::Activity>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<OCC::ActivityListModel::ErrorType>>(_a[2]))); break;
        case 15: _t->addIgnoredFileToList((*reinterpret_cast< std::add_pointer_t<OCC::Activity>>(_a[1]))); break;
        case 16: _t->addSyncFileItemToActivityList((*reinterpret_cast< std::add_pointer_t<OCC::Activity>>(_a[1]))); break;
        case 17: _t->removeActivityFromActivityList((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 18: _t->removeActivityFromActivityList((*reinterpret_cast< std::add_pointer_t<OCC::Activity>>(_a[1]))); break;
        case 19: _t->checkAndRemoveSeenActivities((*reinterpret_cast< std::add_pointer_t<OCC::ActivityList>>(_a[1]))); break;
        case 20: _t->setAccountState((*reinterpret_cast< std::add_pointer_t<OCC::AccountState*>>(_a[1]))); break;
        case 21: _t->setReplyMessageSent((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 22: _t->setCurrentItem((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 23: _t->activitiesReceived((*reinterpret_cast< std::add_pointer_t<QJsonDocument>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 24: _t->setAndRefreshCurrentlyFetching((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 25: _t->setDoneFetching((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 26: _t->setHideOldActivities((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 27: _t->setDisplayActions((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 28: _t->startFetchJob(); break;
        case 29: _t->addEntriesToActivityList((*reinterpret_cast< std::add_pointer_t<OCC::ActivityList>>(_a[1]))); break;
        case 30: _t->accountStateHasChanged(); break;
        case 31: _t->ingestActivities((*reinterpret_cast< std::add_pointer_t<QJsonArray>>(_a[1]))); break;
        case 32: _t->appendMoreActivitiesAvailableEntry(); break;
        case 33: _t->insertOrRemoveDummyFetchingActivity(); break;
        case 34: _t->triggerCaseClashAction((*reinterpret_cast< std::add_pointer_t<OCC::Activity>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::Activity >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::Activity >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::Activity >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::Activity >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::Activity >(); break;
            }
            break;
        case 19:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::ActivityList >(); break;
            }
            break;
        case 29:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::ActivityList >(); break;
            }
            break;
        case 34:
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
            using _t = void (ActivityListModel::*)();
            if (_t _q_method = &ActivityListModel::accountStateChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ActivityListModel::*)();
            if (_t _q_method = &ActivityListModel::hasSyncConflictsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ActivityListModel::*)();
            if (_t _q_method = &ActivityListModel::allConflictsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ActivityListModel::*)(int );
            if (_t _q_method = &ActivityListModel::activityJobStatusCode; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ActivityListModel::*)(const QString & , const QString & , const QByteArray & , int );
            if (_t _q_method = &ActivityListModel::sendNotificationRequest; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ActivityListModel::*)();
            if (_t _q_method = &ActivityListModel::interactiveActivityReceived; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 3:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OCC::ActivityList >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ActivityListModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< quint32*>(_v) = _t->maxActionButtons(); break;
        case 1: *reinterpret_cast< AccountState**>(_v) = _t->accountState(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->hasSyncConflicts(); break;
        case 3: *reinterpret_cast< OCC::ActivityList*>(_v) = _t->allConflicts(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ActivityListModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 1: _t->setAccountState(*reinterpret_cast< AccountState**>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *OCC::ActivityListModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::ActivityListModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPEActivityListModelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int OCC::ActivityListModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 35)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 35;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 35)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 35;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}

// SIGNAL 0
void OCC::ActivityListModel::accountStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void OCC::ActivityListModel::hasSyncConflictsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void OCC::ActivityListModel::allConflictsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void OCC::ActivityListModel::activityJobStatusCode(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void OCC::ActivityListModel::sendNotificationRequest(const QString & _t1, const QString & _t2, const QByteArray & _t3, int _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void OCC::ActivityListModel::interactiveActivityReceived()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
