/****************************************************************************
** Meta object code from reading C++ file 'owncloudsetupwizard.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/gui/owncloudsetupwizard.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'owncloudsetupwizard.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSOCCSCOPEOwncloudSetupWizardENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPEOwncloudSetupWizardENDCLASS = QtMocHelpers::stringData(
    "OCC::OwncloudSetupWizard",
    "ownCloudWizardDone",
    "",
    "slotCheckServer",
    "slotSystemProxyLookupDone",
    "QNetworkProxy",
    "proxy",
    "slotFindServer",
    "slotFindServerBehindRedirect",
    "slotFoundServer",
    "slotNoServerFound",
    "QNetworkReply*",
    "reply",
    "slotNoServerFoundTimeout",
    "url",
    "slotDetermineAuthType",
    "slotConnectToOCUrl",
    "slotAuthError",
    "slotCreateLocalAndRemoteFolders",
    "slotRemoteFolderExists",
    "slotCreateRemoteFolderFinished",
    "slotAssistantFinished",
    "slotSkipFolderConfiguration"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPEOwncloudSetupWizardENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  110,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       3,    1,  113,    2, 0x08,    3 /* Private */,
       4,    1,  116,    2, 0x08,    5 /* Private */,
       7,    0,  119,    2, 0x08,    7 /* Private */,
       8,    0,  120,    2, 0x08,    8 /* Private */,
       9,    2,  121,    2, 0x08,    9 /* Private */,
      10,    1,  126,    2, 0x08,   12 /* Private */,
      13,    1,  129,    2, 0x08,   14 /* Private */,
      15,    0,  132,    2, 0x08,   16 /* Private */,
      16,    1,  133,    2, 0x08,   17 /* Private */,
      17,    0,  136,    2, 0x08,   19 /* Private */,
      18,    2,  137,    2, 0x08,   20 /* Private */,
      19,    1,  142,    2, 0x08,   23 /* Private */,
      20,    1,  145,    2, 0x08,   25 /* Private */,
      21,    1,  148,    2, 0x08,   27 /* Private */,
      22,    0,  151,    2, 0x08,   29 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QUrl, QMetaType::QJsonObject,    2,    2,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, QMetaType::QUrl,   14,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString,    2,    2,
    QMetaType::Void, 0x80000000 | 11,    2,
    QMetaType::Void, 0x80000000 | 11,   12,
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::OwncloudSetupWizard::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPEOwncloudSetupWizardENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPEOwncloudSetupWizardENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPEOwncloudSetupWizardENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<OwncloudSetupWizard, std::true_type>,
        // method 'ownCloudWizardDone'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'slotCheckServer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'slotSystemProxyLookupDone'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QNetworkProxy &, std::false_type>,
        // method 'slotFindServer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotFindServerBehindRedirect'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotFoundServer'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QJsonObject &, std::false_type>,
        // method 'slotNoServerFound'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>,
        // method 'slotNoServerFoundTimeout'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>,
        // method 'slotDetermineAuthType'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotConnectToOCUrl'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'slotAuthError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotCreateLocalAndRemoteFolders'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'slotRemoteFolderExists'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>,
        // method 'slotCreateRemoteFolderFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>,
        // method 'slotAssistantFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'slotSkipFolderConfiguration'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void OCC::OwncloudSetupWizard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<OwncloudSetupWizard *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->ownCloudWizardDone((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->slotCheckServer((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 2: _t->slotSystemProxyLookupDone((*reinterpret_cast< std::add_pointer_t<QNetworkProxy>>(_a[1]))); break;
        case 3: _t->slotFindServer(); break;
        case 4: _t->slotFindServerBehindRedirect(); break;
        case 5: _t->slotFoundServer((*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QJsonObject>>(_a[2]))); break;
        case 6: _t->slotNoServerFound((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1]))); break;
        case 7: _t->slotNoServerFoundTimeout((*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[1]))); break;
        case 8: _t->slotDetermineAuthType(); break;
        case 9: _t->slotConnectToOCUrl((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 10: _t->slotAuthError(); break;
        case 11: _t->slotCreateLocalAndRemoteFolders((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 12: _t->slotRemoteFolderExists((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1]))); break;
        case 13: _t->slotCreateRemoteFolderFinished((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1]))); break;
        case 14: _t->slotAssistantFinished((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 15: _t->slotSkipFolderConfiguration(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkReply* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkReply* >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkReply* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (OwncloudSetupWizard::*)(int );
            if (_t _q_method = &OwncloudSetupWizard::ownCloudWizardDone; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject *OCC::OwncloudSetupWizard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::OwncloudSetupWizard::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPEOwncloudSetupWizardENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OCC::OwncloudSetupWizard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}

// SIGNAL 0
void OCC::OwncloudSetupWizard::ownCloudWizardDone(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
