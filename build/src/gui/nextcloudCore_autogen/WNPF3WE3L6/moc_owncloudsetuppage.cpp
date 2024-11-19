/****************************************************************************
** Meta object code from reading C++ file 'owncloudsetuppage.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/gui/wizard/owncloudsetuppage.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'owncloudsetuppage.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSOCCSCOPEOwncloudSetupPageENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPEOwncloudSetupPageENDCLASS = QtMocHelpers::stringData(
    "OCC::OwncloudSetupPage",
    "determineAuthType",
    "",
    "setErrorString",
    "retryHTTPonly",
    "startSpinner",
    "stopSpinner",
    "slotCertificateAccepted",
    "slotStyleChanged",
    "slotUrlChanged",
    "slotUrlEditFinished",
    "setupCustomization"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPEOwncloudSetupPageENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   68,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    2,   71,    2, 0x0a,    3 /* Public */,
       5,    0,   76,    2, 0x0a,    6 /* Public */,
       6,    0,   77,    2, 0x0a,    7 /* Public */,
       7,    0,   78,    2, 0x0a,    8 /* Public */,
       8,    0,   79,    2, 0x0a,    9 /* Public */,
       9,    1,   80,    2, 0x09,   10 /* Protected */,
      10,    0,   83,    2, 0x09,   12 /* Protected */,
      11,    0,   84,    2, 0x09,   13 /* Protected */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    2,    4,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::OwncloudSetupPage::staticMetaObject = { {
    QMetaObject::SuperData::link<QWizardPage::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPEOwncloudSetupPageENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPEOwncloudSetupPageENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPEOwncloudSetupPageENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<OwncloudSetupPage, std::true_type>,
        // method 'determineAuthType'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setErrorString'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'startSpinner'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'stopSpinner'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotCertificateAccepted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotStyleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotUrlChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'slotUrlEditFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setupCustomization'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void OCC::OwncloudSetupPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OwncloudSetupPage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->determineAuthType((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->setErrorString((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 2: _t->startSpinner(); break;
        case 3: _t->stopSpinner(); break;
        case 4: _t->slotCertificateAccepted(); break;
        case 5: _t->slotStyleChanged(); break;
        case 6: _t->slotUrlChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->slotUrlEditFinished(); break;
        case 8: _t->setupCustomization(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (OwncloudSetupPage::*)(const QString & );
            if (_t _q_method = &OwncloudSetupPage::determineAuthType; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *OCC::OwncloudSetupPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::OwncloudSetupPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPEOwncloudSetupPageENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWizardPage::qt_metacast(_clname);
}

int OCC::OwncloudSetupPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizardPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void OCC::OwncloudSetupPage::determineAuthType(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
