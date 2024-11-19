/****************************************************************************
** Meta object code from reading C++ file 'clientsideencryption.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/libsync/clientsideencryption.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'clientsideencryption.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSOCCSCOPEClientSideEncryptionENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPEClientSideEncryptionENDCLASS = QtMocHelpers::stringData(
    "OCC::ClientSideEncryption",
    "initializationFinished",
    "",
    "isNewMnemonicGenerated",
    "sensitiveDataForgotten",
    "privateKeyDeleted",
    "certificateDeleted",
    "mnemonicDeleted",
    "publicKeyDeleted",
    "certificateFetchedFromKeychain",
    "QSslCertificate",
    "certificate",
    "certificatesFetchedFromServer",
    "QHash<QString,OCC::NextcloudSslCertificate>",
    "results",
    "certificateWriteComplete",
    "initialize",
    "OCC::AccountPtr",
    "account",
    "forgetSensitiveData",
    "getUsersPublicKeyFromServer",
    "userIds",
    "fetchCertificateFromKeyChain",
    "userId",
    "writeCertificate",
    "generateKeyPair",
    "encryptPrivateKey",
    "publicCertificateFetched",
    "QKeychain::Job*",
    "incoming",
    "publicKeyFetched",
    "publicKeyFetchedForUserId",
    "privateKeyFetched",
    "mnemonicKeyFetched",
    "handlePrivateKeyDeleted",
    "const QKeychain::Job*",
    "handleCertificateDeleted",
    "handleMnemonicDeleted",
    "handlePublicKeyDeleted",
    "checkAllSensitiveDataDeleted",
    "getPrivateKeyFromServer",
    "getPublicKeyFromServer",
    "fetchAndValidatePublicKeyFromServer",
    "decryptPrivateKey",
    "key",
    "fetchPublicKeyFromKeyChain",
    "writePrivateKey"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPEClientSideEncryptionENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      35,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      10,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  224,    2, 0x06,    1 /* Public */,
       1,    0,  227,    2, 0x26,    3 /* Public | MethodCloned */,
       4,    0,  228,    2, 0x06,    4 /* Public */,
       5,    0,  229,    2, 0x06,    5 /* Public */,
       6,    0,  230,    2, 0x06,    6 /* Public */,
       7,    0,  231,    2, 0x06,    7 /* Public */,
       8,    0,  232,    2, 0x06,    8 /* Public */,
       9,    1,  233,    2, 0x06,    9 /* Public */,
      12,    1,  236,    2, 0x06,   11 /* Public */,
      15,    1,  239,    2, 0x06,   13 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      16,    1,  242,    2, 0x0a,   15 /* Public */,
      19,    1,  245,    2, 0x0a,   17 /* Public */,
      20,    2,  248,    2, 0x0a,   19 /* Public */,
      22,    2,  253,    2, 0x0a,   22 /* Public */,
      24,    3,  258,    2, 0x0a,   25 /* Public */,
      25,    1,  265,    2, 0x08,   29 /* Private */,
      26,    1,  268,    2, 0x08,   31 /* Private */,
      27,    1,  271,    2, 0x08,   33 /* Private */,
      30,    1,  274,    2, 0x08,   35 /* Private */,
      31,    1,  277,    2, 0x08,   37 /* Private */,
      32,    1,  280,    2, 0x08,   39 /* Private */,
      33,    1,  283,    2, 0x08,   41 /* Private */,
      34,    1,  286,    2, 0x08,   43 /* Private */,
      36,    1,  289,    2, 0x08,   45 /* Private */,
      37,    1,  292,    2, 0x08,   47 /* Private */,
      38,    1,  295,    2, 0x08,   49 /* Private */,
      39,    0,  298,    2, 0x08,   51 /* Private */,
      40,    1,  299,    2, 0x08,   52 /* Private */,
      41,    1,  302,    2, 0x08,   54 /* Private */,
      42,    1,  305,    2, 0x08,   56 /* Private */,
      43,    2,  308,    2, 0x08,   58 /* Private */,
      22,    1,  313,    2, 0x08,   61 /* Private */,
      45,    1,  316,    2, 0x08,   63 /* Private */,
      46,    1,  319,    2, 0x08,   65 /* Private */,
      24,    1,  322,    2, 0x08,   67 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 10,   11,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, 0x80000000 | 17, QMetaType::QStringList,   18,   21,
    QMetaType::Void, 0x80000000 | 17, QMetaType::QString,   18,   23,
    QMetaType::Void, 0x80000000 | 17, QMetaType::QString, 0x80000000 | 10,   18,   23,   11,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, 0x80000000 | 28,   29,
    QMetaType::Void, 0x80000000 | 28,   29,
    QMetaType::Void, 0x80000000 | 28,   29,
    QMetaType::Void, 0x80000000 | 28,   29,
    QMetaType::Void, 0x80000000 | 28,   29,
    QMetaType::Void, 0x80000000 | 35,   29,
    QMetaType::Void, 0x80000000 | 35,   29,
    QMetaType::Void, 0x80000000 | 35,   29,
    QMetaType::Void, 0x80000000 | 35,   29,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, 0x80000000 | 17, QMetaType::QByteArray,   18,   44,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, 0x80000000 | 17,   18,
    QMetaType::Void, 0x80000000 | 17,   18,

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::ClientSideEncryption::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPEClientSideEncryptionENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPEClientSideEncryptionENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPEClientSideEncryptionENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ClientSideEncryption, std::true_type>,
        // method 'initializationFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'initializationFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'sensitiveDataForgotten'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'privateKeyDeleted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'certificateDeleted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'mnemonicDeleted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'publicKeyDeleted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'certificateFetchedFromKeychain'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QSslCertificate, std::false_type>,
        // method 'certificatesFetchedFromServer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QHash<QString,OCC::NextcloudSslCertificate> &, std::false_type>,
        // method 'certificateWriteComplete'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QSslCertificate &, std::false_type>,
        // method 'initialize'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::AccountPtr &, std::false_type>,
        // method 'forgetSensitiveData'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::AccountPtr &, std::false_type>,
        // method 'getUsersPublicKeyFromServer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::AccountPtr &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QStringList &, std::false_type>,
        // method 'fetchCertificateFromKeyChain'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::AccountPtr &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'writeCertificate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::AccountPtr &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QSslCertificate &, std::false_type>,
        // method 'generateKeyPair'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::AccountPtr &, std::false_type>,
        // method 'encryptPrivateKey'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::AccountPtr &, std::false_type>,
        // method 'publicCertificateFetched'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QKeychain::Job *, std::false_type>,
        // method 'publicKeyFetched'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QKeychain::Job *, std::false_type>,
        // method 'publicKeyFetchedForUserId'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QKeychain::Job *, std::false_type>,
        // method 'privateKeyFetched'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QKeychain::Job *, std::false_type>,
        // method 'mnemonicKeyFetched'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QKeychain::Job *, std::false_type>,
        // method 'handlePrivateKeyDeleted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QKeychain::Job * const, std::false_type>,
        // method 'handleCertificateDeleted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QKeychain::Job * const, std::false_type>,
        // method 'handleMnemonicDeleted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QKeychain::Job * const, std::false_type>,
        // method 'handlePublicKeyDeleted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QKeychain::Job * const, std::false_type>,
        // method 'checkAllSensitiveDataDeleted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'getPrivateKeyFromServer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::AccountPtr &, std::false_type>,
        // method 'getPublicKeyFromServer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::AccountPtr &, std::false_type>,
        // method 'fetchAndValidatePublicKeyFromServer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::AccountPtr &, std::false_type>,
        // method 'decryptPrivateKey'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::AccountPtr &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        // method 'fetchCertificateFromKeyChain'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::AccountPtr &, std::false_type>,
        // method 'fetchPublicKeyFromKeyChain'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::AccountPtr &, std::false_type>,
        // method 'writePrivateKey'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::AccountPtr &, std::false_type>,
        // method 'writeCertificate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::AccountPtr &, std::false_type>
    >,
    nullptr
} };

