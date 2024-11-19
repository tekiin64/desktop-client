/****************************************************************************
** Meta object code from reading C++ file 'wheelhandler.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/3rdparty/kirigami/wheelhandler.h"
#include <QtNetwork/QSslPreSharedKeyAuthenticator>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'wheelhandler.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSKirigamiWheelEventENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSKirigamiWheelEventENDCLASS = QtMocHelpers::stringData(
    "KirigamiWheelEvent",
    "x",
    "y",
    "angleDelta",
    "pixelDelta",
    "buttons",
    "modifiers",
    "inverted",
    "accepted"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSKirigamiWheelEventENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       8,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags, notifyId, revision
       1, QMetaType::QReal, 0x00015401, uint(-1), 0,
       2, QMetaType::QReal, 0x00015401, uint(-1), 0,
       3, QMetaType::QPointF, 0x00015401, uint(-1), 0,
       4, QMetaType::QPointF, 0x00015401, uint(-1), 0,
       5, QMetaType::Int, 0x00015401, uint(-1), 0,
       6, QMetaType::Int, 0x00015401, uint(-1), 0,
       7, QMetaType::Bool, 0x00015401, uint(-1), 0,
       8, QMetaType::Bool, 0x00015103, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject KirigamiWheelEvent::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSKirigamiWheelEventENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSKirigamiWheelEventENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSKirigamiWheelEventENDCLASS_t,
        // property 'x'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'y'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'angleDelta'
        QtPrivate::TypeAndForceComplete<QPointF, std::true_type>,
        // property 'pixelDelta'
        QtPrivate::TypeAndForceComplete<QPointF, std::true_type>,
        // property 'buttons'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'modifiers'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'inverted'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'accepted'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<KirigamiWheelEvent, std::true_type>
    >,
    nullptr
} };

void KirigamiWheelEvent::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<KirigamiWheelEvent *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< qreal*>(_v) = _t->x(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->y(); break;
        case 2: *reinterpret_cast< QPointF*>(_v) = _t->angleDelta(); break;
        case 3: *reinterpret_cast< QPointF*>(_v) = _t->pixelDelta(); break;
        case 4: *reinterpret_cast< int*>(_v) = _t->buttons(); break;
        case 5: *reinterpret_cast< int*>(_v) = _t->modifiers(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->inverted(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->isAccepted(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<KirigamiWheelEvent *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 7: _t->setAccepted(*reinterpret_cast< bool*>(_v)); break;
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

const QMetaObject *KirigamiWheelEvent::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KirigamiWheelEvent::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSKirigamiWheelEventENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int KirigamiWheelEvent::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSWheelFilterItemENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSWheelFilterItemENDCLASS = QtMocHelpers::stringData(
    "WheelFilterItem"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSWheelFilterItemENDCLASS[] = {

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

Q_CONSTINIT const QMetaObject WheelFilterItem::staticMetaObject = { {
    QMetaObject::SuperData::link<QQuickItem::staticMetaObject>(),
    qt_meta_stringdata_CLASSWheelFilterItemENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSWheelFilterItemENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSWheelFilterItemENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<WheelFilterItem, std::true_type>
    >,
    nullptr
} };

void WheelFilterItem::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *WheelFilterItem::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WheelFilterItem::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSWheelFilterItemENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QQuickItem::qt_metacast(_clname);
}

int WheelFilterItem::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QQuickItem::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSWheelHandlerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSWheelHandlerENDCLASS = QtMocHelpers::stringData(
    "WheelHandler",
    "targetChanged",
    "",
    "verticalStepSizeChanged",
    "horizontalStepSizeChanged",
    "pageScrollModifiersChanged",
    "filterMouseEventsChanged",
    "keyNavigationEnabledChanged",
    "blockTargetWheelChanged",
    "scrollFlickableTargetChanged",
    "wheel",
    "KirigamiWheelEvent*",
    "scrollUp",
    "stepSize",
    "scrollDown",
    "scrollLeft",
    "scrollRight",
    "target",
    "QQuickItem*",
    "verticalStepSize",
    "horizontalStepSize",
    "pageScrollModifiers",
    "Qt::KeyboardModifiers",
    "filterMouseEvents",
    "keyNavigationEnabled",
    "blockTargetWheel",
    "scrollFlickableTarget"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSWheelHandlerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       8,  143, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  116,    2, 0x06,    9 /* Public */,
       3,    0,  117,    2, 0x06,   10 /* Public */,
       4,    0,  118,    2, 0x06,   11 /* Public */,
       5,    0,  119,    2, 0x06,   12 /* Public */,
       6,    0,  120,    2, 0x06,   13 /* Public */,
       7,    0,  121,    2, 0x06,   14 /* Public */,
       8,    0,  122,    2, 0x06,   15 /* Public */,
       9,    0,  123,    2, 0x06,   16 /* Public */,
      10,    1,  124,    2, 0x06,   17 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      12,    1,  127,    2, 0x02,   19 /* Public */,
      12,    0,  130,    2, 0x22,   21 /* Public | MethodCloned */,
      14,    1,  131,    2, 0x02,   22 /* Public */,
      14,    0,  134,    2, 0x22,   24 /* Public | MethodCloned */,
      15,    1,  135,    2, 0x02,   25 /* Public */,
      15,    0,  138,    2, 0x22,   27 /* Public | MethodCloned */,
      16,    1,  139,    2, 0x02,   28 /* Public */,
      16,    0,  142,    2, 0x22,   30 /* Public | MethodCloned */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 11,   10,

 // methods: parameters
    QMetaType::Bool, QMetaType::QReal,   13,
    QMetaType::Bool,
    QMetaType::Bool, QMetaType::QReal,   13,
    QMetaType::Bool,
    QMetaType::Bool, QMetaType::QReal,   13,
    QMetaType::Bool,
    QMetaType::Bool, QMetaType::QReal,   13,
    QMetaType::Bool,

 // properties: name, type, flags, notifyId, revision
      17, 0x80000000 | 18, 0x0001590b, uint(0), 0,
      19, QMetaType::QReal, 0x00015907, uint(1), 0,
      20, QMetaType::QReal, 0x00015907, uint(2), 0,
      21, 0x80000000 | 22, 0x0001590f, uint(3), 0,
      23, QMetaType::Bool, 0x00015903, uint(4), 0,
      24, QMetaType::Bool, 0x00015903, uint(5), 0,
      25, QMetaType::Bool, 0x00015003, uint(6), 0,
      26, QMetaType::Bool, 0x00015003, uint(7), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject WheelHandler::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSWheelHandlerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSWheelHandlerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSWheelHandlerENDCLASS_t,
        // property 'target'
        QtPrivate::TypeAndForceComplete<QQuickItem*, std::true_type>,
        // property 'verticalStepSize'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'horizontalStepSize'
        QtPrivate::TypeAndForceComplete<qreal, std::true_type>,
        // property 'pageScrollModifiers'
        QtPrivate::TypeAndForceComplete<Qt::KeyboardModifiers, std::true_type>,
        // property 'filterMouseEvents'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'keyNavigationEnabled'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'blockTargetWheel'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'scrollFlickableTarget'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<WheelHandler, std::true_type>,
        // method 'targetChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'verticalStepSizeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'horizontalStepSizeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'pageScrollModifiersChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'filterMouseEventsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'keyNavigationEnabledChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'blockTargetWheelChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'scrollFlickableTargetChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'wheel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<KirigamiWheelEvent *, std::false_type>,
        // method 'scrollUp'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<qreal, std::false_type>,
        // method 'scrollUp'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'scrollDown'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<qreal, std::false_type>,
        // method 'scrollDown'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'scrollLeft'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<qreal, std::false_type>,
        // method 'scrollLeft'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'scrollRight'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<qreal, std::false_type>,
        // method 'scrollRight'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>
    >,
    nullptr
} };

