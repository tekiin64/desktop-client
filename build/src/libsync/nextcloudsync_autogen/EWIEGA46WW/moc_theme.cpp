/****************************************************************************
** Meta object code from reading C++ file 'theme.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/libsync/theme.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'theme.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSOCCSCOPEThemeENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPEThemeENDCLASS = QtMocHelpers::stringData(
    "OCC::Theme",
    "systrayUseMonoIconsChanged",
    "",
    "darkModeChanged",
    "overrideServerUrlChanged",
    "forceOverrideServerUrlChanged",
    "vfsEnabledChanged",
    "startLoginFlowAutomaticallyChanged",
    "setOverrideServerUrl",
    "overrideServerUrl",
    "setForceOverrideServerUrl",
    "forceOverride",
    "setVfsEnabled",
    "enabled",
    "setStartLoginFlowAutomatically",
    "startLoginFlowAuto",
    "getColorDarkness",
    "color",
    "isDarkColor",
    "branded",
    "appNameGUI",
    "appName",
    "stateOnlineImageSource",
    "stateOfflineImageSource",
    "statusOnlineImageSource",
    "statusDoNotDisturbImageSource",
    "statusAwayImageSource",
    "statusInvisibleImageSource",
    "folderDisabledIcon",
    "folderOfflineIcon",
    "applicationIcon",
    "version",
    "helpUrl",
    "conflictHelpUrl",
    "forceOverrideServerUrl",
    "isVfsEnabled",
    "startLoginFlowAutomatically",
    "wizardHeaderTitleColor",
    "wizardHeaderBackgroundColor",
    "updateCheckUrl",
    "defaultColor",
    "darkMode"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPEThemeENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      12,   14, // methods
      24,  112, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   86,    2, 0x06,   25 /* Public */,
       3,    0,   89,    2, 0x06,   27 /* Public */,
       4,    0,   90,    2, 0x06,   28 /* Public */,
       5,    0,   91,    2, 0x06,   29 /* Public */,
       6,    0,   92,    2, 0x06,   30 /* Public */,
       7,    0,   93,    2, 0x06,   31 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    1,   94,    2, 0x0a,   32 /* Public */,
      10,    1,   97,    2, 0x0a,   34 /* Public */,
      12,    1,  100,    2, 0x0a,   36 /* Public */,
      14,    1,  103,    2, 0x0a,   38 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      16,    1,  106,    2, 0x02,   40 /* Public */,
      18,    1,  109,    2, 0x02,   42 /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::Bool,   11,
    QMetaType::Void, QMetaType::Bool,   13,
    QMetaType::Void, QMetaType::Bool,   15,

 // methods: parameters
    QMetaType::Double, QMetaType::QColor,   17,
    QMetaType::Bool, QMetaType::QColor,   17,

 // properties: name, type, flags, notifyId, revision
      19, QMetaType::Bool, 0x00015401, uint(-1), 0,
      20, QMetaType::QString, 0x00015401, uint(-1), 0,
      21, QMetaType::QString, 0x00015401, uint(-1), 0,
      22, QMetaType::QUrl, 0x00015401, uint(-1), 0,
      23, QMetaType::QUrl, 0x00015401, uint(-1), 0,
      24, QMetaType::QUrl, 0x00015401, uint(-1), 0,
      25, QMetaType::QUrl, 0x00015401, uint(-1), 0,
      26, QMetaType::QUrl, 0x00015401, uint(-1), 0,
      27, QMetaType::QUrl, 0x00015401, uint(-1), 0,
      28, QMetaType::QIcon, 0x00015401, uint(-1), 0,
      29, QMetaType::QIcon, 0x00015401, uint(-1), 0,
      30, QMetaType::QIcon, 0x00015401, uint(-1), 0,
      31, QMetaType::QString, 0x00015401, uint(-1), 0,
      32, QMetaType::QString, 0x00015401, uint(-1), 0,
      33, QMetaType::QString, 0x00015401, uint(-1), 0,
       9, QMetaType::QString, 0x00015103, uint(2), 0,
      34, QMetaType::Bool, 0x00015103, uint(3), 0,
      35, QMetaType::Bool, 0x00015003, uint(4), 0,
      36, QMetaType::Bool, 0x00015103, uint(5), 0,
      37, QMetaType::QColor, 0x00015401, uint(-1), 0,
      38, QMetaType::QColor, 0x00015401, uint(-1), 0,
      39, QMetaType::QString, 0x00015401, uint(-1), 0,
      40, QMetaType::QColor, 0x00015401, uint(-1), 0,
      41, QMetaType::Bool, 0x00015001, uint(1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::Theme::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPEThemeENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPEThemeENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPEThemeENDCLASS_t,
        // property 'branded'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'appNameGUI'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'appName'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'stateOnlineImageSource'
        QtPrivate::TypeAndForceComplete<QUrl, std::true_type>,
        // property 'stateOfflineImageSource'
        QtPrivate::TypeAndForceComplete<QUrl, std::true_type>,
        // property 'statusOnlineImageSource'
        QtPrivate::TypeAndForceComplete<QUrl, std::true_type>,
        // property 'statusDoNotDisturbImageSource'
        QtPrivate::TypeAndForceComplete<QUrl, std::true_type>,
        // property 'statusAwayImageSource'
        QtPrivate::TypeAndForceComplete<QUrl, std::true_type>,
        // property 'statusInvisibleImageSource'
        QtPrivate::TypeAndForceComplete<QUrl, std::true_type>,
        // property 'folderDisabledIcon'
        QtPrivate::TypeAndForceComplete<QIcon, std::true_type>,
        // property 'folderOfflineIcon'
        QtPrivate::TypeAndForceComplete<QIcon, std::true_type>,
        // property 'applicationIcon'
        QtPrivate::TypeAndForceComplete<QIcon, std::true_type>,
        // property 'version'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'helpUrl'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'conflictHelpUrl'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'overrideServerUrl'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'forceOverrideServerUrl'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'isVfsEnabled'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'startLoginFlowAutomatically'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'wizardHeaderTitleColor'
        QtPrivate::TypeAndForceComplete<QColor, std::true_type>,
        // property 'wizardHeaderBackgroundColor'
        QtPrivate::TypeAndForceComplete<QColor, std::true_type>,
        // property 'updateCheckUrl'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'defaultColor'
        QtPrivate::TypeAndForceComplete<QColor, std::true_type>,
        // property 'darkMode'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Theme, std::true_type>,
        // method 'systrayUseMonoIconsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'darkModeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'overrideServerUrlChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'forceOverrideServerUrlChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'vfsEnabledChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'startLoginFlowAutomaticallyChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setOverrideServerUrl'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setForceOverrideServerUrl'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setVfsEnabled'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'setStartLoginFlowAutomatically'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'getColorDarkness'
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QColor &, std::false_type>,
        // method 'isDarkColor'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QColor &, std::false_type>
    >,
    nullptr
} };

