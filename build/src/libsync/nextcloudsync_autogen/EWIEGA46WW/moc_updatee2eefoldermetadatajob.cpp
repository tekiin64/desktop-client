/****************************************************************************
** Meta object code from reading C++ file 'updatee2eefoldermetadatajob.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/libsync/updatee2eefoldermetadatajob.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'updatee2eefoldermetadatajob.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSOCCSCOPEUpdateE2eeFolderMetadataJobENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPEUpdateE2eeFolderMetadataJobENDCLASS = QtMocHelpers::stringData(
    "OCC::UpdateE2eeFolderMetadataJob",
    "fileDropMetadataParsedAndAdjusted",
    "",
    "const OCC::FolderMetadata*",
    "metadata",
    "start",
    "slotFetchMetadataJobFinished",
    "httpReturnCode",
    "message",
    "slotUpdateMetadataFinished",
    "unlockFolder",
    "EncryptedFolderMetadataHandler::UnlockFolderWithResult",
    "result"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPEUpdateE2eeFolderMetadataJobENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   44,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,   47,    2, 0x08,    3 /* Private */,
       6,    2,   48,    2, 0x08,    4 /* Private */,
       9,    2,   53,    2, 0x08,    7 /* Private */,
      10,    1,   58,    2, 0x08,   10 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    7,    8,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    7,    8,
    QMetaType::Void, 0x80000000 | 11,   12,

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::UpdateE2eeFolderMetadataJob::staticMetaObject = { {
    QMetaObject::SuperData::link<PropagatorJob::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPEUpdateE2eeFolderMetadataJobENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPEUpdateE2eeFolderMetadataJobENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPEUpdateE2eeFolderMetadataJobENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<UpdateE2eeFolderMetadataJob, std::true_type>,
        // method 'fileDropMetadataParsedAndAdjusted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::FolderMetadata * const, std::false_type>,
        // method 'start'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotFetchMetadataJobFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'slotUpdateMetadataFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'unlockFolder'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const EncryptedFolderMetadataHandler::UnlockFolderWithResult, std::false_type>
    >,
    nullptr
} };

void OCC::UpdateE2eeFolderMetadataJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UpdateE2eeFolderMetadataJob *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->fileDropMetadataParsedAndAdjusted((*reinterpret_cast< std::add_pointer_t<const OCC::FolderMetadata*>>(_a[1]))); break;
        case 1: _t->start(); break;
        case 2: _t->slotFetchMetadataJobFinished((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 3: _t->slotUpdateMetadataFinished((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 4: _t->unlockFolder((*reinterpret_cast< std::add_pointer_t<EncryptedFolderMetadataHandler::UnlockFolderWithResult>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (UpdateE2eeFolderMetadataJob::*)(const OCC::FolderMetadata * const );
            if (_t _q_method = &UpdateE2eeFolderMetadataJob::fileDropMetadataParsedAndAdjusted; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *OCC::UpdateE2eeFolderMetadataJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::UpdateE2eeFolderMetadataJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPEUpdateE2eeFolderMetadataJobENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return PropagatorJob::qt_metacast(_clname);
}

int OCC::UpdateE2eeFolderMetadataJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PropagatorJob::qt_metacall(_c, _id, _a);
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
void OCC::UpdateE2eeFolderMetadataJob::fileDropMetadataParsedAndAdjusted(const OCC::FolderMetadata * const _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
