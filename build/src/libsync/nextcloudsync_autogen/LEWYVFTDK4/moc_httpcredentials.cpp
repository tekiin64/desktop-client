/****************************************************************************
** Meta object code from reading C++ file 'httpcredentials.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/libsync/creds/httpcredentials.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'httpcredentials.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSOCCSCOPEHttpCredentialsENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPEHttpCredentialsENDCLASS = QtMocHelpers::stringData(
    "OCC::HttpCredentials",
    "slotAuthentication",
    "",
    "QNetworkReply*",
    "QAuthenticator*",
    "slotReadClientCertPasswordJobDone",
    "QKeychain::Job*",
    "slotReadClientCertPEMJobDone",
    "slotReadClientKeyPEMJobDone",
    "slotReadPasswordFromKeychain",
    "slotReadJobDone",
    "slotWriteClientCertPasswordJobDone",
    "slotWriteClientCertPEMJobDone",
    "slotWriteClientKeyPEMJobDone",
    "slotWritePasswordToKeychain",
    "slotWriteJobDone"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPEHttpCredentialsENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   80,    2, 0x08,    1 /* Private */,
       5,    1,   85,    2, 0x08,    4 /* Private */,
       7,    1,   88,    2, 0x08,    6 /* Private */,
       8,    1,   91,    2, 0x08,    8 /* Private */,
       9,    0,   94,    2, 0x08,   10 /* Private */,
      10,    1,   95,    2, 0x08,   11 /* Private */,
      11,    1,   98,    2, 0x08,   13 /* Private */,
      12,    1,  101,    2, 0x08,   15 /* Private */,
      13,    1,  104,    2, 0x08,   17 /* Private */,
      14,    0,  107,    2, 0x08,   19 /* Private */,
      15,    1,  108,    2, 0x08,   20 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 4,    2,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    2,

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::HttpCredentials::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractCredentials::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPEHttpCredentialsENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPEHttpCredentialsENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPEHttpCredentialsENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<HttpCredentials, std::true_type>,
        // method 'slotAuthentication'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAuthenticator *, std::false_type>,
        // method 'slotReadClientCertPasswordJobDone'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QKeychain::Job *, std::false_type>,
        // method 'slotReadClientCertPEMJobDone'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QKeychain::Job *, std::false_type>,
        // method 'slotReadClientKeyPEMJobDone'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QKeychain::Job *, std::false_type>,
        // method 'slotReadPasswordFromKeychain'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotReadJobDone'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QKeychain::Job *, std::false_type>,
        // method 'slotWriteClientCertPasswordJobDone'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QKeychain::Job *, std::false_type>,
        // method 'slotWriteClientCertPEMJobDone'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QKeychain::Job *, std::false_type>,
        // method 'slotWriteClientKeyPEMJobDone'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QKeychain::Job *, std::false_type>,
        // method 'slotWritePasswordToKeychain'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotWriteJobDone'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QKeychain::Job *, std::false_type>
    >,
    nullptr
} };

void OCC::HttpCredentials::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<HttpCredentials *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->slotAuthentication((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QAuthenticator*>>(_a[2]))); break;
        case 1: _t->slotReadClientCertPasswordJobDone((*reinterpret_cast< std::add_pointer_t<QKeychain::Job*>>(_a[1]))); break;
        case 2: _t->slotReadClientCertPEMJobDone((*reinterpret_cast< std::add_pointer_t<QKeychain::Job*>>(_a[1]))); break;
        case 3: _t->slotReadClientKeyPEMJobDone((*reinterpret_cast< std::add_pointer_t<QKeychain::Job*>>(_a[1]))); break;
        case 4: _t->slotReadPasswordFromKeychain(); break;
        case 5: _t->slotReadJobDone((*reinterpret_cast< std::add_pointer_t<QKeychain::Job*>>(_a[1]))); break;
        case 6: _t->slotWriteClientCertPasswordJobDone((*reinterpret_cast< std::add_pointer_t<QKeychain::Job*>>(_a[1]))); break;
        case 7: _t->slotWriteClientCertPEMJobDone((*reinterpret_cast< std::add_pointer_t<QKeychain::Job*>>(_a[1]))); break;
        case 8: _t->slotWriteClientKeyPEMJobDone((*reinterpret_cast< std::add_pointer_t<QKeychain::Job*>>(_a[1]))); break;
        case 9: _t->slotWritePasswordToKeychain(); break;
        case 10: _t->slotWriteJobDone((*reinterpret_cast< std::add_pointer_t<QKeychain::Job*>>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject *OCC::HttpCredentials::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::HttpCredentials::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPEHttpCredentialsENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return AbstractCredentials::qt_metacast(_clname);
}

int OCC::HttpCredentials::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractCredentials::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }
    return _id;
}
QT_WARNING_POP
