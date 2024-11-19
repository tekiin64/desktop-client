/****************************************************************************
** Meta object code from reading C++ file 'propagatedownload.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/libsync/propagatedownload.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'propagatedownload.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSOCCSCOPEGETFileJobENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPEGETFileJobENDCLASS = QtMocHelpers::stringData(
    "OCC::GETFileJob",
    "finishedSignal",
    "",
    "downloadProgress",
    "slotReadyRead",
    "slotMetaDataChanged"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPEGETFileJobENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x06,    1 /* Public */,
       3,    2,   39,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,   44,    2, 0x08,    5 /* Private */,
       5,    0,   45,    2, 0x08,    6 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    2,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::GETFileJob::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractNetworkJob::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPEGETFileJobENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPEGETFileJobENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPEGETFileJobENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<GETFileJob, std::true_type>,
        // method 'finishedSignal'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'downloadProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'slotReadyRead'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotMetaDataChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void OCC::GETFileJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GETFileJob *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->finishedSignal(); break;
        case 1: _t->downloadProgress((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<qint64>>(_a[2]))); break;
        case 2: _t->slotReadyRead(); break;
        case 3: _t->slotMetaDataChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (GETFileJob::*)();
            if (_t _q_method = &GETFileJob::finishedSignal; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (GETFileJob::*)(qint64 , qint64 );
            if (_t _q_method = &GETFileJob::downloadProgress; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *OCC::GETFileJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::GETFileJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPEGETFileJobENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return AbstractNetworkJob::qt_metacast(_clname);
}

int OCC::GETFileJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractNetworkJob::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void OCC::GETFileJob::finishedSignal()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void OCC::GETFileJob::downloadProgress(qint64 _t1, qint64 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSOCCSCOPEGETEncryptedFileJobENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPEGETEncryptedFileJobENDCLASS = QtMocHelpers::stringData(
    "OCC::GETEncryptedFileJob"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPEGETEncryptedFileJobENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject OCC::GETEncryptedFileJob::staticMetaObject = { {
    QMetaObject::SuperData::link<GETFileJob::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPEGETEncryptedFileJobENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPEGETEncryptedFileJobENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPEGETEncryptedFileJobENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<GETEncryptedFileJob, std::true_type>
    >,
    nullptr
} };

void OCC::GETEncryptedFileJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *OCC::GETEncryptedFileJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::GETEncryptedFileJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPEGETEncryptedFileJobENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return GETFileJob::qt_metacast(_clname);
}

int OCC::GETEncryptedFileJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = GETFileJob::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSOCCSCOPEPropagateDownloadFileENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPEPropagateDownloadFileENDCLASS = QtMocHelpers::stringData(
    "OCC::PropagateDownloadFile",
    "conflictChecksumComputed",
    "",
    "checksumType",
    "checksum",
    "startDownload",
    "slotGetFinished",
    "transmissionChecksumValidated",
    "contentChecksumComputed",
    "localFileContentChecksumComputed",
    "finalizeDownload",
    "downloadFinished",
    "updateMetadata",
    "isConflict",
    "abort",
    "PropagatorJob::AbortType",
    "abortType",
    "slotDownloadProgress",
    "slotChecksumFail",
    "errMsg",
    "calculatedChecksumType",
    "calculatedChecksum",
    "ValidateChecksumHeader::FailureReason",
    "reason",
    "processChecksumRecalculate",
    "const QNetworkReply*",
    "reply",
    "originalChecksumHeader",
    "errorMessage",
    "checksumValidateFailedAbortDownload"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPEPropagateDownloadFileENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   98,    2, 0x08,    1 /* Private */,
       5,    0,  103,    2, 0x08,    4 /* Private */,
       6,    0,  104,    2, 0x08,    5 /* Private */,
       7,    2,  105,    2, 0x08,    6 /* Private */,
       8,    2,  110,    2, 0x08,    9 /* Private */,
       9,    2,  115,    2, 0x08,   12 /* Private */,
      10,    0,  120,    2, 0x08,   15 /* Private */,
      11,    0,  121,    2, 0x08,   16 /* Private */,
      12,    1,  122,    2, 0x08,   17 /* Private */,
      14,    1,  125,    2, 0x08,   19 /* Private */,
      17,    2,  128,    2, 0x08,   21 /* Private */,
      18,    4,  133,    2, 0x08,   24 /* Private */,
      24,    3,  142,    2, 0x08,   29 /* Private */,
      29,    1,  149,    2, 0x08,   33 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QByteArray, QMetaType::QByteArray,    3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::QByteArray,    3,    4,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::QByteArray,    3,    4,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::QByteArray,    3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    2,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QByteArray, QMetaType::QByteArray, 0x80000000 | 22,   19,   20,   21,   23,
    QMetaType::Void, 0x80000000 | 25, QMetaType::QByteArray, QMetaType::QString,   26,   27,   28,
    QMetaType::Void, QMetaType::QString,   19,

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::PropagateDownloadFile::staticMetaObject = { {
    QMetaObject::SuperData::link<PropagateItemJob::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPEPropagateDownloadFileENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPEPropagateDownloadFileENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPEPropagateDownloadFileENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PropagateDownloadFile, std::true_type>,
        // method 'conflictChecksumComputed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        // method 'startDownload'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotGetFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'transmissionChecksumValidated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        // method 'contentChecksumComputed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        // method 'localFileContentChecksumComputed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        // method 'finalizeDownload'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'downloadFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateMetadata'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'abort'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<PropagatorJob::AbortType, std::false_type>,
        // method 'slotDownloadProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'slotChecksumFail'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const ValidateChecksumHeader::FailureReason, std::false_type>,
        // method 'processChecksumRecalculate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QNetworkReply *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'checksumValidateFailedAbortDownload'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void OCC::PropagateDownloadFile::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PropagateDownloadFile *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->conflictChecksumComputed((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[2]))); break;
        case 1: _t->startDownload(); break;
        case 2: _t->slotGetFinished(); break;
        case 3: _t->transmissionChecksumValidated((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[2]))); break;
        case 4: _t->contentChecksumComputed((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[2]))); break;
        case 5: _t->localFileContentChecksumComputed((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[2]))); break;
        case 6: _t->finalizeDownload(); break;
        case 7: _t->downloadFinished(); break;
        case 8: _t->updateMetadata((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: _t->abort((*reinterpret_cast< std::add_pointer_t<PropagatorJob::AbortType>>(_a[1]))); break;
        case 10: _t->slotDownloadProgress((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<qint64>>(_a[2]))); break;
        case 11: _t->slotChecksumFail((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<ValidateChecksumHeader::FailureReason>>(_a[4]))); break;
        case 12: _t->processChecksumRecalculate((*reinterpret_cast< std::add_pointer_t<const QNetworkReply*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 13: _t->checksumValidateFailedAbortDownload((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *OCC::PropagateDownloadFile::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::PropagateDownloadFile::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPEPropagateDownloadFileENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return PropagateItemJob::qt_metacast(_clname);
}

int OCC::PropagateDownloadFile::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PropagateItemJob::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 14;
    }
    return _id;
}
QT_WARNING_POP
