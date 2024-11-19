/****************************************************************************
** Meta object code from reading C++ file 'sharee.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/gui/sharee.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sharee.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSOCCSCOPEShareeENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPEShareeENDCLASS = QtMocHelpers::stringData(
    "OCC::Sharee",
    "format",
    "shareWith",
    "displayName",
    "iconUrlColoured",
    "type",
    "Type",
    "Invalid",
    "User",
    "Group",
    "Email",
    "Federated",
    "Circle",
    "Room",
    "LookupServerSearch",
    "LookupServerSearchResults"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPEShareeENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       5,   14, // properties
       1,   39, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // properties: name, type, flags, notifyId, revision
       1, QMetaType::QString, 0x00015001, uint(-1), 0,
       2, QMetaType::QString, 0x00015003, uint(-1), 0,
       3, QMetaType::QString, 0x00015003, uint(-1), 0,
       4, QMetaType::QString, 0x00015003, uint(-1), 0,
       5, 0x80000000 | 6, 0x0001500b, uint(-1), 0,

 // enums: name, alias, flags, count, data
       6,    6, 0x0,    9,   44,

 // enum data: key, value
       7, uint(OCC::Sharee::Invalid),
       8, uint(OCC::Sharee::User),
       9, uint(OCC::Sharee::Group),
      10, uint(OCC::Sharee::Email),
      11, uint(OCC::Sharee::Federated),
      12, uint(OCC::Sharee::Circle),
      13, uint(OCC::Sharee::Room),
      14, uint(OCC::Sharee::LookupServerSearch),
      15, uint(OCC::Sharee::LookupServerSearchResults),

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::Sharee::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSOCCSCOPEShareeENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPEShareeENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPEShareeENDCLASS_t,
        // property 'format'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'shareWith'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'displayName'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'iconUrlColoured'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'type'
        QtPrivate::TypeAndForceComplete<Type, std::true_type>,
        // enum 'Type'
        QtPrivate::TypeAndForceComplete<Sharee::Type, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Sharee, std::true_type>
    >,
    nullptr
} };

void OCC::Sharee::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<Sharee *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->format(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->_shareWith; break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->_displayName; break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->_iconUrlColoured; break;
        case 4: *reinterpret_cast< Type*>(_v) = _t->_type; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<Sharee *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 1:
            if (_t->_shareWith != *reinterpret_cast< QString*>(_v)) {
                _t->_shareWith = *reinterpret_cast< QString*>(_v);
            }
            break;
        case 2:
            if (_t->_displayName != *reinterpret_cast< QString*>(_v)) {
                _t->_displayName = *reinterpret_cast< QString*>(_v);
            }
            break;
        case 3:
            if (_t->_iconUrlColoured != *reinterpret_cast< QString*>(_v)) {
                _t->_iconUrlColoured = *reinterpret_cast< QString*>(_v);
            }
            break;
        case 4:
            if (_t->_type != *reinterpret_cast< Type*>(_v)) {
                _t->_type = *reinterpret_cast< Type*>(_v);
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}
QT_WARNING_POP
