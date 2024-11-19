/****************************************************************************
** Meta object code from reading C++ file 'flow2authwidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/gui/wizard/flow2authwidget.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'flow2authwidget.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSOCCSCOPEFlow2AuthWidgetENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPEFlow2AuthWidgetENDCLASS = QtMocHelpers::stringData(
    "OCC::Flow2AuthWidget",
    "authResult",
    "",
    "Flow2Auth::Result",
    "errorString",
    "user",
    "appPassword",
    "pollNow",
    "slotAuthResult",
    "slotPollNow",
    "slotStatusChanged",
    "Flow2Auth::PollStatus",
    "status",
    "secondsLeft",
    "slotStyleChanged",
    "slotOpenBrowser",
    "slotCopyLinkToClipboard"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPEFlow2AuthWidgetENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    4,   62,    2, 0x06,    1 /* Public */,
       7,    0,   71,    2, 0x06,    6 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    4,   72,    2, 0x0a,    7 /* Public */,
       9,    0,   81,    2, 0x0a,   12 /* Public */,
      10,    2,   82,    2, 0x0a,   13 /* Public */,
      14,    0,   87,    2, 0x0a,   16 /* Public */,
      15,    0,   88,    2, 0x09,   17 /* Protected */,
      16,    0,   89,    2, 0x09,   18 /* Protected */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, QMetaType::QString, QMetaType::QString,    2,    4,    5,    6,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QString, QMetaType::QString, QMetaType::QString,    2,    4,    5,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11, QMetaType::Int,   12,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::Flow2AuthWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPEFlow2AuthWidgetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPEFlow2AuthWidgetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPEFlow2AuthWidgetENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Flow2AuthWidget, std::true_type>,
        // method 'authResult'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Flow2Auth::Result, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'pollNow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotAuthResult'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Flow2Auth::Result, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'slotPollNow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotStatusChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Flow2Auth::PollStatus, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'slotStyleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotOpenBrowser'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotCopyLinkToClipboard'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void OCC::Flow2AuthWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Flow2AuthWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->authResult((*reinterpret_cast< std::add_pointer_t<Flow2Auth::Result>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4]))); break;
        case 1: _t->pollNow(); break;
        case 2: _t->slotAuthResult((*reinterpret_cast< std::add_pointer_t<Flow2Auth::Result>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4]))); break;
        case 3: _t->slotPollNow(); break;
        case 4: _t->slotStatusChanged((*reinterpret_cast< std::add_pointer_t<Flow2Auth::PollStatus>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 5: _t->slotStyleChanged(); break;
        case 6: _t->slotOpenBrowser(); break;
        case 7: _t->slotCopyLinkToClipboard(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Flow2AuthWidget::*)(Flow2Auth::Result , const QString & , const QString & , const QString & );
            if (_t _q_method = &Flow2AuthWidget::authResult; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Flow2AuthWidget::*)();
            if (_t _q_method = &Flow2AuthWidget::pollNow; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *OCC::Flow2AuthWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::Flow2AuthWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPEFlow2AuthWidgetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int OCC::Flow2AuthWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void OCC::Flow2AuthWidget::authResult(Flow2Auth::Result _t1, const QString & _t2, const QString & _t3, const QString & _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OCC::Flow2AuthWidget::pollNow()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
