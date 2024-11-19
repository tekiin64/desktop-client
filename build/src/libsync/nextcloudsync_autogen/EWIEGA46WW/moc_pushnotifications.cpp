/****************************************************************************
** Meta object code from reading C++ file 'pushnotifications.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/libsync/pushnotifications.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pushnotifications.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSOCCSCOPEPushNotificationsENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPEPushNotificationsENDCLASS = QtMocHelpers::stringData(
    "OCC::PushNotifications",
    "ready",
    "",
    "filesChanged",
    "OCC::Account*",
    "account",
    "activitiesChanged",
    "notificationsChanged",
    "authenticationFailed",
    "connectionLost",
    "onWebSocketConnected",
    "onWebSocketDisconnected",
    "onWebSocketTextMessageReceived",
    "message",
    "onWebSocketError",
    "QAbstractSocket::SocketError",
    "error",
    "onWebSocketSslErrors",
    "QList<QSslError>",
    "errors",
    "onWebSocketPongReceived",
    "elapsedTime",
    "payload",
    "onPingTimedOut"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPEPushNotificationsENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   92,    2, 0x06,    1 /* Public */,
       3,    1,   93,    2, 0x06,    2 /* Public */,
       6,    1,   96,    2, 0x06,    4 /* Public */,
       7,    1,   99,    2, 0x06,    6 /* Public */,
       8,    0,  102,    2, 0x06,    8 /* Public */,
       9,    0,  103,    2, 0x06,    9 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      10,    0,  104,    2, 0x08,   10 /* Private */,
      11,    0,  105,    2, 0x08,   11 /* Private */,
      12,    1,  106,    2, 0x08,   12 /* Private */,
      14,    1,  109,    2, 0x08,   14 /* Private */,
      17,    1,  112,    2, 0x08,   16 /* Private */,
      20,    2,  115,    2, 0x08,   18 /* Private */,
      23,    0,  120,    2, 0x08,   21 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void, QMetaType::ULongLong, QMetaType::QByteArray,   21,   22,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::PushNotifications::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPEPushNotificationsENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPEPushNotificationsENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPEPushNotificationsENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PushNotifications, std::true_type>,
        // method 'ready'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'filesChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::Account *, std::false_type>,
        // method 'activitiesChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::Account *, std::false_type>,
        // method 'notificationsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::Account *, std::false_type>,
        // method 'authenticationFailed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'connectionLost'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onWebSocketConnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onWebSocketDisconnected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onWebSocketTextMessageReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'onWebSocketError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAbstractSocket::SocketError, std::false_type>,
        // method 'onWebSocketSslErrors'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<QSslError> &, std::false_type>,
        // method 'onWebSocketPongReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        // method 'onPingTimedOut'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void OCC::PushNotifications::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PushNotifications *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->ready(); break;
        case 1: _t->filesChanged((*reinterpret_cast< std::add_pointer_t<OCC::Account*>>(_a[1]))); break;
        case 2: _t->activitiesChanged((*reinterpret_cast< std::add_pointer_t<OCC::Account*>>(_a[1]))); break;
        case 3: _t->notificationsChanged((*reinterpret_cast< std::add_pointer_t<OCC::Account*>>(_a[1]))); break;
        case 4: _t->authenticationFailed(); break;
        case 5: _t->connectionLost(); break;
        case 6: _t->onWebSocketConnected(); break;
        case 7: _t->onWebSocketDisconnected(); break;
        case 8: _t->onWebSocketTextMessageReceived((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 9: _t->onWebSocketError((*reinterpret_cast< std::add_pointer_t<QAbstractSocket::SocketError>>(_a[1]))); break;
        case 10: _t->onWebSocketSslErrors((*reinterpret_cast< std::add_pointer_t<QList<QSslError>>>(_a[1]))); break;
        case 11: _t->onWebSocketPongReceived((*reinterpret_cast< std::add_pointer_t<quint64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[2]))); break;
        case 12: _t->onPingTimedOut(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAbstractSocket::SocketError >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<QSslError> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (PushNotifications::*)();
            if (_t _q_method = &PushNotifications::ready; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (PushNotifications::*)(OCC::Account * );
            if (_t _q_method = &PushNotifications::filesChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (PushNotifications::*)(OCC::Account * );
            if (_t _q_method = &PushNotifications::activitiesChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (PushNotifications::*)(OCC::Account * );
            if (_t _q_method = &PushNotifications::notificationsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (PushNotifications::*)();
            if (_t _q_method = &PushNotifications::authenticationFailed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (PushNotifications::*)();
            if (_t _q_method = &PushNotifications::connectionLost; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject *OCC::PushNotifications::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::PushNotifications::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPEPushNotificationsENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OCC::PushNotifications::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void OCC::PushNotifications::ready()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void OCC::PushNotifications::filesChanged(OCC::Account * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void OCC::PushNotifications::activitiesChanged(OCC::Account * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void OCC::PushNotifications::notificationsChanged(OCC::Account * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void OCC::PushNotifications::authenticationFailed()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void OCC::PushNotifications::connectionLost()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
