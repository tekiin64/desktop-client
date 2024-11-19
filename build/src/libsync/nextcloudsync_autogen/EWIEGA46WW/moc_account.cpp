/****************************************************************************
** Meta object code from reading C++ file 'account.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/libsync/account.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'account.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSOCCSCOPEAccountENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPEAccountENDCLASS = QtMocHelpers::stringData(
    "OCC::Account",
    "propagatorNetworkActivity",
    "",
    "invalidCredentials",
    "credentialsFetched",
    "OCC::AbstractCredentials*",
    "credentials",
    "credentialsAsked",
    "proxyAuthenticationRequired",
    "QNetworkProxy",
    "QAuthenticator*",
    "wantsAccountSaved",
    "OCC::Account*",
    "acc",
    "serverVersionChanged",
    "account",
    "newVersion",
    "oldVersion",
    "accountChangedAvatar",
    "accountChangedDisplayName",
    "prettyNameChanged",
    "askUserForMnemonicChanged",
    "appPasswordRetrieved",
    "pushNotificationsReady",
    "pushNotificationsDisabled",
    "userStatusChanged",
    "serverUserStatusChanged",
    "capabilitiesChanged",
    "lockFileSuccess",
    "lockFileError",
    "networkProxySettingChanged",
    "proxyTypeChanged",
    "proxyHostNameChanged",
    "proxyPortChanged",
    "proxyNeedsAuthChanged",
    "proxyUserChanged",
    "proxyPasswordChanged",
    "uploadLimitSettingChanged",
    "downloadLimitSettingChanged",
    "uploadLimitChanged",
    "downloadLimitChanged",
    "termsOfServiceNeedToBeChecked",
    "clearQNAMCache",
    "slotHandleSslErrors",
    "QNetworkReply*",
    "QList<QSslError>",
    "setAskUserForMnemonic",
    "ask",
    "slotCredentialsFetched",
    "slotCredentialsAsked",
    "slotDirectEditingRecieved",
    "json",
    "removeLockStatusChangeInprogress",
    "serverRelativePath",
    "SyncFileItem::LockStatus",
    "lockStatus",
    "id",
    "davUser",
    "displayName",
    "prettyName",
    "url",
    "e2eEncryptionKeysGenerationAllowed",
    "askUserForMnemonic",
    "networkProxySetting",
    "AccountNetworkProxySetting",
    "proxyType",
    "QNetworkProxy::ProxyType",
    "proxyHostName",
    "proxyPort",
    "proxyNeedsAuth",
    "proxyUser",
    "proxyPassword",
    "uploadLimitSetting",
    "AccountNetworkTransferLimitSetting",
    "downloadLimitSetting",
    "uploadLimit",
    "downloadLimit",
    "GlobalProxy",
    "AccountSpecificProxy",
    "GlobalLimit",
    "AutoLimit",
    "NoLimit",
    "ManualLimit"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPEAccountENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      38,   14, // methods
      18,  316, // properties
       2,  406, // enums/sets
       0,    0, // constructors
       0,       // flags
      31,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  242,    2, 0x06,   21 /* Public */,
       3,    0,  243,    2, 0x06,   22 /* Public */,
       4,    1,  244,    2, 0x06,   23 /* Public */,
       7,    1,  247,    2, 0x06,   25 /* Public */,
       8,    2,  250,    2, 0x06,   27 /* Public */,
      11,    1,  255,    2, 0x06,   30 /* Public */,
      14,    3,  258,    2, 0x06,   32 /* Public */,
      18,    0,  265,    2, 0x06,   36 /* Public */,
      19,    0,  266,    2, 0x06,   37 /* Public */,
      20,    0,  267,    2, 0x06,   38 /* Public */,
      21,    0,  268,    2, 0x06,   39 /* Public */,
      22,    1,  269,    2, 0x06,   40 /* Public */,
      23,    1,  272,    2, 0x06,   42 /* Public */,
      24,    1,  275,    2, 0x06,   44 /* Public */,
      25,    0,  278,    2, 0x06,   46 /* Public */,
      26,    0,  279,    2, 0x06,   47 /* Public */,
      27,    0,  280,    2, 0x06,   48 /* Public */,
      28,    0,  281,    2, 0x06,   49 /* Public */,
      29,    1,  282,    2, 0x06,   50 /* Public */,
      30,    0,  285,    2, 0x06,   52 /* Public */,
      31,    0,  286,    2, 0x06,   53 /* Public */,
      32,    0,  287,    2, 0x06,   54 /* Public */,
      33,    0,  288,    2, 0x06,   55 /* Public */,
      34,    0,  289,    2, 0x06,   56 /* Public */,
      35,    0,  290,    2, 0x06,   57 /* Public */,
      36,    0,  291,    2, 0x06,   58 /* Public */,
      37,    0,  292,    2, 0x06,   59 /* Public */,
      38,    0,  293,    2, 0x06,   60 /* Public */,
      39,    0,  294,    2, 0x06,   61 /* Public */,
      40,    0,  295,    2, 0x06,   62 /* Public */,
      41,    0,  296,    2, 0x06,   63 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      42,    0,  297,    2, 0x0a,   64 /* Public */,
      43,    2,  298,    2, 0x0a,   65 /* Public */,
      46,    1,  303,    2, 0x0a,   68 /* Public */,
      48,    0,  306,    2, 0x09,   70 /* Protected */,
      49,    0,  307,    2, 0x09,   71 /* Protected */,
      50,    1,  308,    2, 0x09,   72 /* Protected */,
      52,    2,  311,    2, 0x08,   74 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 9, 0x80000000 | 10,    2,    2,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 12, QMetaType::QString, QMetaType::QString,   15,   16,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 12,   15,
    QMetaType::Void, 0x80000000 | 12,   15,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
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

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 44, 0x80000000 | 45,    2,    2,
    QMetaType::Void, QMetaType::Bool,   47,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QJsonDocument,   51,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 54,   53,   55,

 // properties: name, type, flags, notifyId, revision
      56, QMetaType::QString, 0x00015003, uint(-1), 0,
      57, QMetaType::QString, 0x00015003, uint(-1), 0,
      58, QMetaType::QString, 0x00015003, uint(-1), 0,
      59, QMetaType::QString, 0x00015001, uint(9), 0,
      60, QMetaType::QUrl, 0x00015003, uint(-1), 0,
      61, QMetaType::Bool, 0x00015003, uint(-1), 0,
      62, QMetaType::Bool, 0x00015103, uint(10), 0,
      63, 0x80000000 | 64, 0x0001510b, uint(19), 0,
      65, 0x80000000 | 66, 0x0001510b, uint(20), 0,
      67, QMetaType::QString, 0x00015103, uint(21), 0,
      68, QMetaType::Int, 0x00015103, uint(22), 0,
      69, QMetaType::Bool, 0x00015103, uint(23), 0,
      70, QMetaType::QString, 0x00015103, uint(24), 0,
      71, QMetaType::QString, 0x00015103, uint(25), 0,
      72, 0x80000000 | 73, 0x0001510b, uint(26), 0,
      74, 0x80000000 | 73, 0x0001510b, uint(27), 0,
      75, QMetaType::UInt, 0x00015103, uint(28), 0,
      76, QMetaType::UInt, 0x00015103, uint(29), 0,

 // enums: name, alias, flags, count, data
      64,   64, 0x2,    2,  416,
      73,   73, 0x2,    4,  420,

 // enum data: key, value
      77, uint(OCC::Account::AccountNetworkProxySetting::GlobalProxy),
      78, uint(OCC::Account::AccountNetworkProxySetting::AccountSpecificProxy),
      79, uint(OCC::Account::AccountNetworkTransferLimitSetting::GlobalLimit),
      80, uint(OCC::Account::AccountNetworkTransferLimitSetting::AutoLimit),
      81, uint(OCC::Account::AccountNetworkTransferLimitSetting::NoLimit),
      82, uint(OCC::Account::AccountNetworkTransferLimitSetting::ManualLimit),

       0        // eod
};

