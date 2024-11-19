/****************************************************************************
** Meta object code from reading C++ file 'encryptedfoldermetadatahandler.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/libsync/encryptedfoldermetadatahandler.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'encryptedfoldermetadatahandler.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSOCCSCOPEEncryptedFolderMetadataHandlerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPEEncryptedFolderMetadataHandlerENDCLASS = QtMocHelpers::stringData(
    "OCC::EncryptedFolderMetadataHandler",
    "fetchFinished",
    "",
    "code",
    "message",
    "uploadFinished",
    "folderUnlocked",
    "folderId",
    "httpStatus",
    "slotFolderEncryptedIdReceived",
    "list",
    "slotFolderEncryptedIdError",
    "QNetworkReply*",
    "reply",
    "slotMetadataReceived",
    "json",
    "statusCode",
    "slotMetadataReceivedError",
    "httpReturnCode",
    "slotFolderLockedSuccessfully",
    "token",
    "slotFolderLockedError",
    "httpErrorCode",
    "slotUploadMetadataSuccess",
    "slotUploadMetadataError",
    "slotEmitUploadSuccess",
    "slotEmitUploadError",
    "FetchMode",
    "NonEmptyMetadata",
    "AllowEmptyMetadata",
    "UploadMode",
    "DoNotKeepLock",
    "KeepLock",
    "UnlockFolderWithResult",
    "Success",
    "Failure"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPEEncryptedFolderMetadataHandlerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       3,  161, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,  104,    2, 0x06,    4 /* Public */,
       1,    1,  109,    2, 0x26,    7 /* Public | MethodCloned */,
       5,    2,  112,    2, 0x06,    9 /* Public */,
       5,    1,  117,    2, 0x26,   12 /* Public | MethodCloned */,
       6,    2,  120,    2, 0x06,   14 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       9,    1,  125,    2, 0x08,   17 /* Private */,
      11,    1,  128,    2, 0x08,   19 /* Private */,
      14,    2,  131,    2, 0x08,   21 /* Private */,
      17,    2,  136,    2, 0x08,   24 /* Private */,
      19,    2,  141,    2, 0x08,   27 /* Private */,
      21,    2,  146,    2, 0x08,   30 /* Private */,
      23,    1,  151,    2, 0x08,   33 /* Private */,
      24,    2,  154,    2, 0x08,   35 /* Private */,
      25,    0,  159,    2, 0x08,   38 /* Private */,
      26,    0,  160,    2, 0x08,   39 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    3,    4,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::Int,    7,    8,

 // slots: parameters
    QMetaType::Void, QMetaType::QStringList,   10,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, QMetaType::QJsonDocument, QMetaType::Int,   15,   16,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::Int,    7,   18,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::QByteArray,    7,   20,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::Int,    7,   22,
    QMetaType::Void, QMetaType::QByteArray,    7,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::Int,    7,   18,
    QMetaType::Void,
    QMetaType::Void,

 // enums: name, alias, flags, count, data
      27,   27, 0x2,    2,  176,
      30,   30, 0x2,    2,  180,
      33,   33, 0x2,    2,  184,

 // enum data: key, value
      28, uint(OCC::EncryptedFolderMetadataHandler::FetchMode::NonEmptyMetadata),
      29, uint(OCC::EncryptedFolderMetadataHandler::FetchMode::AllowEmptyMetadata),
      31, uint(OCC::EncryptedFolderMetadataHandler::UploadMode::DoNotKeepLock),
      32, uint(OCC::EncryptedFolderMetadataHandler::UploadMode::KeepLock),
      34, uint(OCC::EncryptedFolderMetadataHandler::UnlockFolderWithResult::Success),
      35, uint(OCC::EncryptedFolderMetadataHandler::UnlockFolderWithResult::Failure),

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::EncryptedFolderMetadataHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPEEncryptedFolderMetadataHandlerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPEEncryptedFolderMetadataHandlerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPEEncryptedFolderMetadataHandlerENDCLASS_t,
        // enum 'FetchMode'
        QtPrivate::TypeAndForceComplete<EncryptedFolderMetadataHandler::FetchMode, std::true_type>,
        // enum 'UploadMode'
        QtPrivate::TypeAndForceComplete<EncryptedFolderMetadataHandler::UploadMode, std::true_type>,
        // enum 'UnlockFolderWithResult'
        QtPrivate::TypeAndForceComplete<EncryptedFolderMetadataHandler::UnlockFolderWithResult, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<EncryptedFolderMetadataHandler, std::true_type>,
        // method 'fetchFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'fetchFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'uploadFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'uploadFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'folderUnlocked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'slotFolderEncryptedIdReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QStringList &, std::false_type>,
        // method 'slotFolderEncryptedIdError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>,
        // method 'slotMetadataReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QJsonDocument &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'slotMetadataReceivedError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'slotFolderLockedSuccessfully'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        // method 'slotFolderLockedError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'slotUploadMetadataSuccess'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        // method 'slotUploadMetadataError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'slotEmitUploadSuccess'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotEmitUploadError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void OCC::EncryptedFolderMetadataHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EncryptedFolderMetadataHandler *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->fetchFinished((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 1: _t->fetchFinished((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->uploadFinished((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 3: _t->uploadFinished((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->folderUnlocked((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 5: _t->slotFolderEncryptedIdReceived((*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[1]))); break;
        case 6: _t->slotFolderEncryptedIdError((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1]))); break;
        case 7: _t->slotMetadataReceived((*reinterpret_cast< std::add_pointer_t<QJsonDocument>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 8: _t->slotMetadataReceivedError((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 9: _t->slotFolderLockedSuccessfully((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[2]))); break;
        case 10: _t->slotFolderLockedError((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 11: _t->slotUploadMetadataSuccess((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 12: _t->slotUploadMetadataError((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 13: _t->slotEmitUploadSuccess(); break;
        case 14: _t->slotEmitUploadError(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (EncryptedFolderMetadataHandler::*)(int , const QString & );
            if (_t _q_method = &EncryptedFolderMetadataHandler::fetchFinished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (EncryptedFolderMetadataHandler::*)(int , const QString & );
            if (_t _q_method = &EncryptedFolderMetadataHandler::uploadFinished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (EncryptedFolderMetadataHandler::*)(const QByteArray & , int );
            if (_t _q_method = &EncryptedFolderMetadataHandler::folderUnlocked; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject *OCC::EncryptedFolderMetadataHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::EncryptedFolderMetadataHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPEEncryptedFolderMetadataHandlerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OCC::EncryptedFolderMetadataHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
void OCC::EncryptedFolderMetadataHandler::fetchFinished(int _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 2
void OCC::EncryptedFolderMetadataHandler::uploadFinished(int _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 4
void OCC::EncryptedFolderMetadataHandler::folderUnlocked(const QByteArray & _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
