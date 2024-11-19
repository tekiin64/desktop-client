/****************************************************************************
** Meta object code from reading C++ file 'folderman.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/gui/folderman.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'folderman.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSOCCSCOPEFolderManENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPEFolderManENDCLASS = QtMocHelpers::stringData(
    "OCC::FolderMan",
    "folderSyncStateChange",
    "",
    "OCC::Folder*",
    "scheduleQueueChanged",
    "folderListChanged",
    "OCC::Folder::Map",
    "wipeDone",
    "OCC::AccountState*",
    "account",
    "success",
    "slotAccountStateChanged",
    "slotScheduleAppRestart",
    "slotSyncOnceFileUnlocks",
    "path",
    "slotScheduleETagJob",
    "alias",
    "OCC::RequestEtagJob*",
    "job",
    "slotWipeFolderForAccount",
    "accountState",
    "forceSyncForFolder",
    "folder",
    "removeE2eFiles",
    "OCC::AccountPtr",
    "slotFolderSyncPaused",
    "paused",
    "slotFolderCanSyncChanged",
    "slotFolderSyncStarted",
    "slotFolderSyncFinished",
    "OCC::SyncResult",
    "slotRunOneEtagJob",
    "slotEtagJobDestroyed",
    "slotStartScheduledFolderSync",
    "slotEtagPollTimerTimeout",
    "slotAccountRemoved",
    "slotRemoveFoldersForAccount",
    "slotForwardFolderSyncStateChange",
    "slotServerVersionChanged",
    "OCC::Account*",
    "slotWatchedFileUnlocked",
    "slotScheduleFolderByTime",
    "slotSetupPushNotifications",
    "slotProcessFilesPushNotification",
    "slotConnectToPushNotifications",
    "slotLeaveShare",
    "localFile",
    "folderToken"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPEFolderManENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      30,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  194,    2, 0x06,    1 /* Public */,
       4,    0,  197,    2, 0x06,    3 /* Public */,
       5,    1,  198,    2, 0x06,    4 /* Public */,
       7,    2,  201,    2, 0x06,    6 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      11,    0,  206,    2, 0x0a,    9 /* Public */,
      12,    0,  207,    2, 0x0a,   10 /* Public */,
      13,    1,  208,    2, 0x0a,   11 /* Public */,
      15,    2,  211,    2, 0x0a,   13 /* Public */,
      19,    1,  216,    2, 0x0a,   16 /* Public */,
      21,    1,  219,    2, 0x0a,   18 /* Public */,
      23,    1,  222,    2, 0x10a,   20 /* Public | MethodIsConst  */,
      25,    2,  225,    2, 0x08,   22 /* Private */,
      27,    0,  230,    2, 0x08,   25 /* Private */,
      28,    0,  231,    2, 0x08,   26 /* Private */,
      29,    1,  232,    2, 0x08,   27 /* Private */,
      31,    0,  235,    2, 0x08,   29 /* Private */,
      32,    1,  236,    2, 0x08,   30 /* Private */,
      33,    0,  239,    2, 0x08,   32 /* Private */,
      34,    0,  240,    2, 0x08,   33 /* Private */,
      35,    1,  241,    2, 0x08,   34 /* Private */,
      36,    1,  244,    2, 0x08,   36 /* Private */,
      37,    0,  247,    2, 0x08,   38 /* Private */,
      38,    1,  248,    2, 0x08,   39 /* Private */,
      40,    1,  251,    2, 0x08,   41 /* Private */,
      41,    0,  254,    2, 0x08,   43 /* Private */,
      42,    1,  255,    2, 0x08,   44 /* Private */,
      43,    1,  258,    2, 0x08,   46 /* Private */,
      44,    1,  261,    2, 0x08,   48 /* Private */,
      45,    2,  264,    2, 0x08,   50 /* Private */,
      45,    1,  269,    2, 0x28,   53 /* Private | MethodCloned */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Bool,    9,   10,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 17,   16,   18,
    QMetaType::Void, 0x80000000 | 8,   20,
    QMetaType::Void, 0x80000000 | 3,   22,
    QMetaType::Void, 0x80000000 | 24,    9,
    QMetaType::Void, 0x80000000 | 3, QMetaType::Bool,    2,   26,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 30,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QObjectStar,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,   20,
    QMetaType::Void, 0x80000000 | 8,   20,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 39,    9,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 39,    9,
    QMetaType::Void, 0x80000000 | 39,    9,
    QMetaType::Void, QMetaType::QString, QMetaType::QByteArray,   46,   47,
    QMetaType::Void, QMetaType::QString,   46,

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::FolderMan::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPEFolderManENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPEFolderManENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPEFolderManENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FolderMan, std::true_type>,
        // method 'folderSyncStateChange'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::Folder *, std::false_type>,
        // method 'scheduleQueueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'folderListChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::Folder::Map &, std::false_type>,
        // method 'wipeDone'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::AccountState *, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'slotAccountStateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotScheduleAppRestart'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotSyncOnceFileUnlocks'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'slotScheduleETagJob'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::RequestEtagJob *, std::false_type>,
        // method 'slotWipeFolderForAccount'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::AccountState *, std::false_type>,
        // method 'forceSyncForFolder'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::Folder *, std::false_type>,
        // method 'removeE2eFiles'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::AccountPtr &, std::false_type>,
        // method 'slotFolderSyncPaused'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::Folder *, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'slotFolderCanSyncChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotFolderSyncStarted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotFolderSyncFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::SyncResult &, std::false_type>,
        // method 'slotRunOneEtagJob'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotEtagJobDestroyed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QObject *, std::false_type>,
        // method 'slotStartScheduledFolderSync'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotEtagPollTimerTimeout'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotAccountRemoved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::AccountState *, std::false_type>,
        // method 'slotRemoveFoldersForAccount'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::AccountState *, std::false_type>,
        // method 'slotForwardFolderSyncStateChange'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotServerVersionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::Account *, std::false_type>,
        // method 'slotWatchedFileUnlocked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'slotScheduleFolderByTime'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotSetupPushNotifications'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::Folder::Map &, std::false_type>,
        // method 'slotProcessFilesPushNotification'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::Account *, std::false_type>,
        // method 'slotConnectToPushNotifications'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::Account *, std::false_type>,
        // method 'slotLeaveShare'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        // method 'slotLeaveShare'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void OCC::FolderMan::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FolderMan *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->folderSyncStateChange((*reinterpret_cast< std::add_pointer_t<OCC::Folder*>>(_a[1]))); break;
        case 1: _t->scheduleQueueChanged(); break;
        case 2: _t->folderListChanged((*reinterpret_cast< std::add_pointer_t<OCC::Folder::Map>>(_a[1]))); break;
        case 3: _t->wipeDone((*reinterpret_cast< std::add_pointer_t<OCC::AccountState*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 4: _t->slotAccountStateChanged(); break;
        case 5: _t->slotScheduleAppRestart(); break;
        case 6: _t->slotSyncOnceFileUnlocks((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->slotScheduleETagJob((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<OCC::RequestEtagJob*>>(_a[2]))); break;
        case 8: _t->slotWipeFolderForAccount((*reinterpret_cast< std::add_pointer_t<OCC::AccountState*>>(_a[1]))); break;
        case 9: _t->forceSyncForFolder((*reinterpret_cast< std::add_pointer_t<OCC::Folder*>>(_a[1]))); break;
        case 10: _t->removeE2eFiles((*reinterpret_cast< std::add_pointer_t<OCC::AccountPtr>>(_a[1]))); break;
        case 11: _t->slotFolderSyncPaused((*reinterpret_cast< std::add_pointer_t<OCC::Folder*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 12: _t->slotFolderCanSyncChanged(); break;
        case 13: _t->slotFolderSyncStarted(); break;
        case 14: _t->slotFolderSyncFinished((*reinterpret_cast< std::add_pointer_t<OCC::SyncResult>>(_a[1]))); break;
        case 15: _t->slotRunOneEtagJob(); break;
        case 16: _t->slotEtagJobDestroyed((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1]))); break;
        case 17: _t->slotStartScheduledFolderSync(); break;
        case 18: _t->slotEtagPollTimerTimeout(); break;
        case 19: _t->slotAccountRemoved((*reinterpret_cast< std::add_pointer_t<OCC::AccountState*>>(_a[1]))); break;
        case 20: _t->slotRemoveFoldersForAccount((*reinterpret_cast< std::add_pointer_t<OCC::AccountState*>>(_a[1]))); break;
        case 21: _t->slotForwardFolderSyncStateChange(); break;
        case 22: _t->slotServerVersionChanged((*reinterpret_cast< std::add_pointer_t<OCC::Account*>>(_a[1]))); break;
        case 23: _t->slotWatchedFileUnlocked((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 24: _t->slotScheduleFolderByTime(); break;
        case 25: _t->slotSetupPushNotifications((*reinterpret_cast< std::add_pointer_t<OCC::Folder::Map>>(_a[1]))); break;
        case 26: _t->slotProcessFilesPushNotification((*reinterpret_cast< std::add_pointer_t<OCC::Account*>>(_a[1]))); break;
        case 27: _t->slotConnectToPushNotifications((*reinterpret_cast< std::add_pointer_t<OCC::Account*>>(_a[1]))); break;
        case 28: _t->slotLeaveShare((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[2]))); break;
        case 29: _t->slotLeaveShare((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::Folder* >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::RequestEtagJob* >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::Folder* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::Folder* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FolderMan::*)(OCC::Folder * );
            if (_t _q_method = &FolderMan::folderSyncStateChange; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FolderMan::*)();
            if (_t _q_method = &FolderMan::scheduleQueueChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FolderMan::*)(const OCC::Folder::Map & );
            if (_t _q_method = &FolderMan::folderListChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FolderMan::*)(OCC::AccountState * , bool );
            if (_t _q_method = &FolderMan::wipeDone; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject *OCC::FolderMan::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::FolderMan::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPEFolderManENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OCC::FolderMan::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 30)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 30;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 30)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 30;
    }
    return _id;
}

// SIGNAL 0
void OCC::FolderMan::folderSyncStateChange(OCC::Folder * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OCC::FolderMan::scheduleQueueChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void OCC::FolderMan::folderListChanged(const OCC::Folder::Map & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void OCC::FolderMan::wipeDone(OCC::AccountState * _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}
QT_WARNING_POP
