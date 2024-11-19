/****************************************************************************
** Meta object code from reading C++ file 'vfs_cfapi.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../src/libsync/vfs/cfapi/vfs_cfapi.h"
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vfs_cfapi.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSOCCSCOPEVfsCfApiENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPEVfsCfApiENDCLASS = QtMocHelpers::stringData(
    "OCC::VfsCfApi",
    "hydrationRequestReady",
    "",
    "requestId",
    "hydrationRequestFailed",
    "hydrationRequestFinished",
    "requestHydration",
    "path",
    "fileStatusChanged",
    "systemFileName",
    "OCC::SyncFileStatus",
    "fileStatus"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPEVfsCfApiENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   44,    2, 0x06,    1 /* Public */,
       4,    1,   47,    2, 0x06,    3 /* Public */,
       5,    1,   50,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    2,   53,    2, 0x0a,    7 /* Public */,
       8,    2,   58,    2, 0x0a,   10 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    3,    7,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 10,    9,   11,

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::VfsCfApi::staticMetaObject = { {
    QMetaObject::SuperData::link<Vfs::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPEVfsCfApiENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPEVfsCfApiENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPEVfsCfApiENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<VfsCfApi, std::true_type>,
        // method 'hydrationRequestReady'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'hydrationRequestFailed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'hydrationRequestFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'requestHydration'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'fileStatusChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::SyncFileStatus, std::false_type>
    >,
    nullptr
} };

void OCC::VfsCfApi::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VfsCfApi *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->hydrationRequestReady((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->hydrationRequestFailed((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->hydrationRequestFinished((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->requestHydration((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 4: _t->fileStatusChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<OCC::SyncFileStatus>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 4:
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
            using _t = void (VfsCfApi::*)(const QString & );
            if (_t _q_method = &VfsCfApi::hydrationRequestReady; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (VfsCfApi::*)(const QString & );
            if (_t _q_method = &VfsCfApi::hydrationRequestFailed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (VfsCfApi::*)(const QString & );
            if (_t _q_method = &VfsCfApi::hydrationRequestFinished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject *OCC::VfsCfApi::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::VfsCfApi::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPEVfsCfApiENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return Vfs::qt_metacast(_clname);
}

int OCC::VfsCfApi::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Vfs::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void OCC::VfsCfApi::hydrationRequestReady(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OCC::VfsCfApi::hydrationRequestFailed(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void OCC::VfsCfApi::hydrationRequestFinished(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSOCCSCOPECfApiVfsPluginFactoryENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPECfApiVfsPluginFactoryENDCLASS = QtMocHelpers::stringData(
    "OCC::CfApiVfsPluginFactory"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPECfApiVfsPluginFactoryENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject OCC::CfApiVfsPluginFactory::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPECfApiVfsPluginFactoryENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPECfApiVfsPluginFactoryENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPECfApiVfsPluginFactoryENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<CfApiVfsPluginFactory, std::true_type>
    >,
    nullptr
} };

void OCC::CfApiVfsPluginFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *OCC::CfApiVfsPluginFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::CfApiVfsPluginFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPECfApiVfsPluginFactoryENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "DefaultPluginFactory<VfsCfApi>"))
        return static_cast< DefaultPluginFactory<VfsCfApi>*>(this);
    if (!strcmp(_clname, "org.owncloud.PluginFactory"))
        return static_cast< OCC::PluginFactory*>(this);
    return QObject::qt_metacast(_clname);
}

int OCC::CfApiVfsPluginFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
using namespace OCC;

#ifdef QT_MOC_EXPORT_PLUGIN_V2
static constexpr unsigned char qt_pluginMetaDataV2_CfApiVfsPluginFactory[] = {
    0xbf, 
    // "IID"
    0x02,  0x78,  0x1a,  'o',  'r',  'g',  '.',  'o', 
    'w',  'n',  'c',  'l',  'o',  'u',  'd',  '.', 
    'P',  'l',  'u',  'g',  'i',  'n',  'F',  'a', 
    'c',  't',  'o',  'r',  'y', 
    // "className"
    0x03,  0x75,  'C',  'f',  'A',  'p',  'i',  'V', 
    'f',  's',  'P',  'l',  'u',  'g',  'i',  'n', 
    'F',  'a',  'c',  't',  'o',  'r',  'y', 
    // "MetaData"
    0x04,  0xa2,  0x64,  't',  'y',  'p',  'e',  0x63, 
    'v',  'f',  's',  0x67,  'v',  'e',  'r',  's', 
    'i',  'o',  'n',  0x78,  0x23,  '3',  '.',  '1', 
    '4',  '.',  '5',  '0',  'd',  'a',  'i',  'l', 
    'y',  '-',  'W',  'i',  'n',  '6',  '4',  ' ', 
    '(',  'b',  'u',  'i',  'l',  'd',  ' ',  '2', 
    '0',  '2',  '4',  '1',  '1',  '1',  '9',  ')', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN_V2(OCC::CfApiVfsPluginFactory, CfApiVfsPluginFactory, qt_pluginMetaDataV2_CfApiVfsPluginFactory)
#else
QT_PLUGIN_METADATA_SECTION
Q_CONSTINIT static constexpr unsigned char qt_pluginMetaData_CfApiVfsPluginFactory[] = {
    'Q', 'T', 'M', 'E', 'T', 'A', 'D', 'A', 'T', 'A', ' ', '!',
    // metadata version, Qt version, architectural requirements
    0, QT_VERSION_MAJOR, QT_VERSION_MINOR, qPluginArchRequirements(),
    0xbf, 
    // "IID"
    0x02,  0x78,  0x1a,  'o',  'r',  'g',  '.',  'o', 
    'w',  'n',  'c',  'l',  'o',  'u',  'd',  '.', 
    'P',  'l',  'u',  'g',  'i',  'n',  'F',  'a', 
    'c',  't',  'o',  'r',  'y', 
    // "className"
    0x03,  0x75,  'C',  'f',  'A',  'p',  'i',  'V', 
    'f',  's',  'P',  'l',  'u',  'g',  'i',  'n', 
    'F',  'a',  'c',  't',  'o',  'r',  'y', 
    // "MetaData"
    0x04,  0xa2,  0x64,  't',  'y',  'p',  'e',  0x63, 
    'v',  'f',  's',  0x67,  'v',  'e',  'r',  's', 
    'i',  'o',  'n',  0x78,  0x23,  '3',  '.',  '1', 
    '4',  '.',  '5',  '0',  'd',  'a',  'i',  'l', 
    'y',  '-',  'W',  'i',  'n',  '6',  '4',  ' ', 
    '(',  'b',  'u',  'i',  'l',  'd',  ' ',  '2', 
    '0',  '2',  '4',  '1',  '1',  '1',  '9',  ')', 
    0xff, 
};
QT_MOC_EXPORT_PLUGIN(OCC::CfApiVfsPluginFactory, CfApiVfsPluginFactory)
#endif  // QT_MOC_EXPORT_PLUGIN_V2

QT_WARNING_POP
