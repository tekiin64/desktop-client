/****************************************************************************
** Meta object code from reading C++ file 'caseclashconflictsolver.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/libsync/caseclashconflictsolver.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'caseclashconflictsolver.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSOCCSCOPECaseClashConflictSolverENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPECaseClashConflictSolverENDCLASS = QtMocHelpers::stringData(
    "OCC::CaseClashConflictSolver",
    "allowedToRenameChanged",
    "",
    "errorStringChanged",
    "done",
    "failed",
    "solveConflict",
    "newFilename",
    "checkIfAllowedToRename",
    "onRemoteDestinationFileAlreadyExists",
    "onRemoteDestinationFileDoesNotExist",
    "onPropfindPermissionSuccess",
    "QVariantMap",
    "values",
    "onPropfindPermissionError",
    "QNetworkReply*",
    "reply",
    "onRemoteSourceFileAlreadyExists",
    "onRemoteSourceFileDoesNotExist",
    "onMoveJobFinished",
    "allowedToRename",
    "errorString"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPECaseClashConflictSolverENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       2,  111, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   92,    2, 0x06,    3 /* Public */,
       3,    0,   93,    2, 0x06,    4 /* Public */,
       4,    0,   94,    2, 0x06,    5 /* Public */,
       5,    0,   95,    2, 0x06,    6 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    1,   96,    2, 0x0a,    7 /* Public */,
       8,    0,   99,    2, 0x0a,    9 /* Public */,
       9,    0,  100,    2, 0x08,   10 /* Private */,
      10,    0,  101,    2, 0x08,   11 /* Private */,
      11,    1,  102,    2, 0x08,   12 /* Private */,
      14,    1,  105,    2, 0x08,   14 /* Private */,
      17,    0,  108,    2, 0x08,   16 /* Private */,
      18,    0,  109,    2, 0x08,   17 /* Private */,
      19,    0,  110,    2, 0x08,   18 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, 0x80000000 | 15,   16,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags, notifyId, revision
      20, QMetaType::Bool, 0x00015001, uint(0), 0,
      21, QMetaType::QString, 0x00015001, uint(1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::CaseClashConflictSolver::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPECaseClashConflictSolverENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPECaseClashConflictSolverENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPECaseClashConflictSolverENDCLASS_t,
        // property 'allowedToRename'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'errorString'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<CaseClashConflictSolver, std::true_type>,
        // method 'allowedToRenameChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'errorStringChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'done'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'failed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'solveConflict'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'checkIfAllowedToRename'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onRemoteDestinationFileAlreadyExists'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onRemoteDestinationFileDoesNotExist'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onPropfindPermissionSuccess'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariantMap &, std::false_type>,
        // method 'onPropfindPermissionError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>,
        // method 'onRemoteSourceFileAlreadyExists'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onRemoteSourceFileDoesNotExist'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'onMoveJobFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void OCC::CaseClashConflictSolver::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CaseClashConflictSolver *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->allowedToRenameChanged(); break;
        case 1: _t->errorStringChanged(); break;
        case 2: _t->done(); break;
        case 3: _t->failed(); break;
        case 4: _t->solveConflict((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->checkIfAllowedToRename(); break;
        case 6: _t->onRemoteDestinationFileAlreadyExists(); break;
        case 7: _t->onRemoteDestinationFileDoesNotExist(); break;
        case 8: _t->onPropfindPermissionSuccess((*reinterpret_cast< std::add_pointer_t<QVariantMap>>(_a[1]))); break;
        case 9: _t->onPropfindPermissionError((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1]))); break;
        case 10: _t->onRemoteSourceFileAlreadyExists(); break;
        case 11: _t->onRemoteSourceFileDoesNotExist(); break;
        case 12: _t->onMoveJobFinished(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CaseClashConflictSolver::*)();
            if (_t _q_method = &CaseClashConflictSolver::allowedToRenameChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CaseClashConflictSolver::*)();
            if (_t _q_method = &CaseClashConflictSolver::errorStringChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CaseClashConflictSolver::*)();
            if (_t _q_method = &CaseClashConflictSolver::done; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (CaseClashConflictSolver::*)();
            if (_t _q_method = &CaseClashConflictSolver::failed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<CaseClashConflictSolver *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->allowedToRename(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->errorString(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *OCC::CaseClashConflictSolver::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::CaseClashConflictSolver::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPECaseClashConflictSolverENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OCC::CaseClashConflictSolver::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 13;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void OCC::CaseClashConflictSolver::allowedToRenameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void OCC::CaseClashConflictSolver::errorStringChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void OCC::CaseClashConflictSolver::done()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void OCC::CaseClashConflictSolver::failed()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
QT_WARNING_POP
