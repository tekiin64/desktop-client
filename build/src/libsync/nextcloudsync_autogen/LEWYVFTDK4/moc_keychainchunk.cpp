/****************************************************************************
** Meta object code from reading C++ file 'keychainchunk.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/libsync/creds/keychainchunk.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'keychainchunk.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSOCCSCOPEKeychainChunkSCOPEJobENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPEKeychainChunkSCOPEJobENDCLASS = QtMocHelpers::stringData(
    "OCC::KeychainChunk::Job"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPEKeychainChunkSCOPEJobENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject OCC::KeychainChunk::Job::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPEKeychainChunkSCOPEJobENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPEKeychainChunkSCOPEJobENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPEKeychainChunkSCOPEJobENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Job, std::true_type>
    >,
    nullptr
} };

void OCC::KeychainChunk::Job::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *OCC::KeychainChunk::Job::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::KeychainChunk::Job::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPEKeychainChunkSCOPEJobENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OCC::KeychainChunk::Job::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSOCCSCOPEKeychainChunkSCOPEWriteJobENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPEKeychainChunkSCOPEWriteJobENDCLASS = QtMocHelpers::stringData(
    "OCC::KeychainChunk::WriteJob",
    "finished",
    "",
    "KeychainChunk::WriteJob*",
    "incomingJob",
    "slotWriteJobDone",
    "QKeychain::Job*"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPEKeychainChunkSCOPEWriteJobENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   26,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    1,   29,    2, 0x08,    3 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    4,

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::KeychainChunk::WriteJob::staticMetaObject = { {
    QMetaObject::SuperData::link<KeychainChunk::Job::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPEKeychainChunkSCOPEWriteJobENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPEKeychainChunkSCOPEWriteJobENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPEKeychainChunkSCOPEWriteJobENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<WriteJob, std::true_type>,
        // method 'finished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<KeychainChunk::WriteJob *, std::false_type>,
        // method 'slotWriteJobDone'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QKeychain::Job *, std::false_type>
    >,
    nullptr
} };

void OCC::KeychainChunk::WriteJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WriteJob *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->finished((*reinterpret_cast< std::add_pointer_t<KeychainChunk::WriteJob*>>(_a[1]))); break;
        case 1: _t->slotWriteJobDone((*reinterpret_cast< std::add_pointer_t<QKeychain::Job*>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QKeychain::Job* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WriteJob::*)(KeychainChunk::WriteJob * );
            if (_t _q_method = &WriteJob::finished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *OCC::KeychainChunk::WriteJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::KeychainChunk::WriteJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPEKeychainChunkSCOPEWriteJobENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return KeychainChunk::Job::qt_metacast(_clname);
}

int OCC::KeychainChunk::WriteJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KeychainChunk::Job::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void OCC::KeychainChunk::WriteJob::finished(KeychainChunk::WriteJob * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSOCCSCOPEKeychainChunkSCOPEReadJobENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPEKeychainChunkSCOPEReadJobENDCLASS = QtMocHelpers::stringData(
    "OCC::KeychainChunk::ReadJob",
    "finished",
    "",
    "KeychainChunk::ReadJob*",
    "incomingJob",
    "slotReadJobDone",
    "QKeychain::Job*"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPEKeychainChunkSCOPEReadJobENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   26,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    1,   29,    2, 0x08,    3 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    4,

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::KeychainChunk::ReadJob::staticMetaObject = { {
    QMetaObject::SuperData::link<KeychainChunk::Job::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPEKeychainChunkSCOPEReadJobENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPEKeychainChunkSCOPEReadJobENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPEKeychainChunkSCOPEReadJobENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ReadJob, std::true_type>,
        // method 'finished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<KeychainChunk::ReadJob *, std::false_type>,
        // method 'slotReadJobDone'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QKeychain::Job *, std::false_type>
    >,
    nullptr
} };

void OCC::KeychainChunk::ReadJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ReadJob *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->finished((*reinterpret_cast< std::add_pointer_t<KeychainChunk::ReadJob*>>(_a[1]))); break;
        case 1: _t->slotReadJobDone((*reinterpret_cast< std::add_pointer_t<QKeychain::Job*>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QKeychain::Job* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ReadJob::*)(KeychainChunk::ReadJob * );
            if (_t _q_method = &ReadJob::finished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *OCC::KeychainChunk::ReadJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::KeychainChunk::ReadJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPEKeychainChunkSCOPEReadJobENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return KeychainChunk::Job::qt_metacast(_clname);
}

int OCC::KeychainChunk::ReadJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KeychainChunk::Job::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void OCC::KeychainChunk::ReadJob::finished(KeychainChunk::ReadJob * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSOCCSCOPEKeychainChunkSCOPEDeleteJobENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPEKeychainChunkSCOPEDeleteJobENDCLASS = QtMocHelpers::stringData(
    "OCC::KeychainChunk::DeleteJob",
    "finished",
    "",
    "KeychainChunk::DeleteJob*",
    "incomingJob",
    "slotDeleteJobDone",
    "QKeychain::Job*"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPEKeychainChunkSCOPEDeleteJobENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   26,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    1,   29,    2, 0x08,    3 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    4,

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::KeychainChunk::DeleteJob::staticMetaObject = { {
    QMetaObject::SuperData::link<KeychainChunk::Job::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPEKeychainChunkSCOPEDeleteJobENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPEKeychainChunkSCOPEDeleteJobENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPEKeychainChunkSCOPEDeleteJobENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DeleteJob, std::true_type>,
        // method 'finished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<KeychainChunk::DeleteJob *, std::false_type>,
        // method 'slotDeleteJobDone'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QKeychain::Job *, std::false_type>
    >,
    nullptr
} };

void OCC::KeychainChunk::DeleteJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DeleteJob *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->finished((*reinterpret_cast< std::add_pointer_t<KeychainChunk::DeleteJob*>>(_a[1]))); break;
        case 1: _t->slotDeleteJobDone((*reinterpret_cast< std::add_pointer_t<QKeychain::Job*>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QKeychain::Job* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DeleteJob::*)(KeychainChunk::DeleteJob * );
            if (_t _q_method = &DeleteJob::finished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *OCC::KeychainChunk::DeleteJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::KeychainChunk::DeleteJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPEKeychainChunkSCOPEDeleteJobENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return KeychainChunk::Job::qt_metacast(_clname);
}

int OCC::KeychainChunk::DeleteJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = KeychainChunk::Job::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void OCC::KeychainChunk::DeleteJob::finished(KeychainChunk::DeleteJob * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