Q_CONSTINIT static const QMetaObject::SuperData qt_meta_extradata_CLASSOCCSCOPEAccountENDCLASS[] = {
    QMetaObject::SuperData::link<QNetworkProxy::staticMetaObject>(),
    nullptr
};

Q_CONSTINIT const QMetaObject OCC::Account::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPEAccountENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPEAccountENDCLASS,
    qt_static_metacall,
    qt_meta_extradata_CLASSOCCSCOPEAccountENDCLASS,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPEAccountENDCLASS_t,
        // property 'id'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'davUser'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'displayName'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'prettyName'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'url'
        QtPrivate::TypeAndForceComplete<QUrl, std::true_type>,
        // property 'e2eEncryptionKeysGenerationAllowed'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'askUserForMnemonic'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'networkProxySetting'
        QtPrivate::TypeAndForceComplete<AccountNetworkProxySetting, std::true_type>,
        // property 'proxyType'
        QtPrivate::TypeAndForceComplete<QNetworkProxy::ProxyType, std::true_type>,
        // property 'proxyHostName'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'proxyPort'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'proxyNeedsAuth'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'proxyUser'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'proxyPassword'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'uploadLimitSetting'
        QtPrivate::TypeAndForceComplete<AccountNetworkTransferLimitSetting, std::true_type>,
        // property 'downloadLimitSetting'
        QtPrivate::TypeAndForceComplete<AccountNetworkTransferLimitSetting, std::true_type>,
        // property 'uploadLimit'
        QtPrivate::TypeAndForceComplete<uint, std::true_type>,
        // property 'downloadLimit'
        QtPrivate::TypeAndForceComplete<uint, std::true_type>,
        // enum 'AccountNetworkProxySetting'
        QtPrivate::TypeAndForceComplete<Account::AccountNetworkProxySetting, std::true_type>,
        // enum 'AccountNetworkTransferLimitSetting'
        QtPrivate::TypeAndForceComplete<Account::AccountNetworkTransferLimitSetting, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Account, std::true_type>,
        // method 'propagatorNetworkActivity'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'invalidCredentials'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'credentialsFetched'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::AbstractCredentials *, std::false_type>,
        // method 'credentialsAsked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::AbstractCredentials *, std::false_type>,
        // method 'proxyAuthenticationRequired'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QNetworkProxy &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAuthenticator *, std::false_type>,
        // method 'wantsAccountSaved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::Account *, std::false_type>,
        // method 'serverVersionChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::Account *, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'accountChangedAvatar'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'accountChangedDisplayName'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'prettyNameChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'askUserForMnemonicChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'appPasswordRetrieved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QString, std::false_type>,
        // method 'pushNotificationsReady'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::Account *, std::false_type>,
        // method 'pushNotificationsDisabled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::Account *, std::false_type>,
        // method 'userStatusChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'serverUserStatusChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'capabilitiesChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'lockFileSuccess'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'lockFileError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'networkProxySettingChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'proxyTypeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'proxyHostNameChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'proxyPortChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'proxyNeedsAuthChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'proxyUserChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'proxyPasswordChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'uploadLimitSettingChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'downloadLimitSettingChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'uploadLimitChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'downloadLimitChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'termsOfServiceNeedToBeChecked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'clearQNAMCache'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotHandleSslErrors'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>,
        QtPrivate::TypeAndForceComplete<QList<QSslError>, std::false_type>,
        // method 'setAskUserForMnemonic'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'slotCredentialsFetched'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotCredentialsAsked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotDirectEditingRecieved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QJsonDocument &, std::false_type>,
        // method 'removeLockStatusChangeInprogress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const SyncFileItem::LockStatus, std::false_type>
    >,
    nullptr
} };

