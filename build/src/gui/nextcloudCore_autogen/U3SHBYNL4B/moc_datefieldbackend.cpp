/****************************************************************************
** Meta object code from reading C++ file 'datefieldbackend.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/gui/filedetails/datefieldbackend.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'datefieldbackend.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSOCCSCOPEQuickSCOPEDateFieldBackendENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPEQuickSCOPEDateFieldBackendENDCLASS = QtMocHelpers::stringData(
    "OCC::Quick::DateFieldBackend",
    "dateChanged",
    "",
    "dateMsecsChanged",
    "dateStringChanged",
    "minimumDateChanged",
    "minimumDateMsecsChanged",
    "maximumDateChanged",
    "maximumDateMsecsChanged",
    "validDateChanged",
    "setDate",
    "date",
    "setDateMsecs",
    "dateMsecs",
    "setDateString",
    "dateString",
    "setMinimumDate",
    "minimumDate",
    "setMinimumDateMsecs",
    "minimumDateMsecs",
    "setMaximumDate",
    "maximumDate",
    "setMaximumDateMsecs",
    "maximumDateMsecs",
    "validDate"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPEQuickSCOPEDateFieldBackendENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       8,  133, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  104,    2, 0x06,    9 /* Public */,
       3,    0,  105,    2, 0x06,   10 /* Public */,
       4,    0,  106,    2, 0x06,   11 /* Public */,
       5,    0,  107,    2, 0x06,   12 /* Public */,
       6,    0,  108,    2, 0x06,   13 /* Public */,
       7,    0,  109,    2, 0x06,   14 /* Public */,
       8,    0,  110,    2, 0x06,   15 /* Public */,
       9,    0,  111,    2, 0x06,   16 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      10,    1,  112,    2, 0x0a,   17 /* Public */,
      12,    1,  115,    2, 0x0a,   19 /* Public */,
      14,    1,  118,    2, 0x0a,   21 /* Public */,
      16,    1,  121,    2, 0x0a,   23 /* Public */,
      18,    1,  124,    2, 0x0a,   25 /* Public */,
      20,    1,  127,    2, 0x0a,   27 /* Public */,
      22,    1,  130,    2, 0x0a,   29 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QDate,   11,
    QMetaType::Void, QMetaType::LongLong,   13,
    QMetaType::Void, QMetaType::QString,   15,
    QMetaType::Void, QMetaType::QDate,   17,
    QMetaType::Void, QMetaType::LongLong,   19,
    QMetaType::Void, QMetaType::QDate,   21,
    QMetaType::Void, QMetaType::LongLong,   23,

 // properties: name, type, flags, notifyId, revision
      11, QMetaType::QDate, 0x00015103, uint(0), 0,
      13, QMetaType::LongLong, 0x00015103, uint(1), 0,
      15, QMetaType::QString, 0x00015103, uint(2), 0,
      17, QMetaType::QDate, 0x00015103, uint(3), 0,
      19, QMetaType::LongLong, 0x00015103, uint(4), 0,
      21, QMetaType::QDate, 0x00015103, uint(5), 0,
      23, QMetaType::LongLong, 0x00015103, uint(6), 0,
      24, QMetaType::Bool, 0x00015001, uint(7), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::Quick::DateFieldBackend::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPEQuickSCOPEDateFieldBackendENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPEQuickSCOPEDateFieldBackendENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPEQuickSCOPEDateFieldBackendENDCLASS_t,
        // property 'date'
        QtPrivate::TypeAndForceComplete<QDate, std::true_type>,
        // property 'dateMsecs'
        QtPrivate::TypeAndForceComplete<qint64, std::true_type>,
        // property 'dateString'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'minimumDate'
        QtPrivate::TypeAndForceComplete<QDate, std::true_type>,
        // property 'minimumDateMsecs'
        QtPrivate::TypeAndForceComplete<qint64, std::true_type>,
        // property 'maximumDate'
        QtPrivate::TypeAndForceComplete<QDate, std::true_type>,
        // property 'maximumDateMsecs'
        QtPrivate::TypeAndForceComplete<qint64, std::true_type>,
        // property 'validDate'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<DateFieldBackend, std::true_type>,
        // method 'dateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'dateMsecsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'dateStringChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'minimumDateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'minimumDateMsecsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'maximumDateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'maximumDateMsecsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'validDateChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setDate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QDate &, std::false_type>,
        // method 'setDateMsecs'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const qint64, std::false_type>,
        // method 'setDateString'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setMinimumDate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QDate &, std::false_type>,
        // method 'setMinimumDateMsecs'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const qint64, std::false_type>,
        // method 'setMaximumDate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QDate &, std::false_type>,
        // method 'setMaximumDateMsecs'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const qint64, std::false_type>
    >,
    nullptr
} };

