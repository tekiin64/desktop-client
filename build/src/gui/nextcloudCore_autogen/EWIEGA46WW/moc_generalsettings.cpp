/****************************************************************************
** Meta object code from reading C++ file 'generalsettings.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/gui/generalsettings.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'generalsettings.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSOCCSCOPEGeneralSettingsENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPEGeneralSettingsENDCLASS = QtMocHelpers::stringData(
    "OCC::GeneralSettings",
    "slotStyleChanged",
    "",
    "saveMiscSettings",
    "slotToggleLaunchOnStartup",
    "slotToggleOptionalServerNotifications",
    "slotToggleCallNotifications",
    "slotShowInExplorerNavigationPane",
    "slotIgnoreFilesEditor",
    "slotCreateDebugArchive",
    "loadMiscSettings",
    "slotShowLegalNotice"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPEGeneralSettingsENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   74,    2, 0x0a,    1 /* Public */,
       3,    0,   75,    2, 0x08,    2 /* Private */,
       4,    1,   76,    2, 0x08,    3 /* Private */,
       5,    1,   79,    2, 0x08,    5 /* Private */,
       6,    1,   82,    2, 0x08,    7 /* Private */,
       7,    1,   85,    2, 0x08,    9 /* Private */,
       8,    0,   88,    2, 0x08,   11 /* Private */,
       9,    0,   89,    2, 0x08,   12 /* Private */,
      10,    0,   90,    2, 0x08,   13 /* Private */,
      11,    0,   91,    2, 0x08,   14 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::GeneralSettings::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPEGeneralSettingsENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPEGeneralSettingsENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPEGeneralSettingsENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<GeneralSettings, std::true_type>,
        // method 'slotStyleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'saveMiscSettings'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotToggleLaunchOnStartup'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'slotToggleOptionalServerNotifications'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'slotToggleCallNotifications'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'slotShowInExplorerNavigationPane'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'slotIgnoreFilesEditor'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotCreateDebugArchive'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'loadMiscSettings'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotShowLegalNotice'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void OCC::GeneralSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<GeneralSettings *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->slotStyleChanged(); break;
        case 1: _t->saveMiscSettings(); break;
        case 2: _t->slotToggleLaunchOnStartup((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 3: _t->slotToggleOptionalServerNotifications((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 4: _t->slotToggleCallNotifications((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->slotShowInExplorerNavigationPane((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->slotIgnoreFilesEditor(); break;
        case 7: _t->slotCreateDebugArchive(); break;
        case 8: _t->loadMiscSettings(); break;
        case 9: _t->slotShowLegalNotice(); break;
        default: ;
        }
    }
}

const QMetaObject *OCC::GeneralSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::GeneralSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPEGeneralSettingsENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int OCC::GeneralSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
