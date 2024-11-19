/****************************************************************************
** Meta object code from reading C++ file 'editlocallyjob.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/gui/editlocallyjob.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'editlocallyjob.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSOCCSCOPEEditLocallyJobENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPEEditLocallyJobENDCLASS = QtMocHelpers::stringData(
    "OCC::EditLocallyJob",
    "error",
    "",
    "message",
    "informativeText",
    "finished",
    "callShowError",
    "startSetup",
    "startEditLocally",
    "fetchRemoteFileParentInfo",
    "startSyncBeforeOpening",
    "proceedWithSetup",
    "findAfolderAndConstructPaths",
    "showError",
    "slotItemDiscovered",
    "OCC::SyncFileItemPtr",
    "item",
    "slotItemCompleted",
    "slotLsColJobFinishedWithError",
    "QNetworkReply*",
    "reply",
    "slotDirectoryListingIterated",
    "name",
    "QMap<QString,QString>",
    "properties",
    "processLocalItem",
    "openFile",
    "lockFile",
    "fileAlreadyLocked",
    "fileLockSuccess",
    "fileLockError",
    "errorMessage",
    "fileLockProcedureComplete",
    "notificationTitle",
    "notificationMessage",
    "success",
    "disconnectFolderSignals"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPEEditLocallyJobENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      22,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,  146,    2, 0x06,    1 /* Public */,
       5,    0,  151,    2, 0x06,    4 /* Public */,
       6,    2,  152,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    0,  157,    2, 0x0a,    8 /* Public */,
       8,    0,  158,    2, 0x0a,    9 /* Public */,
       9,    0,  159,    2, 0x08,   10 /* Private */,
      10,    0,  160,    2, 0x08,   11 /* Private */,
      11,    0,  161,    2, 0x08,   12 /* Private */,
      12,    0,  162,    2, 0x08,   13 /* Private */,
      13,    2,  163,    2, 0x08,   14 /* Private */,
      14,    1,  168,    2, 0x08,   17 /* Private */,
      17,    1,  171,    2, 0x08,   19 /* Private */,
      18,    1,  174,    2, 0x08,   21 /* Private */,
      21,    2,  177,    2, 0x08,   23 /* Private */,
      25,    0,  182,    2, 0x08,   26 /* Private */,
      26,    0,  183,    2, 0x08,   27 /* Private */,
      27,    0,  184,    2, 0x08,   28 /* Private */,
      28,    0,  185,    2, 0x08,   29 /* Private */,
      29,    1,  186,    2, 0x08,   30 /* Private */,
      30,    1,  189,    2, 0x08,   32 /* Private */,
      32,    3,  192,    2, 0x08,   34 /* Private */,
      36,    0,  199,    2, 0x08,   38 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    4,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 23,   22,   24,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, QMetaType::QString,   31,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::Bool,   33,   34,   35,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::EditLocallyJob::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPEEditLocallyJobENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPEEditLocallyJobENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPEEditLocallyJobENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<EditLocallyJob, std::true_type>,
        // method 'error'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'finished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'callShowError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'startSetup'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'startEditLocally'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'fetchRemoteFileParentInfo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'startSyncBeforeOpening'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'proceedWithSetup'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'findAfolderAndConstructPaths'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'slotItemDiscovered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::SyncFileItemPtr &, std::false_type>,
        // method 'slotItemCompleted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::SyncFileItemPtr &, std::false_type>,
        // method 'slotLsColJobFinishedWithError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>,
        // method 'slotDirectoryListingIterated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QMap<QString,QString> &, std::false_type>,
        // method 'processLocalItem'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'openFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'lockFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'fileAlreadyLocked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'fileLockSuccess'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::SyncFileItemPtr &, std::false_type>,
        // method 'fileLockError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'fileLockProcedureComplete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'disconnectFolderSignals'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void OCC::EditLocallyJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EditLocallyJob *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->error((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 1: _t->finished(); break;
        case 2: _t->callShowError((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 3: _t->startSetup(); break;
        case 4: _t->startEditLocally(); break;
        case 5: _t->fetchRemoteFileParentInfo(); break;
        case 6: _t->startSyncBeforeOpening(); break;
        case 7: _t->proceedWithSetup(); break;
        case 8: _t->findAfolderAndConstructPaths(); break;
        case 9: _t->showError((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 10: _t->slotItemDiscovered((*reinterpret_cast< std::add_pointer_t<OCC::SyncFileItemPtr>>(_a[1]))); break;
        case 11: _t->slotItemCompleted((*reinterpret_cast< std::add_pointer_t<OCC::SyncFileItemPtr>>(_a[1]))); break;
        case 12: _t->slotLsColJobFinishedWithError((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1]))); break;
        case 13: _t->slotDirectoryListingIterated((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QMap<QString,QString>>>(_a[2]))); break;
        case 14: _t->processLocalItem(); break;
        case 15: _t->openFile(); break;
        case 16: _t->lockFile(); break;
        case 17: _t->fileAlreadyLocked(); break;
        case 18: _t->fileLockSuccess((*reinterpret_cast< std::add_pointer_t<OCC::SyncFileItemPtr>>(_a[1]))); break;
        case 19: _t->fileLockError((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 20: _t->fileLockProcedureComplete((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[3]))); break;
        case 21: _t->disconnectFolderSignals(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::SyncFileItemPtr >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::SyncFileItemPtr >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkReply* >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::SyncFileItemPtr >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (EditLocallyJob::*)(const QString & , const QString & );
            if (_t _q_method = &EditLocallyJob::error; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (EditLocallyJob::*)();
            if (_t _q_method = &EditLocallyJob::finished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (EditLocallyJob::*)(const QString & , const QString & );
            if (_t _q_method = &EditLocallyJob::callShowError; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject *OCC::EditLocallyJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::EditLocallyJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPEEditLocallyJobENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OCC::EditLocallyJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 22)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 22;
    }
    return _id;
}

// SIGNAL 0
void OCC::EditLocallyJob::error(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OCC::EditLocallyJob::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void OCC::EditLocallyJob::callShowError(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
