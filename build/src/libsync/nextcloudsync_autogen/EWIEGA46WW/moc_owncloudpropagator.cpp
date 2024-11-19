/****************************************************************************
** Meta object code from reading C++ file 'owncloudpropagator.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/libsync/owncloudpropagator.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'owncloudpropagator.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSOCCSCOPEPropagatorJobENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPEPropagatorJobENDCLASS = QtMocHelpers::stringData(
    "OCC::PropagatorJob",
    "finished",
    "",
    "SyncFileItem::Status",
    "abortFinished",
    "status",
    "abort",
    "PropagatorJob::AbortType",
    "abortType",
    "scheduleSelfOrChild",
    "AbortType",
    "Synchronous",
    "Asynchronous",
    "JobState",
    "NotYetStarted",
    "Running",
    "Finished",
    "JobParallelism",
    "FullParallelism",
    "WaitForFinished"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPEPropagatorJobENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       3,   55, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   44,    2, 0x06,    4 /* Public */,
       4,    1,   47,    2, 0x06,    6 /* Public */,
       4,    0,   50,    2, 0x26,    8 /* Public | MethodCloned */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    1,   51,    2, 0x0a,    9 /* Public */,
       9,    0,   54,    2, 0x0a,   11 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3,    5,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Bool,

 // enums: name, alias, flags, count, data
      10,   10, 0x0,    2,   70,
      13,   13, 0x0,    3,   74,
      17,   17, 0x0,    2,   80,

 // enum data: key, value
      11, uint(OCC::PropagatorJob::Synchronous),
      12, uint(OCC::PropagatorJob::Asynchronous),
      14, uint(OCC::PropagatorJob::NotYetStarted),
      15, uint(OCC::PropagatorJob::Running),
      16, uint(OCC::PropagatorJob::Finished),
      18, uint(OCC::PropagatorJob::FullParallelism),
      19, uint(OCC::PropagatorJob::WaitForFinished),

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::PropagatorJob::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPEPropagatorJobENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPEPropagatorJobENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPEPropagatorJobENDCLASS_t,
        // enum 'AbortType'
        QtPrivate::TypeAndForceComplete<PropagatorJob::AbortType, std::true_type>,
        // enum 'JobState'
        QtPrivate::TypeAndForceComplete<PropagatorJob::JobState, std::true_type>,
        // enum 'JobParallelism'
        QtPrivate::TypeAndForceComplete<PropagatorJob::JobParallelism, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PropagatorJob, std::true_type>,
        // method 'finished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<SyncFileItem::Status, std::false_type>,
        // method 'abortFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<SyncFileItem::Status, std::false_type>,
        // method 'abortFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'abort'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<PropagatorJob::AbortType, std::false_type>,
        // method 'scheduleSelfOrChild'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void OCC::PropagatorJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PropagatorJob *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->finished((*reinterpret_cast< std::add_pointer_t<SyncFileItem::Status>>(_a[1]))); break;
        case 1: _t->abortFinished((*reinterpret_cast< std::add_pointer_t<SyncFileItem::Status>>(_a[1]))); break;
        case 2: _t->abortFinished(); break;
        case 3: _t->abort((*reinterpret_cast< std::add_pointer_t<PropagatorJob::AbortType>>(_a[1]))); break;
        case 4: { bool _r = _t->scheduleSelfOrChild();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PropagatorJob::*)(SyncFileItem::Status );
            if (_t _q_method = &PropagatorJob::finished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PropagatorJob::*)(SyncFileItem::Status );
            if (_t _q_method = &PropagatorJob::abortFinished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *OCC::PropagatorJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::PropagatorJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPEPropagatorJobENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OCC::PropagatorJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void OCC::PropagatorJob::finished(SyncFileItem::Status _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OCC::PropagatorJob::abortFinished(SyncFileItem::Status _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSOCCSCOPEPropagateItemJobENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPEPropagateItemJobENDCLASS = QtMocHelpers::stringData(
    "OCC::PropagateItemJob",
    "slotRestoreJobFinished",
    "",
    "SyncFileItem::Status",
    "status",
    "start"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPEPropagateItemJobENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   26,    2, 0x09,    1 /* Protected */,
       5,    0,   29,    2, 0x0a,    3 /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::PropagateItemJob::staticMetaObject = { {
    QMetaObject::SuperData::link<PropagatorJob::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPEPropagateItemJobENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPEPropagateItemJobENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPEPropagateItemJobENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PropagateItemJob, std::true_type>,
        // method 'slotRestoreJobFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<SyncFileItem::Status, std::false_type>,
        // method 'start'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void OCC::PropagateItemJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PropagateItemJob *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->slotRestoreJobFinished((*reinterpret_cast< std::add_pointer_t<SyncFileItem::Status>>(_a[1]))); break;
        case 1: _t->start(); break;
        default: ;
        }
    }
}

const QMetaObject *OCC::PropagateItemJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::PropagateItemJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPEPropagateItemJobENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return PropagatorJob::qt_metacast(_clname);
}

int OCC::PropagateItemJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PropagatorJob::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSOCCSCOPEPropagatorCompositeJobENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPEPropagatorCompositeJobENDCLASS = QtMocHelpers::stringData(
    "OCC::PropagatorCompositeJob",
    "slotSubJobAbortFinished",
    "",
    "possiblyRunNextJob",
    "OCC::PropagatorJob*",
    "next",
    "slotSubJobFinished",
    "OCC::SyncFileItem::Status",
    "status",
    "finalize"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPEPropagatorCompositeJobENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x08,    1 /* Private */,
       3,    1,   39,    2, 0x08,    2 /* Private */,
       6,    1,   42,    2, 0x08,    4 /* Private */,
       9,    0,   45,    2, 0x08,    6 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Bool, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::PropagatorCompositeJob::staticMetaObject = { {
    QMetaObject::SuperData::link<PropagatorJob::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPEPropagatorCompositeJobENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPEPropagatorCompositeJobENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPEPropagatorCompositeJobENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PropagatorCompositeJob, std::true_type>,
        // method 'slotSubJobAbortFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'possiblyRunNextJob'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::PropagatorJob *, std::false_type>,
        // method 'slotSubJobFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::SyncFileItem::Status, std::false_type>,
        // method 'finalize'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void OCC::PropagatorCompositeJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PropagatorCompositeJob *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->slotSubJobAbortFinished(); break;
        case 1: { bool _r = _t->possiblyRunNextJob((*reinterpret_cast< std::add_pointer_t<OCC::PropagatorJob*>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->slotSubJobFinished((*reinterpret_cast< std::add_pointer_t<OCC::SyncFileItem::Status>>(_a[1]))); break;
        case 3: _t->finalize(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::PropagatorJob* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *OCC::PropagatorCompositeJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::PropagatorCompositeJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPEPropagatorCompositeJobENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return PropagatorJob::qt_metacast(_clname);
}

int OCC::PropagatorCompositeJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PropagatorJob::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSOCCSCOPEPropagateDirectoryENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPEPropagateDirectoryENDCLASS = QtMocHelpers::stringData(
    "OCC::PropagateDirectory",
    "slotFirstJobFinished",
    "",
    "OCC::SyncFileItem::Status",
    "status",
    "slotSubJobsFinished"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPEPropagateDirectoryENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   26,    2, 0x08,    1 /* Private */,
       5,    1,   29,    2, 0x08,    3 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::PropagateDirectory::staticMetaObject = { {
    QMetaObject::SuperData::link<PropagatorJob::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPEPropagateDirectoryENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPEPropagateDirectoryENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPEPropagateDirectoryENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PropagateDirectory, std::true_type>,
        // method 'slotFirstJobFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::SyncFileItem::Status, std::false_type>,
        // method 'slotSubJobsFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::SyncFileItem::Status, std::false_type>
    >,
    nullptr
} };

void OCC::PropagateDirectory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PropagateDirectory *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->slotFirstJobFinished((*reinterpret_cast< std::add_pointer_t<OCC::SyncFileItem::Status>>(_a[1]))); break;
        case 1: _t->slotSubJobsFinished((*reinterpret_cast< std::add_pointer_t<OCC::SyncFileItem::Status>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *OCC::PropagateDirectory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::PropagateDirectory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPEPropagateDirectoryENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return PropagatorJob::qt_metacast(_clname);
}

int OCC::PropagateDirectory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PropagatorJob::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 2;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSOCCSCOPEPropagateRootDirectoryENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPEPropagateRootDirectoryENDCLASS = QtMocHelpers::stringData(
    "OCC::PropagateRootDirectory",
    "appendDirDeletionJob",
    "",
    "OCC::PropagatorJob*",
    "job",
    "slotSubJobsFinished",
    "OCC::SyncFileItem::Status",
    "status",
    "slotDirDeletionJobsFinished"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPEPropagateRootDirectoryENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   32,    2, 0x0a,    1 /* Public */,
       5,    1,   35,    2, 0x08,    3 /* Private */,
       8,    1,   38,    2, 0x08,    5 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::PropagateRootDirectory::staticMetaObject = { {
    QMetaObject::SuperData::link<PropagateDirectory::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPEPropagateRootDirectoryENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPEPropagateRootDirectoryENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPEPropagateRootDirectoryENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PropagateRootDirectory, std::true_type>,
        // method 'appendDirDeletionJob'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::PropagatorJob *, std::false_type>,
        // method 'slotSubJobsFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::SyncFileItem::Status, std::false_type>,
        // method 'slotDirDeletionJobsFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::SyncFileItem::Status, std::false_type>
    >,
    nullptr
} };

void OCC::PropagateRootDirectory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PropagateRootDirectory *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->appendDirDeletionJob((*reinterpret_cast< std::add_pointer_t<OCC::PropagatorJob*>>(_a[1]))); break;
        case 1: _t->slotSubJobsFinished((*reinterpret_cast< std::add_pointer_t<OCC::SyncFileItem::Status>>(_a[1]))); break;
        case 2: _t->slotDirDeletionJobsFinished((*reinterpret_cast< std::add_pointer_t<OCC::SyncFileItem::Status>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::PropagatorJob* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *OCC::PropagateRootDirectory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::PropagateRootDirectory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPEPropagateRootDirectoryENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return PropagateDirectory::qt_metacast(_clname);
}

int OCC::PropagateRootDirectory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PropagateDirectory::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSOCCSCOPEPropagateIgnoreJobENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPEPropagateIgnoreJobENDCLASS = QtMocHelpers::stringData(
    "OCC::PropagateIgnoreJob"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPEPropagateIgnoreJobENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::PropagateIgnoreJob::staticMetaObject = { {
    QMetaObject::SuperData::link<PropagateItemJob::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPEPropagateIgnoreJobENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPEPropagateIgnoreJobENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPEPropagateIgnoreJobENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PropagateIgnoreJob, std::true_type>
    >,
    nullptr
} };

void OCC::PropagateIgnoreJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *OCC::PropagateIgnoreJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::PropagateIgnoreJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPEPropagateIgnoreJobENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return PropagateItemJob::qt_metacast(_clname);
}

int OCC::PropagateIgnoreJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PropagateItemJob::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSOCCSCOPEPropagateVfsUpdateMetadataJobENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPEPropagateVfsUpdateMetadataJobENDCLASS = QtMocHelpers::stringData(
    "OCC::PropagateVfsUpdateMetadataJob"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPEPropagateVfsUpdateMetadataJobENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::PropagateVfsUpdateMetadataJob::staticMetaObject = { {
    QMetaObject::SuperData::link<PropagateItemJob::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPEPropagateVfsUpdateMetadataJobENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPEPropagateVfsUpdateMetadataJobENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPEPropagateVfsUpdateMetadataJobENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PropagateVfsUpdateMetadataJob, std::true_type>
    >,
    nullptr
} };

void OCC::PropagateVfsUpdateMetadataJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *OCC::PropagateVfsUpdateMetadataJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::PropagateVfsUpdateMetadataJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPEPropagateVfsUpdateMetadataJobENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return PropagateItemJob::qt_metacast(_clname);
}

int OCC::PropagateVfsUpdateMetadataJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PropagateItemJob::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSOCCSCOPEOwncloudPropagatorENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPEOwncloudPropagatorENDCLASS = QtMocHelpers::stringData(
    "OCC::OwncloudPropagator",
    "newItem",
    "",
    "OCC::SyncFileItemPtr",
    "itemCompleted",
    "item",
    "OCC::ErrorCategory",
    "category",
    "progress",
    "OCC::SyncFileItem",
    "bytes",
    "finished",
    "OCC::SyncFileItem::Status",
    "status",
    "seenLockedFile",
    "fileName",
    "touchedFile",
    "insufficientLocalStorage",
    "insufficientRemoteStorage",
    "abortTimeout",
    "emitFinished",
    "scheduleNextJobImpl"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPEOwncloudPropagatorENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   80,    2, 0x06,    1 /* Public */,
       4,    2,   83,    2, 0x06,    3 /* Public */,
       8,    2,   88,    2, 0x06,    6 /* Public */,
      11,    1,   93,    2, 0x06,    9 /* Public */,
      14,    1,   96,    2, 0x06,   11 /* Public */,
      16,    1,   99,    2, 0x06,   13 /* Public */,
      17,    0,  102,    2, 0x06,   15 /* Public */,
      18,    0,  103,    2, 0x06,   16 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      19,    0,  104,    2, 0x08,   17 /* Private */,
      20,    1,  105,    2, 0x08,   18 /* Private */,
      21,    0,  108,    2, 0x08,   20 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 6,    5,    7,
    QMetaType::Void, 0x80000000 | 9, QMetaType::LongLong,    2,   10,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::OwncloudPropagator::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPEOwncloudPropagatorENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPEOwncloudPropagatorENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPEOwncloudPropagatorENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<OwncloudPropagator, std::true_type>,
        // method 'newItem'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::SyncFileItemPtr &, std::false_type>,
        // method 'itemCompleted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::SyncFileItemPtr &, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::ErrorCategory, std::false_type>,
        // method 'progress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::SyncFileItem &, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'finished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::SyncFileItem::Status, std::false_type>,
        // method 'seenLockedFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'touchedFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'insufficientLocalStorage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'insufficientRemoteStorage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'abortTimeout'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'emitFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::SyncFileItem::Status, std::false_type>,
        // method 'scheduleNextJobImpl'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void OCC::OwncloudPropagator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OwncloudPropagator *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->newItem((*reinterpret_cast< std::add_pointer_t<OCC::SyncFileItemPtr>>(_a[1]))); break;
        case 1: _t->itemCompleted((*reinterpret_cast< std::add_pointer_t<OCC::SyncFileItemPtr>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<OCC::ErrorCategory>>(_a[2]))); break;
        case 2: _t->progress((*reinterpret_cast< std::add_pointer_t<OCC::SyncFileItem>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<qint64>>(_a[2]))); break;
        case 3: _t->finished((*reinterpret_cast< std::add_pointer_t<OCC::SyncFileItem::Status>>(_a[1]))); break;
        case 4: _t->seenLockedFile((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->touchedFile((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->insufficientLocalStorage(); break;
        case 7: _t->insufficientRemoteStorage(); break;
        case 8: _t->abortTimeout(); break;
        case 9: _t->emitFinished((*reinterpret_cast< std::add_pointer_t<OCC::SyncFileItem::Status>>(_a[1]))); break;
        case 10: _t->scheduleNextJobImpl(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::SyncFileItemPtr >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::SyncFileItemPtr >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::SyncFileItem >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (OwncloudPropagator::*)(const OCC::SyncFileItemPtr & );
            if (_t _q_method = &OwncloudPropagator::newItem; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (OwncloudPropagator::*)(const OCC::SyncFileItemPtr & , OCC::ErrorCategory );
            if (_t _q_method = &OwncloudPropagator::itemCompleted; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (OwncloudPropagator::*)(const OCC::SyncFileItem & , qint64 );
            if (_t _q_method = &OwncloudPropagator::progress; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (OwncloudPropagator::*)(OCC::SyncFileItem::Status );
            if (_t _q_method = &OwncloudPropagator::finished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (OwncloudPropagator::*)(const QString & );
            if (_t _q_method = &OwncloudPropagator::seenLockedFile; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (OwncloudPropagator::*)(const QString & );
            if (_t _q_method = &OwncloudPropagator::touchedFile; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (OwncloudPropagator::*)();
            if (_t _q_method = &OwncloudPropagator::insufficientLocalStorage; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (OwncloudPropagator::*)();
            if (_t _q_method = &OwncloudPropagator::insufficientRemoteStorage; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
    }
}

const QMetaObject *OCC::OwncloudPropagator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::OwncloudPropagator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPEOwncloudPropagatorENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OCC::OwncloudPropagator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void OCC::OwncloudPropagator::newItem(const OCC::SyncFileItemPtr & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OCC::OwncloudPropagator::itemCompleted(const OCC::SyncFileItemPtr & _t1, OCC::ErrorCategory _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void OCC::OwncloudPropagator::progress(const OCC::SyncFileItem & _t1, qint64 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void OCC::OwncloudPropagator::finished(OCC::SyncFileItem::Status _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void OCC::OwncloudPropagator::seenLockedFile(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void OCC::OwncloudPropagator::touchedFile(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void OCC::OwncloudPropagator::insufficientLocalStorage()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void OCC::OwncloudPropagator::insufficientRemoteStorage()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSOCCSCOPECleanupPollsJobENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPECleanupPollsJobENDCLASS = QtMocHelpers::stringData(
    "OCC::CleanupPollsJob",
    "finished",
    "",
    "aborted",
    "error",
    "OCC::ErrorCategory",
    "errorCategory",
    "slotPollFinished"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPECleanupPollsJobENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   32,    2, 0x06,    1 /* Public */,
       3,    2,   33,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    0,   38,    2, 0x08,    5 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 5,    4,    6,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::CleanupPollsJob::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPECleanupPollsJobENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPECleanupPollsJobENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPECleanupPollsJobENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<CleanupPollsJob, std::true_type>,
        // method 'finished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'aborted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::ErrorCategory, std::false_type>,
        // method 'slotPollFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void OCC::CleanupPollsJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CleanupPollsJob *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->finished(); break;
        case 1: _t->aborted((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<OCC::ErrorCategory>>(_a[2]))); break;
        case 2: _t->slotPollFinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CleanupPollsJob::*)();
            if (_t _q_method = &CleanupPollsJob::finished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CleanupPollsJob::*)(const QString & , const OCC::ErrorCategory );
            if (_t _q_method = &CleanupPollsJob::aborted; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *OCC::CleanupPollsJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::CleanupPollsJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPECleanupPollsJobENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OCC::CleanupPollsJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void OCC::CleanupPollsJob::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void OCC::CleanupPollsJob::aborted(const QString & _t1, const OCC::ErrorCategory _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