void OCC::Theme::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Theme *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->systrayUseMonoIconsChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 1: _t->darkModeChanged(); break;
        case 2: _t->overrideServerUrlChanged(); break;
        case 3: _t->forceOverrideServerUrlChanged(); break;
        case 4: _t->vfsEnabledChanged(); break;
        case 5: _t->startLoginFlowAutomaticallyChanged(); break;
        case 6: _t->setOverrideServerUrl((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->setForceOverrideServerUrl((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 8: _t->setVfsEnabled((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: _t->setStartLoginFlowAutomatically((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 10: { double _r = _t->getColorDarkness((*reinterpret_cast< std::add_pointer_t<QColor>>(_a[1])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 11: { bool _r = _t->isDarkColor((*reinterpret_cast< std::add_pointer_t<QColor>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Theme::*)(bool );
            if (_t _q_method = &Theme::systrayUseMonoIconsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Theme::*)();
            if (_t _q_method = &Theme::darkModeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Theme::*)();
            if (_t _q_method = &Theme::overrideServerUrlChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Theme::*)();
            if (_t _q_method = &Theme::forceOverrideServerUrlChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Theme::*)();
            if (_t _q_method = &Theme::vfsEnabledChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Theme::*)();
            if (_t _q_method = &Theme::startLoginFlowAutomaticallyChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Theme *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isBranded(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->appNameGUI(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->appName(); break;
        case 3: *reinterpret_cast< QUrl*>(_v) = _t->stateOnlineImageSource(); break;
        case 4: *reinterpret_cast< QUrl*>(_v) = _t->stateOfflineImageSource(); break;
        case 5: *reinterpret_cast< QUrl*>(_v) = _t->statusOnlineImageSource(); break;
        case 6: *reinterpret_cast< QUrl*>(_v) = _t->statusDoNotDisturbImageSource(); break;
        case 7: *reinterpret_cast< QUrl*>(_v) = _t->statusAwayImageSource(); break;
        case 8: *reinterpret_cast< QUrl*>(_v) = _t->statusInvisibleImageSource(); break;
        case 9: *reinterpret_cast< QIcon*>(_v) = _t->folderDisabledIcon(); break;
        case 10: *reinterpret_cast< QIcon*>(_v) = _t->folderOfflineIcon(); break;
        case 11: *reinterpret_cast< QIcon*>(_v) = _t->applicationIcon(); break;
        case 12: *reinterpret_cast< QString*>(_v) = _t->version(); break;
        case 13: *reinterpret_cast< QString*>(_v) = _t->helpUrl(); break;
        case 14: *reinterpret_cast< QString*>(_v) = _t->conflictHelpUrl(); break;
        case 15: *reinterpret_cast< QString*>(_v) = _t->overrideServerUrl(); break;
        case 16: *reinterpret_cast< bool*>(_v) = _t->forceOverrideServerUrl(); break;
        case 17: *reinterpret_cast< bool*>(_v) = _t->isVfsEnabled(); break;
        case 18: *reinterpret_cast< bool*>(_v) = _t->startLoginFlowAutomatically(); break;
        case 19: *reinterpret_cast< QColor*>(_v) = _t->wizardHeaderTitleColor(); break;
        case 20: *reinterpret_cast< QColor*>(_v) = _t->wizardHeaderBackgroundColor(); break;
        case 21: *reinterpret_cast< QString*>(_v) = _t->updateCheckUrl(); break;
        case 22: *reinterpret_cast< QColor*>(_v) = _t->defaultColor(); break;
        case 23: *reinterpret_cast< bool*>(_v) = _t->darkMode(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Theme *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 15: _t->setOverrideServerUrl(*reinterpret_cast< QString*>(_v)); break;
        case 16: _t->setForceOverrideServerUrl(*reinterpret_cast< bool*>(_v)); break;
        case 17: _t->setVfsEnabled(*reinterpret_cast< bool*>(_v)); break;
        case 18: _t->setStartLoginFlowAutomatically(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *OCC::Theme::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::Theme::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPEThemeENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OCC::Theme::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 12)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 12;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 12)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 12;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    }
    return _id;
}

// SIGNAL 0
void OCC::Theme::systrayUseMonoIconsChanged(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OCC::Theme::darkModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void OCC::Theme::overrideServerUrlChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void OCC::Theme::forceOverrideServerUrlChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void OCC::Theme::vfsEnabledChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void OCC::Theme::startLoginFlowAutomaticallyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
