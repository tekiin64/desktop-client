/****************************************************************************
** Meta object code from reading C++ file 'syncfileitem.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/libsync/syncfileitem.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'syncfileitem.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSOCCSCOPESyncFileItemENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPESyncFileItemENDCLASS = QtMocHelpers::stringData(
    "OCC::SyncFileItem",
    "Direction",
    "None",
    "Up",
    "Down",
    "Status",
    "NoStatus",
    "FatalError",
    "NormalError",
    "SoftError",
    "Conflict",
    "FileIgnored",
    "FileLocked",
    "Restoration",
    "FileNameInvalid",
    "FileNameInvalidOnServer",
    "FileNameClash",
    "DetailError",
    "BlacklistedError",
    "Success",
    "LockStatus",
    "UnlockedItem",
    "LockedItem",
    "LockOwnerType",
    "UserLock",
    "AppLock",
    "TokenLock"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPESyncFileItemENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       4,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x0,    3,   34,
       5,    5, 0x0,   14,   40,
      20,   20, 0x2,    2,   68,
      23,   23, 0x2,    3,   72,

 // enum data: key, value
       2, uint(OCC::SyncFileItem::None),
       3, uint(OCC::SyncFileItem::Up),
       4, uint(OCC::SyncFileItem::Down),
       6, uint(OCC::SyncFileItem::NoStatus),
       7, uint(OCC::SyncFileItem::FatalError),
       8, uint(OCC::SyncFileItem::NormalError),
       9, uint(OCC::SyncFileItem::SoftError),
      10, uint(OCC::SyncFileItem::Conflict),
      11, uint(OCC::SyncFileItem::FileIgnored),
      12, uint(OCC::SyncFileItem::FileLocked),
      13, uint(OCC::SyncFileItem::Restoration),
      14, uint(OCC::SyncFileItem::FileNameInvalid),
      15, uint(OCC::SyncFileItem::FileNameInvalidOnServer),
      16, uint(OCC::SyncFileItem::FileNameClash),
      17, uint(OCC::SyncFileItem::DetailError),
      18, uint(OCC::SyncFileItem::BlacklistedError),
      19, uint(OCC::SyncFileItem::Success),
      21, uint(OCC::SyncFileItem::LockStatus::UnlockedItem),
      22, uint(OCC::SyncFileItem::LockStatus::LockedItem),
      24, uint(OCC::SyncFileItem::LockOwnerType::UserLock),
      25, uint(OCC::SyncFileItem::LockOwnerType::AppLock),
      26, uint(OCC::SyncFileItem::LockOwnerType::TokenLock),

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::SyncFileItem::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSOCCSCOPESyncFileItemENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPESyncFileItemENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPESyncFileItemENDCLASS_t,
        // enum 'Direction'
        QtPrivate::TypeAndForceComplete<SyncFileItem::Direction, std::true_type>,
        // enum 'Status'
        QtPrivate::TypeAndForceComplete<SyncFileItem::Status, std::true_type>,
        // enum 'LockStatus'
        QtPrivate::TypeAndForceComplete<SyncFileItem::LockStatus, std::true_type>,
        // enum 'LockOwnerType'
        QtPrivate::TypeAndForceComplete<SyncFileItem::LockOwnerType, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SyncFileItem, std::true_type>
    >,
    nullptr
} };

QT_WARNING_POP
