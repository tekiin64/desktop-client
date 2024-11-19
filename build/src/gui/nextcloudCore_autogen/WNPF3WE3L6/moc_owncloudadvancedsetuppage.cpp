/****************************************************************************
** Meta object code from reading C++ file 'owncloudadvancedsetuppage.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/gui/wizard/owncloudadvancedsetuppage.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'owncloudadvancedsetuppage.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSOCCSCOPEOwncloudAdvancedSetupPageENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPEOwncloudAdvancedSetupPageENDCLASS = QtMocHelpers::stringData(
    "OCC::OwncloudAdvancedSetupPage",
    "createLocalAndRemoteFolders",
    "",
    "setErrorString",
    "slotStyleChanged",
    "slotSelectFolder",
    "slotSyncEverythingClicked",
    "slotSelectiveSyncClicked",
    "slotVirtualFileSyncClicked",
    "slotQuotaRetrieved",
    "QVariantMap",
    "result"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPEOwncloudAdvancedSetupPageENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   62,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    1,   67,    2, 0x0a,    4 /* Public */,
       4,    0,   70,    2, 0x0a,    6 /* Public */,
       5,    0,   71,    2, 0x08,    7 /* Private */,
       6,    0,   72,    2, 0x08,    8 /* Private */,
       7,    0,   73,    2, 0x08,    9 /* Private */,
       8,    0,   74,    2, 0x08,   10 /* Private */,
       9,    1,   75,    2, 0x08,   11 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::OwncloudAdvancedSetupPage::staticMetaObject = { {
    QMetaObject::SuperData::link<QWizardPage::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPEOwncloudAdvancedSetupPageENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPEOwncloudAdvancedSetupPageENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPEOwncloudAdvancedSetupPageENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<OwncloudAdvancedSetupPage, std::true_type>,
        // method 'createLocalAndRemoteFolders'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setErrorString'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'slotStyleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotSelectFolder'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotSyncEverythingClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotSelectiveSyncClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotVirtualFileSyncClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotQuotaRetrieved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariantMap &, std::false_type>
    >,
    nullptr
} };

void OCC::OwncloudAdvancedSetupPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OwncloudAdvancedSetupPage *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->createLocalAndRemoteFolders((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 1: _t->setErrorString((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->slotStyleChanged(); break;
        case 3: _t->slotSelectFolder(); break;
        case 4: _t->slotSyncEverythingClicked(); break;
        case 5: _t->slotSelectiveSyncClicked(); break;
        case 6: _t->slotVirtualFileSyncClicked(); break;
        case 7: _t->slotQuotaRetrieved((*reinterpret_cast< std::add_pointer_t<QVariantMap>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (OwncloudAdvancedSetupPage::*)(const QString & , const QString & );
            if (_t _q_method = &OwncloudAdvancedSetupPage::createLocalAndRemoteFolders; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *OCC::OwncloudAdvancedSetupPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::OwncloudAdvancedSetupPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPEOwncloudAdvancedSetupPageENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWizardPage::qt_metacast(_clname);
}

int OCC::OwncloudAdvancedSetupPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizardPage::qt_metacall(_c, _id, _a);
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
void OCC::OwncloudAdvancedSetupPage::createLocalAndRemoteFolders(const QString & _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
