/****************************************************************************
** Meta object code from reading C++ file 'accountstate.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/gui/accountstate.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'accountstate.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSOCCSCOPEAccountStateENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPEAccountStateENDCLASS = QtMocHelpers::stringData(
    "OCC::AccountState",
    "stateChanged",
    "",
    "OCC::AccountState::State",
    "state",
    "isConnectedChanged",
    "hasFetchedNavigationApps",
    "statusChanged",
    "desktopNotificationsAllowedChanged",
    "termsOfServiceChanged",
    "OCC::AccountPtr",
    "account",
    "AccountState::State",
    "checkConnectivity",
    "slotConnectionValidatorResult",
    "OCC::ConnectionValidator::Status",
    "status",
    "errors",
    "slotHandleRemoteWipeCheck",
    "slotCredentialsFetched",
    "OCC::AbstractCredentials*",
    "creds",
    "slotCredentialsAsked",
    "slotNavigationAppsFetched",
    "reply",
    "statusCode",
    "slotEtagResponseHeaderReceived",
    "value",
    "slotOcsError",
    "message",
    "slotCheckConnection",
    "slotCheckServerAvailibility",
    "slotPushNotificationsReady",
    "slotServerUserStatusChanged",
    "AccountPtr",
    "State"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPEAccountStateENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      18,   14, // methods
       2,  166, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  122,    2, 0x06,    3 /* Public */,
       5,    0,  125,    2, 0x06,    5 /* Public */,
       6,    0,  126,    2, 0x06,    6 /* Public */,
       7,    0,  127,    2, 0x06,    7 /* Public */,
       8,    0,  128,    2, 0x06,    8 /* Public */,
       9,    2,  129,    2, 0x06,    9 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      13,    0,  134,    2, 0x0a,   12 /* Public */,
      14,    2,  135,    2, 0x09,   13 /* Protected */,
      18,    0,  140,    2, 0x09,   16 /* Protected */,
      19,    1,  141,    2, 0x09,   17 /* Protected */,
      22,    1,  144,    2, 0x09,   19 /* Protected */,
      23,    2,  147,    2, 0x09,   21 /* Protected */,
      26,    2,  152,    2, 0x09,   24 /* Protected */,
      28,    2,  157,    2, 0x09,   27 /* Protected */,
      30,    0,  162,    2, 0x08,   30 /* Private */,
      31,    0,  163,    2, 0x08,   31 /* Private */,
      32,    0,  164,    2, 0x08,   32 /* Private */,
      33,    0,  165,    2, 0x08,   33 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10, 0x80000000 | 12,   11,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 15, QMetaType::QStringList,   16,   17,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 20,   21,
    QMetaType::Void, 0x80000000 | 20,   21,
    QMetaType::Void, QMetaType::QJsonDocument, QMetaType::Int,   24,   25,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::Int,   27,   25,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   25,   29,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags, notifyId, revision
      11, 0x80000000 | 34, 0x0001500b, uint(-1), 0,
       4, 0x80000000 | 35, 0x00015009, uint(0), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::AccountState::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPEAccountStateENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPEAccountStateENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPEAccountStateENDCLASS_t,
        // property 'account'
        QtPrivate::TypeAndForceComplete<AccountPtr, std::true_type>,
        // property 'state'
        QtPrivate::TypeAndForceComplete<State, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AccountState, std::true_type>,
        // method 'stateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::AccountState::State, std::false_type>,
        // method 'isConnectedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'hasFetchedNavigationApps'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'statusChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'desktopNotificationsAllowedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'termsOfServiceChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::AccountPtr, std::false_type>,
        QtPrivate::TypeAndForceComplete<AccountState::State, std::false_type>,
        // method 'checkConnectivity'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotConnectionValidatorResult'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::ConnectionValidator::Status, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QStringList &, std::false_type>,
        // method 'slotHandleRemoteWipeCheck'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotCredentialsFetched'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::AbstractCredentials *, std::false_type>,
        // method 'slotCredentialsAsked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::AbstractCredentials *, std::false_type>,
        // method 'slotNavigationAppsFetched'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QJsonDocument &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'slotEtagResponseHeaderReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'slotOcsError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'slotCheckConnection'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotCheckServerAvailibility'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotPushNotificationsReady'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotServerUserStatusChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void OCC::AccountState::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AccountState *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->stateChanged((*reinterpret_cast< std::add_pointer_t<OCC::AccountState::State>>(_a[1]))); break;
        case 1: _t->isConnectedChanged(); break;
        case 2: _t->hasFetchedNavigationApps(); break;
        case 3: _t->statusChanged(); break;
        case 4: _t->desktopNotificationsAllowedChanged(); break;
        case 5: _t->termsOfServiceChanged((*reinterpret_cast< std::add_pointer_t<OCC::AccountPtr>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<AccountState::State>>(_a[2]))); break;
        case 6: _t->checkConnectivity(); break;
        case 7: _t->slotConnectionValidatorResult((*reinterpret_cast< std::add_pointer_t<OCC::ConnectionValidator::Status>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[2]))); break;
        case 8: _t->slotHandleRemoteWipeCheck(); break;
        case 9: _t->slotCredentialsFetched((*reinterpret_cast< std::add_pointer_t<OCC::AbstractCredentials*>>(_a[1]))); break;
        case 10: _t->slotCredentialsAsked((*reinterpret_cast< std::add_pointer_t<OCC::AbstractCredentials*>>(_a[1]))); break;
        case 11: _t->slotNavigationAppsFetched((*reinterpret_cast< std::add_pointer_t<QJsonDocument>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 12: _t->slotEtagResponseHeaderReceived((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 13: _t->slotOcsError((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 14: _t->slotCheckConnection(); break;
        case 15: _t->slotCheckServerAvailibility(); break;
        case 16: _t->slotPushNotificationsReady(); break;
        case 17: _t->slotServerUserStatusChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 9:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::AbstractCredentials* >(); break;
            }
            break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::AbstractCredentials* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AccountState::*)(OCC::AccountState::State );
            if (_t _q_method = &AccountState::stateChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AccountState::*)();
            if (_t _q_method = &AccountState::isConnectedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AccountState::*)();
            if (_t _q_method = &AccountState::hasFetchedNavigationApps; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (AccountState::*)();
            if (_t _q_method = &AccountState::statusChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (AccountState::*)();
            if (_t _q_method = &AccountState::desktopNotificationsAllowedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (AccountState::*)(OCC::AccountPtr , AccountState::State );
            if (_t _q_method = &AccountState::termsOfServiceChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<AccountState *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< AccountPtr*>(_v) = _t->_account; break;
        case 1: *reinterpret_cast< State*>(_v) = _t->state(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<AccountState *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->_account != *reinterpret_cast< AccountPtr*>(_v)) {
                _t->_account = *reinterpret_cast< AccountPtr*>(_v);
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *OCC::AccountState::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::AccountState::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPEAccountStateENDCLASS.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "QSharedData"))
        return static_cast< QSharedData*>(this);
    return QObject::qt_metacast(_clname);
}

int OCC::AccountState::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 18)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 18;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void OCC::AccountState::stateChanged(OCC::AccountState::State _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OCC::AccountState::isConnectedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void OCC::AccountState::hasFetchedNavigationApps()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void OCC::AccountState::statusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void OCC::AccountState::desktopNotificationsAllowedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void OCC::AccountState::termsOfServiceChanged(OCC::AccountPtr _t1, AccountState::State _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSOCCSCOPEAccountAppENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPEAccountAppENDCLASS = QtMocHelpers::stringData(
    "OCC::AccountApp"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPEAccountAppENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject OCC::AccountApp::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPEAccountAppENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPEAccountAppENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPEAccountAppENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AccountApp, std::true_type>
    >,
    nullptr
} };

void OCC::AccountApp::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *OCC::AccountApp::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::AccountApp::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPEAccountAppENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OCC::AccountApp::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