void WheelHandler::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WheelHandler *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->targetChanged(); break;
        case 1: _t->verticalStepSizeChanged(); break;
        case 2: _t->horizontalStepSizeChanged(); break;
        case 3: _t->pageScrollModifiersChanged(); break;
        case 4: _t->filterMouseEventsChanged(); break;
        case 5: _t->keyNavigationEnabledChanged(); break;
        case 6: _t->blockTargetWheelChanged(); break;
        case 7: _t->scrollFlickableTargetChanged(); break;
        case 8: _t->wheel((*reinterpret_cast< std::add_pointer_t<KirigamiWheelEvent*>>(_a[1]))); break;
        case 9: { bool _r = _t->scrollUp((*reinterpret_cast< std::add_pointer_t<qreal>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 10: { bool _r = _t->scrollUp();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 11: { bool _r = _t->scrollDown((*reinterpret_cast< std::add_pointer_t<qreal>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 12: { bool _r = _t->scrollDown();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 13: { bool _r = _t->scrollLeft((*reinterpret_cast< std::add_pointer_t<qreal>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 14: { bool _r = _t->scrollLeft();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 15: { bool _r = _t->scrollRight((*reinterpret_cast< std::add_pointer_t<qreal>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 16: { bool _r = _t->scrollRight();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< KirigamiWheelEvent* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WheelHandler::*)();
            if (_t _q_method = &WheelHandler::targetChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (WheelHandler::*)();
            if (_t _q_method = &WheelHandler::verticalStepSizeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (WheelHandler::*)();
            if (_t _q_method = &WheelHandler::horizontalStepSizeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (WheelHandler::*)();
            if (_t _q_method = &WheelHandler::pageScrollModifiersChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (WheelHandler::*)();
            if (_t _q_method = &WheelHandler::filterMouseEventsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (WheelHandler::*)();
            if (_t _q_method = &WheelHandler::keyNavigationEnabledChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (WheelHandler::*)();
            if (_t _q_method = &WheelHandler::blockTargetWheelChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (WheelHandler::*)();
            if (_t _q_method = &WheelHandler::scrollFlickableTargetChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (WheelHandler::*)(KirigamiWheelEvent * );
            if (_t _q_method = &WheelHandler::wheel; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QQuickItem* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<WheelHandler *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QQuickItem**>(_v) = _t->target(); break;
        case 1: *reinterpret_cast< qreal*>(_v) = _t->verticalStepSize(); break;
        case 2: *reinterpret_cast< qreal*>(_v) = _t->horizontalStepSize(); break;
        case 3: *reinterpret_cast< Qt::KeyboardModifiers*>(_v) = _t->pageScrollModifiers(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->filterMouseEvents(); break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->keyNavigationEnabled(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->m_blockTargetWheel; break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->m_scrollFlickableTarget; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<WheelHandler *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setTarget(*reinterpret_cast< QQuickItem**>(_v)); break;
        case 1: _t->setVerticalStepSize(*reinterpret_cast< qreal*>(_v)); break;
        case 2: _t->setHorizontalStepSize(*reinterpret_cast< qreal*>(_v)); break;
        case 3: _t->setPageScrollModifiers(*reinterpret_cast< Qt::KeyboardModifiers*>(_v)); break;
        case 4: _t->setFilterMouseEvents(*reinterpret_cast< bool*>(_v)); break;
        case 5: _t->setKeyNavigationEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 6:
            if (_t->m_blockTargetWheel != *reinterpret_cast< bool*>(_v)) {
                _t->m_blockTargetWheel = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->blockTargetWheelChanged();
            }
            break;
        case 7:
            if (_t->m_scrollFlickableTarget != *reinterpret_cast< bool*>(_v)) {
                _t->m_scrollFlickableTarget = *reinterpret_cast< bool*>(_v);
                Q_EMIT _t->scrollFlickableTargetChanged();
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
        auto *_t = static_cast<WheelHandler *>(_o);
        (void)_t;
        switch (_id) {
        case 1: _t->resetVerticalStepSize(); break;
        case 2: _t->resetHorizontalStepSize(); break;
        case 3: _t->resetPageScrollModifiers(); break;
        default: break;
        }
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *WheelHandler::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *WheelHandler::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSWheelHandlerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int WheelHandler::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void WheelHandler::targetChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void WheelHandler::verticalStepSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void WheelHandler::horizontalStepSizeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void WheelHandler::pageScrollModifiersChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void WheelHandler::filterMouseEventsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void WheelHandler::keyNavigationEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void WheelHandler::blockTargetWheelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void WheelHandler::scrollFlickableTargetChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void WheelHandler::wheel(KirigamiWheelEvent * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}
QT_WARNING_POP
