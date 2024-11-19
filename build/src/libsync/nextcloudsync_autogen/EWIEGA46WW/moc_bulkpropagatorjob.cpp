/****************************************************************************
** Meta object code from reading C++ file 'bulkpropagatorjob.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/libsync/bulkpropagatorjob.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bulkpropagatorjob.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSOCCSCOPEBulkPropagatorJobENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPEBulkPropagatorJobENDCLASS = QtMocHelpers::stringData(
    "OCC::BulkPropagatorJob",
    "startUploadFile",
    "",
    "OCC::SyncFileItemPtr",
    "item",
    "OCC::BulkPropagatorJob::UploadFileInfo",
    "fileToUpload",
    "slotComputeTransmissionChecksum",
    "slotStartUpload",
    "transmissionChecksumType",
    "transmissionChecksum",
    "slotOnErrorStartFolderUnlock",
    "OCC::SyncFileItem::Status",
    "status",
    "errorString",
    "OCC::ErrorCategory",
    "errorCategory",
    "slotPutFinished",
    "slotUploadProgress",
    "sent",
    "total",
    "slotJobDestroyed",
    "job"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPEBulkPropagatorJobENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   56,    2, 0x08,    1 /* Private */,
       7,    2,   61,    2, 0x08,    4 /* Private */,
       8,    4,   66,    2, 0x08,    7 /* Private */,
      11,    4,   75,    2, 0x08,   12 /* Private */,
      17,    0,   84,    2, 0x08,   17 /* Private */,
      18,    3,   85,    2, 0x08,   18 /* Private */,
      21,    1,   92,    2, 0x08,   22 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5, QMetaType::QByteArray, QMetaType::QByteArray,    4,    6,    9,   10,
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 12, QMetaType::QString, 0x80000000 | 15,    4,   13,   14,   16,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 3, QMetaType::LongLong, QMetaType::LongLong,    4,   19,   20,
    QMetaType::Void, QMetaType::QObjectStar,   22,

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::BulkPropagatorJob::staticMetaObject = { {
    QMetaObject::SuperData::link<PropagatorJob::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPEBulkPropagatorJobENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPEBulkPropagatorJobENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPEBulkPropagatorJobENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<BulkPropagatorJob, std::true_type>,
        // method 'startUploadFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::SyncFileItemPtr, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::BulkPropagatorJob::UploadFileInfo, std::false_type>,
        // method 'slotComputeTransmissionChecksum'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::SyncFileItemPtr, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::BulkPropagatorJob::UploadFileInfo, std::false_type>,
        // method 'slotStartUpload'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::SyncFileItemPtr, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::BulkPropagatorJob::UploadFileInfo, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        // method 'slotOnErrorStartFolderUnlock'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::SyncFileItemPtr, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::SyncFileItem::Status, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::ErrorCategory, std::false_type>,
        // method 'slotPutFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotUploadProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::SyncFileItemPtr, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'slotJobDestroyed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QObject *, std::false_type>
    >,
    nullptr
} };

void OCC::BulkPropagatorJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BulkPropagatorJob *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->startUploadFile((*reinterpret_cast< std::add_pointer_t<OCC::SyncFileItemPtr>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<OCC::BulkPropagatorJob::UploadFileInfo>>(_a[2]))); break;
        case 1: _t->slotComputeTransmissionChecksum((*reinterpret_cast< std::add_pointer_t<OCC::SyncFileItemPtr>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<OCC::BulkPropagatorJob::UploadFileInfo>>(_a[2]))); break;
        case 2: _t->slotStartUpload((*reinterpret_cast< std::add_pointer_t<OCC::SyncFileItemPtr>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<OCC::BulkPropagatorJob::UploadFileInfo>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[4]))); break;
        case 3: _t->slotOnErrorStartFolderUnlock((*reinterpret_cast< std::add_pointer_t<OCC::SyncFileItemPtr>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<OCC::SyncFileItem::Status>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<OCC::ErrorCategory>>(_a[4]))); break;
        case 4: _t->slotPutFinished(); break;
        case 5: _t->slotUploadProgress((*reinterpret_cast< std::add_pointer_t<OCC::SyncFileItemPtr>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<qint64>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<qint64>>(_a[3]))); break;
        case 6: _t->slotJobDestroyed((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1]))); break;
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
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::SyncFileItemPtr >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::SyncFileItemPtr >(); break;
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
    }
}

const QMetaObject *OCC::BulkPropagatorJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::BulkPropagatorJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPEBulkPropagatorJobENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return PropagatorJob::qt_metacast(_clname);
}

int OCC::BulkPropagatorJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PropagatorJob::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
