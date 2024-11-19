/****************************************************************************
** Meta object code from reading C++ file 'propagateupload.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/libsync/propagateupload.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'propagateupload.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSOCCSCOPEUploadDeviceENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPEUploadDeviceENDCLASS = QtMocHelpers::stringData(
    "OCC::UploadDevice",
    "slotJobUploadProgress",
    "",
    "sent",
    "t"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPEUploadDeviceENDCLASS[] = {

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
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    3,    4,

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::UploadDevice::staticMetaObject = { {
    QMetaObject::SuperData::link<QIODevice::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPEUploadDeviceENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPEUploadDeviceENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPEUploadDeviceENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<UploadDevice, std::true_type>,
        // method 'slotJobUploadProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>
    >,
    nullptr
} };

void OCC::UploadDevice::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UploadDevice *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->slotJobUploadProgress((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<qint64>>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject *OCC::UploadDevice::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::UploadDevice::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPEUploadDeviceENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QIODevice::qt_metacast(_clname);
}

int OCC::UploadDevice::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QIODevice::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSOCCSCOPEPUTFileJobENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPEPUTFileJobENDCLASS = QtMocHelpers::stringData(
    "OCC::PUTFileJob",
    "finishedSignal",
    "",
    "uploadProgress"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPEPUTFileJobENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   26,    2, 0x06,    1 /* Public */,
       3,    2,   27,    2, 0x06,    2 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    2,    2,

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::PUTFileJob::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractNetworkJob::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPEPUTFileJobENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPEPUTFileJobENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPEPUTFileJobENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PUTFileJob, std::true_type>,
        // method 'finishedSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'uploadProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>
    >,
    nullptr
} };

