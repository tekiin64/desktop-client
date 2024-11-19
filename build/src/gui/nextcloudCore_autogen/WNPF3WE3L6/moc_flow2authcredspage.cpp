/****************************************************************************
** Meta object code from reading C++ file 'flow2authcredspage.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/gui/wizard/flow2authcredspage.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'flow2authcredspage.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSOCCSCOPEFlow2AuthCredsPageENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPEFlow2AuthCredsPageENDCLASS = QtMocHelpers::stringData(
    "OCC::Flow2AuthCredsPage",
    "connectToOCUrl",
    "",
    "pollNow",
    "styleChanged",
    "slotFlow2AuthResult",
    "Flow2Auth::Result",
    "errorString",
    "user",
    "appPassword",
    "slotPollNow",
    "slotStyleChanged"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPEFlow2AuthCredsPageENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   50,    2, 0x06,    1 /* Public */,
       3,    0,   53,    2, 0x06,    3 /* Public */,
       4,    0,   54,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    4,   55,    2, 0x0a,    5 /* Public */,
      10,    0,   64,    2, 0x0a,   10 /* Public */,
      11,    0,   65,    2, 0x0a,   11 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6, QMetaType::QString, QMetaType::QString, QMetaType::QString,    2,    7,    8,    9,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::Flow2AuthCredsPage::staticMetaObject = { {
    QMetaObject::SuperData::link<AbstractCredentialsWizardPage::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPEFlow2AuthCredsPageENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPEFlow2AuthCredsPageENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPEFlow2AuthCredsPageENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Flow2AuthCredsPage, std::true_type>,
        // method 'connectToOCUrl'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'pollNow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'styleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotFlow2AuthResult'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Flow2Auth::Result, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'slotPollNow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotStyleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void OCC::Flow2AuthCredsPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Flow2AuthCredsPage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->connectToOCUrl((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->pollNow(); break;
        case 2: _t->styleChanged(); break;
        case 3: _t->slotFlow2AuthResult((*reinterpret_cast< std::add_pointer_t<Flow2Auth::Result>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4]))); break;
        case 4: _t->slotPollNow(); break;
        case 5: _t->slotStyleChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Flow2AuthCredsPage::*)(const QString & );
            if (_t _q_method = &Flow2AuthCredsPage::connectToOCUrl; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Flow2AuthCredsPage::*)();
            if (_t _q_method = &Flow2AuthCredsPage::pollNow; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Flow2AuthCredsPage::*)();
            if (_t _q_method = &Flow2AuthCredsPage::styleChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject *OCC::Flow2AuthCredsPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::Flow2AuthCredsPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPEFlow2AuthCredsPageENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return AbstractCredentialsWizardPage::qt_metacast(_clname);
}

int OCC::Flow2AuthCredsPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = AbstractCredentialsWizardPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void OCC::Flow2AuthCredsPage::connectToOCUrl(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OCC::Flow2AuthCredsPage::pollNow()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void OCC::Flow2AuthCredsPage::styleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
