/****************************************************************************
** Meta object code from reading C++ file 'kmessagewidget.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/3rdparty/kmessagewidget/kmessagewidget.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'kmessagewidget.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSKMessageWidgetENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSKMessageWidgetENDCLASS = QtMocHelpers::stringData(
    "KMessageWidget",
    "linkActivated",
    "",
    "contents",
    "linkHovered",
    "hideAnimationFinished",
    "showAnimationFinished",
    "setText",
    "text",
    "setWordWrap",
    "wordWrap",
    "setCloseButtonVisible",
    "visible",
    "setMessageType",
    "KMessageWidget::MessageType",
    "type",
    "animatedShow",
    "animatedHide",
    "setIcon",
    "icon",
    "slotTimeLineChanged",
    "slotTimeLineFinished",
    "closeButtonVisible",
    "messageType",
    "MessageType",
    "Positive",
    "Information",
    "Warning",
    "Error"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSKMessageWidgetENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       5,  121, // properties
       1,  146, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   92,    2, 0x06,    7 /* Public */,
       4,    1,   95,    2, 0x06,    9 /* Public */,
       5,    0,   98,    2, 0x06,   11 /* Public */,
       6,    0,   99,    2, 0x06,   12 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    1,  100,    2, 0x0a,   13 /* Public */,
       9,    1,  103,    2, 0x0a,   15 /* Public */,
      11,    1,  106,    2, 0x0a,   17 /* Public */,
      13,    1,  109,    2, 0x0a,   19 /* Public */,
      16,    0,  112,    2, 0x0a,   21 /* Public */,
      17,    0,  113,    2, 0x0a,   22 /* Public */,
      18,    1,  114,    2, 0x0a,   23 /* Public */,
      20,    1,  117,    2, 0x08,   25 /* Private */,
      21,    0,  120,    2, 0x08,   27 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, QMetaType::Bool,   10,
    QMetaType::Void, QMetaType::Bool,   12,
    QMetaType::Void, 0x80000000 | 14,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QIcon,   19,
    QMetaType::Void, QMetaType::QReal,    2,
    QMetaType::Void,

 // properties: name, type, flags, notifyId, revision
       8, QMetaType::QString, 0x00015103, uint(-1), 0,
      10, QMetaType::Bool, 0x00015103, uint(-1), 0,
      22, QMetaType::Bool, 0x00015103, uint(-1), 0,
      23, 0x80000000 | 24, 0x0001510b, uint(-1), 0,
      19, QMetaType::QIcon, 0x00015103, uint(-1), 0,

 // enums: name, alias, flags, count, data
      24,   24, 0x0,    4,  151,

 // enum data: key, value
      25, uint(KMessageWidget::Positive),
      26, uint(KMessageWidget::Information),
      27, uint(KMessageWidget::Warning),
      28, uint(KMessageWidget::Error),

       0        // eod
};

Q_CONSTINIT const QMetaObject KMessageWidget::staticMetaObject = { {
    QMetaObject::SuperData::link<QFrame::staticMetaObject>(),
    qt_meta_stringdata_CLASSKMessageWidgetENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSKMessageWidgetENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSKMessageWidgetENDCLASS_t,
        // property 'text'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'wordWrap'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'closeButtonVisible'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'messageType'
        QtPrivate::TypeAndForceComplete<MessageType, std::true_type>,
        // property 'icon'
        QtPrivate::TypeAndForceComplete<QIcon, std::true_type>,
        // enum 'MessageType'
        QtPrivate::TypeAndForceComplete<KMessageWidget::MessageType, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<KMessageWidget, std::true_type>,
        // method 'linkActivated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'linkHovered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'hideAnimationFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showAnimationFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setText'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setWordWrap'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setCloseButtonVisible'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setMessageType'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<KMessageWidget::MessageType, std::false_type>,
        // method 'animatedShow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'animatedHide'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setIcon'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QIcon &, std::false_type>,
        // method 'slotTimeLineChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qreal, std::false_type>,
        // method 'slotTimeLineFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void KMessageWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<KMessageWidget *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->linkActivated((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->linkHovered((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->hideAnimationFinished(); break;
        case 3: _t->showAnimationFinished(); break;
        case 4: _t->setText((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->setWordWrap((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->setCloseButtonVisible((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 7: _t->setMessageType((*reinterpret_cast< std::add_pointer_t<KMessageWidget::MessageType>>(_a[1]))); break;
        case 8: _t->animatedShow(); break;
        case 9: _t->animatedHide(); break;
        case 10: _t->setIcon((*reinterpret_cast< std::add_pointer_t<QIcon>>(_a[1]))); break;
        case 11: _t->d->slotTimeLineChanged((*reinterpret_cast< std::add_pointer_t<qreal>>(_a[1]))); break;
        case 12: _t->d->slotTimeLineFinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (KMessageWidget::*)(const QString & );
            if (_t _q_method = &KMessageWidget::linkActivated; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (KMessageWidget::*)(const QString & );
            if (_t _q_method = &KMessageWidget::linkHovered; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (KMessageWidget::*)();
            if (_t _q_method = &KMessageWidget::hideAnimationFinished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (KMessageWidget::*)();
            if (_t _q_method = &KMessageWidget::showAnimationFinished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<KMessageWidget *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->text(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->wordWrap(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isCloseButtonVisible(); break;
        case 3: *reinterpret_cast< MessageType*>(_v) = _t->messageType(); break;
        case 4: *reinterpret_cast< QIcon*>(_v) = _t->icon(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<KMessageWidget *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setText(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setWordWrap(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setCloseButtonVisible(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setMessageType(*reinterpret_cast< MessageType*>(_v)); break;
        case 4: _t->setIcon(*reinterpret_cast< QIcon*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *KMessageWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *KMessageWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSKMessageWidgetENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QFrame::qt_metacast(_clname);
}

int KMessageWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QFrame::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 13;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void KMessageWidget::linkActivated(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void KMessageWidget::linkHovered(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void KMessageWidget::hideAnimationFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void KMessageWidget::showAnimationFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