void OCC::PUTFileJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PUTFileJob *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->finishedSignal(); break;
        case 1: _t->uploadProgress((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<qint64>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PUTFileJob::*)();
            if (_t _q_method = &PUTFileJob::finishedSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PUTFileJob::*)(qint64 , qint64 );
            if (_t _q_method = &PUTFileJob::uploadProgress; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *OCC::PUTFileJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::PUTFileJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPEPUTFileJobENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return AbstractNetworkJob::qt_metacast(_clname);
}

int OCC::PUTFileJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractNetworkJob::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void OCC::PUTFileJob::finishedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void OCC::PUTFileJob::uploadProgress(qint64 _t1, qint64 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSOCCSCOPEPollJobENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPEPollJobENDCLASS = QtMocHelpers::stringData(
    "OCC::PollJob",
    "finishedSignal",
    ""
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPEPollJobENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   20,    2, 0x06,    1 /* Public */,

 // signals: parameters
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::PollJob::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractNetworkJob::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPEPollJobENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPEPollJobENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPEPollJobENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PollJob, std::true_type>,
        // method 'finishedSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void OCC::PollJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PollJob *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->finishedSignal(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PollJob::*)();
            if (_t _q_method = &PollJob::finishedSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
    (void)_a;
}

const QMetaObject *OCC::PollJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::PollJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPEPollJobENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return AbstractNetworkJob::qt_metacast(_clname);
}

int OCC::PollJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractNetworkJob::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void OCC::PollJob::finishedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSOCCSCOPEPropagateUploadFileCommonENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPEPropagateUploadFileCommonENDCLASS = QtMocHelpers::stringData(
    "OCC::PropagateUploadFileCommon",
    "slotComputeContentChecksum",
    "",
    "slotComputeTransmissionChecksum",
    "contentChecksumType",
    "contentChecksum",
    "slotStartUpload",
    "transmissionChecksumType",
    "transmissionChecksum",
    "slotFolderUnlocked",
    "folderId",
    "httpReturnCode",
    "slotOnErrorStartFolderUnlock",
    "SyncFileItem::Status",
    "status",
    "errorString",
    "slotJobDestroyed",
    "job",
    "slotPollFinished"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPEPropagateUploadFileCommonENDCLASS[] = {

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
       1,    0,   56,    2, 0x08,    1 /* Private */,
       3,    2,   57,    2, 0x08,    2 /* Private */,
       6,    2,   62,    2, 0x08,    5 /* Private */,
       9,    2,   67,    2, 0x08,    8 /* Private */,
      12,    2,   72,    2, 0x08,   11 /* Private */,
      16,    1,   77,    2, 0x0a,   14 /* Public */,
      18,    0,   80,    2, 0x08,   16 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::QByteArray,    4,    5,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::QByteArray,    7,    8,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::Int,   10,   11,
    QMetaType::Void, 0x80000000 | 13, QMetaType::QString,   14,   15,
    QMetaType::Void, QMetaType::QObjectStar,   17,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::PropagateUploadFileCommon::staticMetaObject = { {
    QMetaObject::SuperData::link<PropagateItemJob::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPEPropagateUploadFileCommonENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPEPropagateUploadFileCommonENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPEPropagateUploadFileCommonENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PropagateUploadFileCommon, std::true_type>,
        // method 'slotComputeContentChecksum'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotComputeTransmissionChecksum'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        // method 'slotStartUpload'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        // method 'slotFolderUnlocked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'slotOnErrorStartFolderUnlock'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<SyncFileItem::Status, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'slotJobDestroyed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QObject *, std::false_type>,
        // method 'slotPollFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void OCC::PropagateUploadFileCommon::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PropagateUploadFileCommon *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->slotComputeContentChecksum(); break;
        case 1: _t->slotComputeTransmissionChecksum((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[2]))); break;
        case 2: _t->slotStartUpload((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[2]))); break;
        case 3: _t->slotFolderUnlocked((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 4: _t->slotOnErrorStartFolderUnlock((*reinterpret_cast< std::add_pointer_t<SyncFileItem::Status>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 5: _t->slotJobDestroyed((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1]))); break;
        case 6: _t->slotPollFinished(); break;
        default: ;
        }
    }
}

const QMetaObject *OCC::PropagateUploadFileCommon::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::PropagateUploadFileCommon::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPEPropagateUploadFileCommonENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return PropagateItemJob::qt_metacast(_clname);
}

int OCC::PropagateUploadFileCommon::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PropagateItemJob::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSOCCSCOPEPropagateUploadFileV1ENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPEPropagateUploadFileV1ENDCLASS = QtMocHelpers::stringData(
    "OCC::PropagateUploadFileV1",
    "abort",
    "",
    "OCC::PropagatorJob::AbortType",
    "abortType",
    "startNextChunk",
    "slotPutFinished",
    "slotUploadProgress"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPEPropagateUploadFileV1ENDCLASS[] = {

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
       1,    1,   38,    2, 0x0a,    1 /* Public */,
       5,    0,   41,    2, 0x08,    3 /* Private */,
       6,    0,   42,    2, 0x08,    4 /* Private */,
       7,    2,   43,    2, 0x08,    5 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    2,    2,

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::PropagateUploadFileV1::staticMetaObject = { {
    QMetaObject::SuperData::link<PropagateUploadFileCommon::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPEPropagateUploadFileV1ENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPEPropagateUploadFileV1ENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPEPropagateUploadFileV1ENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PropagateUploadFileV1, std::true_type>,
        // method 'abort'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::PropagatorJob::AbortType, std::false_type>,
        // method 'startNextChunk'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotPutFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotUploadProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>
    >,
    nullptr
} };

void OCC::PropagateUploadFileV1::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PropagateUploadFileV1 *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->abort((*reinterpret_cast< std::add_pointer_t<OCC::PropagatorJob::AbortType>>(_a[1]))); break;
        case 1: _t->startNextChunk(); break;
        case 2: _t->slotPutFinished(); break;
        case 3: _t->slotUploadProgress((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<qint64>>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject *OCC::PropagateUploadFileV1::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::PropagateUploadFileV1::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPEPropagateUploadFileV1ENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return PropagateUploadFileCommon::qt_metacast(_clname);
}

int OCC::PropagateUploadFileV1::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PropagateUploadFileCommon::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSOCCSCOPEPropagateUploadFileNGENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPEPropagateUploadFileNGENDCLASS = QtMocHelpers::stringData(
    "OCC::PropagateUploadFileNG",
    "abort",
    "",
    "OCC::PropagateUploadFileNG::AbortType",
    "abortType",
    "slotPropfindFinished",
    "slotPropfindFinishedWithError",
    "slotPropfindIterate",
    "name",
    "QMap<QString,QString>",
    "properties",
    "slotDeleteJobFinished",
    "slotMkColFinished",
    "slotPutFinished",
    "slotMoveJobFinished",
    "slotUploadProgress"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPEPropagateUploadFileNGENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   68,    2, 0x0a,    1 /* Public */,
       5,    0,   71,    2, 0x08,    3 /* Private */,
       6,    0,   72,    2, 0x08,    4 /* Private */,
       7,    2,   73,    2, 0x08,    5 /* Private */,
      11,    0,   78,    2, 0x08,    8 /* Private */,
      12,    0,   79,    2, 0x08,    9 /* Private */,
      13,    0,   80,    2, 0x08,   10 /* Private */,
      14,    0,   81,    2, 0x08,   11 /* Private */,
      15,    2,   82,    2, 0x08,   12 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 9,    8,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    2,    2,

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::PropagateUploadFileNG::staticMetaObject = { {
    QMetaObject::SuperData::link<PropagateUploadFileCommon::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPEPropagateUploadFileNGENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPEPropagateUploadFileNGENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPEPropagateUploadFileNGENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PropagateUploadFileNG, std::true_type>,
        // method 'abort'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::PropagateUploadFileNG::AbortType, std::false_type>,
        // method 'slotPropfindFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotPropfindFinishedWithError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotPropfindIterate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QMap<QString,QString> &, std::false_type>,
        // method 'slotDeleteJobFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotMkColFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotPutFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotMoveJobFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotUploadProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>
    >,
    nullptr
} };

void OCC::PropagateUploadFileNG::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PropagateUploadFileNG *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->abort((*reinterpret_cast< std::add_pointer_t<OCC::PropagateUploadFileNG::AbortType>>(_a[1]))); break;
        case 1: _t->slotPropfindFinished(); break;
        case 2: _t->slotPropfindFinishedWithError(); break;
        case 3: _t->slotPropfindIterate((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QMap<QString,QString>>>(_a[2]))); break;
        case 4: _t->slotDeleteJobFinished(); break;
        case 5: _t->slotMkColFinished(); break;
        case 6: _t->slotPutFinished(); break;
        case 7: _t->slotMoveJobFinished(); break;
        case 8: _t->slotUploadProgress((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<qint64>>(_a[2]))); break;
        default: ;
        }
    }
}

const QMetaObject *OCC::PropagateUploadFileNG::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::PropagateUploadFileNG::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPEPropagateUploadFileNGENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return PropagateUploadFileCommon::qt_metacast(_clname);
}

int OCC::PropagateUploadFileNG::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PropagateUploadFileCommon::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}
QT_WARNING_POP
