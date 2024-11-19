/****************************************************************************
** Meta object code from reading C++ file 'updatee2eefolderusersmetadatajob.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/libsync/updatee2eefolderusersmetadatajob.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QSet>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'updatee2eefolderusersmetadatajob.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSOCCSCOPEUpdateE2eeFolderUsersMetadataJobENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPEUpdateE2eeFolderUsersMetadataJobENDCLASS = QtMocHelpers::stringData(
    "OCC::UpdateE2eeFolderUsersMetadataJob",
    "certificateReady",
    "",
    "finished",
    "code",
    "message",
    "folderUnlocked",
    "start",
    "keepLock",
    "setUserData",
    "UpdateE2eeFolderUsersMetadataJob::UserData",
    "userData",
    "setFolderToken",
    "folderToken",
    "setMetadataKeyForEncryption",
    "metadataKey",
    "setMetadataKeyForDecryption",
    "setKeyChecksums",
    "QSet<QByteArray>",
    "keyChecksums",
    "setSubJobSyncItems",
    "QHash<QString,OCC::SyncFileItemPtr>",
    "subJobSyncItems",
    "slotStartE2eeMetadataJobs",
    "slotFetchMetadataJobFinished",
    "statusCode",
    "slotSubJobFinished",
    "slotFolderUnlocked",
    "folderId",
    "httpStatus",
    "slotUpdateMetadataFinished",
    "slotCertificatesFetchedFromServer",
    "QHash<QString,OCC::NextcloudSslCertificate>",
    "results",
    "slotCertificateFetchedFromKeychain",
    "QSslCertificate",
    "certificate"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPEUpdateE2eeFolderUsersMetadataJobENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  140,    2, 0x06,    1 /* Public */,
       3,    2,  141,    2, 0x06,    2 /* Public */,
       3,    1,  146,    2, 0x26,    5 /* Public | MethodCloned */,
       6,    0,  149,    2, 0x06,    7 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    1,  150,    2, 0x0a,    8 /* Public */,
       7,    0,  153,    2, 0x2a,   10 /* Public | MethodCloned */,
       9,    1,  154,    2, 0x0a,   11 /* Public */,
      12,    1,  157,    2, 0x0a,   13 /* Public */,
      14,    1,  160,    2, 0x0a,   15 /* Public */,
      16,    1,  163,    2, 0x0a,   17 /* Public */,
      17,    1,  166,    2, 0x0a,   19 /* Public */,
      20,    1,  169,    2, 0x0a,   21 /* Public */,
      23,    0,  172,    2, 0x08,   23 /* Private */,
      24,    2,  173,    2, 0x08,   24 /* Private */,
      26,    2,  178,    2, 0x08,   27 /* Private */,
      26,    1,  183,    2, 0x28,   30 /* Private | MethodCloned */,
      27,    2,  186,    2, 0x08,   32 /* Private */,
      30,    2,  191,    2, 0x08,   35 /* Private */,
      30,    1,  196,    2, 0x28,   38 /* Private | MethodCloned */,
      31,    1,  199,    2, 0x08,   40 /* Private */,
      34,    1,  202,    2, 0x08,   42 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    4,    5,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    8,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, QMetaType::QByteArray,   13,
    QMetaType::Void, QMetaType::QByteArray,   15,
    QMetaType::Void, QMetaType::QByteArray,   15,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void, 0x80000000 | 21,   22,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   25,    5,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    4,    5,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::Int,   28,   29,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    4,    5,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void, 0x80000000 | 32,   33,
    QMetaType::Void, 0x80000000 | 35,   36,

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::UpdateE2eeFolderUsersMetadataJob::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPEUpdateE2eeFolderUsersMetadataJobENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPEUpdateE2eeFolderUsersMetadataJobENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPEUpdateE2eeFolderUsersMetadataJobENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<UpdateE2eeFolderUsersMetadataJob, std::true_type>,
        // method 'certificateReady'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'finished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'finished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'folderUnlocked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'start'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'start'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setUserData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const UpdateE2eeFolderUsersMetadataJob::UserData &, std::false_type>,
        // method 'setFolderToken'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        // method 'setMetadataKeyForEncryption'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        // method 'setMetadataKeyForDecryption'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        // method 'setKeyChecksums'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QSet<QByteArray> &, std::false_type>,
        // method 'setSubJobSyncItems'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QHash<QString,OCC::SyncFileItemPtr> &, std::false_type>,
        // method 'slotStartE2eeMetadataJobs'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotFetchMetadataJobFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'slotSubJobFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'slotSubJobFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'slotFolderUnlocked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'slotUpdateMetadataFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'slotUpdateMetadataFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'slotCertificatesFetchedFromServer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QHash<QString,OCC::NextcloudSslCertificate> &, std::false_type>,
        // method 'slotCertificateFetchedFromKeychain'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QSslCertificate &, std::false_type>
    >,
    nullptr
} };

void OCC::UpdateE2eeFolderUsersMetadataJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UpdateE2eeFolderUsersMetadataJob *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->certificateReady(); break;
        case 1: _t->finished((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 2: _t->finished((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->folderUnlocked(); break;
        case 4: _t->start((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->start(); break;
        case 6: _t->setUserData((*reinterpret_cast< std::add_pointer_t<UpdateE2eeFolderUsersMetadataJob::UserData>>(_a[1]))); break;
        case 7: _t->setFolderToken((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 8: _t->setMetadataKeyForEncryption((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 9: _t->setMetadataKeyForDecryption((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1]))); break;
        case 10: _t->setKeyChecksums((*reinterpret_cast< std::add_pointer_t<QSet<QByteArray>>>(_a[1]))); break;
        case 11: _t->setSubJobSyncItems((*reinterpret_cast< std::add_pointer_t<QHash<QString,OCC::SyncFileItemPtr>>>(_a[1]))); break;
        case 12: _t->slotStartE2eeMetadataJobs(); break;
        case 13: _t->slotFetchMetadataJobFinished((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 14: _t->slotSubJobFinished((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 15: _t->slotSubJobFinished((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 16: _t->slotFolderUnlocked((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 17: _t->slotUpdateMetadataFinished((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 18: _t->slotUpdateMetadataFinished((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 19: _t->slotCertificatesFetchedFromServer((*reinterpret_cast< std::add_pointer_t<QHash<QString,OCC::NextcloudSslCertificate>>>(_a[1]))); break;
        case 20: _t->slotCertificateFetchedFromKeychain((*reinterpret_cast< std::add_pointer_t<QSslCertificate>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QSet<QByteArray> >(); break;
            }
            break;
        case 20:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QSslCertificate >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (UpdateE2eeFolderUsersMetadataJob::*)();
            if (_t _q_method = &UpdateE2eeFolderUsersMetadataJob::certificateReady; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (UpdateE2eeFolderUsersMetadataJob::*)(int , const QString & );
            if (_t _q_method = &UpdateE2eeFolderUsersMetadataJob::finished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (UpdateE2eeFolderUsersMetadataJob::*)();
            if (_t _q_method = &UpdateE2eeFolderUsersMetadataJob::folderUnlocked; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject *OCC::UpdateE2eeFolderUsersMetadataJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::UpdateE2eeFolderUsersMetadataJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPEUpdateE2eeFolderUsersMetadataJobENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OCC::UpdateE2eeFolderUsersMetadataJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    }
    return _id;
}

// SIGNAL 0
void OCC::UpdateE2eeFolderUsersMetadataJob::certificateReady()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void OCC::UpdateE2eeFolderUsersMetadataJob::finished(int _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 3
void OCC::UpdateE2eeFolderUsersMetadataJob::folderUnlocked()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
