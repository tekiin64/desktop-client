/****************************************************************************
** Meta object code from reading C++ file 'csync.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/csync/csync.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'csync.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSOCCSCOPEEncryptionStatusEnumsENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPEEncryptionStatusEnumsENDCLASS = QtMocHelpers::stringData(
    "OCC::EncryptionStatusEnums",
    "ItemEncryptionStatus",
    "NotEncrypted",
    "Encrypted",
    "EncryptedMigratedV1_2",
    "EncryptedMigratedV2_0",
    "JournalDbEncryptionStatus",
    "EncryptedMigratedV1_2Invalid"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPEEncryptionStatusEnumsENDCLASS[] = {

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
       1,    1, 0x2,    4,   24,
       6,    6, 0x2,    5,   32,

 // enum data: key, value
       2, uint(OCC::EncryptionStatusEnums::ItemEncryptionStatus::NotEncrypted),
       3, uint(OCC::EncryptionStatusEnums::ItemEncryptionStatus::Encrypted),
       4, uint(OCC::EncryptionStatusEnums::ItemEncryptionStatus::EncryptedMigratedV1_2),
       5, uint(OCC::EncryptionStatusEnums::ItemEncryptionStatus::EncryptedMigratedV2_0),
       2, uint(OCC::EncryptionStatusEnums::JournalDbEncryptionStatus::NotEncrypted),
       3, uint(OCC::EncryptionStatusEnums::JournalDbEncryptionStatus::Encrypted),
       7, uint(OCC::EncryptionStatusEnums::JournalDbEncryptionStatus::EncryptedMigratedV1_2Invalid),
       4, uint(OCC::EncryptionStatusEnums::JournalDbEncryptionStatus::EncryptedMigratedV1_2),
       5, uint(OCC::EncryptionStatusEnums::JournalDbEncryptionStatus::EncryptedMigratedV2_0),

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::EncryptionStatusEnums::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSOCCSCOPEEncryptionStatusEnumsENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPEEncryptionStatusEnumsENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPEEncryptionStatusEnumsENDCLASS_t,
        // enum 'ItemEncryptionStatus'
        QtPrivate::TypeAndForceComplete<EncryptionStatusEnums::ItemEncryptionStatus, std::true_type>,
        // enum 'JournalDbEncryptionStatus'
        QtPrivate::TypeAndForceComplete<EncryptionStatusEnums::JournalDbEncryptionStatus, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<void, std::true_type>
    >,
    nullptr
} };

namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSCSyncEnumsENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSCSyncEnumsENDCLASS = QtMocHelpers::stringData(
    "CSyncEnums",
    "csync_status_codes_e",
    "CSYNC_STATUS_OK",
    "CSYNC_STATUS_ERROR",
    "CSYNC_STATUS_UNSUCCESSFUL",
    "CSYNC_STATUS_STATEDB_LOAD_ERROR",
    "CSYNC_STATUS_UPDATE_ERROR",
    "CSYNC_STATUS_TIMEOUT",
    "CSYNC_STATUS_HTTP_ERROR",
    "CSYNC_STATUS_PERMISSION_DENIED",
    "CSYNC_STATUS_NOT_FOUND",
    "CSYNC_STATUS_FILE_EXISTS",
    "CSYNC_STATUS_OUT_OF_SPACE",
    "CSYNC_STATUS_SERVICE_UNAVAILABLE",
    "CSYNC_STATUS_STORAGE_UNAVAILABLE",
    "CSYNC_STATUS_FILE_SIZE_ERROR",
    "CSYNC_STATUS_OPENDIR_ERROR",
    "CSYNC_STATUS_READDIR_ERROR",
    "CSYNC_STATUS_OPEN_ERROR",
    "CSYNC_STATUS_ABORTED",
    "CSYNC_STATUS_INDIVIDUAL_IS_SYMLINK",
    "CSYNC_STATUS_INDIVIDUAL_IGNORE_LIST",
    "CSYNC_STATUS_INDIVIDUAL_IS_INVALID_CHARS",
    "CSYNC_STATUS_INDIVIDUAL_TRAILING_SPACE",
    "CSYNC_STATUS_INDIVIDUAL_EXCLUDE_LONG_FILENAME",
    "CSYNC_STATUS_INDIVIDUAL_EXCLUDE_HIDDEN",
    "CSYNC_STATUS_INVALID_CHARACTERS",
    "CSYNC_STATUS_INDIVIDUAL_STAT_FAILED",
    "CSYNC_STATUS_FORBIDDEN",
    "CSYNC_STATUS_INDIVIDUAL_TOO_DEEP",
    "CSYNC_STATUS_INDIVIDUAL_IS_CONFLICT_FILE",
    "CSYNC_STATUS_INDIVIDUAL_CANNOT_ENCODE",
    "SyncInstructions",
    "CSYNC_INSTRUCTION_NONE",
    "CSYNC_INSTRUCTION_EVAL",
    "CSYNC_INSTRUCTION_REMOVE",
    "CSYNC_INSTRUCTION_RENAME",
    "CSYNC_INSTRUCTION_EVAL_RENAME",
    "CSYNC_INSTRUCTION_NEW",
    "CSYNC_INSTRUCTION_CONFLICT",
    "CSYNC_INSTRUCTION_IGNORE",
    "CSYNC_INSTRUCTION_SYNC",
    "CSYNC_INSTRUCTION_STAT_ERROR",
    "CSYNC_INSTRUCTION_ERROR",
    "CSYNC_INSTRUCTION_TYPE_CHANGE",
    "CSYNC_INSTRUCTION_UPDATE_METADATA",
    "CSYNC_INSTRUCTION_CASE_CLASH_CONFLICT",
    "CSYNC_INSTRUCTION_UPDATE_VFS_METADATA",
    "ItemType",
    "ItemTypeFile",
    "ItemTypeSoftLink",
    "ItemTypeDirectory",
    "ItemTypeSkip",
    "ItemTypeVirtualFile",
    "ItemTypeVirtualFileDownload",
    "ItemTypeVirtualFileDehydration"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSCSyncEnumsENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       3,   14, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // enums: name, alias, flags, count, data
       1,    1, 0x0,   30,   29,
      32,   32, 0x0,   15,   89,
      48,   48, 0x0,    7,  119,

 // enum data: key, value
       2, uint(CSyncEnums::CSYNC_STATUS_OK),
       3, uint(CSyncEnums::CSYNC_STATUS_ERROR),
       4, uint(CSyncEnums::CSYNC_STATUS_UNSUCCESSFUL),
       5, uint(CSyncEnums::CSYNC_STATUS_STATEDB_LOAD_ERROR),
       6, uint(CSyncEnums::CSYNC_STATUS_UPDATE_ERROR),
       7, uint(CSyncEnums::CSYNC_STATUS_TIMEOUT),
       8, uint(CSyncEnums::CSYNC_STATUS_HTTP_ERROR),
       9, uint(CSyncEnums::CSYNC_STATUS_PERMISSION_DENIED),
      10, uint(CSyncEnums::CSYNC_STATUS_NOT_FOUND),
      11, uint(CSyncEnums::CSYNC_STATUS_FILE_EXISTS),
      12, uint(CSyncEnums::CSYNC_STATUS_OUT_OF_SPACE),
      13, uint(CSyncEnums::CSYNC_STATUS_SERVICE_UNAVAILABLE),
      14, uint(CSyncEnums::CSYNC_STATUS_STORAGE_UNAVAILABLE),
      15, uint(CSyncEnums::CSYNC_STATUS_FILE_SIZE_ERROR),
      16, uint(CSyncEnums::CSYNC_STATUS_OPENDIR_ERROR),
      17, uint(CSyncEnums::CSYNC_STATUS_READDIR_ERROR),
      18, uint(CSyncEnums::CSYNC_STATUS_OPEN_ERROR),
      19, uint(CSyncEnums::CSYNC_STATUS_ABORTED),
      20, uint(CSyncEnums::CSYNC_STATUS_INDIVIDUAL_IS_SYMLINK),
      21, uint(CSyncEnums::CSYNC_STATUS_INDIVIDUAL_IGNORE_LIST),
      22, uint(CSyncEnums::CSYNC_STATUS_INDIVIDUAL_IS_INVALID_CHARS),
      23, uint(CSyncEnums::CSYNC_STATUS_INDIVIDUAL_TRAILING_SPACE),
      24, uint(CSyncEnums::CSYNC_STATUS_INDIVIDUAL_EXCLUDE_LONG_FILENAME),
      25, uint(CSyncEnums::CSYNC_STATUS_INDIVIDUAL_EXCLUDE_HIDDEN),
      26, uint(CSyncEnums::CSYNC_STATUS_INVALID_CHARACTERS),
      27, uint(CSyncEnums::CSYNC_STATUS_INDIVIDUAL_STAT_FAILED),
      28, uint(CSyncEnums::CSYNC_STATUS_FORBIDDEN),
      29, uint(CSyncEnums::CSYNC_STATUS_INDIVIDUAL_TOO_DEEP),
      30, uint(CSyncEnums::CSYNC_STATUS_INDIVIDUAL_IS_CONFLICT_FILE),
      31, uint(CSyncEnums::CSYNC_STATUS_INDIVIDUAL_CANNOT_ENCODE),
      33, uint(CSyncEnums::CSYNC_INSTRUCTION_NONE),
      34, uint(CSyncEnums::CSYNC_INSTRUCTION_EVAL),
      35, uint(CSyncEnums::CSYNC_INSTRUCTION_REMOVE),
      36, uint(CSyncEnums::CSYNC_INSTRUCTION_RENAME),
      37, uint(CSyncEnums::CSYNC_INSTRUCTION_EVAL_RENAME),
      38, uint(CSyncEnums::CSYNC_INSTRUCTION_NEW),
      39, uint(CSyncEnums::CSYNC_INSTRUCTION_CONFLICT),
      40, uint(CSyncEnums::CSYNC_INSTRUCTION_IGNORE),
      41, uint(CSyncEnums::CSYNC_INSTRUCTION_SYNC),
      42, uint(CSyncEnums::CSYNC_INSTRUCTION_STAT_ERROR),
      43, uint(CSyncEnums::CSYNC_INSTRUCTION_ERROR),
      44, uint(CSyncEnums::CSYNC_INSTRUCTION_TYPE_CHANGE),
      45, uint(CSyncEnums::CSYNC_INSTRUCTION_UPDATE_METADATA),
      46, uint(CSyncEnums::CSYNC_INSTRUCTION_CASE_CLASH_CONFLICT),
      47, uint(CSyncEnums::CSYNC_INSTRUCTION_UPDATE_VFS_METADATA),
      49, uint(CSyncEnums::ItemTypeFile),
      50, uint(CSyncEnums::ItemTypeSoftLink),
      51, uint(CSyncEnums::ItemTypeDirectory),
      52, uint(CSyncEnums::ItemTypeSkip),
      53, uint(CSyncEnums::ItemTypeVirtualFile),
      54, uint(CSyncEnums::ItemTypeVirtualFileDownload),
      55, uint(CSyncEnums::ItemTypeVirtualFileDehydration),

       0        // eod
};

Q_CONSTINIT const QMetaObject CSyncEnums::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSCSyncEnumsENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSCSyncEnumsENDCLASS,
    nullptr,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSCSyncEnumsENDCLASS_t,
        // enum 'csync_status_codes_e'
        QtPrivate::TypeAndForceComplete<CSyncEnums::csync_status_codes_e, std::true_type>,
        // enum 'SyncInstructions'
        QtPrivate::TypeAndForceComplete<CSyncEnums::SyncInstructions, std::true_type>,
        // enum 'ItemType'
        QtPrivate::TypeAndForceComplete<CSyncEnums::ItemType, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<void, std::true_type>
    >,
    nullptr
} };

QT_WARNING_POP
