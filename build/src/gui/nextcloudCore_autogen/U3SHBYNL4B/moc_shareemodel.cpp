/****************************************************************************
** Meta object code from reading C++ file 'shareemodel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/gui/filedetails/shareemodel.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'shareemodel.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSOCCSCOPEShareeModelENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPEShareeModelENDCLASS = QtMocHelpers::stringData(
    "OCC::ShareeModel",
    "accountStateChanged",
    "",
    "shareItemIsFolderChanged",
    "searchStringChanged",
    "fetchOngoingChanged",
    "lookupModeChanged",
    "shareeBlocklistChanged",
    "shareesReady",
    "displayErrorMessage",
    "code",
    "message",
    "setAccountState",
    "OCC::AccountState*",
    "accountState",
    "setShareItemIsFolder",
    "shareItemIsFolder",
    "setSearchString",
    "searchString",
    "setLookupMode",
    "OCC::ShareeModel::LookupMode",
    "lookupMode",
    "setShareeBlocklist",
    "QVariantList",
    "shareeBlocklist",
    "searchGlobally",
    "fetch",
    "shareesFetched",
    "reply",
    "insertSearchGloballyItem",
    "QList<OCC::ShareePtr>",
    "newShareesFetched",
    "filterSharees",
    "slotDarkModeChanged",
    "AccountState*",
    "fetchOngoing",
    "LookupMode",
    "LocalSearch",
    "GlobalSearch",
    "Roles",
    "ShareeRole",
    "AutoCompleterStringMatchRole",
    "TypeRole",
    "IconRole"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPEShareeModelENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      19,   14, // methods
       6,  165, // properties
       2,  195, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  128,    2, 0x06,    9 /* Public */,
       3,    0,  129,    2, 0x06,   10 /* Public */,
       4,    0,  130,    2, 0x06,   11 /* Public */,
       5,    0,  131,    2, 0x06,   12 /* Public */,
       6,    0,  132,    2, 0x06,   13 /* Public */,
       7,    0,  133,    2, 0x06,   14 /* Public */,
       8,    0,  134,    2, 0x06,   15 /* Public */,
       9,    2,  135,    2, 0x06,   16 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      12,    1,  140,    2, 0x0a,   19 /* Public */,
      15,    1,  143,    2, 0x0a,   21 /* Public */,
      17,    1,  146,    2, 0x0a,   23 /* Public */,
      19,    1,  149,    2, 0x0a,   25 /* Public */,
      22,    1,  152,    2, 0x0a,   27 /* Public */,
      25,    0,  155,    2, 0x0a,   29 /* Public */,
      26,    0,  156,    2, 0x0a,   30 /* Public */,
      27,    1,  157,    2, 0x08,   31 /* Private */,
      29,    1,  160,    2, 0x08,   33 /* Private */,
      32,    0,  163,    2, 0x08,   35 /* Private */,
      33,    0,  164,    2, 0x08,   36 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   10,   11,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, QMetaType::Bool,   16,
    QMetaType::Void, QMetaType::QString,   18,
    QMetaType::Void, 0x80000000 | 20,   21,
    QMetaType::Void, 0x80000000 | 23,   24,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QJsonDocument,   28,
    QMetaType::Void, 0x80000000 | 30,   31,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags, notifyId, revision
      14, 0x80000000 | 34, 0x0001510b, uint(0), 0,
      16, QMetaType::Bool, 0x00015103, uint(1), 0,
      18, QMetaType::QString, 0x00015103, uint(2), 0,
      35, QMetaType::Bool, 0x00015001, uint(3), 0,
      21, 0x80000000 | 36, 0x0001510b, uint(4), 0,
      24, 0x80000000 | 23, 0x0001510b, uint(5), 0,

 // enums: name, alias, flags, count, data
      36,   36, 0x2,    2,  205,
      39,   39, 0x0,    4,  209,

 // enum data: key, value
      37, uint(OCC::ShareeModel::LookupMode::LocalSearch),
      38, uint(OCC::ShareeModel::LookupMode::GlobalSearch),
      40, uint(OCC::ShareeModel::ShareeRole),
      41, uint(OCC::ShareeModel::AutoCompleterStringMatchRole),
      42, uint(OCC::ShareeModel::TypeRole),
      43, uint(OCC::ShareeModel::IconRole),

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::ShareeModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPEShareeModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPEShareeModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPEShareeModelENDCLASS_t,
        // property 'accountState'
        QtPrivate::TypeAndForceComplete<AccountState*, std::true_type>,
        // property 'shareItemIsFolder'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'searchString'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'fetchOngoing'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'lookupMode'
        QtPrivate::TypeAndForceComplete<LookupMode, std::true_type>,
        // property 'shareeBlocklist'
        QtPrivate::TypeAndForceComplete<QVariantList, std::true_type>,
        // enum 'LookupMode'
        QtPrivate::TypeAndForceComplete<ShareeModel::LookupMode, std::true_type>,
        // enum 'Roles'
        QtPrivate::TypeAndForceComplete<ShareeModel::Roles, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ShareeModel, std::true_type>,
        // method 'accountStateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'shareItemIsFolderChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'searchStringChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'fetchOngoingChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'lookupModeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'shareeBlocklistChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'shareesReady'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'displayErrorMessage'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setAccountState'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::AccountState *, std::false_type>,
        // method 'setShareItemIsFolder'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'setSearchString'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setLookupMode'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::ShareeModel::LookupMode, std::false_type>,
        // method 'setShareeBlocklist'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariantList, std::false_type>,
        // method 'searchGlobally'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'fetch'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'shareesFetched'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QJsonDocument &, std::false_type>,
        // method 'insertSearchGloballyItem'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVector<OCC::ShareePtr> &, std::false_type>,
        // method 'filterSharees'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotDarkModeChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void OCC::ShareeModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ShareeModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->accountStateChanged(); break;
        case 1: _t->shareItemIsFolderChanged(); break;
        case 2: _t->searchStringChanged(); break;
        case 3: _t->fetchOngoingChanged(); break;
        case 4: _t->lookupModeChanged(); break;
        case 5: _t->shareeBlocklistChanged(); break;
        case 6: _t->shareesReady(); break;
        case 7: _t->displayErrorMessage((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 8: _t->setAccountState((*reinterpret_cast< std::add_pointer_t<OCC::AccountState*>>(_a[1]))); break;
        case 9: _t->setShareItemIsFolder((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 10: _t->setSearchString((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 11: _t->setLookupMode((*reinterpret_cast< std::add_pointer_t<OCC::ShareeModel::LookupMode>>(_a[1]))); break;
        case 12: _t->setShareeBlocklist((*reinterpret_cast< std::add_pointer_t<QVariantList>>(_a[1]))); break;
        case 13: _t->searchGlobally(); break;
        case 14: _t->fetch(); break;
        case 15: _t->shareesFetched((*reinterpret_cast< std::add_pointer_t<QJsonDocument>>(_a[1]))); break;
        case 16: _t->insertSearchGloballyItem((*reinterpret_cast< std::add_pointer_t<QList<OCC::ShareePtr>>>(_a[1]))); break;
        case 17: _t->filterSharees(); break;
        case 18: _t->slotDarkModeChanged(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::AccountState* >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<OCC::ShareePtr> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ShareeModel::*)();
            if (_t _q_method = &ShareeModel::accountStateChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ShareeModel::*)();
            if (_t _q_method = &ShareeModel::shareItemIsFolderChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ShareeModel::*)();
            if (_t _q_method = &ShareeModel::searchStringChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ShareeModel::*)();
            if (_t _q_method = &ShareeModel::fetchOngoingChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ShareeModel::*)();
            if (_t _q_method = &ShareeModel::lookupModeChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (ShareeModel::*)();
            if (_t _q_method = &ShareeModel::shareeBlocklistChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (ShareeModel::*)();
            if (_t _q_method = &ShareeModel::shareesReady; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (ShareeModel::*)(const int , const QString & );
            if (_t _q_method = &ShareeModel::displayErrorMessage; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
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
        auto *_t = static_cast<ShareeModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< AccountState**>(_v) = _t->accountState(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->shareItemIsFolder(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->searchString(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->fetchOngoing(); break;
        case 4: *reinterpret_cast< LookupMode*>(_v) = _t->lookupMode(); break;
        case 5: *reinterpret_cast< QVariantList*>(_v) = _t->shareeBlocklist(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ShareeModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setAccountState(*reinterpret_cast< AccountState**>(_v)); break;
        case 1: _t->setShareItemIsFolder(*reinterpret_cast< bool*>(_v)); break;
        case 2: _t->setSearchString(*reinterpret_cast< QString*>(_v)); break;
        case 4: _t->setLookupMode(*reinterpret_cast< LookupMode*>(_v)); break;
        case 5: _t->setShareeBlocklist(*reinterpret_cast< QVariantList*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *OCC::ShareeModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::ShareeModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPEShareeModelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int OCC::ShareeModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 19)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 19;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void OCC::ShareeModel::accountStateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void OCC::ShareeModel::shareItemIsFolderChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void OCC::ShareeModel::searchStringChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void OCC::ShareeModel::fetchOngoingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void OCC::ShareeModel::lookupModeChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void OCC::ShareeModel::shareeBlocklistChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void OCC::ShareeModel::shareesReady()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void OCC::ShareeModel::displayErrorMessage(const int _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
