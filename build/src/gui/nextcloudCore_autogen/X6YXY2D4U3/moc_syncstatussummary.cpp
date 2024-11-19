/****************************************************************************
** Meta object code from reading C++ file 'syncstatussummary.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/gui/tray/syncstatussummary.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'syncstatussummary.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSOCCSCOPESyncStatusSummaryENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPESyncStatusSummaryENDCLASS = QtMocHelpers::stringData(
    "OCC::SyncStatusSummary",
    "syncProgressChanged",
    "",
    "syncIconChanged",
    "syncingChanged",
    "syncStatusStringChanged",
    "syncStatusDetailStringChanged",
    "totalFilesChanged",
    "load",
    "syncProgress",
    "syncIcon",
    "syncing",
    "syncStatusString",
    "syncStatusDetailString",
    "totalFiles"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPESyncStatusSummaryENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       6,   63, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x06,    7 /* Public */,
       3,    0,   57,    2, 0x06,    8 /* Public */,
       4,    0,   58,    2, 0x06,    9 /* Public */,
       5,    0,   59,    2, 0x06,   10 /* Public */,
       6,    0,   60,    2, 0x06,   11 /* Public */,
       7,    0,   61,    2, 0x06,   12 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       8,    0,   62,    2, 0x0a,   13 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,

 // properties: name, type, flags, notifyId, revision
       9, QMetaType::Double, 0x00015001, uint(0), 0,
      10, QMetaType::QUrl, 0x00015001, uint(1), 0,
      11, QMetaType::Bool, 0x00015001, uint(2), 0,
      12, QMetaType::QString, 0x00015001, uint(3), 0,
      13, QMetaType::QString, 0x00015001, uint(4), 0,
      14, QMetaType::LongLong, 0x00015001, uint(5), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::SyncStatusSummary::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPESyncStatusSummaryENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPESyncStatusSummaryENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPESyncStatusSummaryENDCLASS_t,
        // property 'syncProgress'
        QtPrivate::TypeAndForceComplete<double, std::true_type>,
        // property 'syncIcon'
        QtPrivate::TypeAndForceComplete<QUrl, std::true_type>,
        // property 'syncing'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'syncStatusString'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'syncStatusDetailString'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'totalFiles'
        QtPrivate::TypeAndForceComplete<qint64, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<SyncStatusSummary, std::true_type>,
        // method 'syncProgressChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'syncIconChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'syncingChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'syncStatusStringChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'syncStatusDetailStringChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'totalFilesChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'load'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void OCC::SyncStatusSummary::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SyncStatusSummary *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->syncProgressChanged(); break;
        case 1: _t->syncIconChanged(); break;
        case 2: _t->syncingChanged(); break;
        case 3: _t->syncStatusStringChanged(); break;
        case 4: _t->syncStatusDetailStringChanged(); break;
        case 5: _t->totalFilesChanged(); break;
        case 6: _t->load(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SyncStatusSummary::*)();
            if (_t _q_method = &SyncStatusSummary::syncProgressChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (SyncStatusSummary::*)();
            if (_t _q_method = &SyncStatusSummary::syncIconChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (SyncStatusSummary::*)();
            if (_t _q_method = &SyncStatusSummary::syncingChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (SyncStatusSummary::*)();
            if (_t _q_method = &SyncStatusSummary::syncStatusStringChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (SyncStatusSummary::*)();
            if (_t _q_method = &SyncStatusSummary::syncStatusDetailStringChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (SyncStatusSummary::*)();
            if (_t _q_method = &SyncStatusSummary::totalFilesChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<SyncStatusSummary *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< double*>(_v) = _t->syncProgress(); break;
        case 1: *reinterpret_cast< QUrl*>(_v) = _t->syncIcon(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->syncing(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->syncStatusString(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->syncStatusDetailString(); break;
        case 5: *reinterpret_cast< qint64*>(_v) = _t->totalFiles(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_a;
}

const QMetaObject *OCC::SyncStatusSummary::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::SyncStatusSummary::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPESyncStatusSummaryENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OCC::SyncStatusSummary::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 7;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void OCC::SyncStatusSummary::syncProgressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void OCC::SyncStatusSummary::syncIconChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void OCC::SyncStatusSummary::syncingChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void OCC::SyncStatusSummary::syncStatusStringChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void OCC::SyncStatusSummary::syncStatusDetailStringChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void OCC::SyncStatusSummary::totalFilesChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
QT_WARNING_POP