void OCC::Account::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Account *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->propagatorNetworkActivity(); break;
        case 1: _t->invalidCredentials(); break;
        case 2: _t->credentialsFetched((*reinterpret_cast< std::add_pointer_t<OCC::AbstractCredentials*>>(_a[1]))); break;
        case 3: _t->credentialsAsked((*reinterpret_cast< std::add_pointer_t<OCC::AbstractCredentials*>>(_a[1]))); break;
        case 4: _t->proxyAuthenticationRequired((*reinterpret_cast< std::add_pointer_t<QNetworkProxy>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QAuthenticator*>>(_a[2]))); break;
        case 5: _t->wantsAccountSaved((*reinterpret_cast< std::add_pointer_t<OCC::Account*>>(_a[1]))); break;
        case 6: _t->serverVersionChanged((*reinterpret_cast< std::add_pointer_t<OCC::Account*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[3]))); break;
        case 7: _t->accountChangedAvatar(); break;
        case 8: _t->accountChangedDisplayName(); break;
        case 9: _t->prettyNameChanged(); break;
        case 10: _t->askUserForMnemonicChanged(); break;
        case 11: _t->appPasswordRetrieved((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 12: _t->pushNotificationsReady((*reinterpret_cast< std::add_pointer_t<OCC::Account*>>(_a[1]))); break;
        case 13: _t->pushNotificationsDisabled((*reinterpret_cast< std::add_pointer_t<OCC::Account*>>(_a[1]))); break;
        case 14: _t->userStatusChanged(); break;
        case 15: _t->serverUserStatusChanged(); break;
        case 16: _t->capabilitiesChanged(); break;
        case 17: _t->lockFileSuccess(); break;
        case 18: _t->lockFileError((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 19: _t->networkProxySettingChanged(); break;
        case 20: _t->proxyTypeChanged(); break;
        case 21: _t->proxyHostNameChanged(); break;
        case 22: _t->proxyPortChanged(); break;
        case 23: _t->proxyNeedsAuthChanged(); break;
        case 24: _t->proxyUserChanged(); break;
        case 25: _t->proxyPasswordChanged(); break;
        case 26: _t->uploadLimitSettingChanged(); break;
        case 27: _t->downloadLimitSettingChanged(); break;
        case 28: _t->uploadLimitChanged(); break;
        case 29: _t->downloadLimitChanged(); break;
        case 30: _t->termsOfServiceNeedToBeChecked(); break;
        case 31: _t->clearQNAMCache(); break;
        case 32: _t->slotHandleSslErrors((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QList<QSslError>>>(_a[2]))); break;
        case 33: _t->setAskUserForMnemonic((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 34: _t->slotCredentialsFetched(); break;
        case 35: _t->slotCredentialsAsked(); break;
        case 36: _t->slotDirectEditingRecieved((*reinterpret_cast< std::add_pointer_t<QJsonDocument>>(_a[1]))); break;
        case 37: _t->removeLockStatusChangeInprogress((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<SyncFileItem::LockStatus>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkProxy >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::Account* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::Account* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::Account* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::Account* >(); break;
            }
            break;
        case 32:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<QSslError> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Account::*)();
            if (_t _q_method = &Account::propagatorNetworkActivity; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Account::*)();
            if (_t _q_method = &Account::invalidCredentials; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Account::*)(OCC::AbstractCredentials * );
            if (_t _q_method = &Account::credentialsFetched; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Account::*)(OCC::AbstractCredentials * );
            if (_t _q_method = &Account::credentialsAsked; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Account::*)(const QNetworkProxy & , QAuthenticator * );
            if (_t _q_method = &Account::proxyAuthenticationRequired; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Account::*)(OCC::Account * );
            if (_t _q_method = &Account::wantsAccountSaved; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (Account::*)(OCC::Account * , const QString & , const QString & );
            if (_t _q_method = &Account::serverVersionChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (Account::*)();
            if (_t _q_method = &Account::accountChangedAvatar; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
        {
            using _t = void (Account::*)();
            if (_t _q_method = &Account::accountChangedDisplayName; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 8;
                return;
            }
        }
        {
            using _t = void (Account::*)();
            if (_t _q_method = &Account::prettyNameChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 9;
                return;
            }
        }
        {
            using _t = void (Account::*)();
            if (_t _q_method = &Account::askUserForMnemonicChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 10;
                return;
            }
        }
        {
            using _t = void (Account::*)(QString );
            if (_t _q_method = &Account::appPasswordRetrieved; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 11;
                return;
            }
        }
        {
            using _t = void (Account::*)(OCC::Account * );
            if (_t _q_method = &Account::pushNotificationsReady; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 12;
                return;
            }
        }
        {
            using _t = void (Account::*)(OCC::Account * );
            if (_t _q_method = &Account::pushNotificationsDisabled; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 13;
                return;
            }
        }
        {
            using _t = void (Account::*)();
            if (_t _q_method = &Account::userStatusChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 14;
                return;
            }
        }
        {
            using _t = void (Account::*)();
            if (_t _q_method = &Account::serverUserStatusChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 15;
                return;
            }
        }
        {
            using _t = void (Account::*)();
            if (_t _q_method = &Account::capabilitiesChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 16;
                return;
            }
        }
        {
            using _t = void (Account::*)();
            if (_t _q_method = &Account::lockFileSuccess; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 17;
                return;
            }
        }
        {
            using _t = void (Account::*)(const QString & );
            if (_t _q_method = &Account::lockFileError; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 18;
                return;
            }
        }
        {
            using _t = void (Account::*)();
            if (_t _q_method = &Account::networkProxySettingChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 19;
                return;
            }
        }
        {
            using _t = void (Account::*)();
            if (_t _q_method = &Account::proxyTypeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 20;
                return;
            }
        }
        {
            using _t = void (Account::*)();
            if (_t _q_method = &Account::proxyHostNameChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 21;
                return;
            }
        }
        {
            using _t = void (Account::*)();
            if (_t _q_method = &Account::proxyPortChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 22;
                return;
            }
        }
        {
            using _t = void (Account::*)();
            if (_t _q_method = &Account::proxyNeedsAuthChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 23;
                return;
            }
        }
        {
            using _t = void (Account::*)();
            if (_t _q_method = &Account::proxyUserChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 24;
                return;
            }
        }
        {
            using _t = void (Account::*)();
            if (_t _q_method = &Account::proxyPasswordChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 25;
                return;
            }
        }
        {
            using _t = void (Account::*)();
            if (_t _q_method = &Account::uploadLimitSettingChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 26;
                return;
            }
        }
        {
            using _t = void (Account::*)();
            if (_t _q_method = &Account::downloadLimitSettingChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 27;
                return;
            }
        }
        {
            using _t = void (Account::*)();
            if (_t _q_method = &Account::uploadLimitChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 28;
                return;
            }
        }
        {
            using _t = void (Account::*)();
            if (_t _q_method = &Account::downloadLimitChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 29;
                return;
            }
        }
        {
            using _t = void (Account::*)();
            if (_t _q_method = &Account::termsOfServiceNeedToBeChecked; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 30;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Account *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->_id; break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->_davUser; break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->_displayName; break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->prettyName(); break;
        case 4: *reinterpret_cast< QUrl*>(_v) = _t->_url; break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->_e2eEncryptionKeysGenerationAllowed; break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->askUserForMnemonic(); break;
        case 7: *reinterpret_cast< AccountNetworkProxySetting*>(_v) = _t->networkProxySetting(); break;
        case 8: *reinterpret_cast< QNetworkProxy::ProxyType*>(_v) = _t->proxyType(); break;
        case 9: *reinterpret_cast< QString*>(_v) = _t->proxyHostName(); break;
        case 10: *reinterpret_cast< int*>(_v) = _t->proxyPort(); break;
        case 11: *reinterpret_cast< bool*>(_v) = _t->proxyNeedsAuth(); break;
        case 12: *reinterpret_cast< QString*>(_v) = _t->proxyUser(); break;
        case 13: *reinterpret_cast< QString*>(_v) = _t->proxyPassword(); break;
        case 14: *reinterpret_cast< AccountNetworkTransferLimitSetting*>(_v) = _t->uploadLimitSetting(); break;
        case 15: *reinterpret_cast< AccountNetworkTransferLimitSetting*>(_v) = _t->downloadLimitSetting(); break;
        case 16: *reinterpret_cast< uint*>(_v) = _t->uploadLimit(); break;
        case 17: *reinterpret_cast< uint*>(_v) = _t->downloadLimit(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Account *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->_id != *reinterpret_cast< QString*>(_v)) {
                _t->_id = *reinterpret_cast< QString*>(_v);
            }
            break;
        case 1:
            if (_t->_davUser != *reinterpret_cast< QString*>(_v)) {
                _t->_davUser = *reinterpret_cast< QString*>(_v);
            }
            break;
        case 2:
            if (_t->_displayName != *reinterpret_cast< QString*>(_v)) {
                _t->_displayName = *reinterpret_cast< QString*>(_v);
            }
            break;
        case 4:
            if (_t->_url != *reinterpret_cast< QUrl*>(_v)) {
                _t->_url = *reinterpret_cast< QUrl*>(_v);
            }
            break;
        case 5:
            if (_t->_e2eEncryptionKeysGenerationAllowed != *reinterpret_cast< bool*>(_v)) {
                _t->_e2eEncryptionKeysGenerationAllowed = *reinterpret_cast< bool*>(_v);
            }
            break;
        case 6: _t->setAskUserForMnemonic(*reinterpret_cast< bool*>(_v)); break;
        case 7: _t->setNetworkProxySetting(*reinterpret_cast< AccountNetworkProxySetting*>(_v)); break;
        case 8: _t->setProxyType(*reinterpret_cast< QNetworkProxy::ProxyType*>(_v)); break;
        case 9: _t->setProxyHostName(*reinterpret_cast< QString*>(_v)); break;
        case 10: _t->setProxyPort(*reinterpret_cast< int*>(_v)); break;
        case 11: _t->setProxyNeedsAuth(*reinterpret_cast< bool*>(_v)); break;
        case 12: _t->setProxyUser(*reinterpret_cast< QString*>(_v)); break;
        case 13: _t->setProxyPassword(*reinterpret_cast< QString*>(_v)); break;
        case 14: _t->setUploadLimitSetting(*reinterpret_cast< AccountNetworkTransferLimitSetting*>(_v)); break;
        case 15: _t->setDownloadLimitSetting(*reinterpret_cast< AccountNetworkTransferLimitSetting*>(_v)); break;
        case 16: _t->setUploadLimit(*reinterpret_cast< uint*>(_v)); break;
        case 17: _t->setDownloadLimit(*reinterpret_cast< uint*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *OCC::Account::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::Account::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPEAccountENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OCC::Account::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
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
        _id -= 18;
    }
    return _id;
}

// SIGNAL 0
void OCC::Account::propagatorNetworkActivity()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void OCC::Account::invalidCredentials()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void OCC::Account::credentialsFetched(OCC::AbstractCredentials * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void OCC::Account::credentialsAsked(OCC::AbstractCredentials * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void OCC::Account::proxyAuthenticationRequired(const QNetworkProxy & _t1, QAuthenticator * _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void OCC::Account::wantsAccountSaved(OCC::Account * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void OCC::Account::serverVersionChanged(OCC::Account * _t1, const QString & _t2, const QString & _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void OCC::Account::accountChangedAvatar()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}

// SIGNAL 8
void OCC::Account::accountChangedDisplayName()
{
    QMetaObject::activate(this, &staticMetaObject, 8, nullptr);
}

// SIGNAL 9
void OCC::Account::prettyNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 9, nullptr);
}

// SIGNAL 10
void OCC::Account::askUserForMnemonicChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 10, nullptr);
}

// SIGNAL 11
void OCC::Account::appPasswordRetrieved(QString _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 11, _a);
}

// SIGNAL 12
void OCC::Account::pushNotificationsReady(OCC::Account * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 12, _a);
}

// SIGNAL 13
void OCC::Account::pushNotificationsDisabled(OCC::Account * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 13, _a);
}

// SIGNAL 14
void OCC::Account::userStatusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 14, nullptr);
}

// SIGNAL 15
void OCC::Account::serverUserStatusChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 15, nullptr);
}

// SIGNAL 16
void OCC::Account::capabilitiesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 16, nullptr);
}

// SIGNAL 17
void OCC::Account::lockFileSuccess()
{
    QMetaObject::activate(this, &staticMetaObject, 17, nullptr);
}

// SIGNAL 18
void OCC::Account::lockFileError(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 18, _a);
}

// SIGNAL 19
void OCC::Account::networkProxySettingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 19, nullptr);
}

// SIGNAL 20
void OCC::Account::proxyTypeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 20, nullptr);
}

// SIGNAL 21
void OCC::Account::proxyHostNameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 21, nullptr);
}

// SIGNAL 22
void OCC::Account::proxyPortChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 22, nullptr);
}

// SIGNAL 23
void OCC::Account::proxyNeedsAuthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 23, nullptr);
}

// SIGNAL 24
void OCC::Account::proxyUserChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 24, nullptr);
}

// SIGNAL 25
void OCC::Account::proxyPasswordChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 25, nullptr);
}

// SIGNAL 26
void OCC::Account::uploadLimitSettingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 26, nullptr);
}

// SIGNAL 27
void OCC::Account::downloadLimitSettingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 27, nullptr);
}

// SIGNAL 28
void OCC::Account::uploadLimitChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 28, nullptr);
}

// SIGNAL 29
void OCC::Account::downloadLimitChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 29, nullptr);
}

// SIGNAL 30
void OCC::Account::termsOfServiceNeedToBeChecked()
{
    QMetaObject::activate(this, &staticMetaObject, 30, nullptr);
}
QT_WARNING_POP
