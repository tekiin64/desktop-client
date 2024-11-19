/****************************************************************************
** Meta object code from reading C++ file 'pinstate.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/common/pinstate.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'pinstate.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSOCCENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCENDCLASS = QtMocHelpers::stringData(
    "OCC",
    "PinState",
    "Inherited",
    "AlwaysLocal",
    "OnlineOnly",
    "Unspecified",
    "Excluded",
    "VfsItemAvailability",
    "AllHydrated",
    "Mixed",
    "AllDehydrated"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       2,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x2,    5,   24,
       7,    7, 0x2,    5,   34,

 // enum data: key, value
       2, uint(OCC::PinState::Inherited),
       3, uint(OCC::PinState::AlwaysLocal),
       4, uint(OCC::PinState::OnlineOnly),
       5, uint(OCC::PinState::Unspecified),
       6, uint(OCC::PinState::Excluded),
       3, uint(OCC::VfsItemAvailability::AlwaysLocal),
       8, uint(OCC::VfsItemAvailability::AllHydrated),
       9, uint(OCC::VfsItemAvailability::Mixed),
      10, uint(OCC::VfsItemAvailability::AllDehydrated),
       4, uint(OCC::VfsItemAvailability::OnlineOnly),

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSOCCENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCENDCLASS_t,
        // enum 'PinState'
        QtPrivate::TypeAndForceComplete<OCC::PinState, std::true_type>,
        // enum 'VfsItemAvailability'
        QtPrivate::TypeAndForceComplete<OCC::VfsItemAvailability, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<void, std::true_type>
    >,
    nullptr
} };

QT_WARNING_POP
