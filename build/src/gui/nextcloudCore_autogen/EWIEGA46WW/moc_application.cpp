/****************************************************************************
** Meta object code from reading C++ file 'application.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/gui/application.h"
#include <QtGui/qtextcursor.h>
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'application.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSOCCSCOPEApplicationENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPEApplicationENDCLASS = QtMocHelpers::stringData(
    "OCC::Application",
    "folderRemoved",
    "",
    "folderStateChanged",
    "OCC::Folder*",
    "isShowingSettingsDialog",
    "slotownCloudWizardDone",
    "slotCrash",
    "openVirtualFile",
    "filename",
    "tryTrayAgain",
    "slotParseMessage",
    "slotCheckConnection",
    "slotUseMonoIconsChanged",
    "slotCleanup",
    "slotAccountStateAdded",
    "OCC::AccountState*",
    "accountState",
    "slotAccountStateRemoved",
    "slotSystemOnlineConfigurationChanged",
    "slotGuiIsShowingSettings"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPEApplicationENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  104,    2, 0x06,    1 /* Public */,
       3,    1,  105,    2, 0x06,    2 /* Public */,
       5,    0,  108,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    1,  109,    2, 0x0a,    5 /* Public */,
       7,    0,  112,    2, 0x0a,    7 /* Public */,
       8,    1,  113,    2, 0x0a,    8 /* Public */,
      10,    0,  116,    2, 0x0a,   10 /* Public */,
      11,    2,  117,    2, 0x09,   11 /* Protected */,
      12,    0,  122,    2, 0x09,   14 /* Protected */,
      13,    1,  123,    2, 0x09,   15 /* Protected */,
      14,    0,  126,    2, 0x09,   17 /* Protected */,
      15,    1,  127,    2, 0x09,   18 /* Protected */,
      18,    1,  130,    2, 0x09,   20 /* Protected */,
      19,    0,  133,    2, 0x09,   22 /* Protected */,
      20,    0,  134,    2, 0x09,   23 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QObjectStar,    2,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::Application::staticMetaObject = { {
    QMetaObject::SuperData::link<SharedTools::QtSingleApplication::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPEApplicationENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPEApplicationENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPEApplicationENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Application, std::true_type>,
        // method 'folderRemoved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'folderStateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::Folder *, std::false_type>,
        // method 'isShowingSettingsDialog'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotownCloudWizardDone'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'slotCrash'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'openVirtualFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'tryTrayAgain'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotParseMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QObject *, std::false_type>,
        // method 'slotCheckConnection'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotUseMonoIconsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'slotCleanup'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotAccountStateAdded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::AccountState *, std::false_type>,
        // method 'slotAccountStateRemoved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::AccountState *, std::false_type>,
        // method 'slotSystemOnlineConfigurationChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotGuiIsShowingSettings'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void OCC::Application::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Application *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->folderRemoved(); break;
        case 1: _t->folderStateChanged((*reinterpret_cast< std::add_pointer_t<OCC::Folder*>>(_a[1]))); break;
        case 2: _t->isShowingSettingsDialog(); break;
        case 3: _t->slotownCloudWizardDone((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 4: _t->slotCrash(); break;
        case 5: _t->openVirtualFile((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->tryTrayAgain(); break;
        case 7: _t->slotParseMessage((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[2]))); break;
        case 8: _t->slotCheckConnection(); break;
        case 9: _t->slotUseMonoIconsChanged((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 10: _t->slotCleanup(); break;
        case 11: _t->slotAccountStateAdded((*reinterpret_cast< std::add_pointer_t<OCC::AccountState*>>(_a[1]))); break;
        case 12: _t->slotAccountStateRemoved((*reinterpret_cast< std::add_pointer_t<OCC::AccountState*>>(_a[1]))); break;
        case 13: _t->slotSystemOnlineConfigurationChanged(); break;
        case 14: _t->slotGuiIsShowingSettings(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::Folder* >(); break;
            }
            break;
        case 11:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::AccountState* >(); break;
            }
            break;
        case 12:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::AccountState* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Application::*)();
            if (_t _q_method = &Application::folderRemoved; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Application::*)(OCC::Folder * );
            if (_t _q_method = &Application::folderStateChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Application::*)();
            if (_t _q_method = &Application::isShowingSettingsDialog; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    }
}

const QMetaObject *OCC::Application::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::Application::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPEApplicationENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return SharedTools::QtSingleApplication::qt_metacast(_clname);
}

int OCC::Application::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = SharedTools::QtSingleApplication::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}

// SIGNAL 0
void OCC::Application::folderRemoved()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void OCC::Application::folderStateChanged(OCC::Folder * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void OCC::Application::isShowingSettingsDialog()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
