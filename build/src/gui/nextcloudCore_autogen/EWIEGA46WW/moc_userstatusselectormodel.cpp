/****************************************************************************
** Meta object code from reading C++ file 'userstatusselectormodel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/gui/userstatusselectormodel.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'userstatusselectormodel.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSOCCSCOPEUserStatusSelectorModelENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPEUserStatusSelectorModelENDCLASS = QtMocHelpers::stringData(
    "OCC::UserStatusSelectorModel",
    "userIndexChanged",
    "",
    "errorMessageChanged",
    "userStatusChanged",
    "clearAtDisplayStringChanged",
    "predefinedStatusesChanged",
    "finished",
    "setUserIndex",
    "userIndex",
    "setUserStatus",
    "clearUserStatus",
    "setClearAt",
    "OCC::UserStatusSelectorModel::ClearStageType",
    "clearStageType",
    "setPredefinedStatus",
    "OCC::UserStatus",
    "predefinedStatus",
    "clearAtReadable",
    "status",
    "userStatusMessage",
    "userStatusEmoji",
    "onlineStatus",
    "OCC::UserStatus::OnlineStatus",
    "predefinedStatuses",
    "QList<OCC::UserStatus>",
    "clearStageTypes",
    "QVariantList",
    "clearAtDisplayString",
    "errorMessage",
    "onlineIcon",
    "awayIcon",
    "dndIcon",
    "invisibleIcon",
    "ClearStageType",
    "DontClear",
    "HalfHour",
    "OneHour",
    "FourHour",
    "Today",
    "Week"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPEUserStatusSelectorModelENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
      12,  106, // properties
       1,  166, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   86,    2, 0x06,   14 /* Public */,
       3,    0,   87,    2, 0x06,   15 /* Public */,
       4,    0,   88,    2, 0x06,   16 /* Public */,
       5,    0,   89,    2, 0x06,   17 /* Public */,
       6,    0,   90,    2, 0x06,   18 /* Public */,
       7,    0,   91,    2, 0x06,   19 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    1,   92,    2, 0x0a,   20 /* Public */,
      10,    0,   95,    2, 0x0a,   22 /* Public */,
      11,    0,   96,    2, 0x0a,   23 /* Public */,
      12,    1,   97,    2, 0x0a,   24 /* Public */,
      15,    1,  100,    2, 0x0a,   26 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      18,    1,  103,    2, 0x102,   28 /* Public | MethodIsConst  */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 16,   17,

 // methods: parameters
    QMetaType::QString, 0x80000000 | 16,   19,

 // properties: name, type, flags, notifyId, revision
       9, QMetaType::Int, 0x00015103, uint(0), 0,
      20, QMetaType::QString, 0x00015103, uint(2), 0,
      21, QMetaType::QString, 0x00015103, uint(2), 0,
      22, 0x80000000 | 23, 0x0001510b, uint(2), 0,
      24, 0x80000000 | 25, 0x00015009, uint(4), 0,
      26, 0x80000000 | 27, 0x00015409, uint(-1), 0,
      28, QMetaType::QString, 0x00015001, uint(3), 0,
      29, QMetaType::QString, 0x00015001, uint(1), 0,
      30, QMetaType::QUrl, 0x00015401, uint(-1), 0,
      31, QMetaType::QUrl, 0x00015401, uint(-1), 0,
      32, QMetaType::QUrl, 0x00015401, uint(-1), 0,
      33, QMetaType::QUrl, 0x00015401, uint(-1), 0,

 // enums: name, alias, flags, count, data
      34,   34, 0x2,    6,  171,

 // enum data: key, value
      35, uint(OCC::UserStatusSelectorModel::ClearStageType::DontClear),
      36, uint(OCC::UserStatusSelectorModel::ClearStageType::HalfHour),
      37, uint(OCC::UserStatusSelectorModel::ClearStageType::OneHour),
      38, uint(OCC::UserStatusSelectorModel::ClearStageType::FourHour),
      39, uint(OCC::UserStatusSelectorModel::ClearStageType::Today),
      40, uint(OCC::UserStatusSelectorModel::ClearStageType::Week),

       0        // eod
};

Q_CONSTINIT static const QMetaObject::SuperData qt_meta_extradata_CLASSOCCSCOPEUserStatusSelectorModelENDCLASS[] = {
    QMetaObject::SuperData::link<OCC::UserStatus::staticMetaObject>(),
    nullptr
};

