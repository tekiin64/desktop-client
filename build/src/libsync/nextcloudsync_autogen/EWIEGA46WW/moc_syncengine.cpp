/****************************************************************************
** Meta object code from reading C++ file 'syncengine.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/libsync/syncengine.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'syncengine.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSOCCSCOPESyncEngineENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPESyncEngineENDCLASS = QtMocHelpers::stringData(
    "OCC::SyncEngine",
    "rootEtag",
    "",
    "aboutToPropagate",
    "OCC::SyncFileItemVector&",
    "itemCompleted",
    "OCC::SyncFileItemPtr",
    "item",
    "OCC::ErrorCategory",
    "category",
    "transmissionProgress",
    "OCC::ProgressInfo",
    "progress",
    "itemDiscovered",
    "syncError",
    "message",
    "addErrorToGui",
    "OCC::SyncFileItem::Status",
    "status",
    "errorMessage",
    "subject",
    "finished",
    "success",
    "started",
    "aboutToRemoveAllFiles",
    "OCC::SyncFileItem::Direction",
    "direction",
    "std::function<void(bool)>",
    "f",
    "aboutToRemoveRemnantsReadOnlyFolders",
    "QList<SyncFileItemPtr>",
    "folders",
    "localPath",
    "newBigFolder",
    "folder",
    "isExternal",
    "existingFolderNowBig",
    "seenLockedFile",
    "fileName",
    "lockFileDetected",
    "lockFile",
    "setSingleItemDiscoveryOptions",
    "OCC::SyncEngine::SingleItemDiscoveryOptions",
    "singleItemDiscoveryOptions",
    "startSync",
    "abort",
    "setNetworkLimits",
    "upload",
    "download",
    "setSyncOptions",
    "OCC::SyncOptions",
    "options",
    "setIgnoreHiddenFiles",
    "ignore",
    "setLocalDiscoveryOptions",
    "OCC::LocalDiscoveryStyle",
    "style",
    "std::set<QString>",
    "paths",
    "addAcceptedInvalidFileName",
    "filePath",
    "slotFolderDiscovered",
    "local",
    "slotRootEtagReceived",
    "time",
    "slotItemDiscovered",
    "slotNewItem",
    "slotItemCompleted",
    "slotDiscoveryFinished",
    "slotPropagationFinished",
    "SyncFileItem::Status",
    "slotProgress",
    "OCC::SyncFileItem",
    "current",
    "slotCleanPollsJobAborted",
    "error",
    "detectFileLock",
    "slotAddTouchedFile",
    "fn",
    "slotClearTouchedFiles",
    "slotSummaryError",
    "slotInsufficientLocalStorage",
    "slotInsufficientRemoteStorage",
    "slotScheduleFilesDelayedSync",
    "slotUnscheduleFilesDelayedSync",
    "slotCleanupScheduledSyncTimers",
    "remnantReadOnlyFolderDiscovered"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPESyncEngineENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      43,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
      15,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,  272,    2, 0x06,    1 /* Public */,
       3,    1,  277,    2, 0x06,    4 /* Public */,
       5,    2,  280,    2, 0x06,    6 /* Public */,
      10,    1,  285,    2, 0x06,    9 /* Public */,
      13,    1,  288,    2, 0x06,   11 /* Public */,
      14,    2,  291,    2, 0x06,   13 /* Public */,
      16,    4,  296,    2, 0x06,   16 /* Public */,
      21,    1,  305,    2, 0x06,   21 /* Public */,
      23,    0,  308,    2, 0x06,   23 /* Public */,
      24,    2,  309,    2, 0x06,   24 /* Public */,
      29,    3,  314,    2, 0x06,   27 /* Public */,
      33,    2,  321,    2, 0x06,   31 /* Public */,
      36,    1,  326,    2, 0x06,   34 /* Public */,
      37,    1,  329,    2, 0x06,   36 /* Public */,
      39,    1,  332,    2, 0x06,   38 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      41,    1,  335,    2, 0x0a,   40 /* Public */,
      44,    0,  338,    2, 0x0a,   42 /* Public */,
      45,    0,  339,    2, 0x0a,   43 /* Public */,
      46,    2,  340,    2, 0x0a,   44 /* Public */,
      49,    1,  345,    2, 0x0a,   47 /* Public */,
      52,    1,  348,    2, 0x0a,   49 /* Public */,
      54,    2,  351,    2, 0x0a,   51 /* Public */,
      54,    1,  356,    2, 0x2a,   54 /* Public | MethodCloned */,
      59,    1,  359,    2, 0x0a,   56 /* Public */,
      61,    2,  362,    2, 0x08,   58 /* Private */,
      63,    2,  367,    2, 0x08,   61 /* Private */,
      65,    1,  372,    2, 0x08,   64 /* Private */,
      66,    1,  375,    2, 0x08,   66 /* Private */,
      67,    2,  378,    2, 0x08,   68 /* Private */,
      68,    0,  383,    2, 0x08,   71 /* Private */,
      69,    1,  384,    2, 0x08,   72 /* Private */,
      71,    2,  387,    2, 0x08,   74 /* Private */,
      74,    2,  392,    2, 0x08,   77 /* Private */,
      76,    1,  397,    2, 0x08,   80 /* Private */,
      77,    1,  400,    2, 0x08,   82 /* Private */,
      79,    0,  403,    2, 0x08,   84 /* Private */,
      80,    1,  404,    2, 0x08,   85 /* Private */,
      81,    0,  407,    2, 0x08,   87 /* Private */,
      82,    0,  408,    2, 0x08,   88 /* Private */,
      83,    0,  409,    2, 0x08,   89 /* Private */,
      84,    0,  410,    2, 0x08,   90 /* Private */,
      85,    0,  411,    2, 0x08,   91 /* Private */,
      86,    1,  412,    2, 0x08,   92 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QByteArray, QMetaType::QDateTime,    2,    2,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 8,    7,    9,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 8,   15,    9,
    QMetaType::Void, 0x80000000 | 17, QMetaType::QString, QMetaType::QString, 0x80000000 | 8,   18,   19,   20,    9,
    QMetaType::Void, QMetaType::Bool,   22,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 25, 0x80000000 | 27,   26,   28,
    QMetaType::Void, 0x80000000 | 30, QMetaType::QString, 0x80000000 | 27,   31,   32,   28,
    QMetaType::Void, QMetaType::QString, QMetaType::Bool,   34,   35,
    QMetaType::Void, QMetaType::QString,   34,
    QMetaType::Void, QMetaType::QString,   38,
    QMetaType::Void, QMetaType::QString,   40,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 42,   43,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,   47,   48,
    QMetaType::Void, 0x80000000 | 50,   51,
    QMetaType::Void, QMetaType::Bool,   53,
    QMetaType::Void, 0x80000000 | 55, 0x80000000 | 57,   56,   58,
    QMetaType::Void, 0x80000000 | 55,   56,
    QMetaType::Void, QMetaType::QString,   60,
    QMetaType::Void, QMetaType::Bool, QMetaType::QString,   62,   34,
    QMetaType::Void, QMetaType::QByteArray, QMetaType::QDateTime,    2,   64,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, 0x80000000 | 6, 0x80000000 | 8,    7,    9,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 70,   18,
    QMetaType::Void, 0x80000000 | 72, QMetaType::LongLong,    7,   73,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 8,   75,    9,
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::QString,   78,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 6,    7,

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::SyncEngine::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPESyncEngineENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPESyncEngineENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPESyncEngineENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SyncEngine, std::true_type>,
        // method 'rootEtag'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QDateTime &, std::false_type>,
        // method 'aboutToPropagate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::SyncFileItemVector &, std::false_type>,
        // method 'itemCompleted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::SyncFileItemPtr &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::ErrorCategory, std::false_type>,
        // method 'transmissionProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::ProgressInfo &, std::false_type>,
        // method 'itemDiscovered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::SyncFileItemPtr &, std::false_type>,
        // method 'syncError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::ErrorCategory, std::false_type>,
        // method 'addErrorToGui'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::SyncFileItem::Status, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::ErrorCategory, std::false_type>,
        // method 'finished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'started'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'aboutToRemoveAllFiles'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::SyncFileItem::Direction, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::function<void(bool)>, std::false_type>,
        // method 'aboutToRemoveRemnantsReadOnlyFolders'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<SyncFileItemPtr> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::function<void(bool)>, std::false_type>,
        // method 'newBigFolder'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'existingFolderNowBig'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'seenLockedFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'lockFileDetected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setSingleItemDiscoveryOptions'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::SyncEngine::SingleItemDiscoveryOptions &, std::false_type>,
        // method 'startSync'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'abort'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setNetworkLimits'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'setSyncOptions'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::SyncOptions &, std::false_type>,
        // method 'setIgnoreHiddenFiles'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setLocalDiscoveryOptions'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::LocalDiscoveryStyle, std::false_type>,
        QtPrivate::TypeAndForceComplete<std::set<QString>, std::false_type>,
        // method 'setLocalDiscoveryOptions'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::LocalDiscoveryStyle, std::false_type>,
        // method 'addAcceptedInvalidFileName'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'slotFolderDiscovered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'slotRootEtagReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QByteArray &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QDateTime &, std::false_type>,
        // method 'slotItemDiscovered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::SyncFileItemPtr &, std::false_type>,
        // method 'slotNewItem'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::SyncFileItemPtr &, std::false_type>,
        // method 'slotItemCompleted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::SyncFileItemPtr &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::ErrorCategory, std::false_type>,
        // method 'slotDiscoveryFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotPropagationFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<SyncFileItem::Status, std::false_type>,
        // method 'slotProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::SyncFileItem &, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'slotCleanPollsJobAborted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::ErrorCategory, std::false_type>,
        // method 'detectFileLock'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::SyncFileItemPtr &, std::false_type>,
        // method 'slotAddTouchedFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'slotClearTouchedFiles'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotSummaryError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'slotInsufficientLocalStorage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotInsufficientRemoteStorage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotScheduleFilesDelayedSync'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotUnscheduleFilesDelayedSync'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotCleanupScheduledSyncTimers'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'remnantReadOnlyFolderDiscovered'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::SyncFileItemPtr &, std::false_type>
    >,
    nullptr
} };

