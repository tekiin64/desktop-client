/****************************************************************************
** Meta object code from reading C++ file 'connectionvalidator.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/gui/connectionvalidator.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'connectionvalidator.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSOCCSCOPETermsOfServiceCheckerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPETermsOfServiceCheckerENDCLASS = QtMocHelpers::stringData(
    "OCC::TermsOfServiceChecker",
    "needToSignChanged",
    "",
    "done",
    "start",
    "slotServerTermsOfServiceRecieved",
    "reply",
    "needToSign"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPETermsOfServiceCheckerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       1,   44, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x06,    2 /* Public */,
       3,    0,   39,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,   40,    2, 0x0a,    4 /* Public */,
       5,    1,   41,    2, 0x08,    5 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QJsonDocument,    6,

 // properties: name, type, flags, notifyId, revision
       7, QMetaType::Bool, 0x00015801, uint(0), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::TermsOfServiceChecker::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPETermsOfServiceCheckerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPETermsOfServiceCheckerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPETermsOfServiceCheckerENDCLASS_t,
        // property 'needToSign'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TermsOfServiceChecker, std::true_type>,
        // method 'needToSignChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'done'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'start'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotServerTermsOfServiceRecieved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QJsonDocument &, std::false_type>
    >,
    nullptr
} };

void OCC::TermsOfServiceChecker::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TermsOfServiceChecker *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->needToSignChanged(); break;
        case 1: _t->done(); break;
        case 2: _t->start(); break;
        case 3: _t->slotServerTermsOfServiceRecieved((*reinterpret_cast< std::add_pointer_t<QJsonDocument>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TermsOfServiceChecker::*)();
            if (_t _q_method = &TermsOfServiceChecker::needToSignChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TermsOfServiceChecker::*)();
            if (_t _q_method = &TermsOfServiceChecker::done; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<TermsOfServiceChecker *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->needToSign(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *OCC::TermsOfServiceChecker::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::TermsOfServiceChecker::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPETermsOfServiceCheckerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OCC::TermsOfServiceChecker::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void OCC::TermsOfServiceChecker::needToSignChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void OCC::TermsOfServiceChecker::done()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSOCCSCOPEConnectionValidatorENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPEConnectionValidatorENDCLASS = QtMocHelpers::stringData(
    "OCC::ConnectionValidator",
    "connectionResult",
    "",
    "OCC::ConnectionValidator::Status",
    "status",
    "errors",
    "checkServerAndAuth",
    "systemProxyLookupDone",
    "QNetworkProxy",
    "proxy",
    "checkAuthentication",
    "slotCheckRedirectCostFreeUrl",
    "slotCheckServerAndAuth",
    "slotCheckRedirectCostFreeUrlFinished",
    "statusCode",
    "slotStatusFound",
    "url",
    "info",
    "slotNoStatusFound",
    "QNetworkReply*",
    "reply",
    "slotJobTimeout",
    "slotAuthFailed",
    "slotAuthSuccess",
    "slotCapabilitiesRecieved",
    "slotUserFetched",
    "OCC::UserInfo*",
    "userInfo",
    "termsOfServiceCheckDone",
    "Status",
    "Undefined",
    "Connected",
    "NotConfigured",
    "ServerVersionMismatch",
    "CredentialsNotReady",
    "CredentialsWrong",
    "SslError",
    "StatusNotFound",
    "StatusRedirect",
    "ServiceUnavailable",
    "MaintenanceMode",
    "Timeout",
    "NeedToSignTermsOfService"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPEConnectionValidatorENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       1,  141, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,  104,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    0,  109,    2, 0x0a,    5 /* Public */,
       7,    1,  110,    2, 0x0a,    6 /* Public */,
      10,    0,  113,    2, 0x0a,    8 /* Public */,
      11,    0,  114,    2, 0x09,    9 /* Protected */,
      12,    0,  115,    2, 0x09,   10 /* Protected */,
      13,    1,  116,    2, 0x09,   11 /* Protected */,
      15,    2,  119,    2, 0x09,   13 /* Protected */,
      18,    1,  124,    2, 0x09,   16 /* Protected */,
      21,    1,  127,    2, 0x09,   18 /* Protected */,
      22,    1,  130,    2, 0x09,   20 /* Protected */,
      23,    0,  133,    2, 0x09,   22 /* Protected */,
      24,    1,  134,    2, 0x09,   23 /* Protected */,
      25,    1,  137,    2, 0x09,   25 /* Protected */,
      28,    0,  140,    2, 0x09,   27 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QStringList,    4,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, QMetaType::QUrl, QMetaType::QJsonObject,   16,   17,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void, QMetaType::QUrl,   16,
    QMetaType::Void, 0x80000000 | 19,   20,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QJsonDocument,    2,
    QMetaType::Void, 0x80000000 | 26,   27,
    QMetaType::Void,

 // enums: name, alias, flags, count, data
      29,   29, 0x0,   13,  146,

 // enum data: key, value
      30, uint(OCC::ConnectionValidator::Undefined),
      31, uint(OCC::ConnectionValidator::Connected),
      32, uint(OCC::ConnectionValidator::NotConfigured),
      33, uint(OCC::ConnectionValidator::ServerVersionMismatch),
      34, uint(OCC::ConnectionValidator::CredentialsNotReady),
      35, uint(OCC::ConnectionValidator::CredentialsWrong),
      36, uint(OCC::ConnectionValidator::SslError),
      37, uint(OCC::ConnectionValidator::StatusNotFound),
      38, uint(OCC::ConnectionValidator::StatusRedirect),
      39, uint(OCC::ConnectionValidator::ServiceUnavailable),
      40, uint(OCC::ConnectionValidator::MaintenanceMode),
      41, uint(OCC::ConnectionValidator::Timeout),
      42, uint(OCC::ConnectionValidator::NeedToSignTermsOfService),

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::ConnectionValidator::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPEConnectionValidatorENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPEConnectionValidatorENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPEConnectionValidatorENDCLASS_t,
        // enum 'Status'
        QtPrivate::TypeAndForceComplete<ConnectionValidator::Status, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ConnectionValidator, std::true_type>,
        // method 'connectionResult'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::ConnectionValidator::Status, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QStringList &, std::false_type>,
        // method 'checkServerAndAuth'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'systemProxyLookupDone'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QNetworkProxy &, std::false_type>,
        // method 'checkAuthentication'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotCheckRedirectCostFreeUrl'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotCheckServerAndAuth'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotCheckRedirectCostFreeUrlFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'slotStatusFound'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QJsonObject &, std::false_type>,
        // method 'slotNoStatusFound'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>,
        // method 'slotJobTimeout'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>,
        // method 'slotAuthFailed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>,
        // method 'slotAuthSuccess'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotCapabilitiesRecieved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QJsonDocument &, std::false_type>,
        // method 'slotUserFetched'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::UserInfo *, std::false_type>,
        // method 'termsOfServiceCheckDone'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void OCC::ConnectionValidator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ConnectionValidator *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->connectionResult((*reinterpret_cast< std::add_pointer_t<OCC::ConnectionValidator::Status>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[2]))); break;
        case 1: _t->checkServerAndAuth(); break;
        case 2: _t->systemProxyLookupDone((*reinterpret_cast< std::add_pointer_t<QNetworkProxy>>(_a[1]))); break;
        case 3: _t->checkAuthentication(); break;
        case 4: _t->slotCheckRedirectCostFreeUrl(); break;
        case 5: _t->slotCheckServerAndAuth(); break;
        case 6: _t->slotCheckRedirectCostFreeUrlFinished((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->slotStatusFound((*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[2]))); break;
        case 8: _t->slotNoStatusFound((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1]))); break;
        case 9: _t->slotJobTimeout((*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[1]))); break;
        case 10: _t->slotAuthFailed((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1]))); break;
        case 11: _t->slotAuthSuccess(); break;
        case 12: _t->slotCapabilitiesRecieved((*reinterpret_cast< std::add_pointer_t<QJsonDocument>>(_a[1]))); break;
        case 13: _t->slotUserFetched((*reinterpret_cast< std::add_pointer_t<OCC::UserInfo*>>(_a[1]))); break;
        case 14: _t->termsOfServiceCheckDone(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkReply* >(); break;
            }
            break;
        case 10:
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
            using _t = void (ConnectionValidator::*)(OCC::ConnectionValidator::Status , const QStringList & );
            if (_t _q_method = &ConnectionValidator::connectionResult; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *OCC::ConnectionValidator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::ConnectionValidator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPEConnectionValidatorENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OCC::ConnectionValidator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void OCC::ConnectionValidator::connectionResult(OCC::ConnectionValidator::Status _t1, const QStringList & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
