/****************************************************************************
** Meta object code from reading C++ file 'owncloudgui.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/gui/owncloudgui.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'owncloudgui.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSOCCSCOPEownCloudGuiENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPEownCloudGuiENDCLASS = QtMocHelpers::stringData(
    "OCC::ownCloudGui",
    "setupProxy",
    "",
    "serverError",
    "code",
    "message",
    "isShowingSettingsDialog",
    "slotComputeOverallSyncStatus",
    "slotShowTrayMessage",
    "title",
    "msg",
    "slotShowTrayUpdateMessage",
    "webUrl",
    "slotFolderOpenAction",
    "alias",
    "slotUpdateProgress",
    "folder",
    "OCC::ProgressInfo",
    "progress",
    "slotShowGuiMessage",
    "slotFoldersChanged",
    "slotShowSettings",
    "slotShowSyncProtocol",
    "slotShutdown",
    "slotSyncStateChange",
    "OCC::Folder*",
    "slotTrayClicked",
    "QSystemTrayIcon::ActivationReason",
    "reason",
    "slotToggleLogBrowser",
    "slotOpenOwnCloud",
    "slotOpenSettingsDialog",
    "slotOpenMainDialog",
    "slotSettingsDialogActivated",
    "slotHelp",
    "slotOpenPath",
    "path",
    "slotAccountStateChanged",
    "slotTrayMessageIfServerUnsupported",
    "OCC::Account*",
    "account",
    "slotNeedToAcceptTermsOfService",
    "OCC::AccountPtr",
    "OCC::AccountState::State",
    "state",
    "slotShowShareDialog",
    "localPath",
    "slotShowFileActivityDialog",
    "slotNewAccountWizard",
    "slotLogin",
    "slotLogout"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPEownCloudGuiENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      30,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  194,    2, 0x06,    1 /* Public */,
       3,    2,  195,    2, 0x06,    2 /* Public */,
       6,    0,  200,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    0,  201,    2, 0x0a,    6 /* Public */,
       8,    2,  202,    2, 0x0a,    7 /* Public */,
      11,    3,  207,    2, 0x0a,   10 /* Public */,
      13,    1,  214,    2, 0x0a,   14 /* Public */,
      15,    2,  217,    2, 0x0a,   16 /* Public */,
      19,    2,  222,    2, 0x0a,   19 /* Public */,
      20,    0,  227,    2, 0x0a,   22 /* Public */,
      21,    0,  228,    2, 0x0a,   23 /* Public */,
      22,    0,  229,    2, 0x0a,   24 /* Public */,
      23,    0,  230,    2, 0x0a,   25 /* Public */,
      24,    1,  231,    2, 0x0a,   26 /* Public */,
      26,    1,  234,    2, 0x0a,   28 /* Public */,
      29,    0,  237,    2, 0x0a,   30 /* Public */,
      30,    0,  238,    2, 0x0a,   31 /* Public */,
      31,    0,  239,    2, 0x0a,   32 /* Public */,
      32,    0,  240,    2, 0x0a,   33 /* Public */,
      33,    0,  241,    2, 0x0a,   34 /* Public */,
      34,    0,  242,    2, 0x0a,   35 /* Public */,
      35,    1,  243,    2, 0x0a,   36 /* Public */,
      37,    0,  246,    2, 0x0a,   38 /* Public */,
      38,    1,  247,    2, 0x0a,   39 /* Public */,
      41,    2,  250,    2, 0x0a,   41 /* Public */,
      45,    1,  255,    2, 0x10a,   44 /* Public | MethodIsConst  */,
      47,    1,  258,    2, 0x10a,   46 /* Public | MethodIsConst  */,
      48,    0,  261,    2, 0x0a,   48 /* Public */,
      49,    0,  262,    2, 0x08,   49 /* Private */,
      50,    0,  263,    2, 0x08,   50 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    4,    5,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    9,   10,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::QUrl,    9,   10,   12,
    QMetaType::Void, QMetaType::QString,   14,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 17,   16,   18,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    9,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 25,    2,
    QMetaType::Void, 0x80000000 | 27,   28,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   36,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 39,   40,
    QMetaType::Void, 0x80000000 | 42, 0x80000000 | 43,   40,   44,
    QMetaType::Void, QMetaType::QString,   46,
    QMetaType::Void, QMetaType::QString,   46,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::ownCloudGui::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPEownCloudGuiENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPEownCloudGuiENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPEownCloudGuiENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ownCloudGui, std::true_type>,
        // method 'setupProxy'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'serverError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'isShowingSettingsDialog'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotComputeOverallSyncStatus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotShowTrayMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'slotShowTrayUpdateMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>,
        // method 'slotFolderOpenAction'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'slotUpdateProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::ProgressInfo &, std::false_type>,
        // method 'slotShowGuiMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'slotFoldersChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotShowSettings'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotShowSyncProtocol'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotShutdown'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotSyncStateChange'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::Folder *, std::false_type>,
        // method 'slotTrayClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QSystemTrayIcon::ActivationReason, std::false_type>,
        // method 'slotToggleLogBrowser'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotOpenOwnCloud'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotOpenSettingsDialog'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotOpenMainDialog'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotSettingsDialogActivated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotHelp'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotOpenPath'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'slotAccountStateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotTrayMessageIfServerUnsupported'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::Account *, std::false_type>,
        // method 'slotNeedToAcceptTermsOfService'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::AccountPtr, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::AccountState::State, std::false_type>,
        // method 'slotShowShareDialog'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'slotShowFileActivityDialog'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'slotNewAccountWizard'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotLogin'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotLogout'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void OCC::ownCloudGui::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ownCloudGui *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->setupProxy(); break;
        case 1: _t->serverError((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 2: _t->isShowingSettingsDialog(); break;
        case 3: _t->slotComputeOverallSyncStatus(); break;
        case 4: _t->slotShowTrayMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 5: _t->slotShowTrayUpdateMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[3]))); break;
        case 6: _t->slotFolderOpenAction((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->slotUpdateProgress((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<OCC::ProgressInfo>>(_a[2]))); break;
        case 8: _t->slotShowGuiMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 9: _t->slotFoldersChanged(); break;
        case 10: _t->slotShowSettings(); break;
        case 11: _t->slotShowSyncProtocol(); break;
        case 12: _t->slotShutdown(); break;
        case 13: _t->slotSyncStateChange((*reinterpret_cast< std::add_pointer_t<OCC::Folder*>>(_a[1]))); break;
        case 14: _t->slotTrayClicked((*reinterpret_cast< std::add_pointer_t<QSystemTrayIcon::ActivationReason>>(_a[1]))); break;
        case 15: _t->slotToggleLogBrowser(); break;
        case 16: _t->slotOpenOwnCloud(); break;
        case 17: _t->slotOpenSettingsDialog(); break;
        case 18: _t->slotOpenMainDialog(); break;
        case 19: _t->slotSettingsDialogActivated(); break;
        case 20: _t->slotHelp(); break;
        case 21: _t->slotOpenPath((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 22: _t->slotAccountStateChanged(); break;
        case 23: _t->slotTrayMessageIfServerUnsupported((*reinterpret_cast< std::add_pointer_t<OCC::Account*>>(_a[1]))); break;
        case 24: _t->slotNeedToAcceptTermsOfService((*reinterpret_cast< std::add_pointer_t<OCC::AccountPtr>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<OCC::AccountState::State>>(_a[2]))); break;
        case 25: _t->slotShowShareDialog((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 26: _t->slotShowFileActivityDialog((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 27: _t->slotNewAccountWizard(); break;
        case 28: _t->slotLogin(); break;
        case 29: _t->slotLogout(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::Folder* >(); break;
            }
            break;
        case 23:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::Account* >(); break;
            }
            break;
        case 24:
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
            using _t = void (ownCloudGui::*)();
            if (_t _q_method = &ownCloudGui::setupProxy; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ownCloudGui::*)(int , const QString & );
            if (_t _q_method = &ownCloudGui::serverError; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ownCloudGui::*)();
            if (_t _q_method = &ownCloudGui::isShowingSettingsDialog; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject *OCC::ownCloudGui::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::ownCloudGui::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPEownCloudGuiENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OCC::ownCloudGui::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 30)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 30;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 30)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 30;
    }
    return _id;
}

// SIGNAL 0
void OCC::ownCloudGui::setupProxy()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void OCC::ownCloudGui::serverError(int _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void OCC::ownCloudGui::isShowingSettingsDialog()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
