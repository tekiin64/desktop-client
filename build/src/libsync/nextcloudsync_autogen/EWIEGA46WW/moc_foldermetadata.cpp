/****************************************************************************
** Meta object code from reading C++ file 'foldermetadata.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/libsync/foldermetadata.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'foldermetadata.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSOCCSCOPEFolderMetadataENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPEFolderMetadataENDCLASS = QtMocHelpers::stringData(
    "OCC::FolderMetadata",
    "setupComplete",
    "",
    "addEncryptedFile",
    "EncryptedFile",
    "f",
    "removeEncryptedFile",
    "removeAllEncryptedFiles",
    "initMetadata",
    "initEmptyMetadata",
    "initEmptyMetadataLegacy",
    "setupExistingMetadata",
    "metadata",
    "setupExistingMetadataLegacy",
    "setupVersionFromExistingMetadata",
    "startFetchRootE2eeFolderMetadata",
    "path",
    "slotRootE2eeFolderMetadataReceived",
    "statusCode",
    "message",
    "updateUsersEncryptedMetadataKey",
    "createNewMetadataKeyForEncryption",
    "emitSetupComplete",
    "FolderType",
    "Nested",
    "Root"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPEFolderMetadataENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       1,  135, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  104,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    1,  105,    2, 0x0a,    3 /* Public */,
       6,    1,  108,    2, 0x0a,    5 /* Public */,
       7,    0,  111,    2, 0x0a,    7 /* Public */,
       8,    0,  112,    2, 0x08,    8 /* Private */,
       9,    0,  113,    2, 0x08,    9 /* Private */,
      10,    0,  114,    2, 0x08,   10 /* Private */,
      11,    1,  115,    2, 0x08,   11 /* Private */,
      13,    1,  118,    2, 0x08,   13 /* Private */,
      14,    1,  121,    2, 0x08,   15 /* Private */,
      15,    1,  124,    2, 0x08,   17 /* Private */,
      17,    2,  127,    2, 0x08,   19 /* Private */,
      20,    0,  132,    2, 0x08,   22 /* Private */,
      21,    0,  133,    2, 0x08,   23 /* Private */,
      22,    0,  134,    2, 0x08,   24 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray,   12,
    QMetaType::Void, QMetaType::QByteArray,   12,
    QMetaType::Void, QMetaType::QByteArray,   12,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   18,   19,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // enums: name, alias, flags, count, data
      23,   23, 0x2,    2,  140,

 // enum data: key, value
      24, uint(OCC::FolderMetadata::FolderType::Nested),
      25, uint(OCC::FolderMetadata::FolderType::Root),

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::FolderMetadata::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPEFolderMetadataENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPEFolderMetadataENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPEFolderMetadataENDCLASS_t,
        // enum 'FolderType'
        QtPrivate::TypeAndForceComplete<FolderMetadata::FolderType, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FolderMetadata, std::true_type>,
        // method 'setupComplete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'addEncryptedFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const EncryptedFile &, std::false_type>,
        // method 'removeEncryptedFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const EncryptedFile &, std::false_type>,
        // method 'removeAllEncryptedFiles'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'initMetadata'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'initEmptyMetadata'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'initEmptyMetadataLegacy'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setupExistingMetadata'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        // method 'setupExistingMetadataLegacy'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        // method 'setupVersionFromExistingMetadata'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        // method 'startFetchRootE2eeFolderMetadata'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'slotRootE2eeFolderMetadataReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'updateUsersEncryptedMetadataKey'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'createNewMetadataKeyForEncryption'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'emitSetupComplete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void OCC::FolderMetadata::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FolderMetadata *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setupComplete(); break;
        case 1: _t->addEncryptedFile((*reinterpret_cast< std::add_pointer_t<EncryptedFile>>(_a[1]))); break;
        case 2: _t->removeEncryptedFile((*reinterpret_cast< std::add_pointer_t<EncryptedFile>>(_a[1]))); break;
        case 3: _t->removeAllEncryptedFiles(); break;
        case 4: _t->initMetadata(); break;
        case 5: _t->initEmptyMetadata(); break;
        case 6: _t->initEmptyMetadataLegacy(); break;
        case 7: _t->setupExistingMetadata((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 8: _t->setupExistingMetadataLegacy((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 9: _t->setupVersionFromExistingMetadata((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 10: _t->startFetchRootE2eeFolderMetadata((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 11: _t->slotRootE2eeFolderMetadataReceived((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 12: _t->updateUsersEncryptedMetadataKey(); break;
        case 13: _t->createNewMetadataKeyForEncryption(); break;
        case 14: _t->emitSetupComplete(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FolderMetadata::*)();
            if (_t _q_method = &FolderMetadata::setupComplete; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *OCC::FolderMetadata::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::FolderMetadata::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPEFolderMetadataENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OCC::FolderMetadata::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
    }
    return _id;
}

// SIGNAL 0
void OCC::FolderMetadata::setupComplete()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