void OCC::ClientSideEncryption::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ClientSideEncryption *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->initializationFinished((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->initializationFinished(); break;
        case 2: _t->sensitiveDataForgotten(); break;
        case 3: _t->privateKeyDeleted(); break;
        case 4: _t->certificateDeleted(); break;
        case 5: _t->mnemonicDeleted(); break;
        case 6: _t->publicKeyDeleted(); break;
        case 7: _t->certificateFetchedFromKeychain((*reinterpret_cast< std::add_pointer_t<QSslCertificate>>(_a[1]))); break;
        case 8: _t->certificatesFetchedFromServer((*reinterpret_cast< std::add_pointer_t<QHash<QString,OCC::NextcloudSslCertificate>>>(_a[1]))); break;
        case 9: _t->certificateWriteComplete((*reinterpret_cast< std::add_pointer_t<QSslCertificate>>(_a[1]))); break;
        case 10: _t->initialize((*reinterpret_cast< std::add_pointer_t<OCC::AccountPtr>>(_a[1]))); break;
        case 11: _t->forgetSensitiveData((*reinterpret_cast< std::add_pointer_t<OCC::AccountPtr>>(_a[1]))); break;
        case 12: _t->getUsersPublicKeyFromServer((*reinterpret_cast< std::add_pointer_t<OCC::AccountPtr>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[2]))); break;
        case 13: _t->fetchCertificateFromKeyChain((*reinterpret_cast< std::add_pointer_t<OCC::AccountPtr>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 14: _t->writeCertificate((*reinterpret_cast< std::add_pointer_t<OCC::AccountPtr>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QSslCertificate>>(_a[3]))); break;
        case 15: _t->generateKeyPair((*reinterpret_cast< std::add_pointer_t<OCC::AccountPtr>>(_a[1]))); break;
        case 16: _t->encryptPrivateKey((*reinterpret_cast< std::add_pointer_t<OCC::AccountPtr>>(_a[1]))); break;
        case 17: _t->publicCertificateFetched((*reinterpret_cast< std::add_pointer_t<QKeychain::Job*>>(_a[1]))); break;
        case 18: _t->publicKeyFetched((*reinterpret_cast< std::add_pointer_t<QKeychain::Job*>>(_a[1]))); break;
        case 19: _t->publicKeyFetchedForUserId((*reinterpret_cast< std::add_pointer_t<QKeychain::Job*>>(_a[1]))); break;
        case 20: _t->privateKeyFetched((*reinterpret_cast< std::add_pointer_t<QKeychain::Job*>>(_a[1]))); break;
        case 21: _t->mnemonicKeyFetched((*reinterpret_cast< std::add_pointer_t<QKeychain::Job*>>(_a[1]))); break;
        case 22: _t->handlePrivateKeyDeleted((*reinterpret_cast< std::add_pointer_t<const QKeychain::Job*>>(_a[1]))); break;
        case 23: _t->handleCertificateDeleted((*reinterpret_cast< std::add_pointer_t<const QKeychain::Job*>>(_a[1]))); break;
        case 24: _t->handleMnemonicDeleted((*reinterpret_cast< std::add_pointer_t<const QKeychain::Job*>>(_a[1]))); break;
        case 25: _t->handlePublicKeyDeleted((*reinterpret_cast< std::add_pointer_t<const QKeychain::Job*>>(_a[1]))); break;
        case 26: _t->checkAllSensitiveDataDeleted(); break;
        case 27: _t->getPrivateKeyFromServer((*reinterpret_cast< std::add_pointer_t<OCC::AccountPtr>>(_a[1]))); break;
        case 28: _t->getPublicKeyFromServer((*reinterpret_cast< std::add_pointer_t<OCC::AccountPtr>>(_a[1]))); break;
        case 29: _t->fetchAndValidatePublicKeyFromServer((*reinterpret_cast< std::add_pointer_t<OCC::AccountPtr>>(_a[1]))); break;
        case 30: _t->decryptPrivateKey((*reinterpret_cast< std::add_pointer_t<OCC::AccountPtr>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[2]))); break;
        case 31: _t->fetchCertificateFromKeyChain((*reinterpret_cast< std::add_pointer_t<OCC::AccountPtr>>(_a[1]))); break;
        case 32: _t->fetchPublicKeyFromKeyChain((*reinterpret_cast< std::add_pointer_t<OCC::AccountPtr>>(_a[1]))); break;
        case 33: _t->writePrivateKey((*reinterpret_cast< std::add_pointer_t<OCC::AccountPtr>>(_a[1]))); break;
        case 34: _t->writeCertificate((*reinterpret_cast< std::add_pointer_t<OCC::AccountPtr>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QSslCertificate >(); break;
            }
            break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QSslCertificate >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 2:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QSslCertificate >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ClientSideEncryption::*)(bool );
            if (_t _q_method = &ClientSideEncryption::initializationFinished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ClientSideEncryption::*)();
            if (_t _q_method = &ClientSideEncryption::sensitiveDataForgotten; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ClientSideEncryption::*)();
            if (_t _q_method = &ClientSideEncryption::privateKeyDeleted; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ClientSideEncryption::*)();
            if (_t _q_method = &ClientSideEncryption::certificateDeleted; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ClientSideEncryption::*)();
            if (_t _q_method = &ClientSideEncryption::mnemonicDeleted; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ClientSideEncryption::*)();
            if (_t _q_method = &ClientSideEncryption::publicKeyDeleted; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (ClientSideEncryption::*)(QSslCertificate );
            if (_t _q_method = &ClientSideEncryption::certificateFetchedFromKeychain; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (ClientSideEncryption::*)(const QHash<QString,OCC::NextcloudSslCertificate> & );
            if (_t _q_method = &ClientSideEncryption::certificatesFetchedFromServer; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (ClientSideEncryption::*)(const QSslCertificate & );
            if (_t _q_method = &ClientSideEncryption::certificateWriteComplete; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
    }
}

const QMetaObject *OCC::ClientSideEncryption::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::ClientSideEncryption::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPEClientSideEncryptionENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OCC::ClientSideEncryption::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 35)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 35;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 35)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 35;
    }
    return _id;
}

// SIGNAL 0
void OCC::ClientSideEncryption::initializationFinished(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 2
void OCC::ClientSideEncryption::sensitiveDataForgotten()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void OCC::ClientSideEncryption::privateKeyDeleted()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void OCC::ClientSideEncryption::certificateDeleted()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void OCC::ClientSideEncryption::mnemonicDeleted()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void OCC::ClientSideEncryption::publicKeyDeleted()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void OCC::ClientSideEncryption::certificateFetchedFromKeychain(QSslCertificate _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void OCC::ClientSideEncryption::certificatesFetchedFromServer(const QHash<QString,OCC::NextcloudSslCertificate> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void OCC::ClientSideEncryption::certificateWriteComplete(const QSslCertificate & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}
QT_WARNING_POP
