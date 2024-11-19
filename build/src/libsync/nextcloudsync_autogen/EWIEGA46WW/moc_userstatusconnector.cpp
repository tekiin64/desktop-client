/****************************************************************************
** Meta object code from reading C++ file 'userstatusconnector.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/libsync/userstatusconnector.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'userstatusconnector.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSOCCSCOPEUserStatusENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPEUserStatusENDCLASS = QtMocHelpers::stringData(
    "OCC::UserStatus",
    "id",
    "message",
    "icon",
    "state",
    "OnlineStatus",
    "Online",
    "DoNotDisturb",
    "Away",
    "Offline",
    "Invisible"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPEUserStatusENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       4,   14, // properties
       1,   34, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // properties: name, type, flags, notifyId, revision
       1, QMetaType::QString, 0x00015003, uint(-1), 0,
       2, QMetaType::QString, 0x00015003, uint(-1), 0,
       3, QMetaType::QString, 0x00015003, uint(-1), 0,
       4, 0x80000000 | 5, 0x0001500b, uint(-1), 0,

 // enums: name, alias, flags, count, data
       5,    5, 0x2,    5,   39,

 // enum data: key, value
       6, uint(OCC::UserStatus::OnlineStatus::Online),
       7, uint(OCC::UserStatus::OnlineStatus::DoNotDisturb),
       8, uint(OCC::UserStatus::OnlineStatus::Away),
       9, uint(OCC::UserStatus::OnlineStatus::Offline),
      10, uint(OCC::UserStatus::OnlineStatus::Invisible),

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::UserStatus::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSOCCSCOPEUserStatusENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPEUserStatusENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPEUserStatusENDCLASS_t,
        // property 'id'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'message'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'icon'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'state'
        QtPrivate::TypeAndForceComplete<OnlineStatus, std::true_type>,
        // enum 'OnlineStatus'
        QtPrivate::TypeAndForceComplete<UserStatus::OnlineStatus, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<UserStatus, std::true_type>
    >,
    nullptr
} };

void OCC::UserStatus::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<UserStatus *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->_id; break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->_message; break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->_icon; break;
        case 3: *reinterpret_cast< OnlineStatus*>(_v) = _t->_state; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<UserStatus *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->_id != *reinterpret_cast< QString*>(_v)) {
                _t->_id = *reinterpret_cast< QString*>(_v);
            }
            break;
        case 1:
            if (_t->_message != *reinterpret_cast< QString*>(_v)) {
                _t->_message = *reinterpret_cast< QString*>(_v);
            }
            break;
        case 2:
            if (_t->_icon != *reinterpret_cast< QString*>(_v)) {
                _t->_icon = *reinterpret_cast< QString*>(_v);
            }
            break;
        case 3:
            if (_t->_state != *reinterpret_cast< OnlineStatus*>(_v)) {
                _t->_state = *reinterpret_cast< OnlineStatus*>(_v);
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSOCCSCOPEUserStatusConnectorENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPEUserStatusConnectorENDCLASS = QtMocHelpers::stringData(
    "OCC::UserStatusConnector",
    "userStatusFetched",
    "",
    "OCC::UserStatus",
    "userStatus",
    "predefinedStatusesFetched",
    "QList<OCC::UserStatus>",
    "statuses",
    "userStatusSet",
    "serverUserStatusChanged",
    "messageCleared",
    "error",
    "OCC::UserStatusConnector::Error",
    "Error",
    "CouldNotFetchUserStatus",
    "CouldNotFetchPredefinedUserStatuses",
    "UserStatusNotSupported",
    "EmojisNotSupported",
    "CouldNotSetUserStatus",
    "CouldNotClearMessage"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPEUserStatusConnectorENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       1,   62, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   50,    2, 0x06,    2 /* Public */,
       5,    1,   53,    2, 0x06,    4 /* Public */,
       8,    0,   56,    2, 0x06,    6 /* Public */,
       9,    0,   57,    2, 0x06,    7 /* Public */,
      10,    0,   58,    2, 0x06,    8 /* Public */,
      11,    1,   59,    2, 0x06,    9 /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   11,

 // enums: name, alias, flags, count, data
      13,   13, 0x2,    6,   67,

 // enum data: key, value
      14, uint(OCC::UserStatusConnector::Error::CouldNotFetchUserStatus),
      15, uint(OCC::UserStatusConnector::Error::CouldNotFetchPredefinedUserStatuses),
      16, uint(OCC::UserStatusConnector::Error::UserStatusNotSupported),
      17, uint(OCC::UserStatusConnector::Error::EmojisNotSupported),
      18, uint(OCC::UserStatusConnector::Error::CouldNotSetUserStatus),
      19, uint(OCC::UserStatusConnector::Error::CouldNotClearMessage),

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::UserStatusConnector::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPEUserStatusConnectorENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPEUserStatusConnectorENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPEUserStatusConnectorENDCLASS_t,
        // enum 'Error'
        QtPrivate::TypeAndForceComplete<UserStatusConnector::Error, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<UserStatusConnector, std::true_type>,
        // method 'userStatusFetched'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::UserStatus &, std::false_type>,
        // method 'predefinedStatusesFetched'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVector<OCC::UserStatus> &, std::false_type>,
        // method 'userStatusSet'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'serverUserStatusChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'messageCleared'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'error'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::UserStatusConnector::Error, std::false_type>
    >,
    nullptr
} };

void OCC::UserStatusConnector::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UserStatusConnector *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->userStatusFetched((*reinterpret_cast< std::add_pointer_t<OCC::UserStatus>>(_a[1]))); break;
        case 1: _t->predefinedStatusesFetched((*reinterpret_cast< std::add_pointer_t<QList<OCC::UserStatus>>>(_a[1]))); break;
        case 2: _t->userStatusSet(); break;
        case 3: _t->serverUserStatusChanged(); break;
        case 4: _t->messageCleared(); break;
        case 5: _t->error((*reinterpret_cast< std::add_pointer_t<OCC::UserStatusConnector::Error>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::UserStatus >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<OCC::UserStatus> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (UserStatusConnector::*)(const OCC::UserStatus & );
            if (_t _q_method = &UserStatusConnector::userStatusFetched; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (UserStatusConnector::*)(const QVector<OCC::UserStatus> & );
            if (_t _q_method = &UserStatusConnector::predefinedStatusesFetched; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (UserStatusConnector::*)();
            if (_t _q_method = &UserStatusConnector::userStatusSet; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (UserStatusConnector::*)();
            if (_t _q_method = &UserStatusConnector::serverUserStatusChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (UserStatusConnector::*)();
            if (_t _q_method = &UserStatusConnector::messageCleared; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (UserStatusConnector::*)(OCC::UserStatusConnector::Error );
            if (_t _q_method = &UserStatusConnector::error; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject *OCC::UserStatusConnector::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::UserStatusConnector::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPEUserStatusConnectorENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OCC::UserStatusConnector::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void OCC::UserStatusConnector::userStatusFetched(const OCC::UserStatus & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OCC::UserStatusConnector::predefinedStatusesFetched(const QVector<OCC::UserStatus> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void OCC::UserStatusConnector::userStatusSet()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void OCC::UserStatusConnector::serverUserStatusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void OCC::UserStatusConnector::messageCleared()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void OCC::UserStatusConnector::error(OCC::UserStatusConnector::Error _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
