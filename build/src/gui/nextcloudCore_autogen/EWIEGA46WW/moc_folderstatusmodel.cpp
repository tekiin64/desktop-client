/****************************************************************************
** Meta object code from reading C++ file 'folderstatusmodel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/gui/folderstatusmodel.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'folderstatusmodel.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSOCCSCOPEFolderStatusModelENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPEFolderStatusModelENDCLASS = QtMocHelpers::stringData(
    "OCC::FolderStatusModel",
    "dirtyChanged",
    "",
    "suggestExpand",
    "QModelIndex",
    "slotUpdateFolderState",
    "OCC::Folder*",
    "slotApplySelectiveSync",
    "resetFolders",
    "slotSyncAllPendingBigFolders",
    "slotSyncNoPendingBigFolders",
    "slotSetProgress",
    "OCC::ProgressInfo",
    "progress",
    "e2eInitializationFinished",
    "isNewMnemonicGenerated",
    "slotUpdateDirectories",
    "slotGatherPermissions",
    "name",
    "QMap<QString,QString>",
    "properties",
    "slotGatherEncryptionStatus",
    "href",
    "slotLscolFinishedWithError",
    "QNetworkReply*",
    "r",
    "slotFolderSyncStateChange",
    "f",
    "slotFolderScheduleQueueChanged",
    "slotNewBigFolder",
    "slotShowFetchProgress"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPEFolderStatusModelENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  116,    2, 0x06,    1 /* Public */,
       3,    1,  117,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    1,  120,    2, 0x0a,    4 /* Public */,
       7,    0,  123,    2, 0x0a,    6 /* Public */,
       8,    0,  124,    2, 0x0a,    7 /* Public */,
       9,    0,  125,    2, 0x0a,    8 /* Public */,
      10,    0,  126,    2, 0x0a,    9 /* Public */,
      11,    1,  127,    2, 0x0a,   10 /* Public */,
      14,    1,  130,    2, 0x0a,   12 /* Public */,
      16,    1,  133,    2, 0x08,   14 /* Private */,
      17,    2,  136,    2, 0x08,   16 /* Private */,
      21,    2,  141,    2, 0x08,   19 /* Private */,
      23,    1,  146,    2, 0x08,   22 /* Private */,
      26,    1,  149,    2, 0x08,   24 /* Private */,
      28,    0,  152,    2, 0x08,   26 /* Private */,
      29,    0,  153,    2, 0x08,   27 /* Private */,
      30,    0,  154,    2, 0x08,   28 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    2,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   13,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::QStringList,    2,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 19,   18,   20,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 19,   22,   20,
    QMetaType::Void, 0x80000000 | 24,   25,
    QMetaType::Void, 0x80000000 | 6,   27,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::FolderStatusModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractItemModel::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPEFolderStatusModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPEFolderStatusModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPEFolderStatusModelENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FolderStatusModel, std::true_type>,
        // method 'dirtyChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'suggestExpand'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QModelIndex &, std::false_type>,
        // method 'slotUpdateFolderState'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::Folder *, std::false_type>,
        // method 'slotApplySelectiveSync'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'resetFolders'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotSyncAllPendingBigFolders'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotSyncNoPendingBigFolders'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotSetProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::ProgressInfo &, std::false_type>,
        // method 'e2eInitializationFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        // method 'slotUpdateDirectories'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QStringList &, std::false_type>,
        // method 'slotGatherPermissions'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QMap<QString,QString> &, std::false_type>,
        // method 'slotGatherEncryptionStatus'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QMap<QString,QString> &, std::false_type>,
        // method 'slotLscolFinishedWithError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>,
        // method 'slotFolderSyncStateChange'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::Folder *, std::false_type>,
        // method 'slotFolderScheduleQueueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotNewBigFolder'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotShowFetchProgress'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void OCC::FolderStatusModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FolderStatusModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->dirtyChanged(); break;
        case 1: _t->suggestExpand((*reinterpret_cast< std::add_pointer_t<QModelIndex>>(_a[1]))); break;
        case 2: _t->slotUpdateFolderState((*reinterpret_cast< std::add_pointer_t<OCC::Folder*>>(_a[1]))); break;
        case 3: _t->slotApplySelectiveSync(); break;
        case 4: _t->resetFolders(); break;
        case 5: _t->slotSyncAllPendingBigFolders(); break;
        case 6: _t->slotSyncNoPendingBigFolders(); break;
        case 7: _t->slotSetProgress((*reinterpret_cast< std::add_pointer_t<OCC::ProgressInfo>>(_a[1]))); break;
        case 8: _t->e2eInitializationFinished((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: _t->slotUpdateDirectories((*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[1]))); break;
        case 10: _t->slotGatherPermissions((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QMap<QString,QString>>>(_a[2]))); break;
        case 11: _t->slotGatherEncryptionStatus((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QMap<QString,QString>>>(_a[2]))); break;
        case 12: _t->slotLscolFinishedWithError((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1]))); break;
        case 13: _t->slotFolderSyncStateChange((*reinterpret_cast< std::add_pointer_t<OCC::Folder*>>(_a[1]))); break;
        case 14: _t->slotFolderScheduleQueueChanged(); break;
        case 15: _t->slotNewBigFolder(); break;
        case 16: _t->slotShowFetchProgress(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FolderStatusModel::*)();
            if (_t _q_method = &FolderStatusModel::dirtyChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FolderStatusModel::*)(const QModelIndex & );
            if (_t _q_method = &FolderStatusModel::suggestExpand; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject *OCC::FolderStatusModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::FolderStatusModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPEFolderStatusModelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QAbstractItemModel::qt_metacast(_clname);
}

int OCC::FolderStatusModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractItemModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 17;
    }
    return _id;
}

// SIGNAL 0
void OCC::FolderStatusModel::dirtyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void OCC::FolderStatusModel::suggestExpand(const QModelIndex & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
