/****************************************************************************
** Meta object code from reading C++ file 'systray.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/gui/systray.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'systray.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSOCCSCOPESystrayENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPESystrayENDCLASS = QtMocHelpers::stringData(
    "OCC::Systray",
    "currentUserChanged",
    "",
    "openAccountWizard",
    "openSettings",
    "openHelp",
    "shutdown",
    "showFileDetailsPage",
    "fileLocalPath",
    "OCC::Systray::FileDetailsPage",
    "page",
    "showFileDetails",
    "OCC::AccountState*",
    "accountState",
    "localPath",
    "fileDetailsPage",
    "sendChatMessage",
    "token",
    "message",
    "replyTo",
    "showErrorMessageDialog",
    "error",
    "syncIsPausedChanged",
    "isOpenChanged",
    "setTrayEngine",
    "QQmlApplicationEngine*",
    "trayEngine",
    "create",
    "showMessage",
    "title",
    "QSystemTrayIcon::MessageIcon",
    "icon",
    "showUpdateMessage",
    "webUrl",
    "showTalkMessage",
    "OCC::AccountStatePtr",
    "createCallDialog",
    "OCC::Activity",
    "callNotification",
    "createEditFileLocallyLoadingDialog",
    "fileName",
    "destroyEditFileLocallyLoadingDialog",
    "createResolveConflictsDialog",
    "OCC::ActivityList",
    "allConflicts",
    "slotCurrentUserChanged",
    "forceWindowInit",
    "QQuickWindow*",
    "window",
    "positionWindowAtTray",
    "positionWindowAtScreenCenter",
    "positionNotificationWindow",
    "destroyDialog",
    "showWindow",
    "OCC::Systray::WindowPosition",
    "position",
    "hideWindow",
    "setSyncIsPaused",
    "syncIsPaused",
    "setIsOpen",
    "isOpen",
    "createShareDialog",
    "createFileActivityDialog",
    "presentShareViewInTray",
    "slotUpdateSyncPausedState",
    "slotUnpauseAllFolders",
    "slotPauseAllFolders",
    "windowTitle",
    "useNormalWindow",
    "enableAddAccount",
    "TaskBarPosition",
    "Bottom",
    "Left",
    "Top",
    "Right",
    "NotificationPosition",
    "Default",
    "TopLeft",
    "TopRight",
    "BottomLeft",
    "BottomRight",
    "WindowPosition",
    "Center",
    "FileDetailsPage",
    "Activity",
    "Sharing"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPESystrayENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      38,   14, // methods
       5,  356, // properties
       4,  381, // enums/sets
       0,    0, // constructors
       0,       // flags
      11,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  242,    2, 0x06,   10 /* Public */,
       3,    0,  243,    2, 0x06,   11 /* Public */,
       4,    0,  244,    2, 0x06,   12 /* Public */,
       5,    0,  245,    2, 0x06,   13 /* Public */,
       6,    0,  246,    2, 0x06,   14 /* Public */,
       7,    2,  247,    2, 0x06,   15 /* Public */,
      11,    3,  252,    2, 0x06,   18 /* Public */,
      16,    3,  259,    2, 0x06,   22 /* Public */,
      20,    1,  266,    2, 0x06,   26 /* Public */,
      22,    0,  269,    2, 0x06,   28 /* Public */,
      23,    0,  270,    2, 0x06,   29 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      24,    1,  271,    2, 0x0a,   30 /* Public */,
      27,    0,  274,    2, 0x0a,   32 /* Public */,
      28,    3,  275,    2, 0x0a,   33 /* Public */,
      28,    2,  282,    2, 0x2a,   37 /* Public | MethodCloned */,
      32,    3,  287,    2, 0x0a,   40 /* Public */,
      34,    5,  294,    2, 0x0a,   44 /* Public */,
      36,    2,  305,    2, 0x0a,   50 /* Public */,
      39,    1,  310,    2, 0x0a,   53 /* Public */,
      41,    0,  313,    2, 0x0a,   55 /* Public */,
      42,    1,  314,    2, 0x0a,   56 /* Public */,
      45,    0,  317,    2, 0x0a,   58 /* Public */,
      46,    1,  318,    2, 0x10a,   59 /* Public | MethodIsConst  */,
      49,    1,  321,    2, 0x10a,   61 /* Public | MethodIsConst  */,
      50,    1,  324,    2, 0x10a,   63 /* Public | MethodIsConst  */,
      51,    1,  327,    2, 0x10a,   65 /* Public | MethodIsConst  */,
      52,    1,  330,    2, 0x10a,   67 /* Public | MethodIsConst  */,
      53,    1,  333,    2, 0x0a,   69 /* Public */,
      53,    0,  336,    2, 0x2a,   71 /* Public | MethodCloned */,
      56,    0,  337,    2, 0x0a,   72 /* Public */,
      57,    1,  338,    2, 0x0a,   73 /* Public */,
      59,    1,  341,    2, 0x0a,   75 /* Public */,
      61,    1,  344,    2, 0x0a,   77 /* Public */,
      62,    1,  347,    2, 0x0a,   79 /* Public */,
      63,    1,  350,    2, 0x0a,   81 /* Public */,
      64,    0,  353,    2, 0x08,   83 /* Private */,
      65,    0,  354,    2, 0x08,   84 /* Private */,
      66,    0,  355,    2, 0x08,   85 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 9,    8,   10,
    QMetaType::Void, 0x80000000 | 12, QMetaType::QString, 0x80000000 | 9,   13,   14,   15,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString,   17,   18,   19,
    QMetaType::Void, QMetaType::QString,   21,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 25,   26,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, 0x80000000 | 30,   29,   18,   31,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,   29,   18,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QUrl,   29,   18,   33,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QString, QMetaType::QString, 0x80000000 | 35,   29,   18,   19,   17,   13,
    QMetaType::Void, 0x80000000 | 37, 0x80000000 | 35,   38,   13,
    QMetaType::Void, QMetaType::QString,   40,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 43,   44,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 47,   48,
    QMetaType::Void, 0x80000000 | 47,   48,
    QMetaType::Void, 0x80000000 | 47,   48,
    QMetaType::Void, 0x80000000 | 47,   48,
    QMetaType::Void, 0x80000000 | 47,   48,
    QMetaType::Void, 0x80000000 | 54,   55,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   58,
    QMetaType::Void, QMetaType::Bool,   60,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags, notifyId, revision
      67, QMetaType::QString, 0x00015401, uint(-1), 0,
      68, QMetaType::Bool, 0x00015401, uint(-1), 0,
      58, QMetaType::Bool, 0x00015103, uint(9), 0,
      60, QMetaType::Bool, 0x00015103, uint(10), 0,
      69, QMetaType::Bool, 0x00015401, uint(-1), 0,

 // enums: name, alias, flags, count, data
      70,   70, 0x2,    4,  401,
      75,   75, 0x2,    5,  409,
      81,   81, 0x2,    2,  419,
      83,   83, 0x2,    2,  423,

 // enum data: key, value
      71, uint(OCC::Systray::TaskBarPosition::Bottom),
      72, uint(OCC::Systray::TaskBarPosition::Left),
      73, uint(OCC::Systray::TaskBarPosition::Top),
      74, uint(OCC::Systray::TaskBarPosition::Right),
      76, uint(OCC::Systray::NotificationPosition::Default),
      77, uint(OCC::Systray::NotificationPosition::TopLeft),
      78, uint(OCC::Systray::NotificationPosition::TopRight),
      79, uint(OCC::Systray::NotificationPosition::BottomLeft),
      80, uint(OCC::Systray::NotificationPosition::BottomRight),
      76, uint(OCC::Systray::WindowPosition::Default),
      82, uint(OCC::Systray::WindowPosition::Center),
      84, uint(OCC::Systray::FileDetailsPage::Activity),
      85, uint(OCC::Systray::FileDetailsPage::Sharing),

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::Systray::staticMetaObject = { {
    QMetaObject::SuperData::link<QSystemTrayIcon::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPESystrayENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPESystrayENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPESystrayENDCLASS_t,
        // property 'windowTitle'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'useNormalWindow'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'syncIsPaused'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'isOpen'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'enableAddAccount'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // enum 'TaskBarPosition'
        QtPrivate::TypeAndForceComplete<Systray::TaskBarPosition, std::true_type>,
        // enum 'NotificationPosition'
        QtPrivate::TypeAndForceComplete<Systray::NotificationPosition, std::true_type>,
        // enum 'WindowPosition'
        QtPrivate::TypeAndForceComplete<Systray::WindowPosition, std::true_type>,
        // enum 'FileDetailsPage'
        QtPrivate::TypeAndForceComplete<Systray::FileDetailsPage, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Systray, std::true_type>,
        // method 'currentUserChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'openAccountWizard'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'openSettings'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'openHelp'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'shutdown'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showFileDetailsPage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::Systray::FileDetailsPage, std::false_type>,
        // method 'showFileDetails'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::AccountState *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::Systray::FileDetailsPage, std::false_type>,
        // method 'sendChatMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'showErrorMessageDialog'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'syncIsPausedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'isOpenChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setTrayEngine'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QQmlApplicationEngine *, std::false_type>,
        // method 'create'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QSystemTrayIcon::MessageIcon, std::false_type>,
        // method 'showMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'showUpdateMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>,
        // method 'showTalkMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::AccountStatePtr &, std::false_type>,
        // method 'createCallDialog'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::Activity &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::AccountStatePtr, std::false_type>,
        // method 'createEditFileLocallyLoadingDialog'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'destroyEditFileLocallyLoadingDialog'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'createResolveConflictsDialog'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::ActivityList &, std::false_type>,
        // method 'slotCurrentUserChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'forceWindowInit'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QQuickWindow *, std::false_type>,
        // method 'positionWindowAtTray'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QQuickWindow *, std::false_type>,
        // method 'positionWindowAtScreenCenter'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QQuickWindow *, std::false_type>,
        // method 'positionNotificationWindow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QQuickWindow *, std::false_type>,
        // method 'destroyDialog'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QQuickWindow *, std::false_type>,
        // method 'showWindow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::Systray::WindowPosition, std::false_type>,
        // method 'showWindow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'hideWindow'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setSyncIsPaused'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'setIsOpen'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'createShareDialog'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'createFileActivityDialog'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'presentShareViewInTray'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'slotUpdateSyncPausedState'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotUnpauseAllFolders'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotPauseAllFolders'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void OCC::Systray::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Systray *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->currentUserChanged(); break;
        case 1: _t->openAccountWizard(); break;
        case 2: _t->openSettings(); break;
        case 3: _t->openHelp(); break;
        case 4: _t->shutdown(); break;
        case 5: _t->showFileDetailsPage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<OCC::Systray::FileDetailsPage>>(_a[2]))); break;
        case 6: _t->showFileDetails((*reinterpret_cast< std::add_pointer_t<OCC::AccountState*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<OCC::Systray::FileDetailsPage>>(_a[3]))); break;
        case 7: _t->sendChatMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 8: _t->showErrorMessageDialog((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 9: _t->syncIsPausedChanged(); break;
        case 10: _t->isOpenChanged(); break;
        case 11: _t->setTrayEngine((*reinterpret_cast< std::add_pointer_t<QQmlApplicationEngine*>>(_a[1]))); break;
        case 12: _t->create(); break;
        case 13: _t->showMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QSystemTrayIcon::MessageIcon>>(_a[3]))); break;
        case 14: _t->showMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 15: _t->showUpdateMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[3]))); break;
        case 16: _t->showTalkMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[4])),(*reinterpret_cast< std::add_pointer_t<OCC::AccountStatePtr>>(_a[5]))); break;
        case 17: _t->createCallDialog((*reinterpret_cast< std::add_pointer_t<OCC::Activity>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<OCC::AccountStatePtr>>(_a[2]))); break;
        case 18: _t->createEditFileLocallyLoadingDialog((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 19: _t->destroyEditFileLocallyLoadingDialog(); break;
        case 20: _t->createResolveConflictsDialog((*reinterpret_cast< std::add_pointer_t<OCC::ActivityList>>(_a[1]))); break;
        case 21: _t->slotCurrentUserChanged(); break;
        case 22: _t->forceWindowInit((*reinterpret_cast< std::add_pointer_t<QQuickWindow*>>(_a[1]))); break;
        case 23: _t->positionWindowAtTray((*reinterpret_cast< std::add_pointer_t<QQuickWindow*>>(_a[1]))); break;
        case 24: _t->positionWindowAtScreenCenter((*reinterpret_cast< std::add_pointer_t<QQuickWindow*>>(_a[1]))); break;
        case 25: _t->positionNotificationWindow((*reinterpret_cast< std::add_pointer_t<QQuickWindow*>>(_a[1]))); break;
        case 26: _t->destroyDialog((*reinterpret_cast< std::add_pointer_t<QQuickWindow*>>(_a[1]))); break;
        case 27: _t->showWindow((*reinterpret_cast< std::add_pointer_t<OCC::Systray::WindowPosition>>(_a[1]))); break;
        case 28: _t->showWindow(); break;
        case 29: _t->hideWindow(); break;
        case 30: _t->setSyncIsPaused((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 31: _t->setIsOpen((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 32: _t->createShareDialog((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 33: _t->createFileActivityDialog((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 34: _t->presentShareViewInTray((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 35: _t->slotUpdateSyncPausedState(); break;
        case 36: _t->slotUnpauseAllFolders(); break;
        case 37: _t->slotPauseAllFolders(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::AccountState* >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 4:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::AccountStatePtr >(); break;
            }
            break;
        case 17:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::AccountStatePtr >(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::Activity >(); break;
            }
            break;
        case 20:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::ActivityList >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Systray::*)();
            if (_t _q_method = &Systray::currentUserChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Systray::*)();
            if (_t _q_method = &Systray::openAccountWizard; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Systray::*)();
            if (_t _q_method = &Systray::openSettings; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Systray::*)();
            if (_t _q_method = &Systray::openHelp; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Systray::*)();
            if (_t _q_method = &Systray::shutdown; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Systray::*)(const QString & , const OCC::Systray::FileDetailsPage );
            if (_t _q_method = &Systray::showFileDetailsPage; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Systray::*)(OCC::AccountState * , const QString & , const OCC::Systray::FileDetailsPage );
            if (_t _q_method = &Systray::showFileDetails; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Systray::*)(const QString & , const QString & , const QString & );
            if (_t _q_method = &Systray::sendChatMessage; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (Systray::*)(const QString & );
            if (_t _q_method = &Systray::showErrorMessageDialog; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (Systray::*)();
            if (_t _q_method = &Systray::syncIsPausedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (Systray::*)();
            if (_t _q_method = &Systray::isOpenChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Systray *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->windowTitle(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->useNormalWindow(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->syncIsPaused(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->isOpen(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->enableAddAccount(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Systray *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 2: _t->setSyncIsPaused(*reinterpret_cast< bool*>(_v)); break;
        case 3: _t->setIsOpen(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *OCC::Systray::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::Systray::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPESystrayENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QSystemTrayIcon::qt_metacast(_clname);
}

int OCC::Systray::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QSystemTrayIcon::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 38)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 38;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 38)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 38;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void OCC::Systray::currentUserChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void OCC::Systray::openAccountWizard()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void OCC::Systray::openSettings()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void OCC::Systray::openHelp()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void OCC::Systray::shutdown()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void OCC::Systray::showFileDetailsPage(const QString & _t1, const OCC::Systray::FileDetailsPage _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void OCC::Systray::showFileDetails(OCC::AccountState * _t1, const QString & _t2, const OCC::Systray::FileDetailsPage _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void OCC::Systray::sendChatMessage(const QString & _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}

// SIGNAL 8
void OCC::Systray::showErrorMessageDialog(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 8, _a);
}

// SIGNAL 9
void OCC::Systray::syncIsPausedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void OCC::Systray::isOpenChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}
QT_WARNING_POP