void OCC::Quick::DateFieldBackend::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<DateFieldBackend *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->dateChanged(); break;
        case 1: _t->dateMsecsChanged(); break;
        case 2: _t->dateStringChanged(); break;
        case 3: _t->minimumDateChanged(); break;
        case 4: _t->minimumDateMsecsChanged(); break;
        case 5: _t->maximumDateChanged(); break;
        case 6: _t->maximumDateMsecsChanged(); break;
        case 7: _t->validDateChanged(); break;
        case 8: _t->setDate((*reinterpret_cast< std::add_pointer_t<QDate>>(_a[1]))); break;
        case 9: _t->setDateMsecs((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1]))); break;
        case 10: _t->setDateString((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 11: _t->setMinimumDate((*reinterpret_cast< std::add_pointer_t<QDate>>(_a[1]))); break;
        case 12: _t->setMinimumDateMsecs((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1]))); break;
        case 13: _t->setMaximumDate((*reinterpret_cast< std::add_pointer_t<QDate>>(_a[1]))); break;
        case 14: _t->setMaximumDateMsecs((*reinterpret_cast< std::add_pointer_t<qint64>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (DateFieldBackend::*)();
            if (_t _q_method = &DateFieldBackend::dateChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (DateFieldBackend::*)();
            if (_t _q_method = &DateFieldBackend::dateMsecsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (DateFieldBackend::*)();
            if (_t _q_method = &DateFieldBackend::dateStringChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (DateFieldBackend::*)();
            if (_t _q_method = &DateFieldBackend::minimumDateChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (DateFieldBackend::*)();
            if (_t _q_method = &DateFieldBackend::minimumDateMsecsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (DateFieldBackend::*)();
            if (_t _q_method = &DateFieldBackend::maximumDateChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (DateFieldBackend::*)();
            if (_t _q_method = &DateFieldBackend::maximumDateMsecsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (DateFieldBackend::*)();
            if (_t _q_method = &DateFieldBackend::validDateChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 7;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<DateFieldBackend *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QDate*>(_v) = _t->date(); break;
        case 1: *reinterpret_cast< qint64*>(_v) = _t->dateMsecs(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->dateString(); break;
        case 3: *reinterpret_cast< QDate*>(_v) = _t->minimumDate(); break;
        case 4: *reinterpret_cast< qint64*>(_v) = _t->minimumDateMsecs(); break;
        case 5: *reinterpret_cast< QDate*>(_v) = _t->maximumDate(); break;
        case 6: *reinterpret_cast< qint64*>(_v) = _t->maximumDateMsecs(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->validDate(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<DateFieldBackend *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setDate(*reinterpret_cast< QDate*>(_v)); break;
        case 1: _t->setDateMsecs(*reinterpret_cast< qint64*>(_v)); break;
        case 2: _t->setDateString(*reinterpret_cast< QString*>(_v)); break;
        case 3: _t->setMinimumDate(*reinterpret_cast< QDate*>(_v)); break;
        case 4: _t->setMinimumDateMsecs(*reinterpret_cast< qint64*>(_v)); break;
        case 5: _t->setMaximumDate(*reinterpret_cast< QDate*>(_v)); break;
        case 6: _t->setMaximumDateMsecs(*reinterpret_cast< qint64*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *OCC::Quick::DateFieldBackend::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::Quick::DateFieldBackend::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPEQuickSCOPEDateFieldBackendENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OCC::Quick::DateFieldBackend::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 15;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void OCC::Quick::DateFieldBackend::dateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void OCC::Quick::DateFieldBackend::dateMsecsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void OCC::Quick::DateFieldBackend::dateStringChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void OCC::Quick::DateFieldBackend::minimumDateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void OCC::Quick::DateFieldBackend::minimumDateMsecsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void OCC::Quick::DateFieldBackend::maximumDateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}

// SIGNAL 6
void OCC::Quick::DateFieldBackend::maximumDateMsecsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 6, nullptr);
}

// SIGNAL 7
void OCC::Quick::DateFieldBackend::validDateChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 7, nullptr);
}
QT_WARNING_POP
