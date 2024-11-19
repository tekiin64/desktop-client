/****************************************************************************
** Meta object code from reading C++ file 'webflowcredentialsdialog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/gui/creds/webflowcredentialsdialog.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'webflowcredentialsdialog.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSOCCSCOPEWebFlowCredentialsDialogENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPEWebFlowCredentialsDialogENDCLASS = QtMocHelpers::stringData(
    "OCC::WebFlowCredentialsDialog",
    "urlCatched",
    "",
    "user",
    "pass",
    "host",
    "styleChanged",
    "onActivate",
    "onClose",
    "slotFlow2AuthResult",
    "Flow2Auth::Result",
    "errorString",
    "appPassword",
    "slotShowSettingsDialog"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPEWebFlowCredentialsDialogENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    3,   50,    2, 0x06,    1 /* Public */,
       6,    0,   57,    2, 0x06,    5 /* Public */,
       7,    0,   58,    2, 0x06,    6 /* Public */,
       8,    0,   59,    2, 0x06,    7 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       9,    4,   60,    2, 0x0a,    8 /* Public */,
      13,    0,   69,    2, 0x0a,   13 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,    3,    4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 10, QMetaType::QString, QMetaType::QString, QMetaType::QString,    2,   11,    3,   12,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::WebFlowCredentialsDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPEWebFlowCredentialsDialogENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPEWebFlowCredentialsDialogENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPEWebFlowCredentialsDialogENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<WebFlowCredentialsDialog, std::true_type>,
        // method 'urlCatched'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString, std::false_type>,
        // method 'styleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onActivate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onClose'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotFlow2AuthResult'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<Flow2Auth::Result, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'slotShowSettingsDialog'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void OCC::WebFlowCredentialsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<WebFlowCredentialsDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->urlCatched((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 1: _t->styleChanged(); break;
        case 2: _t->onActivate(); break;
        case 3: _t->onClose(); break;
        case 4: _t->slotFlow2AuthResult((*reinterpret_cast< std::add_pointer_t<Flow2Auth::Result>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4]))); break;
        case 5: _t->slotShowSettingsDialog(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (WebFlowCredentialsDialog::*)(const QString , const QString , const QString );
            if (_t _q_method = &WebFlowCredentialsDialog::urlCatched; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (WebFlowCredentialsDialog::*)();
            if (_t _q_method = &WebFlowCredentialsDialog::styleChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (WebFlowCredentialsDialog::*)();
            if (_t _q_method = &WebFlowCredentialsDialog::onActivate; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (WebFlowCredentialsDialog::*)();
            if (_t _q_method = &WebFlowCredentialsDialog::onClose; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    }
}

const QMetaObject *OCC::WebFlowCredentialsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::WebFlowCredentialsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPEWebFlowCredentialsDialogENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int OCC::WebFlowCredentialsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
void OCC::WebFlowCredentialsDialog::urlCatched(const QString _t1, const QString _t2, const QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OCC::WebFlowCredentialsDialog::styleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void OCC::WebFlowCredentialsDialog::onActivate()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void OCC::WebFlowCredentialsDialog::onClose()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