Q_CONSTINIT const QMetaObject OCC::UserStatusSelectorModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPEUserStatusSelectorModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPEUserStatusSelectorModelENDCLASS,
    qt_static_metacall,
    qt_meta_extradata_CLASSOCCSCOPEUserStatusSelectorModelENDCLASS,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPEUserStatusSelectorModelENDCLASS_t,
        // property 'userIndex'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'userStatusMessage'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'userStatusEmoji'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'onlineStatus'
        QtPrivate::TypeAndForceComplete<OCC::UserStatus::OnlineStatus, std::true_type>,
        // property 'predefinedStatuses'
        QtPrivate::TypeAndForceComplete<QList<OCC::UserStatus>, std::true_type>,
        // property 'clearStageTypes'
        QtPrivate::TypeAndForceComplete<QVariantList, std::true_type>,
        // property 'clearAtDisplayString'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'errorMessage'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'onlineIcon'
        QtPrivate::TypeAndForceComplete<QUrl, std::true_type>,
        // property 'awayIcon'
        QtPrivate::TypeAndForceComplete<QUrl, std::true_type>,
        // property 'dndIcon'
        QtPrivate::TypeAndForceComplete<QUrl, std::true_type>,
        // property 'invisibleIcon'
        QtPrivate::TypeAndForceComplete<QUrl, std::true_type>,
        // enum 'ClearStageType'
        QtPrivate::TypeAndForceComplete<UserStatusSelectorModel::ClearStageType, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<UserStatusSelectorModel, std::true_type>,
        // method 'userIndexChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'errorMessageChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'userStatusChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'clearAtDisplayStringChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'predefinedStatusesChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'finished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setUserIndex'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'setUserStatus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'clearUserStatus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setClearAt'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::UserStatusSelectorModel::ClearStageType, std::false_type>,
        // method 'setPredefinedStatus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::UserStatus &, std::false_type>,
        // method 'clearAtReadable'
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::UserStatus &, std::false_type>
    >,
    nullptr
} };

void OCC::UserStatusSelectorModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UserStatusSelectorModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->userIndexChanged(); break;
        case 1: _t->errorMessageChanged(); break;
        case 2: _t->userStatusChanged(); break;
        case 3: _t->clearAtDisplayStringChanged(); break;
        case 4: _t->predefinedStatusesChanged(); break;
        case 5: _t->finished(); break;
        case 6: _t->setUserIndex((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 7: _t->setUserStatus(); break;
        case 8: _t->clearUserStatus(); break;
        case 9: _t->setClearAt((*reinterpret_cast< std::add_pointer_t<OCC::UserStatusSelectorModel::ClearStageType>>(_a[1]))); break;
        case 10: _t->setPredefinedStatus((*reinterpret_cast< std::add_pointer_t<OCC::UserStatus>>(_a[1]))); break;
        case 11: { QString _r = _t->clearAtReadable((*reinterpret_cast< std::add_pointer_t<OCC::UserStatus>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QString*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 10:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::UserStatus >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::UserStatus >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (UserStatusSelectorModel::*)();
            if (_t _q_method = &UserStatusSelectorModel::userIndexChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (UserStatusSelectorModel::*)();
            if (_t _q_method = &UserStatusSelectorModel::errorMessageChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (UserStatusSelectorModel::*)();
            if (_t _q_method = &UserStatusSelectorModel::userStatusChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (UserStatusSelectorModel::*)();
            if (_t _q_method = &UserStatusSelectorModel::clearAtDisplayStringChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (UserStatusSelectorModel::*)();
            if (_t _q_method = &UserStatusSelectorModel::predefinedStatusesChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (UserStatusSelectorModel::*)();
            if (_t _q_method = &UserStatusSelectorModel::finished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 4:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QList<OCC::UserStatus> >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<UserStatusSelectorModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->userIndex(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->userStatusMessage(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->userStatusEmoji(); break;
        case 3: *reinterpret_cast< OCC::UserStatus::OnlineStatus*>(_v) = _t->onlineStatus(); break;
        case 4: *reinterpret_cast< QList<OCC::UserStatus>*>(_v) = _t->predefinedStatuses(); break;
        case 5: *reinterpret_cast< QVariantList*>(_v) = _t->clearStageTypes(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->clearAtDisplayString(); break;
        case 7: *reinterpret_cast< QString*>(_v) = _t->errorMessage(); break;
        case 8: *reinterpret_cast< QUrl*>(_v) = _t->onlineIcon(); break;
        case 9: *reinterpret_cast< QUrl*>(_v) = _t->awayIcon(); break;
        case 10: *reinterpret_cast< QUrl*>(_v) = _t->dndIcon(); break;
        case 11: *reinterpret_cast< QUrl*>(_v) = _t->invisibleIcon(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<UserStatusSelectorModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setUserIndex(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setUserStatusMessage(*reinterpret_cast< QString*>(_v)); break;
        case 2: _t->setUserStatusEmoji(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setOnlineStatus(*reinterpret_cast< OCC::UserStatus::OnlineStatus*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *OCC::UserStatusSelectorModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::UserStatusSelectorModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPEUserStatusSelectorModelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OCC::UserStatusSelectorModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    }
    return _id;
}

// SIGNAL 0
void OCC::UserStatusSelectorModel::userIndexChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void OCC::UserStatusSelectorModel::errorMessageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void OCC::UserStatusSelectorModel::userStatusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void OCC::UserStatusSelectorModel::clearAtDisplayStringChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void OCC::UserStatusSelectorModel::predefinedStatusesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void OCC::UserStatusSelectorModel::finished()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
