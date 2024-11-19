/****************************************************************************
** Meta object code from reading C++ file 'syncresult.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/libsync/syncresult.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'syncresult.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSOCCSCOPESyncResultENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPESyncResultENDCLASS = QtMocHelpers::stringData(
    "OCC::SyncResult",
    "Status",
    "Undefined",
    "NotYetStarted",
    "SyncPrepare",
    "SyncRunning",
    "SyncAbortRequested",
    "Success",
    "Problem",
    "Error",
    "SetupError",
    "Paused"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPESyncResultENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       1,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x0,   10,   19,

 // enum data: key, value
       2, uint(OCC::SyncResult::Undefined),
       3, uint(OCC::SyncResult::NotYetStarted),
       4, uint(OCC::SyncResult::SyncPrepare),
       5, uint(OCC::SyncResult::SyncRunning),
       6, uint(OCC::SyncResult::SyncAbortRequested),
       7, uint(OCC::SyncResult::Success),
       8, uint(OCC::SyncResult::Problem),
       9, uint(OCC::SyncResult::Error),
      10, uint(OCC::SyncResult::SetupError),
      11, uint(OCC::SyncResult::Paused),

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::SyncResult::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSOCCSCOPESyncResultENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPESyncResultENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPESyncResultENDCLASS_t,
        // enum 'Status'
        QtPrivate::TypeAndForceComplete<SyncResult::Status, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SyncResult, std::true_type>
    >,
    nullptr
} };

QT_WARNING_POP
