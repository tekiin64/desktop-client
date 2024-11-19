/****************************************************************************
** Meta object code from reading C++ file 'folder.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/gui/folder.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#include <QtCore/QSet>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'folder.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSOCCSCOPEFolderENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPEFolderENDCLASS = QtMocHelpers::stringData(
    "OCC::Folder",
    "syncStateChange",
    "",
    "syncStarted",
    "syncFinished",
    "OCC::SyncResult",
    "result",
    "progressInfo",
    "OCC::ProgressInfo",
    "progress",
    "newBigFolderDiscovered",
    "syncPausedChanged",
    "OCC::Folder*",
    "paused",
    "canSyncChanged",
    "watchedFileChangedExternally",
    "path",
    "slotTerminateSync",
    "slotAboutToRemoveAllFiles",
    "OCC::SyncFileItem::Direction",
    "std::function<void(bool)>",
    "callback",
    "slotNeedToRemoveRemnantsReadOnlyFolders",
    "QList<SyncFileItemPtr>",
    "folders",
    "localPath",
    "startSync",
    "pathList",
    "slotDiscardDownloadProgress",
    "downloadInfoCount",
    "slotWipeErrorBlacklist",
    "errorBlackListEntryCount",
    "slotWatchedPathChanged",
    "QStringView",
    "OCC::Folder::ChangeReason",
    "reason",
    "slotFilesLockReleased",
    "QSet<QString>",
    "files",
    "slotFilesLockImposed",
    "slotLockedFilesFound",
    "implicitlyHydrateFile",
    "relativepath",
    "schedulePathForLocalDiscovery",
    "relativePath",
    "slotNextSyncFullLocalDiscovery",
    "setSilenceErrorsUntilNextSync",
    "silenceErrors",
    "removeLocalE2eFiles",
    "slotSyncStarted",
    "slotSyncFinished",
    "disconnectFolderWatcher",
    "slotSyncError",
    "message",
    "OCC::ErrorCategory",
    "category",
    "slotAddErrorToGui",
    "OCC::SyncFileItem::Status",
    "status",
    "errorMessage",
    "subject",
    "slotTransmissionProgress",
    "pi",
    "slotItemCompleted",
    "OCC::SyncFileItemPtr",
    "errorCategory",
    "slotRunEtagJob",
    "etagRetrieved",
    "tp",
    "etagRetrievedFromSyncEngine",
    "time",
    "slotEmitFinishedDelayed",
    "slotNewBigFolderDiscovered",
    "isExternal",
    "slotExistingFolderNowBig",
    "folderPath",
    "slotLogPropagationStart",
    "slotScheduleThisFolder",
    "slotFolderConflicts",
    "folder",
    "conflictPaths",
    "warnOnNewExcludedItem",
    "OCC::SyncJournalFileRecord",
    "record",
    "slotWatcherUnreliable",
    "slotHydrationStarts",
    "slotHydrationDone",
    "slotHydrationFailed",
    "errorCode",
    "statusCode",
    "errorString",
    "fileName",
    "slotCapabilitiesChanged",
    "ChangeReason",
    "Other",
    "UnLock"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPEFolderENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      48,   14, // methods
       0,    0, // properties
       1,  442, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  302,    2, 0x06,    2 /* Public */,
       3,    0,  303,    2, 0x06,    3 /* Public */,
       4,    1,  304,    2, 0x06,    4 /* Public */,
       7,    1,  307,    2, 0x06,    6 /* Public */,
      10,    1,  310,    2, 0x06,    8 /* Public */,
      11,    2,  313,    2, 0x06,   10 /* Public */,
      14,    0,  318,    2, 0x06,   13 /* Public */,
      15,    1,  319,    2, 0x06,   14 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      17,    0,  322,    2, 0x0a,   16 /* Public */,
      18,    2,  323,    2, 0x0a,   17 /* Public */,
      22,    3,  328,    2, 0x0a,   20 /* Public */,
      26,    1,  335,    2, 0x0a,   24 /* Public */,
      26,    0,  338,    2, 0x2a,   26 /* Public | MethodCloned */,
      28,    0,  339,    2, 0x0a,   27 /* Public */,
      29,    0,  340,    2, 0x0a,   28 /* Public */,
      30,    0,  341,    2, 0x0a,   29 /* Public */,
      31,    0,  342,    2, 0x0a,   30 /* Public */,
      32,    2,  343,    2, 0x0a,   31 /* Public */,
      36,    1,  348,    2, 0x0a,   34 /* Public */,
      39,    1,  351,    2, 0x0a,   36 /* Public */,
      40,    1,  354,    2, 0x0a,   38 /* Public */,
      41,    1,  357,    2, 0x0a,   40 /* Public */,
      43,    1,  360,    2, 0x0a,   42 /* Public */,
      45,    0,  363,    2, 0x0a,   44 /* Public */,
      46,    1,  364,    2, 0x0a,   45 /* Public */,
      48,    0,  367,    2, 0x0a,   47 /* Public */,
      49,    0,  368,    2, 0x08,   48 /* Private */,
      50,    1,  369,    2, 0x08,   49 /* Private */,
      51,    0,  372,    2, 0x08,   51 /* Private */,
      52,    2,  373,    2, 0x08,   52 /* Private */,
      56,    4,  378,    2, 0x08,   55 /* Private */,
      61,    1,  387,    2, 0x08,   60 /* Private */,
      63,    2,  390,    2, 0x08,   62 /* Private */,
      66,    0,  395,    2, 0x08,   65 /* Private */,
      67,    2,  396,    2, 0x08,   66 /* Private */,
      69,    2,  401,    2, 0x08,   69 /* Private */,
      71,    0,  406,    2, 0x08,   72 /* Private */,
      72,    2,  407,    2, 0x08,   73 /* Private */,
      74,    1,  412,    2, 0x08,   76 /* Private */,
      76,    0,  415,    2, 0x08,   78 /* Private */,
      77,    0,  416,    2, 0x08,   79 /* Private */,
      78,    2,  417,    2, 0x08,   80 /* Private */,
      81,    2,  422,    2, 0x08,   83 /* Private */,
      84,    1,  427,    2, 0x08,   86 /* Private */,
      85,    0,  430,    2, 0x08,   88 /* Private */,
      86,    0,  431,    2, 0x08,   89 /* Private */,
      87,    4,  432,    2, 0x08,   90 /* Private */,
      92,    0,  441,    2, 0x08,   95 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 12, QMetaType::Bool,    2,   13,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   16,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 19, 0x80000000 | 20,    2,   21,
    QMetaType::Void, 0x80000000 | 23, QMetaType::QString, 0x80000000 | 20,   24,   25,   21,
    QMetaType::Void, QMetaType::QStringList,   27,
    QMetaType::Void,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Int,
    QMetaType::Void, 0x80000000 | 33, 0x80000000 | 34,   16,   35,
    QMetaType::Void, 0x80000000 | 37,   38,
    QMetaType::Void, 0x80000000 | 37,   38,
    QMetaType::Void, 0x80000000 | 37,   38,
    QMetaType::Void, QMetaType::QString,   42,
    QMetaType::Void, QMetaType::QString,   44,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   47,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 54,   53,   55,
    QMetaType::Void, 0x80000000 | 57, QMetaType::QString, QMetaType::QString, 0x80000000 | 54,   58,   59,   60,   55,
    QMetaType::Void, 0x80000000 | 8,   62,
    QMetaType::Void, 0x80000000 | 64, 0x80000000 | 54,    2,   65,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::QDateTime,    2,   68,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::QDateTime,    2,   70,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,    2,   73,
    QMetaType::Void, QMetaType::QString,   75,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QStringList,   79,   80,
    QMetaType::Void, 0x80000000 | 82, 0x80000000 | 33,   83,   16,
    QMetaType::Void, QMetaType::QString,   53,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int, QMetaType::QString, QMetaType::QString,   88,   89,   90,   91,
    QMetaType::Void,

 // enums: name, alias, flags, count, data
      93,   93, 0x2,    2,  447,

 // enum data: key, value
      94, uint(OCC::Folder::ChangeReason::Other),
      95, uint(OCC::Folder::ChangeReason::UnLock),

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::Folder::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPEFolderENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPEFolderENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPEFolderENDCLASS_t,
        // enum 'ChangeReason'
        QtPrivate::TypeAndForceComplete<Folder::ChangeReason, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Folder, std::true_type>,
        // method 'syncStateChange'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'syncStarted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'syncFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::SyncResult &, std::false_type>,
        // method 'progressInfo'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::ProgressInfo &, std::false_type>,
        // method 'newBigFolderDiscovered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'syncPausedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::Folder *, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'canSyncChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'watchedFileChangedExternally'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'slotTerminateSync'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotAboutToRemoveAllFiles'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::SyncFileItem::Direction, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::function<void(bool)>, std::false_type>,
        // method 'slotNeedToRemoveRemnantsReadOnlyFolders'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<SyncFileItemPtr> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::function<void(bool)>, std::false_type>,
        // method 'startSync'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QStringList &, std::false_type>,
        // method 'startSync'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotDiscardDownloadProgress'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'downloadInfoCount'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'slotWipeErrorBlacklist'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'errorBlackListEntryCount'
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'slotWatchedPathChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QStringView &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::Folder::ChangeReason, std::false_type>,
        // method 'slotFilesLockReleased'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QSet<QString> &, std::false_type>,
        // method 'slotFilesLockImposed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QSet<QString> &, std::false_type>,
        // method 'slotLockedFilesFound'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QSet<QString> &, std::false_type>,
        // method 'implicitlyHydrateFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'schedulePathForLocalDiscovery'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'slotNextSyncFullLocalDiscovery'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setSilenceErrorsUntilNextSync'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'removeLocalE2eFiles'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotSyncStarted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotSyncFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'disconnectFolderWatcher'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotSyncError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::ErrorCategory, std::false_type>,
        // method 'slotAddErrorToGui'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::SyncFileItem::Status, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::ErrorCategory, std::false_type>,
        // method 'slotTransmissionProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::ProgressInfo &, std::false_type>,
        // method 'slotItemCompleted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::SyncFileItemPtr &, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::ErrorCategory, std::false_type>,
        // method 'slotRunEtagJob'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'etagRetrieved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QDateTime &, std::false_type>,
        // method 'etagRetrievedFromSyncEngine'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QDateTime &, std::false_type>,
        // method 'slotEmitFinishedDelayed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotNewBigFolderDiscovered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'slotExistingFolderNowBig'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'slotLogPropagationStart'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotScheduleThisFolder'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotFolderConflicts'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QStringList &, std::false_type>,
        // method 'warnOnNewExcludedItem'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::SyncJournalFileRecord &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QStringView &, std::false_type>,
        // method 'slotWatcherUnreliable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'slotHydrationStarts'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotHydrationDone'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotHydrationFailed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'slotCapabilitiesChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void OCC::Folder::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Folder *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->syncStateChange(); break;
        case 1: _t->syncStarted(); break;
        case 2: _t->syncFinished((*reinterpret_cast< std::add_pointer_t<OCC::SyncResult>>(_a[1]))); break;
        case 3: _t->progressInfo((*reinterpret_cast< std::add_pointer_t<OCC::ProgressInfo>>(_a[1]))); break;
        case 4: _t->newBigFolderDiscovered((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->syncPausedChanged((*reinterpret_cast< std::add_pointer_t<OCC::Folder*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 6: _t->canSyncChanged(); break;
        case 7: _t->watchedFileChangedExternally((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 8: _t->slotTerminateSync(); break;
        case 9: _t->slotAboutToRemoveAllFiles((*reinterpret_cast< std::add_pointer_t<OCC::SyncFileItem::Direction>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<std::function<void(bool)>>>(_a[2]))); break;
        case 10: _t->slotNeedToRemoveRemnantsReadOnlyFolders((*reinterpret_cast< std::add_pointer_t<QList<SyncFileItemPtr>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<std::function<void(bool)>>>(_a[3]))); break;
        case 11: _t->startSync((*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[1]))); break;
        case 12: _t->startSync(); break;
        case 13: { int _r = _t->slotDiscardDownloadProgress();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 14: { int _r = _t->downloadInfoCount();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 15: { int _r = _t->slotWipeErrorBlacklist();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 16: { int _r = _t->errorBlackListEntryCount();
            if (_a[0]) *reinterpret_cast< int*>(_a[0]) = std::move(_r); }  break;
        case 17: _t->slotWatchedPathChanged((*reinterpret_cast< std::add_pointer_t<QStringView>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<OCC::Folder::ChangeReason>>(_a[2]))); break;
        case 18: _t->slotFilesLockReleased((*reinterpret_cast< std::add_pointer_t<QSet<QString>>>(_a[1]))); break;
        case 19: _t->slotFilesLockImposed((*reinterpret_cast< std::add_pointer_t<QSet<QString>>>(_a[1]))); break;
        case 20: _t->slotLockedFilesFound((*reinterpret_cast< std::add_pointer_t<QSet<QString>>>(_a[1]))); break;
        case 21: _t->implicitlyHydrateFile((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 22: _t->schedulePathForLocalDiscovery((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 23: _t->slotNextSyncFullLocalDiscovery(); break;
        case 24: _t->setSilenceErrorsUntilNextSync((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 25: _t->removeLocalE2eFiles(); break;
        case 26: _t->slotSyncStarted(); break;
        case 27: _t->slotSyncFinished((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 28: _t->disconnectFolderWatcher(); break;
        case 29: _t->slotSyncError((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<OCC::ErrorCategory>>(_a[2]))); break;
        case 30: _t->slotAddErrorToGui((*reinterpret_cast< std::add_pointer_t<OCC::SyncFileItem::Status>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<OCC::ErrorCategory>>(_a[4]))); break;
        case 31: _t->slotTransmissionProgress((*reinterpret_cast< std::add_pointer_t<OCC::ProgressInfo>>(_a[1]))); break;
        case 32: _t->slotItemCompleted((*reinterpret_cast< std::add_pointer_t<OCC::SyncFileItemPtr>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<OCC::ErrorCategory>>(_a[2]))); break;
        case 33: _t->slotRunEtagJob(); break;
        case 34: _t->etagRetrieved((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QDateTime>>(_a[2]))); break;
        case 35: _t->etagRetrievedFromSyncEngine((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QDateTime>>(_a[2]))); break;
        case 36: _t->slotEmitFinishedDelayed(); break;
        case 37: _t->slotNewBigFolderDiscovered((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 38: _t->slotExistingFolderNowBig((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 39: _t->slotLogPropagationStart(); break;
        case 40: _t->slotScheduleThisFolder(); break;
        case 41: _t->slotFolderConflicts((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[2]))); break;
        case 42: _t->warnOnNewExcludedItem((*reinterpret_cast< std::add_pointer_t<OCC::SyncJournalFileRecord>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QStringView>>(_a[2]))); break;
        case 43: _t->slotWatcherUnreliable((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 44: _t->slotHydrationStarts(); break;
        case 45: _t->slotHydrationDone(); break;
        case 46: _t->slotHydrationFailed((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4]))); break;
        case 47: _t->slotCapabilitiesChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::Folder* >(); break;
            }
            break;
        case 18:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QSet<QString> >(); break;
            }
            break;
        case 19:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QSet<QString> >(); break;
            }
            break;
        case 20:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QSet<QString> >(); break;
            }
            break;
        case 32:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::SyncFileItemPtr >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Folder::*)();
            if (_t _q_method = &Folder::syncStateChange; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Folder::*)();
            if (_t _q_method = &Folder::syncStarted; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Folder::*)(const OCC::SyncResult & );
            if (_t _q_method = &Folder::syncFinished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Folder::*)(const OCC::ProgressInfo & );
            if (_t _q_method = &Folder::progressInfo; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Folder::*)(const QString & );
            if (_t _q_method = &Folder::newBigFolderDiscovered; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Folder::*)(OCC::Folder * , bool );
            if (_t _q_method = &Folder::syncPausedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Folder::*)();
            if (_t _q_method = &Folder::canSyncChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Folder::*)(const QString & );
            if (_t _q_method = &Folder::watchedFileChangedExternally; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
    }
}

const QMetaObject *OCC::Folder::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::Folder::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPEFolderENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OCC::Folder::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 48)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 48;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 48)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 48;
    }
    return _id;
}

// SIGNAL 0
void OCC::Folder::syncStateChange()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void OCC::Folder::syncStarted()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void OCC::Folder::syncFinished(const OCC::SyncResult & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void OCC::Folder::progressInfo(const OCC::ProgressInfo & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void OCC::Folder::newBigFolderDiscovered(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void OCC::Folder::syncPausedChanged(OCC::Folder * _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void OCC::Folder::canSyncChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void OCC::Folder::watchedFileChangedExternally(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
