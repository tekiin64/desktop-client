/****************************************************************************
** Meta object code from reading C++ file 'owncloudwizard.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/gui/wizard/owncloudwizard.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'owncloudwizard.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSOCCSCOPEOwncloudWizardENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPEOwncloudWizardENDCLASS = QtMocHelpers::stringData(
    "OCC::OwncloudWizard",
    "clearPendingRequests",
    "",
    "determineAuthType",
    "connectToOCUrl",
    "createLocalAndRemoteFolders",
    "basicSetupFinished",
    "skipFolderConfiguration",
    "needCertificate",
    "styleChanged",
    "onActivate",
    "setAuthType",
    "OCC::DetermineAuthTypeJob::AuthType",
    "type",
    "setRemoteFolder",
    "appendToConfigurationLog",
    "msg",
    "OCC::OwncloudWizard::LogType",
    "slotCurrentPageChanged",
    "successfulStep",
    "slotCustomButtonClicked",
    "which",
    "adjustWizardSize"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPEOwncloudWizardENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       9,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  116,    2, 0x06,    1 /* Public */,
       3,    1,  117,    2, 0x06,    2 /* Public */,
       4,    1,  120,    2, 0x06,    4 /* Public */,
       5,    2,  123,    2, 0x06,    6 /* Public */,
       6,    1,  128,    2, 0x06,    9 /* Public */,
       7,    0,  131,    2, 0x06,   11 /* Public */,
       8,    0,  132,    2, 0x06,   12 /* Public */,
       9,    0,  133,    2, 0x06,   13 /* Public */,
      10,    0,  134,    2, 0x06,   14 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      11,    1,  135,    2, 0x0a,   15 /* Public */,
      14,    1,  138,    2, 0x0a,   17 /* Public */,
      15,    2,  141,    2, 0x0a,   19 /* Public */,
      15,    1,  146,    2, 0x2a,   22 /* Public | MethodCloned */,
      18,    1,  149,    2, 0x0a,   24 /* Public */,
      19,    0,  152,    2, 0x0a,   26 /* Public */,
      20,    1,  153,    2, 0x0a,   27 /* Public */,
      22,    0,  156,    2, 0x0a,   29 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 17,   16,   13,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   21,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::OwncloudWizard::staticMetaObject = { {
    QMetaObject::SuperData::link<QWizard::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPEOwncloudWizardENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPEOwncloudWizardENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPEOwncloudWizardENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<OwncloudWizard, std::true_type>,
        // method 'clearPendingRequests'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'determineAuthType'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'connectToOCUrl'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'createLocalAndRemoteFolders'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'basicSetupFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'skipFolderConfiguration'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'needCertificate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'styleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onActivate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setAuthType'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::DetermineAuthTypeJob::AuthType, std::false_type>,
        // method 'setRemoteFolder'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'appendToConfigurationLog'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::OwncloudWizard::LogType, std::false_type>,
        // method 'appendToConfigurationLog'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'slotCurrentPageChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'successfulStep'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotCustomButtonClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'adjustWizardSize'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void OCC::OwncloudWizard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OwncloudWizard *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->clearPendingRequests(); break;
        case 1: _t->determineAuthType((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->connectToOCUrl((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->createLocalAndRemoteFolders((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 4: _t->basicSetupFinished((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 5: _t->skipFolderConfiguration(); break;
        case 6: _t->needCertificate(); break;
        case 7: _t->styleChanged(); break;
        case 8: _t->onActivate(); break;
        case 9: _t->setAuthType((*reinterpret_cast< std::add_pointer_t<OCC::DetermineAuthTypeJob::AuthType>>(_a[1]))); break;
        case 10: _t->setRemoteFolder((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 11: _t->appendToConfigurationLog((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<OCC::OwncloudWizard::LogType>>(_a[2]))); break;
        case 12: _t->appendToConfigurationLog((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 13: _t->slotCurrentPageChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 14: _t->successfulStep(); break;
        case 15: _t->slotCustomButtonClicked((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 16: _t->adjustWizardSize(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (OwncloudWizard::*)();
            if (_t _q_method = &OwncloudWizard::clearPendingRequests; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (OwncloudWizard::*)(const QString & );
            if (_t _q_method = &OwncloudWizard::determineAuthType; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (OwncloudWizard::*)(const QString & );
            if (_t _q_method = &OwncloudWizard::connectToOCUrl; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (OwncloudWizard::*)(const QString & , const QString & );
            if (_t _q_method = &OwncloudWizard::createLocalAndRemoteFolders; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (OwncloudWizard::*)(int );
            if (_t _q_method = &OwncloudWizard::basicSetupFinished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (OwncloudWizard::*)();
            if (_t _q_method = &OwncloudWizard::skipFolderConfiguration; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (OwncloudWizard::*)();
            if (_t _q_method = &OwncloudWizard::needCertificate; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (OwncloudWizard::*)();
            if (_t _q_method = &OwncloudWizard::styleChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (OwncloudWizard::*)();
            if (_t _q_method = &OwncloudWizard::onActivate; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
    }
}

const QMetaObject *OCC::OwncloudWizard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::OwncloudWizard::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPEOwncloudWizardENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWizard::qt_metacast(_clname);
}

int OCC::OwncloudWizard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizard::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void OCC::OwncloudWizard::clearPendingRequests()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void OCC::OwncloudWizard::determineAuthType(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void OCC::OwncloudWizard::connectToOCUrl(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void OCC::OwncloudWizard::createLocalAndRemoteFolders(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void OCC::OwncloudWizard::basicSetupFinished(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void OCC::OwncloudWizard::skipFolderConfiguration()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void OCC::OwncloudWizard::needCertificate()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void OCC::OwncloudWizard::styleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void OCC::OwncloudWizard::onActivate()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}
QT_WARNING_POP
