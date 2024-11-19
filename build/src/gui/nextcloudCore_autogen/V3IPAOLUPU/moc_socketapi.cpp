/****************************************************************************
** Meta object code from reading C++ file 'socketapi.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/gui/socketapi/socketapi.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QSharedPointer>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'socketapi.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSOCCSCOPESocketApiENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPESocketApiENDCLASS = QtMocHelpers::stringData(
    "OCC::SocketApi",
    "shareCommandReceived",
    "",
    "localPath",
    "fileActivityCommandReceived",
    "slotUpdateFolderView",
    "OCC::Folder*",
    "f",
    "slotUnregisterPath",
    "alias",
    "slotRegisterPath",
    "broadcastStatusPushMessage",
    "systemPath",
    "OCC::SyncFileStatus",
    "fileStatus",
    "slotNewConnection",
    "onLostConnection",
    "slotSocketDestroyed",
    "obj",
    "slotReadSocket",
    "copyUrlToClipboard",
    "link",
    "emailPrivateLink",
    "openPrivateLink",
    "command_RETRIEVE_FOLDER_STATUS",
    "argument",
    "OCC::SocketListener*",
    "listener",
    "command_RETRIEVE_FILE_STATUS",
    "command_VERSION",
    "command_SHARE_MENU_TITLE",
    "command_ACTIVITY",
    "localFile",
    "command_ENCRYPT",
    "command_SHARE",
    "command_LEAVESHARE",
    "command_MANAGE_PUBLIC_LINKS",
    "command_COPY_SECUREFILEDROP_LINK",
    "command_COPY_PUBLIC_LINK",
    "command_COPY_PRIVATE_LINK",
    "command_EMAIL_PRIVATE_LINK",
    "command_OPEN_PRIVATE_LINK",
    "command_MAKE_AVAILABLE_LOCALLY",
    "filesArg",
    "command_MAKE_ONLINE_ONLY",
    "command_RESOLVE_CONFLICT",
    "command_DELETE_ITEM",
    "command_MOVE_ITEM",
    "command_LOCK_FILE",
    "command_UNLOCK_FILE",
    "command_COPYASPATH",
    "command_OPENNEWWINDOW",
    "command_OPEN",
    "command_V2_LIST_ACCOUNTS",
    "QSharedPointer<OCC::SocketApiJobV2>",
    "job",
    "command_V2_UPLOAD_FILES_FROM",
    "command_GET_STRINGS",
    "command_GET_MENU_ITEMS",
    "command_EDIT"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPESocketApiENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      42,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  266,    2, 0x06,    1 /* Public */,
       4,    1,  269,    2, 0x06,    3 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    1,  272,    2, 0x0a,    5 /* Public */,
       8,    1,  275,    2, 0x0a,    7 /* Public */,
      10,    1,  278,    2, 0x0a,    9 /* Public */,
      11,    2,  281,    2, 0x0a,   11 /* Public */,
      15,    0,  286,    2, 0x08,   14 /* Private */,
      16,    0,  287,    2, 0x08,   15 /* Private */,
      17,    1,  288,    2, 0x08,   16 /* Private */,
      19,    0,  291,    2, 0x08,   18 /* Private */,
      20,    1,  292,    2, 0x08,   19 /* Private */,
      22,    1,  295,    2, 0x08,   21 /* Private */,
      23,    1,  298,    2, 0x08,   23 /* Private */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      24,    2,  301,    2, 0x00,   25 /* Private */,
      28,    2,  306,    2, 0x00,   28 /* Private */,
      29,    2,  311,    2, 0x00,   31 /* Private */,
      30,    2,  316,    2, 0x00,   34 /* Private */,
      31,    2,  321,    2, 0x00,   37 /* Private */,
      33,    2,  326,    2, 0x00,   40 /* Private */,
      34,    2,  331,    2, 0x00,   43 /* Private */,
      35,    2,  336,    2, 0x00,   46 /* Private */,
      36,    2,  341,    2, 0x00,   49 /* Private */,
      37,    2,  346,    2, 0x00,   52 /* Private */,
      38,    2,  351,    2, 0x00,   55 /* Private */,
      39,    2,  356,    2, 0x00,   58 /* Private */,
      40,    2,  361,    2, 0x00,   61 /* Private */,
      41,    2,  366,    2, 0x00,   64 /* Private */,
      42,    2,  371,    2, 0x00,   67 /* Private */,
      44,    2,  376,    2, 0x00,   70 /* Private */,
      45,    2,  381,    2, 0x00,   73 /* Private */,
      46,    2,  386,    2, 0x00,   76 /* Private */,
      47,    2,  391,    2, 0x00,   79 /* Private */,
      48,    2,  396,    2, 0x00,   82 /* Private */,
      49,    2,  401,    2, 0x00,   85 /* Private */,
      50,    2,  406,    2, 0x00,   88 /* Private */,
      51,    2,  411,    2, 0x00,   91 /* Private */,
      52,    2,  416,    2, 0x00,   94 /* Private */,
      53,    1,  421,    2, 0x100,   97 /* Private | MethodIsConst  */,
      56,    1,  424,    2, 0x100,   99 /* Private | MethodIsConst  */,
      57,    2,  427,    2, 0x00,  101 /* Private */,
      58,    2,  432,    2, 0x00,  104 /* Private */,
      59,    2,  437,    2, 0x00,  107 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QString,    3,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 13,   12,   14,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QObjectStar,   18,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   21,
    QMetaType::Void, QMetaType::QString,   21,
    QMetaType::Void, QMetaType::QString,   21,

 // methods: parameters
    QMetaType::Void, QMetaType::QString, 0x80000000 | 26,   25,   27,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 26,   25,   27,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 26,   25,   27,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 26,   25,   27,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 26,   32,   27,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 26,   32,   27,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 26,   32,   27,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 26,   32,   27,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 26,   32,   27,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 26,   32,   27,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 26,   32,   27,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 26,   32,   27,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 26,   32,   27,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 26,   32,   27,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 26,   43,   27,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 26,   43,   27,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 26,   32,   27,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 26,   32,   27,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 26,   32,   27,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 26,   32,   27,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 26,   32,   27,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 26,   32,   27,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 26,   32,   27,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 26,   32,   27,
    QMetaType::Void, 0x80000000 | 54,   55,
    QMetaType::Void, 0x80000000 | 54,   55,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 26,   25,   27,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 26,   25,   27,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 26,   32,   27,

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::SocketApi::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPESocketApiENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPESocketApiENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPESocketApiENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SocketApi, std::true_type>,
        // method 'shareCommandReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'fileActivityCommandReceived'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'slotUpdateFolderView'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::Folder *, std::false_type>,
        // method 'slotUnregisterPath'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'slotRegisterPath'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'broadcastStatusPushMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::SyncFileStatus, std::false_type>,
        // method 'slotNewConnection'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onLostConnection'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotSocketDestroyed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QObject *, std::false_type>,
        // method 'slotReadSocket'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'copyUrlToClipboard'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'emailPrivateLink'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'openPrivateLink'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'command_RETRIEVE_FOLDER_STATUS'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::SocketListener *, std::false_type>,
        // method 'command_RETRIEVE_FILE_STATUS'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::SocketListener *, std::false_type>,
        // method 'command_VERSION'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::SocketListener *, std::false_type>,
        // method 'command_SHARE_MENU_TITLE'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::SocketListener *, std::false_type>,
        // method 'command_ACTIVITY'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::SocketListener *, std::false_type>,
        // method 'command_ENCRYPT'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::SocketListener *, std::false_type>,
        // method 'command_SHARE'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::SocketListener *, std::false_type>,
        // method 'command_LEAVESHARE'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::SocketListener *, std::false_type>,
        // method 'command_MANAGE_PUBLIC_LINKS'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::SocketListener *, std::false_type>,
        // method 'command_COPY_SECUREFILEDROP_LINK'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::SocketListener *, std::false_type>,
        // method 'command_COPY_PUBLIC_LINK'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::SocketListener *, std::false_type>,
        // method 'command_COPY_PRIVATE_LINK'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::SocketListener *, std::false_type>,
        // method 'command_EMAIL_PRIVATE_LINK'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::SocketListener *, std::false_type>,
        // method 'command_OPEN_PRIVATE_LINK'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::SocketListener *, std::false_type>,
        // method 'command_MAKE_AVAILABLE_LOCALLY'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::SocketListener *, std::false_type>,
        // method 'command_MAKE_ONLINE_ONLY'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::SocketListener *, std::false_type>,
        // method 'command_RESOLVE_CONFLICT'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::SocketListener *, std::false_type>,
        // method 'command_DELETE_ITEM'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::SocketListener *, std::false_type>,
        // method 'command_MOVE_ITEM'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::SocketListener *, std::false_type>,
        // method 'command_LOCK_FILE'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::SocketListener *, std::false_type>,
        // method 'command_UNLOCK_FILE'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::SocketListener *, std::false_type>,
        // method 'command_COPYASPATH'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::SocketListener *, std::false_type>,
        // method 'command_OPENNEWWINDOW'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::SocketListener *, std::false_type>,
        // method 'command_OPEN'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::SocketListener *, std::false_type>,
        // method 'command_V2_LIST_ACCOUNTS'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QSharedPointer<OCC::SocketApiJobV2> &, std::false_type>,
        // method 'command_V2_UPLOAD_FILES_FROM'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QSharedPointer<OCC::SocketApiJobV2> &, std::false_type>,
        // method 'command_GET_STRINGS'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::SocketListener *, std::false_type>,
        // method 'command_GET_MENU_ITEMS'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::SocketListener *, std::false_type>,
        // method 'command_EDIT'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::SocketListener *, std::false_type>
    >,
    nullptr
} };

