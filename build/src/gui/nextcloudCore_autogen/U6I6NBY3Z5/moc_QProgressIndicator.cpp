/****************************************************************************
** Meta object code from reading C++ file 'QProgressIndicator.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/3rdparty/QProgressIndicator/QProgressIndicator.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'QProgressIndicator.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSQProgressIndicatorENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSQProgressIndicatorENDCLASS = QtMocHelpers::stringData(
    "QProgressIndicator",
    "startAnimation",
    "",
    "stopAnimation",
    "setAnimationDelay",
    "delay",
    "setDisplayedWhenStopped",
    "state",
    "setColor",
    "color",
    "displayedWhenStopped"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSQProgressIndicatorENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       3,   55, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x0a,    4 /* Public */,
       3,    0,   45,    2, 0x0a,    5 /* Public */,
       4,    1,   46,    2, 0x0a,    6 /* Public */,
       6,    1,   49,    2, 0x0a,    8 /* Public */,
       8,    1,   52,    2, 0x0a,   10 /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, QMetaType::Bool,    7,
    QMetaType::Void, QMetaType::QColor,    9,

 // properties: name, type, flags, notifyId, revision
       5, QMetaType::Int, 0x00015003, uint(-1), 0,
      10, QMetaType::Bool, 0x00015103, uint(-1), 0,
       9, QMetaType::QColor, 0x00015103, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject QProgressIndicator::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSQProgressIndicatorENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSQProgressIndicatorENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSQProgressIndicatorENDCLASS_t,
        // property 'delay'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'displayedWhenStopped'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'color'
        QtPrivate::TypeAndForceComplete<QColor, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<QProgressIndicator, std::true_type>,
        // method 'startAnimation'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'stopAnimation'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setAnimationDelay'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setDisplayedWhenStopped'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setColor'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QColor &, std::false_type>
    >,
    nullptr
} };

void QProgressIndicator::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<QProgressIndicator *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->startAnimation(); break;
        case 1: _t->stopAnimation(); break;
        case 2: _t->setAnimationDelay((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->setDisplayedWhenStopped((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->setColor((*reinterpret_cast< std::add_pointer_t<QColor>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<QProgressIndicator *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< int*>(_v) = _t->animationDelay(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->isDisplayedWhenStopped(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = _t->color(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<QProgressIndicator *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAnimationDelay(*reinterpret_cast< int*>(_v)); break;
        case 1: _t->setDisplayedWhenStopped(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setColor(*reinterpret_cast< QColor*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *QProgressIndicator::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *QProgressIndicator::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSQProgressIndicatorENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int QProgressIndicator::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
QT_WARNING_POP