void OCC::SyncEngine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SyncEngine *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->rootEtag((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QDateTime>>(_a[2]))); break;
        case 1: _t->aboutToPropagate((*reinterpret_cast< std::add_pointer_t<OCC::SyncFileItemVector&>>(_a[1]))); break;
        case 2: _t->itemCompleted((*reinterpret_cast< std::add_pointer_t<OCC::SyncFileItemPtr>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<OCC::ErrorCategory>>(_a[2]))); break;
        case 3: _t->transmissionProgress((*reinterpret_cast< std::add_pointer_t<OCC::ProgressInfo>>(_a[1]))); break;
        case 4: _t->itemDiscovered((*reinterpret_cast< std::add_pointer_t<OCC::SyncFileItemPtr>>(_a[1]))); break;
        case 5: _t->syncError((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<OCC::ErrorCategory>>(_a[2]))); break;
        case 6: _t->addErrorToGui((*reinterpret_cast< std::add_pointer_t<OCC::SyncFileItem::Status>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<OCC::ErrorCategory>>(_a[4]))); break;
        case 7: _t->finished((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->started(); break;
        case 9: _t->aboutToRemoveAllFiles((*reinterpret_cast< std::add_pointer_t<OCC::SyncFileItem::Direction>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<std::function<void(bool)>>>(_a[2]))); break;
        case 10: _t->aboutToRemoveRemnantsReadOnlyFolders((*reinterpret_cast< std::add_pointer_t<QList<SyncFileItemPtr>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<std::function<void(bool)>>>(_a[3]))); break;
        case 11: _t->newBigFolder((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<bool>>(_a[2]))); break;
        case 12: _t->existingFolderNowBig((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 13: _t->seenLockedFile((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 14: _t->lockFileDetected((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 15: _t->setSingleItemDiscoveryOptions((*reinterpret_cast< std::add_pointer_t<OCC::SyncEngine::SingleItemDiscoveryOptions>>(_a[1]))); break;
        case 16: _t->startSync(); break;
        case 17: _t->abort(); break;
        case 18: _t->setNetworkLimits((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 19: _t->setSyncOptions((*reinterpret_cast< std::add_pointer_t<OCC::SyncOptions>>(_a[1]))); break;
        case 20: _t->setIgnoreHiddenFiles((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 21: _t->setLocalDiscoveryOptions((*reinterpret_cast< std::add_pointer_t<OCC::LocalDiscoveryStyle>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<std::set<QString>>>(_a[2]))); break;
        case 22: _t->setLocalDiscoveryOptions((*reinterpret_cast< std::add_pointer_t<OCC::LocalDiscoveryStyle>>(_a[1]))); break;
        case 23: _t->addAcceptedInvalidFileName((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 24: _t->slotFolderDiscovered((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 25: _t->slotRootEtagReceived((*reinterpret_cast< std::add_pointer_t<QByteArray>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QDateTime>>(_a[2]))); break;
        case 26: _t->slotItemDiscovered((*reinterpret_cast< std::add_pointer_t<OCC::SyncFileItemPtr>>(_a[1]))); break;
        case 27: _t->slotNewItem((*reinterpret_cast< std::add_pointer_t<OCC::SyncFileItemPtr>>(_a[1]))); break;
        case 28: _t->slotItemCompleted((*reinterpret_cast< std::add_pointer_t<OCC::SyncFileItemPtr>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<OCC::ErrorCategory>>(_a[2]))); break;
        case 29: _t->slotDiscoveryFinished(); break;
        case 30: _t->slotPropagationFinished((*reinterpret_cast< std::add_pointer_t<SyncFileItem::Status>>(_a[1]))); break;
        case 31: _t->slotProgress((*reinterpret_cast< std::add_pointer_t<OCC::SyncFileItem>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<qint64>>(_a[2]))); break;
        case 32: _t->slotCleanPollsJobAborted((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<OCC::ErrorCategory>>(_a[2]))); break;
        case 33: _t->detectFileLock((*reinterpret_cast< std::add_pointer_t<OCC::SyncFileItemPtr>>(_a[1]))); break;
        case 34: _t->slotAddTouchedFile((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 35: _t->slotClearTouchedFiles(); break;
        case 36: _t->slotSummaryError((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 37: _t->slotInsufficientLocalStorage(); break;
        case 38: _t->slotInsufficientRemoteStorage(); break;
        case 39: _t->slotScheduleFilesDelayedSync(); break;
        case 40: _t->slotUnscheduleFilesDelayedSync(); break;
        case 41: _t->slotCleanupScheduledSyncTimers(); break;
        case 42: _t->remnantReadOnlyFolderDiscovered((*reinterpret_cast< std::add_pointer_t<OCC::SyncFileItemPtr>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::SyncFileItemPtr >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::SyncFileItemPtr >(); break;
            }
            break;
        case 26:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::SyncFileItemPtr >(); break;
            }
            break;
        case 27:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::SyncFileItemPtr >(); break;
            }
            break;
        case 28:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::SyncFileItemPtr >(); break;
            }
            break;
        case 31:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::SyncFileItem >(); break;
            }
            break;
        case 33:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::SyncFileItemPtr >(); break;
            }
            break;
        case 42:
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
            using _t = void (SyncEngine::*)(const QByteArray & , const QDateTime & );
            if (_t _q_method = &SyncEngine::rootEtag; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SyncEngine::*)(OCC::SyncFileItemVector & );
            if (_t _q_method = &SyncEngine::aboutToPropagate; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SyncEngine::*)(const OCC::SyncFileItemPtr & , const OCC::ErrorCategory );
            if (_t _q_method = &SyncEngine::itemCompleted; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SyncEngine::*)(const OCC::ProgressInfo & );
            if (_t _q_method = &SyncEngine::transmissionProgress; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (SyncEngine::*)(const OCC::SyncFileItemPtr & );
            if (_t _q_method = &SyncEngine::itemDiscovered; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (SyncEngine::*)(const QString & , const OCC::ErrorCategory );
            if (_t _q_method = &SyncEngine::syncError; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (SyncEngine::*)(const OCC::SyncFileItem::Status , const QString & , const QString & , const OCC::ErrorCategory );
            if (_t _q_method = &SyncEngine::addErrorToGui; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (SyncEngine::*)(bool );
            if (_t _q_method = &SyncEngine::finished; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (SyncEngine::*)();
            if (_t _q_method = &SyncEngine::started; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (SyncEngine::*)(OCC::SyncFileItem::Direction , std::function<void(bool)> );
            if (_t _q_method = &SyncEngine::aboutToRemoveAllFiles; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (SyncEngine::*)(const QList<SyncFileItemPtr> & , const QString & , std::function<void(bool)> );
            if (_t _q_method = &SyncEngine::aboutToRemoveRemnantsReadOnlyFolders; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (SyncEngine::*)(const QString & , bool );
            if (_t _q_method = &SyncEngine::newBigFolder; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (SyncEngine::*)(const QString & );
            if (_t _q_method = &SyncEngine::existingFolderNowBig; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (SyncEngine::*)(const QString & );
            if (_t _q_method = &SyncEngine::seenLockedFile; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (SyncEngine::*)(const QString & );
            if (_t _q_method = &SyncEngine::lockFileDetected; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 14;
                return;
            }
        }
    }
}

const QMetaObject *OCC::SyncEngine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::SyncEngine::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPESyncEngineENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OCC::SyncEngine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 43)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 43;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 43)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 43;
    }
    return _id;
}

// SIGNAL 0
void OCC::SyncEngine::rootEtag(const QByteArray & _t1, const QDateTime & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OCC::SyncEngine::aboutToPropagate(OCC::SyncFileItemVector & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void OCC::SyncEngine::itemCompleted(const OCC::SyncFileItemPtr & _t1, const OCC::ErrorCategory _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void OCC::SyncEngine::transmissionProgress(const OCC::ProgressInfo & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void OCC::SyncEngine::itemDiscovered(const OCC::SyncFileItemPtr & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void OCC::SyncEngine::syncError(const QString & _t1, const OCC::ErrorCategory _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void OCC::SyncEngine::addErrorToGui(const OCC::SyncFileItem::Status _t1, const QString & _t2, const QString & _t3, const OCC::ErrorCategory _t4)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void OCC::SyncEngine::finished(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void OCC::SyncEngine::started()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void OCC::SyncEngine::aboutToRemoveAllFiles(OCC::SyncFileItem::Direction _t1, std::function<void(bool)> _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 9, _a);
}

// SIGNAL 10
void OCC::SyncEngine::aboutToRemoveRemnantsReadOnlyFolders(const QList<SyncFileItemPtr> & _t1, const QString & _t2, std::function<void(bool)> _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 10, _a);
}

// SIGNAL 11
void OCC::SyncEngine::newBigFolder(const QString & _t1, bool _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void OCC::SyncEngine::existingFolderNowBig(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void OCC::SyncEngine::seenLockedFile(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void OCC::SyncEngine::lockFileDetected(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 14, _a);
}
QT_WARNING_POP
