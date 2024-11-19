/****************************************************************************
** Meta object code from reading C++ file 'bandwidthmanager.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/libsync/bandwidthmanager.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'bandwidthmanager.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSOCCSCOPEBandwidthManagerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPEBandwidthManagerENDCLASS = QtMocHelpers::stringData(
    "OCC::BandwidthManager",
    "registerUploadDevice",
    "",
    "OCC::UploadDevice*",
    "unregisterUploadDevice",
    "registerDownloadJob",
    "OCC::GETFileJob*",
    "unregisterDownloadJob",
    "absoluteLimitTimerExpired",
    "switchingTimerExpired",
    "relativeUploadMeasuringTimerExpired",
    "relativeUploadDelayTimerExpired",
    "relativeDownloadMeasuringTimerExpired",
    "relativeDownloadDelayTimerExpired"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPEBandwidthManagerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   74,    2, 0x0a,    1 /* Public */,
       4,    1,   77,    2, 0x0a,    3 /* Public */,
       5,    1,   80,    2, 0x0a,    5 /* Public */,
       7,    1,   83,    2, 0x0a,    7 /* Public */,
       8,    0,   86,    2, 0x0a,    9 /* Public */,
       9,    0,   87,    2, 0x0a,   10 /* Public */,
      10,    0,   88,    2, 0x0a,   11 /* Public */,
      11,    0,   89,    2, 0x0a,   12 /* Public */,
      12,    0,   90,    2, 0x0a,   13 /* Public */,
      13,    0,   91,    2, 0x0a,   14 /* Public */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    2,
    QMetaType::Void, QMetaType::QObjectStar,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, QMetaType::QObjectStar,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::BandwidthManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPEBandwidthManagerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPEBandwidthManagerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPEBandwidthManagerENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<BandwidthManager, std::true_type>,
        // method 'registerUploadDevice'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::UploadDevice *, std::false_type>,
        // method 'unregisterUploadDevice'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QObject *, std::false_type>,
        // method 'registerDownloadJob'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::GETFileJob *, std::false_type>,
        // method 'unregisterDownloadJob'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QObject *, std::false_type>,
        // method 'absoluteLimitTimerExpired'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'switchingTimerExpired'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'relativeUploadMeasuringTimerExpired'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'relativeUploadDelayTimerExpired'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'relativeDownloadMeasuringTimerExpired'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'relativeDownloadDelayTimerExpired'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void OCC::BandwidthManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BandwidthManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->registerUploadDevice((*reinterpret_cast< std::add_pointer_t<OCC::UploadDevice*>>(_a[1]))); break;
        case 1: _t->unregisterUploadDevice((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1]))); break;
        case 2: _t->registerDownloadJob((*reinterpret_cast< std::add_pointer_t<OCC::GETFileJob*>>(_a[1]))); break;
        case 3: _t->unregisterDownloadJob((*reinterpret_cast< std::add_pointer_t<QObject*>>(_a[1]))); break;
        case 4: _t->absoluteLimitTimerExpired(); break;
        case 5: _t->switchingTimerExpired(); break;
        case 6: _t->relativeUploadMeasuringTimerExpired(); break;
        case 7: _t->relativeUploadDelayTimerExpired(); break;
        case 8: _t->relativeDownloadMeasuringTimerExpired(); break;
        case 9: _t->relativeDownloadDelayTimerExpired(); break;
        default: ;
        }
    }
}

const QMetaObject *OCC::BandwidthManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::BandwidthManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPEBandwidthManagerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OCC::BandwidthManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
