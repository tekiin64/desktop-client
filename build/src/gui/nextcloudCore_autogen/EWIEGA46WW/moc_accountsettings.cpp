/****************************************************************************
** Meta object code from reading C++ file 'accountsettings.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/gui/accountsettings.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'accountsettings.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSOCCSCOPEAccountSettingsENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPEAccountSettingsENDCLASS = QtMocHelpers::stringData(
    "OCC::AccountSettings",
    "folderChanged",
    "",
    "openFolderAlias",
    "showIssuesList",
    "OCC::AccountState*",
    "account",
    "requestMnemonic",
    "removeAccountFolders",
    "styleChanged",
    "slotOpenOC",
    "slotUpdateQuota",
    "total",
    "used",
    "slotAccountStateChanged",
    "slotStyleChanged",
    "accountsState",
    "slotHideSelectiveSyncWidget",
    "slotAddFolder",
    "slotEnableCurrentFolder",
    "terminate",
    "slotScheduleCurrentFolder",
    "slotScheduleCurrentFolderForceRemoteDiscovery",
    "slotForceSyncCurrentFolder",
    "slotRemoveCurrentFolder",
    "slotOpenCurrentFolder",
    "slotOpenCurrentLocalSubFolder",
    "slotEditCurrentIgnoredFiles",
    "slotOpenMakeFolderDialog",
    "slotEditCurrentLocalIgnoredFiles",
    "slotEnableVfsCurrentFolder",
    "slotDisableVfsCurrentFolder",
    "slotSetCurrentFolderAvailability",
    "OCC::PinState",
    "state",
    "slotSetSubFolderAvailability",
    "OCC::Folder*",
    "folder",
    "path",
    "slotFolderWizardAccepted",
    "slotFolderWizardRejected",
    "slotToggleSignInState",
    "refreshSelectiveSyncStatus",
    "slotMarkSubfolderEncrypted",
    "OCC::FolderStatusModel::SubFolderInfo*",
    "folderInfo",
    "slotSubfolderContextMenuRequested",
    "QModelIndex",
    "idx",
    "point",
    "slotCustomContextMenuRequested",
    "slotFolderListClicked",
    "indx",
    "doExpand",
    "slotLinkActivated",
    "link",
    "slotE2eEncryptionMnemonicReady",
    "slotE2eEncryptionGenerateKeys",
    "slotE2eEncryptionInitializationFinished",
    "isNewMnemonicGenerated",
    "slotEncryptFolderFinished",
    "status",
    "slotSelectiveSyncChanged",
    "topLeft",
    "bottomRight",
    "QList<int>",
    "roles",
    "slotPossiblyUnblacklistE2EeFoldersAndRestartSync",
    "updateBlackListAndScheduleFolderSync",
    "blackList",
    "foldersToRemoveFromBlacklist",
    "folderTerminateSyncAndUpdateBlackList",
    "displayMnemonic",
    "mnemonic",
    "disableEncryptionForAccount",
    "OCC::AccountPtr",
    "showConnectionLabel",
    "message",
    "errors",
    "openIgnoredFilesDialog",
    "absFolderPath",
    "customizeStyle",
    "initializeE2eEncryption",
    "resetE2eEncryption",
    "checkClientSideEncryptionState",
    "removeActionFromEncryptionMessage",
    "actionId",
    "accountState",
    "AccountState*"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPEAccountSettingsENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      56,   14, // methods
       1,  474, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  350,    2, 0x06,    2 /* Public */,
       3,    1,  351,    2, 0x06,    3 /* Public */,
       4,    1,  354,    2, 0x06,    5 /* Public */,
       7,    0,  357,    2, 0x06,    7 /* Public */,
       8,    1,  358,    2, 0x06,    8 /* Public */,
       9,    0,  361,    2, 0x06,   10 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      10,    0,  362,    2, 0x0a,   11 /* Public */,
      11,    2,  363,    2, 0x0a,   12 /* Public */,
      14,    0,  368,    2, 0x0a,   15 /* Public */,
      15,    0,  369,    2, 0x0a,   16 /* Public */,
      16,    0,  370,    2, 0x0a,   17 /* Public */,
      17,    0,  371,    2, 0x0a,   18 /* Public */,
      18,    0,  372,    2, 0x09,   19 /* Protected */,
      19,    1,  373,    2, 0x09,   20 /* Protected */,
      19,    0,  376,    2, 0x29,   22 /* Protected | MethodCloned */,
      21,    0,  377,    2, 0x09,   23 /* Protected */,
      22,    0,  378,    2, 0x09,   24 /* Protected */,
      23,    0,  379,    2, 0x09,   25 /* Protected */,
      24,    0,  380,    2, 0x09,   26 /* Protected */,
      25,    0,  381,    2, 0x09,   27 /* Protected */,
      26,    0,  382,    2, 0x09,   28 /* Protected */,
      27,    0,  383,    2, 0x09,   29 /* Protected */,
      28,    0,  384,    2, 0x09,   30 /* Protected */,
      29,    0,  385,    2, 0x09,   31 /* Protected */,
      30,    0,  386,    2, 0x09,   32 /* Protected */,
      31,    0,  387,    2, 0x09,   33 /* Protected */,
      32,    1,  388,    2, 0x09,   34 /* Protected */,
      35,    3,  391,    2, 0x09,   36 /* Protected */,
      39,    0,  398,    2, 0x09,   40 /* Protected */,
      40,    0,  399,    2, 0x09,   41 /* Protected */,
      41,    0,  400,    2, 0x09,   42 /* Protected */,
      42,    0,  401,    2, 0x09,   43 /* Protected */,
      43,    1,  402,    2, 0x09,   44 /* Protected */,
      46,    2,  405,    2, 0x09,   46 /* Protected */,
      50,    1,  410,    2, 0x09,   49 /* Protected */,
      51,    1,  413,    2, 0x09,   51 /* Protected */,
      53,    0,  416,    2, 0x09,   53 /* Protected */,
      54,    1,  417,    2, 0x09,   54 /* Protected */,
      56,    0,  420,    2, 0x09,   56 /* Protected */,
      57,    0,  421,    2, 0x09,   57 /* Protected */,
      58,    1,  422,    2, 0x09,   58 /* Protected */,
      60,    1,  425,    2, 0x09,   60 /* Protected */,
      62,    3,  428,    2, 0x09,   62 /* Protected */,
      67,    0,  435,    2, 0x09,   66 /* Protected */,
      68,    3,  436,    2, 0x108,   67 /* Private | MethodIsConst  */,
      71,    3,  443,    2, 0x08,   71 /* Private */,
      72,    1,  450,    2, 0x08,   75 /* Private */,
      74,    1,  453,    2, 0x108,   77 /* Private | MethodIsConst  */,
      76,    2,  456,    2, 0x08,   79 /* Private */,
      76,    1,  461,    2, 0x28,   82 /* Private | MethodCloned */,
      79,    1,  464,    2, 0x08,   84 /* Private */,
      81,    0,  467,    2, 0x08,   86 /* Private */,
      82,    0,  468,    2, 0x08,   87 /* Private */,
      83,    0,  469,    2, 0x08,   88 /* Private */,
      84,    0,  470,    2, 0x08,   89 /* Private */,
      85,    1,  471,    2, 0x08,   90 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::LongLong, QMetaType::LongLong,   12,   13,
    QMetaType::Void,
    QMetaType::Void,
    0x80000000 | 5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   20,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 33,   34,
    QMetaType::Void, 0x80000000 | 36, QMetaType::QString, 0x80000000 | 33,   37,   38,   34,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 44,   45,
    QMetaType::Void, 0x80000000 | 47, QMetaType::QPoint,   48,   49,
    QMetaType::Void, QMetaType::QPoint,    2,
    QMetaType::Void, 0x80000000 | 47,   52,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   55,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   59,
    QMetaType::Void, QMetaType::Int,   61,
    QMetaType::Void, 0x80000000 | 47, 0x80000000 | 47, 0x80000000 | 65,   63,   64,   66,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList, 0x80000000 | 36, QMetaType::QStringList,   69,   37,   70,
    QMetaType::Void, QMetaType::QStringList, 0x80000000 | 36, QMetaType::QStringList,   69,   37,   70,
    QMetaType::Void, QMetaType::QString,   73,
    QMetaType::Void, 0x80000000 | 75,    6,
    QMetaType::Void, QMetaType::QString, QMetaType::QStringList,   77,   78,
    QMetaType::Void, QMetaType::QString,   77,
    QMetaType::Void, QMetaType::QString,   80,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   86,

 // properties: name, type, flags, notifyId, revision
      87, 0x80000000 | 88, 0x0001500b, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::AccountSettings::staticMetaObject = { {
    QMetaObject::SuperData::link<QWidget::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPEAccountSettingsENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPEAccountSettingsENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPEAccountSettingsENDCLASS_t,
        // property 'accountState'
        QtPrivate::TypeAndForceComplete<AccountState*, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<AccountSettings, std::true_type>,
        // method 'folderChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'openFolderAlias'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'showIssuesList'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::AccountState *, std::false_type>,
        // method 'requestMnemonic'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'removeAccountFolders'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::AccountState *, std::false_type>,
        // method 'styleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotOpenOC'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotUpdateQuota'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        QtPrivate::TypeAndForceComplete<qint64, std::false_type>,
        // method 'slotAccountStateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotStyleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'accountsState'
        QtPrivate::TypeAndForceComplete<OCC::AccountState *, std::false_type>,
        // method 'slotHideSelectiveSyncWidget'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotAddFolder'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotEnableCurrentFolder'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'slotEnableCurrentFolder'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotScheduleCurrentFolder'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotScheduleCurrentFolderForceRemoteDiscovery'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotForceSyncCurrentFolder'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotRemoveCurrentFolder'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotOpenCurrentFolder'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotOpenCurrentLocalSubFolder'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotEditCurrentIgnoredFiles'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotOpenMakeFolderDialog'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotEditCurrentLocalIgnoredFiles'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotEnableVfsCurrentFolder'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotDisableVfsCurrentFolder'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotSetCurrentFolderAvailability'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::PinState, std::false_type>,
        // method 'slotSetSubFolderAvailability'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::Folder *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::PinState, std::false_type>,
        // method 'slotFolderWizardAccepted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotFolderWizardRejected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotToggleSignInState'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'refreshSelectiveSyncStatus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotMarkSubfolderEncrypted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::FolderStatusModel::SubFolderInfo *, std::false_type>,
        // method 'slotSubfolderContextMenuRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'slotCustomContextMenuRequested'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QPoint &, std::false_type>,
        // method 'slotFolderListClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'doExpand'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotLinkActivated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'slotE2eEncryptionMnemonicReady'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotE2eEncryptionGenerateKeys'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotE2eEncryptionInitializationFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'slotEncryptFolderFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'slotSelectiveSyncChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVector<int> &, std::false_type>,
        // method 'slotPossiblyUnblacklistE2EeFoldersAndRestartSync'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateBlackListAndScheduleFolderSync'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QStringList &, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::Folder *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QStringList &, std::false_type>,
        // method 'folderTerminateSyncAndUpdateBlackList'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QStringList &, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::Folder *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QStringList &, std::false_type>,
        // method 'displayMnemonic'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'disableEncryptionForAccount'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::AccountPtr &, std::false_type>,
        // method 'showConnectionLabel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QStringList, std::false_type>,
        // method 'showConnectionLabel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'openIgnoredFilesDialog'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'customizeStyle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'initializeE2eEncryption'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'resetE2eEncryption'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'checkClientSideEncryptionState'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'removeActionFromEncryptionMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void OCC::AccountSettings::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AccountSettings *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->folderChanged(); break;
        case 1: _t->openFolderAlias((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->showIssuesList((*reinterpret_cast< std::add_pointer_t<OCC::AccountState*>>(_a[1]))); break;
        case 3: _t->requestMnemonic(); break;
        case 4: _t->removeAccountFolders((*reinterpret_cast< std::add_pointer_t<OCC::AccountState*>>(_a[1]))); break;
        case 5: _t->styleChanged(); break;
        case 6: _t->slotOpenOC(); break;
        case 7: _t->slotUpdateQuota((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<qint64>>(_a[2]))); break;
        case 8: _t->slotAccountStateChanged(); break;
        case 9: _t->slotStyleChanged(); break;
        case 10: { OCC::AccountState* _r = _t->accountsState();
            if (_a[0]) *reinterpret_cast< OCC::AccountState**>(_a[0]) = std::move(_r); }  break;
        case 11: _t->slotHideSelectiveSyncWidget(); break;
        case 12: _t->slotAddFolder(); break;
        case 13: _t->slotEnableCurrentFolder((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 14: _t->slotEnableCurrentFolder(); break;
        case 15: _t->slotScheduleCurrentFolder(); break;
        case 16: _t->slotScheduleCurrentFolderForceRemoteDiscovery(); break;
        case 17: _t->slotForceSyncCurrentFolder(); break;
        case 18: _t->slotRemoveCurrentFolder(); break;
        case 19: _t->slotOpenCurrentFolder(); break;
        case 20: _t->slotOpenCurrentLocalSubFolder(); break;
        case 21: _t->slotEditCurrentIgnoredFiles(); break;
        case 22: _t->slotOpenMakeFolderDialog(); break;
        case 23: _t->slotEditCurrentLocalIgnoredFiles(); break;
        case 24: _t->slotEnableVfsCurrentFolder(); break;
        case 25: _t->slotDisableVfsCurrentFolder(); break;
        case 26: _t->slotSetCurrentFolderAvailability((*reinterpret_cast< std::add_pointer_t<OCC::PinState>>(_a[1]))); break;
        case 27: _t->slotSetSubFolderAvailability((*reinterpret_cast< std::add_pointer_t<OCC::Folder*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<OCC::PinState>>(_a[3]))); break;
        case 28: _t->slotFolderWizardAccepted(); break;
        case 29: _t->slotFolderWizardRejected(); break;
        case 30: _t->slotToggleSignInState(); break;
        case 31: _t->refreshSelectiveSyncStatus(); break;
        case 32: _t->slotMarkSubfolderEncrypted((*reinterpret_cast< std::add_pointer_t<OCC::FolderStatusModel::SubFolderInfo*>>(_a[1]))); break;
        case 33: _t->slotSubfolderContextMenuRequested((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[2]))); break;
        case 34: _t->slotCustomContextMenuRequested((*reinterpret_cast< std::add_pointer_t<QPoint>>(_a[1]))); break;
        case 35: _t->slotFolderListClicked((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 36: _t->doExpand(); break;
        case 37: _t->slotLinkActivated((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 38: _t->slotE2eEncryptionMnemonicReady(); break;
        case 39: _t->slotE2eEncryptionGenerateKeys(); break;
        case 40: _t->slotE2eEncryptionInitializationFinished((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 41: _t->slotEncryptFolderFinished((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 42: _t->slotSelectiveSyncChanged((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QList<int>>>(_a[3]))); break;
        case 43: _t->slotPossiblyUnblacklistE2EeFoldersAndRestartSync(); break;
        case 44: _t->updateBlackListAndScheduleFolderSync((*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<OCC::Folder*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[3]))); break;
        case 45: _t->folderTerminateSyncAndUpdateBlackList((*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<OCC::Folder*>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[3]))); break;
        case 46: _t->displayMnemonic((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 47: _t->disableEncryptionForAccount((*reinterpret_cast< std::add_pointer_t<OCC::AccountPtr>>(_a[1]))); break;
        case 48: _t->showConnectionLabel((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[2]))); break;
        case 49: _t->showConnectionLabel((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 50: _t->openIgnoredFilesDialog((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 51: _t->customizeStyle(); break;
        case 52: _t->initializeE2eEncryption(); break;
        case 53: _t->resetE2eEncryption(); break;
        case 54: _t->checkClientSideEncryptionState(); break;
        case 55: _t->removeActionFromEncryptionMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::AccountState* >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::AccountState* >(); break;
            }
            break;
        case 27:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::Folder* >(); break;
            }
            break;
        case 32:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::FolderStatusModel::SubFolderInfo* >(); break;
            }
            break;
        case 42:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 2:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<int> >(); break;
            }
            break;
        case 44:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::Folder* >(); break;
            }
            break;
        case 45:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::Folder* >(); break;
            }
            break;
        case 47:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::AccountPtr >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AccountSettings::*)();
            if (_t _q_method = &AccountSettings::folderChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AccountSettings::*)(const QString & );
            if (_t _q_method = &AccountSettings::openFolderAlias; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (AccountSettings::*)(OCC::AccountState * );
            if (_t _q_method = &AccountSettings::showIssuesList; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (AccountSettings::*)();
            if (_t _q_method = &AccountSettings::requestMnemonic; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (AccountSettings::*)(OCC::AccountState * );
            if (_t _q_method = &AccountSettings::removeAccountFolders; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (AccountSettings::*)();
            if (_t _q_method = &AccountSettings::styleChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< AccountState* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<AccountSettings *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< AccountState**>(_v) = _t->_accountState; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<AccountSettings *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->_accountState != *reinterpret_cast< AccountState**>(_v)) {
                _t->_accountState = *reinterpret_cast< AccountState**>(_v);
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *OCC::AccountSettings::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::AccountSettings::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPEAccountSettingsENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int OCC::AccountSettings::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 56)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 56;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 56)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 56;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void OCC::AccountSettings::folderChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void OCC::AccountSettings::openFolderAlias(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void OCC::AccountSettings::showIssuesList(OCC::AccountState * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void OCC::AccountSettings::requestMnemonic()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void OCC::AccountSettings::removeAccountFolders(OCC::AccountState * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void OCC::AccountSettings::styleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
