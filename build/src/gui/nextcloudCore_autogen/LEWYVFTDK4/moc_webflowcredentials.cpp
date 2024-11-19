/****************************************************************************
** Meta object code from reading C++ file 'webflowcredentials.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/gui/creds/webflowcredentials.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'webflowcredentials.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSOCCSCOPEWebFlowCredentialsENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPEWebFlowCredentialsENDCLASS = QtMocHelpers::stringData(
    "OCC::WebFlowCredentials",
    "slotAuthentication",
    "",
    "QNetworkReply*",
    "reply",
    "QAuthenticator*",
    "authenticator",
    "slotFinished",
    "slotAskFromUserCredentialsProvided",
    "user",
    "pass",
    "host",
    "slotAskFromUserCancelled",
    "slotReadClientCertPEMJobDone",
    "KeychainChunk::ReadJob*",
    "readJob",
    "slotReadClientKeyPEMJobDone",
    "slotReadClientCaCertsPEMJobDone",
    "slotReadPasswordJobDone",
    "QKeychain::Job*",
    "incomingJob",
    "slotWriteClientCertPEMJobDone",
    "KeychainChunk::WriteJob*",
    "writeJob",
    "slotWriteClientKeyPEMJobDone",
    "slotWriteClientCaCertsPEMJobDone",
    "slotWriteJobDone"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPEWebFlowCredentialsENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   86,    2, 0x08,    1 /* Private */,
       7,    1,   91,    2, 0x08,    4 /* Private */,
       8,    3,   94,    2, 0x08,    6 /* Private */,
      12,    0,  101,    2, 0x08,   10 /* Private */,
      13,    1,  102,    2, 0x08,   11 /* Private */,
      16,    1,  105,    2, 0x08,   13 /* Private */,
      17,    1,  108,    2, 0x08,   15 /* Private */,
      18,    1,  111,    2, 0x08,   17 /* Private */,
      21,    1,  114,    2, 0x08,   19 /* Private */,
      24,    1,  117,    2, 0x08,   21 /* Private */,
      25,    1,  120,    2, 0x08,   23 /* Private */,
      26,    1,  123,    2, 0x08,   25 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 5,    4,    6,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    9,   10,   11,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void, 0x80000000 | 22,   23,
    QMetaType::Void, 0x80000000 | 22,   23,
    QMetaType::Void, 0x80000000 | 22,   23,
    QMetaType::Void, 0x80000000 | 19,    2,

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::WebFlowCredentials::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractCredentials::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPEWebFlowCredentialsENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPEWebFlowCredentialsENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPEWebFlowCredentialsENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<WebFlowCredentials, std::true_type>,
        // method 'slotAuthentication'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAuthenticator *, std::false_type>,
        // method 'slotFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>,
        // method 'slotAskFromUserCredentialsProvided'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'slotAskFromUserCancelled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotReadClientCertPEMJobDone'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<KeychainChunk::ReadJob *, std::false_type>,
        // method 'slotReadClientKeyPEMJobDone'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<KeychainChunk::ReadJob *, std::false_type>,
        // method 'slotReadClientCaCertsPEMJobDone'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<KeychainChunk::ReadJob *, std::false_type>,
        // method 'slotReadPasswordJobDone'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QKeychain::Job *, std::false_type>,
        // method 'slotWriteClientCertPEMJobDone'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<KeychainChunk::WriteJob *, std::false_type>,
        // method 'slotWriteClientKeyPEMJobDone'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<KeychainChunk::WriteJob *, std::false_type>,
        // method 'slotWriteClientCaCertsPEMJobDone'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<KeychainChunk::WriteJob *, std::false_type>,
        // method 'slotWriteJobDone'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QKeychain::Job *, std::false_type>
    >,
    nullptr
} };

void OCC::WebFlowCredentials::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WebFlowCredentials *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->slotAuthentication((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QAuthenticator*>>(_a[2]))); break;
        case 1: _t->slotFinished((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1]))); break;
        case 2: _t->slotAskFromUserCredentialsProvided((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 3: _t->slotAskFromUserCancelled(); break;
        case 4: _t->slotReadClientCertPEMJobDone((*reinterpret_cast< std::add_pointer_t<KeychainChunk::ReadJob*>>(_a[1]))); break;
        case 5: _t->slotReadClientKeyPEMJobDone((*reinterpret_cast< std::add_pointer_t<KeychainChunk::ReadJob*>>(_a[1]))); break;
        case 6: _t->slotReadClientCaCertsPEMJobDone((*reinterpret_cast< std::add_pointer_t<KeychainChunk::ReadJob*>>(_a[1]))); break;
        case 7: _t->slotReadPasswordJobDone((*reinterpret_cast< std::add_pointer_t<QKeychain::Job*>>(_a[1]))); break;
        case 8: _t->slotWriteClientCertPEMJobDone((*reinterpret_cast< std::add_pointer_t<KeychainChunk::WriteJob*>>(_a[1]))); break;
        case 9: _t->slotWriteClientKeyPEMJobDone((*reinterpret_cast< std::add_pointer_t<KeychainChunk::WriteJob*>>(_a[1]))); break;
        case 10: _t->slotWriteClientCaCertsPEMJobDone((*reinterpret_cast< std::add_pointer_t<KeychainChunk::WriteJob*>>(_a[1]))); break;
        case 11: _t->slotWriteJobDone((*reinterpret_cast< std::add_pointer_t<QKeychain::Job*>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *OCC::WebFlowCredentials::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::WebFlowCredentials::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPEWebFlowCredentialsENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return AbstractCredentials::qt_metacast(_clname);
}

int OCC::WebFlowCredentials::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractCredentials::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }
    return _id;
}
QT_WARNING_POP
