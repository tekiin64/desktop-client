/****************************************************************************
** Meta object code from reading C++ file 'syncconflictsmodel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/gui/syncconflictsmodel.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'syncconflictsmodel.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSOCCSCOPESyncConflictsModelENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPESyncConflictsModelENDCLASS = QtMocHelpers::stringData(
    "OCC::SyncConflictsModel",
    "conflictActivitiesChanged",
    "",
    "allExistingsSelectedChanged",
    "allConflictingSelectedChanged",
    "setConflictActivities",
    "OCC::ActivityList",
    "conflicts",
    "selectAllExisting",
    "selected",
    "selectAllConflicting",
    "applySolution",
    "conflictActivities",
    "allExistingsSelected",
    "allConflictingSelected",
    "SyncConflictRoles",
    "ExistingFileName",
    "ExistingSize",
    "ConflictSize",
    "ExistingDate",
    "ConflictDate",
    "ExistingSelected",
    "ConflictSelected",
    "ExistingPreviewUrl",
    "ConflictPreviewUrl"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPESyncConflictsModelENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       3,   69, // properties
       1,   84, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x06,    5 /* Public */,
       3,    0,   57,    2, 0x06,    6 /* Public */,
       4,    0,   58,    2, 0x06,    7 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    1,   59,    2, 0x0a,    8 /* Public */,
       8,    1,   62,    2, 0x0a,   10 /* Public */,
      10,    1,   65,    2, 0x0a,   12 /* Public */,
      11,    0,   68,    2, 0x0a,   14 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    7,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,

 // properties: name, type, flags, notifyId, revision
      12, 0x80000000 | 6, 0x0001510b, uint(0), 0,
      13, QMetaType::Bool, 0x00015001, uint(1), 0,
      14, QMetaType::Bool, 0x00015001, uint(2), 0,

 // enums: name, alias, flags, count, data
      15,   15, 0x2,    9,   89,

 // enum data: key, value
      16, uint(OCC::SyncConflictsModel::SyncConflictRoles::ExistingFileName),
      17, uint(OCC::SyncConflictsModel::SyncConflictRoles::ExistingSize),
      18, uint(OCC::SyncConflictsModel::SyncConflictRoles::ConflictSize),
      19, uint(OCC::SyncConflictsModel::SyncConflictRoles::ExistingDate),
      20, uint(OCC::SyncConflictsModel::SyncConflictRoles::ConflictDate),
      21, uint(OCC::SyncConflictsModel::SyncConflictRoles::ExistingSelected),
      22, uint(OCC::SyncConflictsModel::SyncConflictRoles::ConflictSelected),
      23, uint(OCC::SyncConflictsModel::SyncConflictRoles::ExistingPreviewUrl),
      24, uint(OCC::SyncConflictsModel::SyncConflictRoles::ConflictPreviewUrl),

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::SyncConflictsModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPESyncConflictsModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPESyncConflictsModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPESyncConflictsModelENDCLASS_t,
        // property 'conflictActivities'
        QtPrivate::TypeAndForceComplete<OCC::ActivityList, std::true_type>,
        // property 'allExistingsSelected'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'allConflictingSelected'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // enum 'SyncConflictRoles'
        QtPrivate::TypeAndForceComplete<SyncConflictsModel::SyncConflictRoles, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SyncConflictsModel, std::true_type>,
        // method 'conflictActivitiesChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'allExistingsSelectedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'allConflictingSelectedChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setConflictActivities'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::ActivityList, std::false_type>,
        // method 'selectAllExisting'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'selectAllConflicting'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'applySolution'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void OCC::SyncConflictsModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SyncConflictsModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->conflictActivitiesChanged(); break;
        case 1: _t->allExistingsSelectedChanged(); break;
        case 2: _t->allConflictingSelectedChanged(); break;
        case 3: _t->setConflictActivities((*reinterpret_cast< std::add_pointer_t<OCC::ActivityList>>(_a[1]))); break;
        case 4: _t->selectAllExisting((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 5: _t->selectAllConflicting((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 6: _t->applySolution(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 3:
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
            using _t = void (SyncConflictsModel::*)();
            if (_t _q_method = &SyncConflictsModel::conflictActivitiesChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SyncConflictsModel::*)();
            if (_t _q_method = &SyncConflictsModel::allExistingsSelectedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SyncConflictsModel::*)();
            if (_t _q_method = &SyncConflictsModel::allConflictingSelectedChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OCC::ActivityList >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<SyncConflictsModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< OCC::ActivityList*>(_v) = _t->conflictActivities(); break;
        case 1: *reinterpret_cast< bool*>(_v) = _t->allExistingsSelected(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->allConflictingSelected(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<SyncConflictsModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setConflictActivities(*reinterpret_cast< OCC::ActivityList*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *OCC::SyncConflictsModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::SyncConflictsModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPESyncConflictsModelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int OCC::SyncConflictsModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}

// SIGNAL 0
void OCC::SyncConflictsModel::conflictActivitiesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void OCC::SyncConflictsModel::allExistingsSelectedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void OCC::SyncConflictsModel::allConflictingSelectedChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
QT_WARNING_POP
