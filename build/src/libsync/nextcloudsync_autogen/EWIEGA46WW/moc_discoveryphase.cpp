/****************************************************************************
** Meta object code from reading C++ file 'discoveryphase.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/libsync/discoveryphase.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'discoveryphase.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSOCCSCOPEDiscoverySingleLocalDirectoryJobENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPEDiscoverySingleLocalDirectoryJobENDCLASS = QtMocHelpers::stringData(
    "OCC::DiscoverySingleLocalDirectoryJob",
    "finished",
    "",
    "QList<OCC::LocalInfo>",
    "result",
    "finishedFatalError",
    "errorString",
    "finishedNonFatalError",
    "itemDiscovered",
    "OCC::SyncFileItemPtr",
    "item",
    "childIgnored",
    "b"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPEDiscoverySingleLocalDirectoryJobENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   44,    2, 0x06,    1 /* Public */,
       5,    1,   47,    2, 0x06,    3 /* Public */,
       7,    1,   50,    2, 0x06,    5 /* Public */,
       8,    1,   53,    2, 0x06,    7 /* Public */,
      11,    1,   56,    2, 0x06,    9 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, 0x80000000 | 9,   10,
    QMetaType::Void, QMetaType::Bool,   12,

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::DiscoverySingleLocalDirectoryJob::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPEDiscoverySingleLocalDirectoryJobENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPEDiscoverySingleLocalDirectoryJobENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPEDiscoverySingleLocalDirectoryJobENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DiscoverySingleLocalDirectoryJob, std::true_type>,
        // method 'finished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QVector<OCC::LocalInfo>, std::false_type>,
        // method 'finishedFatalError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'finishedNonFatalError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'itemDiscovered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::SyncFileItemPtr, std::false_type>,
        // method 'childIgnored'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void OCC::DiscoverySingleLocalDirectoryJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DiscoverySingleLocalDirectoryJob *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->finished((*reinterpret_cast< std::add_pointer_t<QList<OCC::LocalInfo>>>(_a[1]))); break;
        case 1: _t->finishedFatalError((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->finishedNonFatalError((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->itemDiscovered((*reinterpret_cast< std::add_pointer_t<OCC::SyncFileItemPtr>>(_a[1]))); break;
        case 4: _t->childIgnored((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::SyncFileItemPtr >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DiscoverySingleLocalDirectoryJob::*)(QVector<OCC::LocalInfo> );
            if (_t _q_method = &DiscoverySingleLocalDirectoryJob::finished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DiscoverySingleLocalDirectoryJob::*)(QString );
            if (_t _q_method = &DiscoverySingleLocalDirectoryJob::finishedFatalError; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DiscoverySingleLocalDirectoryJob::*)(QString );
            if (_t _q_method = &DiscoverySingleLocalDirectoryJob::finishedNonFatalError; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DiscoverySingleLocalDirectoryJob::*)(OCC::SyncFileItemPtr );
            if (_t _q_method = &DiscoverySingleLocalDirectoryJob::itemDiscovered; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (DiscoverySingleLocalDirectoryJob::*)(bool );
            if (_t _q_method = &DiscoverySingleLocalDirectoryJob::childIgnored; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject *OCC::DiscoverySingleLocalDirectoryJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::DiscoverySingleLocalDirectoryJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPEDiscoverySingleLocalDirectoryJobENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QRunnable"))
        return static_cast< QRunnable*>(this);
    return QObject::qt_metacast(_clname);
}

int OCC::DiscoverySingleLocalDirectoryJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
void OCC::DiscoverySingleLocalDirectoryJob::finished(QVector<OCC::LocalInfo> _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OCC::DiscoverySingleLocalDirectoryJob::finishedFatalError(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void OCC::DiscoverySingleLocalDirectoryJob::finishedNonFatalError(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void OCC::DiscoverySingleLocalDirectoryJob::itemDiscovered(OCC::SyncFileItemPtr _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void OCC::DiscoverySingleLocalDirectoryJob::childIgnored(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSOCCSCOPEDiscoverySingleDirectoryJobENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPEDiscoverySingleDirectoryJobENDCLASS = QtMocHelpers::stringData(
    "OCC::DiscoverySingleDirectoryJob",
    "firstDirectoryPermissions",
    "",
    "OCC::RemotePermissions",
    "etag",
    "time",
    "finished",
    "OCC::HttpResult<QList<OCC::RemoteInfo>>",
    "result",
    "directoryListingIteratedSlot",
    "QMap<QString,QString>",
    "lsJobFinishedWithoutErrorSlot",
    "lsJobFinishedWithErrorSlot",
    "QNetworkReply*",
    "fetchE2eMetadata",
    "metadataReceived",
    "json",
    "statusCode",
    "metadataError",
    "fileId",
    "httpReturnCode"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPEDiscoverySingleDirectoryJobENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   68,    2, 0x06,    1 /* Public */,
       4,    2,   71,    2, 0x06,    3 /* Public */,
       6,    1,   76,    2, 0x06,    6 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       9,    2,   79,    2, 0x08,    8 /* Private */,
      11,    0,   84,    2, 0x08,   11 /* Private */,
      12,    1,   85,    2, 0x08,   12 /* Private */,
      14,    0,   88,    2, 0x08,   14 /* Private */,
      15,    2,   89,    2, 0x08,   15 /* Private */,
      18,    2,   94,    2, 0x08,   18 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::QDateTime,    2,    5,
    QMetaType::Void, 0x80000000 | 7,    8,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 10,    2,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QJsonDocument, QMetaType::Int,   16,   17,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::Int,   19,   20,

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::DiscoverySingleDirectoryJob::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPEDiscoverySingleDirectoryJobENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPEDiscoverySingleDirectoryJobENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPEDiscoverySingleDirectoryJobENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DiscoverySingleDirectoryJob, std::true_type>,
        // method 'firstDirectoryPermissions'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::RemotePermissions, std::false_type>,
        // method 'etag'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QDateTime &, std::false_type>,
        // method 'finished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::HttpResult<QVector<OCC::RemoteInfo>> &, std::false_type>,
        // method 'directoryListingIteratedSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QMap<QString,QString> &, std::false_type>,
        // method 'lsJobFinishedWithoutErrorSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'lsJobFinishedWithErrorSlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>,
        // method 'fetchE2eMetadata'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'metadataReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QJsonDocument &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'metadataError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>
    >,
    nullptr
} };

void OCC::DiscoverySingleDirectoryJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DiscoverySingleDirectoryJob *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->firstDirectoryPermissions((*reinterpret_cast< std::add_pointer_t<OCC::RemotePermissions>>(_a[1]))); break;
        case 1: _t->etag((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QDateTime>>(_a[2]))); break;
        case 2: _t->finished((*reinterpret_cast< std::add_pointer_t<OCC::HttpResult<QList<OCC::RemoteInfo>>>>(_a[1]))); break;
        case 3: _t->directoryListingIteratedSlot((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QMap<QString,QString>>>(_a[2]))); break;
        case 4: _t->lsJobFinishedWithoutErrorSlot(); break;
        case 5: _t->lsJobFinishedWithErrorSlot((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1]))); break;
        case 6: _t->fetchE2eMetadata(); break;
        case 7: _t->metadataReceived((*reinterpret_cast< std::add_pointer_t<QJsonDocument>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 8: _t->metadataError((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::RemotePermissions >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkReply* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DiscoverySingleDirectoryJob::*)(OCC::RemotePermissions );
            if (_t _q_method = &DiscoverySingleDirectoryJob::firstDirectoryPermissions; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DiscoverySingleDirectoryJob::*)(const QByteArray & , const QDateTime & );
            if (_t _q_method = &DiscoverySingleDirectoryJob::etag; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DiscoverySingleDirectoryJob::*)(const OCC::HttpResult<QVector<OCC::RemoteInfo>> & );
            if (_t _q_method = &DiscoverySingleDirectoryJob::finished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject *OCC::DiscoverySingleDirectoryJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::DiscoverySingleDirectoryJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPEDiscoverySingleDirectoryJobENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OCC::DiscoverySingleDirectoryJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void OCC::DiscoverySingleDirectoryJob::firstDirectoryPermissions(OCC::RemotePermissions _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OCC::DiscoverySingleDirectoryJob::etag(const QByteArray & _t1, const QDateTime & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void OCC::DiscoverySingleDirectoryJob::finished(const OCC::HttpResult<QVector<OCC::RemoteInfo>> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSOCCSCOPEDiscoveryPhaseENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPEDiscoveryPhaseENDCLASS = QtMocHelpers::stringData(
    "OCC::DiscoveryPhase",
    "fatalError",
    "",
    "errorString",
    "OCC::ErrorCategory",
    "errorCategory",
    "itemDiscovered",
    "OCC::SyncFileItemPtr",
    "item",
    "finished",
    "newBigFolder",
    "folder",
    "isExternal",
    "existingFolderNowBig",
    "silentlyExcluded",
    "folderPath",
    "addErrorToGui",
    "SyncFileItem::Status",
    "status",
    "errorMessage",
    "subject",
    "category",
    "remnantReadOnlyFolderDiscovered",
    "slotItemDiscovered"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPEDiscoveryPhaseENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   68,    2, 0x06,    1 /* Public */,
       6,    1,   73,    2, 0x06,    4 /* Public */,
       9,    0,   76,    2, 0x06,    6 /* Public */,
      10,    2,   77,    2, 0x06,    7 /* Public */,
      13,    1,   82,    2, 0x06,   10 /* Public */,
      14,    1,   85,    2, 0x06,   12 /* Public */,
      16,    4,   88,    2, 0x06,   14 /* Public */,
      22,    1,   97,    2, 0x06,   19 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      23,    1,  100,    2, 0x08,   21 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 4,    3,    5,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   11,   12,
    QMetaType::Void, QMetaType::QString,   11,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void, 0x80000000 | 17, QMetaType::QString, QMetaType::QString, 0x80000000 | 4,   18,   19,   20,   21,
    QMetaType::Void, 0x80000000 | 7,    8,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 7,    8,

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::DiscoveryPhase::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPEDiscoveryPhaseENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPEDiscoveryPhaseENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPEDiscoveryPhaseENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DiscoveryPhase, std::true_type>,
        // method 'fatalError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::ErrorCategory, std::false_type>,
        // method 'itemDiscovered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::SyncFileItemPtr &, std::false_type>,
        // method 'finished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'newBigFolder'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'existingFolderNowBig'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'silentlyExcluded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'addErrorToGui'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const SyncFileItem::Status, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::ErrorCategory, std::false_type>,
        // method 'remnantReadOnlyFolderDiscovered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::SyncFileItemPtr &, std::false_type>,
        // method 'slotItemDiscovered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::SyncFileItemPtr &, std::false_type>
    >,
    nullptr
} };

void OCC::DiscoveryPhase::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DiscoveryPhase *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->fatalError((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<OCC::ErrorCategory>>(_a[2]))); break;
        case 1: _t->itemDiscovered((*reinterpret_cast< std::add_pointer_t<OCC::SyncFileItemPtr>>(_a[1]))); break;
        case 2: _t->finished(); break;
        case 3: _t->newBigFolder((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 4: _t->existingFolderNowBig((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->silentlyExcluded((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->addErrorToGui((*reinterpret_cast< std::add_pointer_t<SyncFileItem::Status>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<OCC::ErrorCategory>>(_a[4]))); break;
        case 7: _t->remnantReadOnlyFolderDiscovered((*reinterpret_cast< std::add_pointer_t<OCC::SyncFileItemPtr>>(_a[1]))); break;
        case 8: _t->slotItemDiscovered((*reinterpret_cast< std::add_pointer_t<OCC::SyncFileItemPtr>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::SyncFileItemPtr >(); break;
            }
            break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::SyncFileItemPtr >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::SyncFileItemPtr >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DiscoveryPhase::*)(const QString & , const OCC::ErrorCategory );
            if (_t _q_method = &DiscoveryPhase::fatalError; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DiscoveryPhase::*)(const OCC::SyncFileItemPtr & );
            if (_t _q_method = &DiscoveryPhase::itemDiscovered; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DiscoveryPhase::*)();
            if (_t _q_method = &DiscoveryPhase::finished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DiscoveryPhase::*)(const QString & , bool );
            if (_t _q_method = &DiscoveryPhase::newBigFolder; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (DiscoveryPhase::*)(const QString & );
            if (_t _q_method = &DiscoveryPhase::existingFolderNowBig; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (DiscoveryPhase::*)(const QString & );
            if (_t _q_method = &DiscoveryPhase::silentlyExcluded; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (DiscoveryPhase::*)(const SyncFileItem::Status , const QString & , const QString & , const OCC::ErrorCategory );
            if (_t _q_method = &DiscoveryPhase::addErrorToGui; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (DiscoveryPhase::*)(const OCC::SyncFileItemPtr & );
            if (_t _q_method = &DiscoveryPhase::remnantReadOnlyFolderDiscovered; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
    }
}

const QMetaObject *OCC::DiscoveryPhase::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::DiscoveryPhase::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPEDiscoveryPhaseENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OCC::DiscoveryPhase::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void OCC::DiscoveryPhase::fatalError(const QString & _t1, const OCC::ErrorCategory _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OCC::DiscoveryPhase::itemDiscovered(const OCC::SyncFileItemPtr & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void OCC::DiscoveryPhase::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void OCC::DiscoveryPhase::newBigFolder(const QString & _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void OCC::DiscoveryPhase::existingFolderNowBig(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void OCC::DiscoveryPhase::silentlyExcluded(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void OCC::DiscoveryPhase::addErrorToGui(const SyncFileItem::Status _t1, const QString & _t2, const QString & _t3, const OCC::ErrorCategory _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void OCC::DiscoveryPhase::remnantReadOnlyFolderDiscovered(const OCC::SyncFileItemPtr & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSOCCSCOPELocalDiscoveryEnumsENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPELocalDiscoveryEnumsENDCLASS = QtMocHelpers::stringData(
    "OCC::LocalDiscoveryEnums",
    "LocalDiscoveryStyle",
    "FilesystemOnly",
    "DatabaseAndFilesystem"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPELocalDiscoveryEnumsENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x2,    2,   19,

 // enum data: key, value
       2, uint(OCC::LocalDiscoveryEnums::LocalDiscoveryStyle::FilesystemOnly),
       3, uint(OCC::LocalDiscoveryEnums::LocalDiscoveryStyle::DatabaseAndFilesystem),

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::LocalDiscoveryEnums::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSOCCSCOPELocalDiscoveryEnumsENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPELocalDiscoveryEnumsENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPELocalDiscoveryEnumsENDCLASS_t,
        // enum 'LocalDiscoveryStyle'
        QtPrivate::TypeAndForceComplete<LocalDiscoveryEnums::LocalDiscoveryStyle, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<void, std::true_type>
    >,
    nullptr
} };

QT_WARNING_POP
