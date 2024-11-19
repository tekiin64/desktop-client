/****************************************************************************
** Meta object code from reading C++ file 'vfs.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/common/vfs.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vfs.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSOCCSCOPEVfsENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPEVfsENDCLASS = QtMocHelpers::stringData(
    "OCC::Vfs",
    "beginHydrating",
    "",
    "doneHydrating",
    "failureHydrating",
    "errorCode",
    "statusCode",
    "errorString",
    "fileName",
    "fileStatusChanged",
    "systemFileName",
    "OCC::SyncFileStatus",
    "fileStatus",
    "Mode",
    "Off",
    "WithSuffix",
    "WindowsCfApi",
    "XAttr",
    "ConvertToPlaceholderResult",
    "Error",
    "Ok",
    "Locked",
    "UpdateMetadataType",
    "DatabaseMetadata",
    "FileMetadata",
    "AllMetadata",
    "AvailabilityError",
    "DbError",
    "NoSuchItem",
    "AvailabilityRecursivity",
    "RecursiveAvailability",
    "NotRecursiveAvailability"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPEVfsENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       5,   54, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x06,    6 /* Public */,
       3,    0,   39,    2, 0x06,    7 /* Public */,
       4,    4,   40,    2, 0x06,    8 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       9,    2,   49,    2, 0x0a,   13 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::QString,    5,    6,    7,    8,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 11,   10,   12,

 // enums: name, alias, flags, count, data
      13,   13, 0x0,    4,   79,
      18,   18, 0x2,    3,   87,
      22,   22, 0x1,    3,   93,
      26,   26, 0x2,    2,   99,
      29,   29, 0x2,    2,  103,

 // enum data: key, value
      14, uint(OCC::Vfs::Off),
      15, uint(OCC::Vfs::WithSuffix),
      16, uint(OCC::Vfs::WindowsCfApi),
      17, uint(OCC::Vfs::XAttr),
      19, uint(OCC::Vfs::ConvertToPlaceholderResult::Error),
      20, uint(OCC::Vfs::ConvertToPlaceholderResult::Ok),
      21, uint(OCC::Vfs::ConvertToPlaceholderResult::Locked),
      23, uint(OCC::Vfs::DatabaseMetadata),
      24, uint(OCC::Vfs::FileMetadata),
      25, uint(OCC::Vfs::AllMetadata),
      27, uint(OCC::Vfs::AvailabilityError::DbError),
      28, uint(OCC::Vfs::AvailabilityError::NoSuchItem),
      30, uint(OCC::Vfs::AvailabilityRecursivity::RecursiveAvailability),
      31, uint(OCC::Vfs::AvailabilityRecursivity::NotRecursiveAvailability),

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::Vfs::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPEVfsENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPEVfsENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPEVfsENDCLASS_t,
        // enum 'Mode'
        QtPrivate::TypeAndForceComplete<Vfs::Mode, std::true_type>,
        // enum 'ConvertToPlaceholderResult'
        QtPrivate::TypeAndForceComplete<Vfs::ConvertToPlaceholderResult, std::true_type>,
        // enum 'UpdateMetadataType'
        QtPrivate::TypeAndForceComplete<Vfs::UpdateMetadataType, std::true_type>,
        // enum 'AvailabilityError'
        QtPrivate::TypeAndForceComplete<Vfs::AvailabilityError, std::true_type>,
        // enum 'AvailabilityRecursivity'
        QtPrivate::TypeAndForceComplete<Vfs::AvailabilityRecursivity, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Vfs, std::true_type>,
        // method 'beginHydrating'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'doneHydrating'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'failureHydrating'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'fileStatusChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::SyncFileStatus, std::false_type>
    >,
    nullptr
} };

void OCC::Vfs::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Vfs *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->beginHydrating(); break;
        case 1: _t->doneHydrating(); break;
        case 2: _t->failureHydrating((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4]))); break;
        case 3: _t->fileStatusChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<OCC::SyncFileStatus>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::SyncFileStatus >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Vfs::*)();
            if (_t _q_method = &Vfs::beginHydrating; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Vfs::*)();
            if (_t _q_method = &Vfs::doneHydrating; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Vfs::*)(int , int , const QString & , const QString & );
            if (_t _q_method = &Vfs::failureHydrating; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject *OCC::Vfs::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::Vfs::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPEVfsENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OCC::Vfs::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void OCC::Vfs::beginHydrating()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void OCC::Vfs::doneHydrating()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void OCC::Vfs::failureHydrating(int _t1, int _t2, const QString & _t3, const QString & _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSOCCSCOPEVfsOffENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPEVfsOffENDCLASS = QtMocHelpers::stringData(
    "OCC::VfsOff",
    "fileStatusChanged",
    "",
    "OCC::SyncFileStatus"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPEVfsOffENDCLASS[] = {

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
       1,    2,   20,    2, 0x0a,    1 /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 3,    2,    2,

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::VfsOff::staticMetaObject = { {
    QMetaObject::SuperData::link<Vfs::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPEVfsOffENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPEVfsOffENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPEVfsOffENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<VfsOff, std::true_type>,
        // method 'fileStatusChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::SyncFileStatus, std::false_type>
    >,
    nullptr
} };

void OCC::VfsOff::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VfsOff *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->fileStatusChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<OCC::SyncFileStatus>>(_a[2]))); break;
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
        }
    }
}

const QMetaObject *OCC::VfsOff::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::VfsOff::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPEVfsOffENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return Vfs::qt_metacast(_clname);
}

int OCC::VfsOff::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Vfs::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}
QT_WARNING_POP
