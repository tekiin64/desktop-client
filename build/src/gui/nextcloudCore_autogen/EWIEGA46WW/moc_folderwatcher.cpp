/****************************************************************************
** Meta object code from reading C++ file 'folderwatcher.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/gui/folderwatcher.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QSet>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'folderwatcher.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSOCCSCOPEFolderWatcherENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPEFolderWatcherENDCLASS = QtMocHelpers::stringData(
    "OCC::FolderWatcher",
    "pathChanged",
    "",
    "path",
    "filesLockReleased",
    "QSet<QString>",
    "files",
    "filesLockImposed",
    "lockedFilesFound",
    "lostChanges",
    "becameUnreliable",
    "message",
    "changeDetected",
    "paths",
    "folderAccountCapabilitiesChanged",
    "startNotificationTestWhenReady",
    "lockChangeDebouncingTimerTimedOut"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPEFolderWatcherENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   80,    2, 0x06,    1 /* Public */,
       4,    1,   83,    2, 0x06,    3 /* Public */,
       7,    1,   86,    2, 0x06,    5 /* Public */,
       8,    1,   89,    2, 0x06,    7 /* Public */,
       9,    0,   92,    2, 0x06,    9 /* Public */,
      10,    1,   93,    2, 0x06,   10 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      12,    1,   96,    2, 0x09,   12 /* Protected */,
      12,    1,   99,    2, 0x09,   14 /* Protected */,
      14,    0,  102,    2, 0x09,   16 /* Protected */,
      15,    0,  103,    2, 0x08,   17 /* Private */,
      16,    0,  104,    2, 0x08,   18 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,   11,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::QStringList,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::FolderWatcher::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPEFolderWatcherENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPEFolderWatcherENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPEFolderWatcherENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FolderWatcher, std::true_type>,
        // method 'pathChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'filesLockReleased'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QSet<QString> &, std::false_type>,
        // method 'filesLockImposed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QSet<QString> &, std::false_type>,
        // method 'lockedFilesFound'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QSet<QString> &, std::false_type>,
        // method 'lostChanges'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'becameUnreliable'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'changeDetected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'changeDetected'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QStringList &, std::false_type>,
        // method 'folderAccountCapabilitiesChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'startNotificationTestWhenReady'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'lockChangeDebouncingTimerTimedOut'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void OCC::FolderWatcher::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FolderWatcher *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->pathChanged((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->filesLockReleased((*reinterpret_cast< std::add_pointer_t<QSet<QString>>>(_a[1]))); break;
        case 2: _t->filesLockImposed((*reinterpret_cast< std::add_pointer_t<QSet<QString>>>(_a[1]))); break;
        case 3: _t->lockedFilesFound((*reinterpret_cast< std::add_pointer_t<QSet<QString>>>(_a[1]))); break;
        case 4: _t->lostChanges(); break;
        case 5: _t->becameUnreliable((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->changeDetected((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 7: _t->changeDetected((*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[1]))); break;
        case 8: _t->folderAccountCapabilitiesChanged(); break;
        case 9: _t->startNotificationTestWhenReady(); break;
        case 10: _t->lockChangeDebouncingTimerTimedOut(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QSet<QString> >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QSet<QString> >(); break;
            }
            break;
        case 3:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QSet<QString> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FolderWatcher::*)(const QString & );
            if (_t _q_method = &FolderWatcher::pathChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FolderWatcher::*)(const QSet<QString> & );
            if (_t _q_method = &FolderWatcher::filesLockReleased; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FolderWatcher::*)(const QSet<QString> & );
            if (_t _q_method = &FolderWatcher::filesLockImposed; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FolderWatcher::*)(const QSet<QString> & );
            if (_t _q_method = &FolderWatcher::lockedFilesFound; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (FolderWatcher::*)();
            if (_t _q_method = &FolderWatcher::lostChanges; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (FolderWatcher::*)(const QString & );
            if (_t _q_method = &FolderWatcher::becameUnreliable; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
    }
}

const QMetaObject *OCC::FolderWatcher::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::FolderWatcher::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPEFolderWatcherENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OCC::FolderWatcher::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void OCC::FolderWatcher::pathChanged(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OCC::FolderWatcher::filesLockReleased(const QSet<QString> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void OCC::FolderWatcher::filesLockImposed(const QSet<QString> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void OCC::FolderWatcher::lockedFilesFound(const QSet<QString> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void OCC::FolderWatcher::lostChanges()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void OCC::FolderWatcher::becameUnreliable(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
QT_WARNING_POP
