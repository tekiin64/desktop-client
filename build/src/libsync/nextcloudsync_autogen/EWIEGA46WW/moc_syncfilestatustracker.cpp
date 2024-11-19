/****************************************************************************
** Meta object code from reading C++ file 'syncfilestatustracker.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/libsync/syncfilestatustracker.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'syncfilestatustracker.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSOCCSCOPESyncFileStatusTrackerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPESyncFileStatusTrackerENDCLASS = QtMocHelpers::stringData(
    "OCC::SyncFileStatusTracker",
    "fileStatusChanged",
    "",
    "systemFileName",
    "OCC::SyncFileStatus",
    "fileStatus",
    "slotPathTouched",
    "fileName",
    "slotAddSilentlyExcluded",
    "folderPath",
    "slotCheckAndRemoveSilentlyExcluded",
    "slotAboutToPropagate",
    "OCC::SyncFileItemVector&",
    "items",
    "slotItemCompleted",
    "OCC::SyncFileItemPtr",
    "item",
    "slotSyncFinished",
    "slotSyncEngineRunningChanged"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPESyncFileStatusTrackerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   62,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    1,   67,    2, 0x0a,    4 /* Public */,
       8,    1,   70,    2, 0x0a,    6 /* Public */,
      10,    1,   73,    2, 0x0a,    8 /* Public */,
      11,    1,   76,    2, 0x08,   10 /* Private */,
      14,    1,   79,    2, 0x08,   12 /* Private */,
      17,    0,   82,    2, 0x08,   14 /* Private */,
      18,    0,   83,    2, 0x08,   15 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::SyncFileStatusTracker::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPESyncFileStatusTrackerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPESyncFileStatusTrackerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPESyncFileStatusTrackerENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SyncFileStatusTracker, std::true_type>,
        // method 'fileStatusChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::SyncFileStatus, std::false_type>,
        // method 'slotPathTouched'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'slotAddSilentlyExcluded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'slotCheckAndRemoveSilentlyExcluded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'slotAboutToPropagate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::SyncFileItemVector &, std::false_type>,
        // method 'slotItemCompleted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::SyncFileItemPtr &, std::false_type>,
        // method 'slotSyncFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotSyncEngineRunningChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void OCC::SyncFileStatusTracker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SyncFileStatusTracker *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->fileStatusChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<OCC::SyncFileStatus>>(_a[2]))); break;
        case 1: _t->slotPathTouched((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->slotAddSilentlyExcluded((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->slotCheckAndRemoveSilentlyExcluded((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->slotAboutToPropagate((*reinterpret_cast< std::add_pointer_t<OCC::SyncFileItemVector&>>(_a[1]))); break;
        case 5: _t->slotItemCompleted((*reinterpret_cast< std::add_pointer_t<OCC::SyncFileItemPtr>>(_a[1]))); break;
        case 6: _t->slotSyncFinished(); break;
        case 7: _t->slotSyncEngineRunningChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::SyncFileStatus >(); break;
            }
            break;
        case 5:
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
            using _t = void (SyncFileStatusTracker::*)(const QString & , OCC::SyncFileStatus );
            if (_t _q_method = &SyncFileStatusTracker::fileStatusChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *OCC::SyncFileStatusTracker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::SyncFileStatusTracker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPESyncFileStatusTrackerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OCC::SyncFileStatusTracker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void OCC::SyncFileStatusTracker::fileStatusChanged(const QString & _t1, OCC::SyncFileStatus _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
