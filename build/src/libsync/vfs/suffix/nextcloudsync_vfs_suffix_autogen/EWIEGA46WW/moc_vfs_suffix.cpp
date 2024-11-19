/****************************************************************************
** Meta object code from reading C++ file 'vfs_suffix.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../../../src/libsync/vfs/suffix/vfs_suffix.h"
#include <QtCore/qmetatype.h>
#include <QtCore/qplugin.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'vfs_suffix.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSOCCSCOPEVfsSuffixENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPEVfsSuffixENDCLASS = QtMocHelpers::stringData(
    "OCC::VfsSuffix",
    "fileStatusChanged",
    "",
    "OCC::SyncFileStatus"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPEVfsSuffixENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject OCC::VfsSuffix::staticMetaObject = { {
    QMetaObject::SuperData::link<Vfs::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPEVfsSuffixENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPEVfsSuffixENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPEVfsSuffixENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<VfsSuffix, std::true_type>,
        // method 'fileStatusChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::SyncFileStatus, std::false_type>
    >,
    nullptr
} };

void OCC::VfsSuffix::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VfsSuffix *>(_o);
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

const QMetaObject *OCC::VfsSuffix::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::VfsSuffix::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPEVfsSuffixENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return Vfs::qt_metacast(_clname);
}

int OCC::VfsSuffix::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSOCCSCOPESuffixVfsPluginFactoryENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPESuffixVfsPluginFactoryENDCLASS = QtMocHelpers::stringData(
    "OCC::SuffixVfsPluginFactory"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPESuffixVfsPluginFactoryENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject OCC::SuffixVfsPluginFactory::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPESuffixVfsPluginFactoryENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPESuffixVfsPluginFactoryENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPESuffixVfsPluginFactoryENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SuffixVfsPluginFactory, std::true_type>
    >,
    nullptr
} };

void OCC::SuffixVfsPluginFactory::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *OCC::SuffixVfsPluginFactory::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::SuffixVfsPluginFactory::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPESuffixVfsPluginFactoryENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "DefaultPluginFactory<VfsSuffix>"))
        return static_cast< DefaultPluginFactory<VfsSuffix>*>(this);
    if (!strcmp(_clname, "org.owncloud.PluginFactory"))
        return static_cast< OCC::PluginFactory*>(this);
    return QObject::qt_metacast(_clname);
}

int OCC::SuffixVfsPluginFactory::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
using namespace OCC;

#ifdef QT_MOC_EXPORT_PLUGIN_V2
static constexpr unsigned char qt_pluginMetaDataV2_SuffixVfsPluginFactory[] = {
    0xbf, 
    // "IID"
    0x02,  0x78,  0x1a,  'o',  'r',  'g',  '.',  'o', 
    'w',  'n',  'c',  'l',  'o',  'u',  'd',  '.', 
    'P',  'l',  'u',  'g',  'i',  'n',  'F',  'a', 
    'c',  't',  'o',  'r',  'y', 
    // "className"
    0x03,  0x76,  'S',  'u',  'f',  'f',  'i',  'x', 
    'V',  'f',  's',  'P',  'l',  'u',  'g',  'i', 
    'n',  'F',  'a',  'c',  't',  'o',  'r',  'y', 
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
QT_MOC_EXPORT_PLUGIN_V2(OCC::SuffixVfsPluginFactory, SuffixVfsPluginFactory, qt_pluginMetaDataV2_SuffixVfsPluginFactory)
#else
QT_PLUGIN_METADATA_SECTION
Q_CONSTINIT static constexpr unsigned char qt_pluginMetaData_SuffixVfsPluginFactory[] = {
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
    0x03,  0x76,  'S',  'u',  'f',  'f',  'i',  'x', 
    'V',  'f',  's',  'P',  'l',  'u',  'g',  'i', 
    'n',  'F',  'a',  'c',  't',  'o',  'r',  'y', 
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
QT_MOC_EXPORT_PLUGIN(OCC::SuffixVfsPluginFactory, SuffixVfsPluginFactory)
#endif  // QT_MOC_EXPORT_PLUGIN_V2

QT_WARNING_POP