void OCC::SocketApi::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SocketApi *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->shareCommandReceived((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->fileActivityCommandReceived((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->slotUpdateFolderView((*reinterpret_cast< std::add_pointer_t<OCC::Folder*>>(_a[1]))); break;
        case 3: _t->slotUnregisterPath((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->slotRegisterPath((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->broadcastStatusPushMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<OCC::SyncFileStatus>>(_a[2]))); break;
        case 6: _t->slotNewConnection(); break;
        case 7: _t->onLostConnection(); break;
        case 8: _t->slotSocketDestroyed((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1]))); break;
        case 9: _t->slotReadSocket(); break;
        case 10: _t->copyUrlToClipboard((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 11: _t->emailPrivateLink((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 12: _t->openPrivateLink((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 13: _t->command_RETRIEVE_FOLDER_STATUS((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<OCC::SocketListener*>>(_a[2]))); break;
        case 14: _t->command_RETRIEVE_FILE_STATUS((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<OCC::SocketListener*>>(_a[2]))); break;
        case 15: _t->command_VERSION((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<OCC::SocketListener*>>(_a[2]))); break;
        case 16: _t->command_SHARE_MENU_TITLE((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<OCC::SocketListener*>>(_a[2]))); break;
        case 17: _t->command_ACTIVITY((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<OCC::SocketListener*>>(_a[2]))); break;
        case 18: _t->command_ENCRYPT((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<OCC::SocketListener*>>(_a[2]))); break;
        case 19: _t->command_SHARE((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<OCC::SocketListener*>>(_a[2]))); break;
        case 20: _t->command_LEAVESHARE((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<OCC::SocketListener*>>(_a[2]))); break;
        case 21: _t->command_MANAGE_PUBLIC_LINKS((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<OCC::SocketListener*>>(_a[2]))); break;
        case 22: _t->command_COPY_SECUREFILEDROP_LINK((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<OCC::SocketListener*>>(_a[2]))); break;
        case 23: _t->command_COPY_PUBLIC_LINK((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<OCC::SocketListener*>>(_a[2]))); break;
        case 24: _t->command_COPY_PRIVATE_LINK((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<OCC::SocketListener*>>(_a[2]))); break;
        case 25: _t->command_EMAIL_PRIVATE_LINK((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<OCC::SocketListener*>>(_a[2]))); break;
        case 26: _t->command_OPEN_PRIVATE_LINK((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<OCC::SocketListener*>>(_a[2]))); break;
        case 27: _t->command_MAKE_AVAILABLE_LOCALLY((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<OCC::SocketListener*>>(_a[2]))); break;
        case 28: _t->command_MAKE_ONLINE_ONLY((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<OCC::SocketListener*>>(_a[2]))); break;
        case 29: _t->command_RESOLVE_CONFLICT((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<OCC::SocketListener*>>(_a[2]))); break;
        case 30: _t->command_DELETE_ITEM((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<OCC::SocketListener*>>(_a[2]))); break;
        case 31: _t->command_MOVE_ITEM((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<OCC::SocketListener*>>(_a[2]))); break;
        case 32: _t->command_LOCK_FILE((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<OCC::SocketListener*>>(_a[2]))); break;
        case 33: _t->command_UNLOCK_FILE((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<OCC::SocketListener*>>(_a[2]))); break;
        case 34: _t->command_COPYASPATH((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<OCC::SocketListener*>>(_a[2]))); break;
        case 35: _t->command_OPENNEWWINDOW((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<OCC::SocketListener*>>(_a[2]))); break;
        case 36: _t->command_OPEN((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<OCC::SocketListener*>>(_a[2]))); break;
        case 37: _t->command_V2_LIST_ACCOUNTS((*reinterpret_cast< std::add_pointer_t<QSharedPointer<OCC::SocketApiJobV2>>>(_a[1]))); break;
        case 38: _t->command_V2_UPLOAD_FILES_FROM((*reinterpret_cast< std::add_pointer_t<QSharedPointer<OCC::SocketApiJobV2>>>(_a[1]))); break;
        case 39: _t->command_GET_STRINGS((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<OCC::SocketListener*>>(_a[2]))); break;
        case 40: _t->command_GET_MENU_ITEMS((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<OCC::SocketListener*>>(_a[2]))); break;
        case 41: _t->command_EDIT((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<OCC::SocketListener*>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::SyncFileStatus >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SocketApi::*)(const QString & );
            if (_t _q_method = &SocketApi::shareCommandReceived; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SocketApi::*)(const QString & );
            if (_t _q_method = &SocketApi::fileActivityCommandReceived; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *OCC::SocketApi::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::SocketApi::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPESocketApiENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OCC::SocketApi::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 42)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 42;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 42)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 42;
    }
    return _id;
}

// SIGNAL 0
void OCC::SocketApi::shareCommandReceived(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OCC::SocketApi::fileActivityCommandReceived(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
