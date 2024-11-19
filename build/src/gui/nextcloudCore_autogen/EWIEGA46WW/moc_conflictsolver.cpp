/****************************************************************************
** Meta object code from reading C++ file 'conflictsolver.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/gui/conflictsolver.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'conflictsolver.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSOCCSCOPEConflictSolverENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPEConflictSolverENDCLASS = QtMocHelpers::stringData(
    "OCC::ConflictSolver",
    "localVersionFilenameChanged",
    "",
    "remoteVersionFilenameChanged",
    "setLocalVersionFilename",
    "localVersionFilename",
    "setRemoteVersionFilename",
    "remoteVersionFilename",
    "Solution",
    "KeepLocalVersion",
    "KeepRemoteVersion",
    "KeepBothVersions"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPEConflictSolverENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       2,   46, // properties
       1,   56, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   38,    2, 0x06,    4 /* Public */,
       3,    0,   39,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    1,   40,    2, 0x0a,    6 /* Public */,
       6,    1,   43,    2, 0x0a,    8 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    5,
    QMetaType::Void, QMetaType::QString,    7,

 // properties: name, type, flags, notifyId, revision
       5, QMetaType::QString, 0x00015103, uint(0), 0,
       7, QMetaType::QString, 0x00015103, uint(1), 0,

 // enums: name, alias, flags, count, data
       8,    8, 0x0,    3,   61,

 // enum data: key, value
       9, uint(OCC::ConflictSolver::KeepLocalVersion),
      10, uint(OCC::ConflictSolver::KeepRemoteVersion),
      11, uint(OCC::ConflictSolver::KeepBothVersions),

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::ConflictSolver::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPEConflictSolverENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPEConflictSolverENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPEConflictSolverENDCLASS_t,
        // property 'localVersionFilename'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'remoteVersionFilename'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // enum 'Solution'
        QtPrivate::TypeAndForceComplete<ConflictSolver::Solution, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ConflictSolver, std::true_type>,
        // method 'localVersionFilenameChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'remoteVersionFilenameChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setLocalVersionFilename'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setRemoteVersionFilename'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void OCC::ConflictSolver::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ConflictSolver *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->localVersionFilenameChanged(); break;
        case 1: _t->remoteVersionFilenameChanged(); break;
        case 2: _t->setLocalVersionFilename((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 3: _t->setRemoteVersionFilename((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ConflictSolver::*)();
            if (_t _q_method = &ConflictSolver::localVersionFilenameChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ConflictSolver::*)();
            if (_t _q_method = &ConflictSolver::remoteVersionFilenameChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<ConflictSolver *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->localVersionFilename(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->remoteVersionFilename(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<ConflictSolver *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setLocalVersionFilename(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setRemoteVersionFilename(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *OCC::ConflictSolver::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::ConflictSolver::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPEConflictSolverENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OCC::ConflictSolver::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 4;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void OCC::ConflictSolver::localVersionFilenameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void OCC::ConflictSolver::remoteVersionFilenameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
