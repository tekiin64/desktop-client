/****************************************************************************
** Meta object code from reading C++ file 'propagateremotemkdir.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/libsync/propagateremotemkdir.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'propagateremotemkdir.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSOCCSCOPEPropagateRemoteMkdirENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPEPropagateRemoteMkdirENDCLASS = QtMocHelpers::stringData(
    "OCC::PropagateRemoteMkdir",
    "slotMkdir",
    "",
    "slotStartMkcolJob",
    "slotStartEncryptedMkcolJob",
    "path",
    "filename",
    "size",
    "slotMkcolJobFinished",
    "slotEncryptFolderFinished",
    "status",
    "EncryptionStatusEnums::ItemEncryptionStatus",
    "encryptionStatus",
    "success"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPEPropagateRemoteMkdirENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   50,    2, 0x08,    1 /* Private */,
       3,    0,   51,    2, 0x08,    2 /* Private */,
       4,    3,   52,    2, 0x08,    3 /* Private */,
       8,    0,   59,    2, 0x08,    7 /* Private */,
       9,    2,   60,    2, 0x08,    8 /* Private */,
      13,    0,   65,    2, 0x08,   11 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::QString, QMetaType::ULongLong,    5,    6,    7,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, 0x80000000 | 11,   10,   12,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::PropagateRemoteMkdir::staticMetaObject = { {
    QMetaObject::SuperData::link<PropagateItemJob::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPEPropagateRemoteMkdirENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPEPropagateRemoteMkdirENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPEPropagateRemoteMkdirENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PropagateRemoteMkdir, std::true_type>,
        // method 'slotMkdir'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotStartMkcolJob'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotStartEncryptedMkcolJob'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<quint64, std::false_type>,
        // method 'slotMkcolJobFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotEncryptFolderFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<EncryptionStatusEnums::ItemEncryptionStatus, std::false_type>,
        // method 'success'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void OCC::PropagateRemoteMkdir::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PropagateRemoteMkdir *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->slotMkdir(); break;
        case 1: _t->slotStartMkcolJob(); break;
        case 2: _t->slotStartEncryptedMkcolJob((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2])),(*reinterpret_cast< std::add_pointer_t<quint64>>(_a[3]))); break;
        case 3: _t->slotMkcolJobFinished(); break;
        case 4: _t->slotEncryptFolderFinished((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<EncryptionStatusEnums::ItemEncryptionStatus>>(_a[2]))); break;
        case 5: _t->success(); break;
        default: ;
        }
    }
}

const QMetaObject *OCC::PropagateRemoteMkdir::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::PropagateRemoteMkdir::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPEPropagateRemoteMkdirENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return PropagateItemJob::qt_metacast(_clname);
}

int OCC::PropagateRemoteMkdir::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PropagateItemJob::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 6;
    }
    return _id;
}
QT_WARNING_POP
