/****************************************************************************
** Meta object code from reading C++ file 'userinfo.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/gui/userinfo.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'userinfo.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSOCCSCOPEUserInfoENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPEUserInfoENDCLASS = QtMocHelpers::stringData(
    "OCC::UserInfo",
    "quotaUpdated",
    "",
    "total",
    "used",
    "fetchedLastInfo",
    "OCC::UserInfo*",
    "userInfo",
    "slotFetchInfo",
    "slotUpdateLastInfo",
    "json",
    "slotAccountStateChanged",
    "slotRequestFailed",
    "slotAvatarImage",
    "img"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPEUserInfoENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   56,    2, 0x06,    1 /* Public */,
       5,    1,   61,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    0,   64,    2, 0x0a,    6 /* Public */,
       9,    1,   65,    2, 0x08,    7 /* Private */,
      11,    0,   68,    2, 0x08,    9 /* Private */,
      12,    0,   69,    2, 0x08,   10 /* Private */,
      13,    1,   70,    2, 0x08,   11 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,    3,    4,
    QMetaType::Void, 0x80000000 | 6,    7,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QJsonDocument,   10,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QImage,   14,

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::UserInfo::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPEUserInfoENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPEUserInfoENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPEUserInfoENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<UserInfo, std::true_type>,
        // method 'quotaUpdated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'fetchedLastInfo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::UserInfo *, std::false_type>,
        // method 'slotFetchInfo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotUpdateLastInfo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QJsonDocument &, std::false_type>,
        // method 'slotAccountStateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotRequestFailed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotAvatarImage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QImage &, std::false_type>
    >,
    nullptr
} };

void OCC::UserInfo::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UserInfo *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->quotaUpdated((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<qint64>>(_a[2]))); break;
        case 1: _t->fetchedLastInfo((*reinterpret_cast< std::add_pointer_t<OCC::UserInfo*>>(_a[1]))); break;
        case 2: _t->slotFetchInfo(); break;
        case 3: _t->slotUpdateLastInfo((*reinterpret_cast< std::add_pointer_t<QJsonDocument>>(_a[1]))); break;
        case 4: _t->slotAccountStateChanged(); break;
        case 5: _t->slotRequestFailed(); break;
        case 6: _t->slotAvatarImage((*reinterpret_cast< std::add_pointer_t<QImage>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::UserInfo* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (UserInfo::*)(qint64 , qint64 );
            if (_t _q_method = &UserInfo::quotaUpdated; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (UserInfo::*)(OCC::UserInfo * );
            if (_t _q_method = &UserInfo::fetchedLastInfo; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *OCC::UserInfo::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::UserInfo::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPEUserInfoENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OCC::UserInfo::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void OCC::UserInfo::quotaUpdated(qint64 _t1, qint64 _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OCC::UserInfo::fetchedLastInfo(OCC::UserInfo * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
