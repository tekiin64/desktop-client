/****************************************************************************
** Meta object code from reading C++ file 'accountsetupfromcommandlinejob.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/gui/accountsetupfromcommandlinejob.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'accountsetupfromcommandlinejob.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSOCCSCOPEAccountSetupFromCommandLineJobENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPEAccountSetupFromCommandLineJobENDCLASS = QtMocHelpers::stringData(
    "OCC::AccountSetupFromCommandLineJob",
    "handleAccountSetupFromCommandLine",
    "",
    "checkLastModifiedWithPropfind",
    "accountSetupFromCommandLinePropfindHandleSuccess",
    "accountSetupFromCommandLinePropfindHandleFailure",
    "setupLocalSyncFolder",
    "OCC::AccountState*",
    "accountState",
    "printAccountSetupFromCommandLineStatusAndExit",
    "status",
    "isFailure",
    "fetchUserName"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPEAccountSetupFromCommandLineJobENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x0a,    1 /* Public */,
       3,    0,   57,    2, 0x08,    2 /* Private */,
       4,    0,   58,    2, 0x08,    3 /* Private */,
       5,    0,   59,    2, 0x08,    4 /* Private */,
       6,    1,   60,    2, 0x08,    5 /* Private */,
       9,    2,   63,    2, 0x08,    7 /* Private */,
      12,    0,   68,    2, 0x08,   10 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   10,   11,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::AccountSetupFromCommandLineJob::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPEAccountSetupFromCommandLineJobENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPEAccountSetupFromCommandLineJobENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPEAccountSetupFromCommandLineJobENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AccountSetupFromCommandLineJob, std::true_type>,
        // method 'handleAccountSetupFromCommandLine'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'checkLastModifiedWithPropfind'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'accountSetupFromCommandLinePropfindHandleSuccess'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'accountSetupFromCommandLinePropfindHandleFailure'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setupLocalSyncFolder'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::AccountState *, std::false_type>,
        // method 'printAccountSetupFromCommandLineStatusAndExit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'fetchUserName'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void OCC::AccountSetupFromCommandLineJob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AccountSetupFromCommandLineJob *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->handleAccountSetupFromCommandLine(); break;
        case 1: _t->checkLastModifiedWithPropfind(); break;
        case 2: _t->accountSetupFromCommandLinePropfindHandleSuccess(); break;
        case 3: _t->accountSetupFromCommandLinePropfindHandleFailure(); break;
        case 4: _t->setupLocalSyncFolder((*reinterpret_cast< std::add_pointer_t<OCC::AccountState*>>(_a[1]))); break;
        case 5: _t->printAccountSetupFromCommandLineStatusAndExit((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 6: _t->fetchUserName(); break;
        default: ;
        }
    }
}

const QMetaObject *OCC::AccountSetupFromCommandLineJob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::AccountSetupFromCommandLineJob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPEAccountSetupFromCommandLineJobENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OCC::AccountSetupFromCommandLineJob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
QT_WARNING_POP