/****************************************************************************
** Meta object code from reading C++ file 'flow2auth.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/gui/creds/flow2auth.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'flow2auth.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSOCCSCOPEFlow2AuthENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPEFlow2AuthENDCLASS = QtMocHelpers::stringData(
    "OCC::Flow2Auth",
    "result",
    "",
    "OCC::Flow2Auth::Result",
    "errorString",
    "user",
    "appPassword",
    "statusChanged",
    "OCC::Flow2Auth::PollStatus",
    "status",
    "secondsLeft",
    "slotPollNow",
    "slotPollTimerTimeout",
    "Result",
    "NotSupported",
    "LoggedIn",
    "Error"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPEFlow2AuthENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       1,   87, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    4,   56,    2, 0x06,    2 /* Public */,
       1,    3,   65,    2, 0x26,    7 /* Public | MethodCloned */,
       1,    2,   72,    2, 0x26,   11 /* Public | MethodCloned */,
       1,    1,   77,    2, 0x26,   14 /* Public | MethodCloned */,
       7,    2,   80,    2, 0x06,   16 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      11,    0,   85,    2, 0x0a,   19 /* Public */,
      12,    0,   86,    2, 0x08,   20 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, QMetaType::QString, QMetaType::QString,    1,    4,    5,    6,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, QMetaType::QString,    1,    4,    5,
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString,    1,    4,
    QMetaType::Void, 0x80000000 | 3,    1,
    QMetaType::Void, 0x80000000 | 8, QMetaType::Int,    9,   10,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

 // enums: name, alias, flags, count, data
      13,   13, 0x0,    3,   92,

 // enum data: key, value
      14, uint(OCC::Flow2Auth::NotSupported),
      15, uint(OCC::Flow2Auth::LoggedIn),
      16, uint(OCC::Flow2Auth::Error),

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::Flow2Auth::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPEFlow2AuthENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPEFlow2AuthENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPEFlow2AuthENDCLASS_t,
        // enum 'Result'
        QtPrivate::TypeAndForceComplete<Flow2Auth::Result, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Flow2Auth, std::true_type>,
        // method 'result'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::Flow2Auth::Result, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'result'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::Flow2Auth::Result, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'result'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::Flow2Auth::Result, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'result'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::Flow2Auth::Result, std::false_type>,
        // method 'statusChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::Flow2Auth::PollStatus, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'slotPollNow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotPollTimerTimeout'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void OCC::Flow2Auth::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Flow2Auth *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->result((*reinterpret_cast< std::add_pointer_t<OCC::Flow2Auth::Result>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4]))); break;
        case 1: _t->result((*reinterpret_cast< std::add_pointer_t<OCC::Flow2Auth::Result>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 2: _t->result((*reinterpret_cast< std::add_pointer_t<OCC::Flow2Auth::Result>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 3: _t->result((*reinterpret_cast< std::add_pointer_t<OCC::Flow2Auth::Result>>(_a[1]))); break;
        case 4: _t->statusChanged((*reinterpret_cast< std::add_pointer_t<OCC::Flow2Auth::PollStatus>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 5: _t->slotPollNow(); break;
        case 6: _t->slotPollTimerTimeout(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Flow2Auth::*)(OCC::Flow2Auth::Result , const QString & , const QString & , const QString & );
            if (_t _q_method = &Flow2Auth::result; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Flow2Auth::*)(const OCC::Flow2Auth::PollStatus , int );
            if (_t _q_method = &Flow2Auth::statusChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject *OCC::Flow2Auth::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::Flow2Auth::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPEFlow2AuthENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OCC::Flow2Auth::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void OCC::Flow2Auth::result(OCC::Flow2Auth::Result _t1, const QString & _t2, const QString & _t3, const QString & _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 4
void OCC::Flow2Auth::statusChanged(const OCC::Flow2Auth::PollStatus _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
