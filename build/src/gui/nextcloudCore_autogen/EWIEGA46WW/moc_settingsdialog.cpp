/****************************************************************************
** Meta object code from reading C++ file 'settingsdialog.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/gui/settingsdialog.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'settingsdialog.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSOCCSCOPESettingsDialogENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPESettingsDialogENDCLASS = QtMocHelpers::stringData(
    "OCC::SettingsDialog",
    "styleChanged",
    "",
    "onActivate",
    "currentPageChanged",
    "showFirstPage",
    "showIssuesList",
    "OCC::AccountState*",
    "account",
    "slotSwitchPage",
    "QAction*",
    "action",
    "slotAccountAvatarChanged",
    "slotAccountDisplayNameChanged",
    "accountAdded",
    "accountRemoved",
    "currentPage",
    "QWidget*"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPESettingsDialogENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       1,   92, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   74,    2, 0x06,    2 /* Public */,
       3,    0,   75,    2, 0x06,    3 /* Public */,
       4,    0,   76,    2, 0x06,    4 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,   77,    2, 0x0a,    5 /* Public */,
       6,    1,   78,    2, 0x0a,    6 /* Public */,
       9,    1,   81,    2, 0x0a,    8 /* Public */,
      12,    0,   84,    2, 0x0a,   10 /* Public */,
      13,    0,   85,    2, 0x0a,   11 /* Public */,
      14,    1,   86,    2, 0x08,   12 /* Private */,
      15,    1,   89,    2, 0x08,   14 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    8,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void, 0x80000000 | 7,    2,

 // properties: name, type, flags, notifyId, revision
      16, 0x80000000 | 17, 0x00015009, uint(2), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::SettingsDialog::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPESettingsDialogENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPESettingsDialogENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPESettingsDialogENDCLASS_t,
        // property 'currentPage'
        QtPrivate::TypeAndForceComplete<QWidget*, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SettingsDialog, std::true_type>,
        // method 'styleChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onActivate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'currentPageChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showFirstPage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'showIssuesList'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::AccountState *, std::false_type>,
        // method 'slotSwitchPage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QAction *, std::false_type>,
        // method 'slotAccountAvatarChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotAccountDisplayNameChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'accountAdded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::AccountState *, std::false_type>,
        // method 'accountRemoved'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::AccountState *, std::false_type>
    >,
    nullptr
} };

void OCC::SettingsDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SettingsDialog *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->styleChanged(); break;
        case 1: _t->onActivate(); break;
        case 2: _t->currentPageChanged(); break;
        case 3: _t->showFirstPage(); break;
        case 4: _t->showIssuesList((*reinterpret_cast< std::add_pointer_t<OCC::AccountState*>>(_a[1]))); break;
        case 5: _t->slotSwitchPage((*reinterpret_cast< std::add_pointer_t<QAction*>>(_a[1]))); break;
        case 6: _t->slotAccountAvatarChanged(); break;
        case 7: _t->slotAccountDisplayNameChanged(); break;
        case 8: _t->accountAdded((*reinterpret_cast< std::add_pointer_t<OCC::AccountState*>>(_a[1]))); break;
        case 9: _t->accountRemoved((*reinterpret_cast< std::add_pointer_t<OCC::AccountState*>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::AccountState* >(); break;
            }
            break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QAction* >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::AccountState* >(); break;
            }
            break;
        case 9:
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
            using _t = void (SettingsDialog::*)();
            if (_t _q_method = &SettingsDialog::styleChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SettingsDialog::*)();
            if (_t _q_method = &SettingsDialog::onActivate; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SettingsDialog::*)();
            if (_t _q_method = &SettingsDialog::currentPageChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<SettingsDialog *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QWidget**>(_v) = _t->currentPage(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *OCC::SettingsDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::SettingsDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPESettingsDialogENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int OCC::SettingsDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    }
    return _id;
}

// SIGNAL 0
void OCC::SettingsDialog::styleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void OCC::SettingsDialog::onActivate()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void OCC::SettingsDialog::currentPageChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
