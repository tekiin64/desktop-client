/****************************************************************************
** Meta object code from reading C++ file 'filedetails.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/gui/filedetails/filedetails.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'filedetails.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSOCCSCOPEFileDetailsENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPEFileDetailsENDCLASS = QtMocHelpers::stringData(
    "OCC::FileDetails",
    "localPathChanged",
    "",
    "fileChanged",
    "lockExpireStringChanged",
    "isFolderChanged",
    "fileTagModelChanged",
    "setLocalPath",
    "localPath",
    "refreshFileDetails",
    "updateLockExpireString",
    "updateFileTagModel",
    "const OCC::Folder*",
    "folder",
    "name",
    "sizeString",
    "lastChangedString",
    "iconUrl",
    "lockExpireString",
    "isFolder",
    "fileTagModel",
    "FileTagModel*",
    "sharingAvailable"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPEFileDetailsENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       9,   81, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   68,    2, 0x06,   10 /* Public */,
       3,    0,   69,    2, 0x06,   11 /* Public */,
       4,    0,   70,    2, 0x06,   12 /* Public */,
       5,    0,   71,    2, 0x06,   13 /* Public */,
       6,    0,   72,    2, 0x06,   14 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    1,   73,    2, 0x0a,   15 /* Public */,
       9,    0,   76,    2, 0x08,   17 /* Private */,
      10,    0,   77,    2, 0x08,   18 /* Private */,
      11,    1,   78,    2, 0x08,   19 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 12,   13,

 // properties: name, type, flags, notifyId, revision
       8, QMetaType::QString, 0x00015103, uint(0), 0,
      14, QMetaType::QString, 0x00015001, uint(1), 0,
      15, QMetaType::QString, 0x00015001, uint(1), 0,
      16, QMetaType::QString, 0x00015001, uint(1), 0,
      17, QMetaType::QString, 0x00015001, uint(1), 0,
      18, QMetaType::QString, 0x00015001, uint(2), 0,
      19, QMetaType::Bool, 0x00015001, uint(3), 0,
      20, 0x80000000 | 21, 0x00015009, uint(4), 0,
      22, QMetaType::Bool, 0x00015001, uint(1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::FileDetails::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPEFileDetailsENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPEFileDetailsENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPEFileDetailsENDCLASS_t,
        // property 'localPath'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'name'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'sizeString'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'lastChangedString'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'iconUrl'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'lockExpireString'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'isFolder'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'fileTagModel'
        QtPrivate::TypeAndForceComplete<FileTagModel*, std::true_type>,
        // property 'sharingAvailable'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FileDetails, std::true_type>,
        // method 'localPathChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'fileChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'lockExpireStringChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'isFolderChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'fileTagModelChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setLocalPath'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'refreshFileDetails'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateLockExpireString'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'updateFileTagModel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::Folder * const, std::false_type>
    >,
    nullptr
} };

void OCC::FileDetails::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FileDetails *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->localPathChanged(); break;
        case 1: _t->fileChanged(); break;
        case 2: _t->lockExpireStringChanged(); break;
        case 3: _t->isFolderChanged(); break;
        case 4: _t->fileTagModelChanged(); break;
        case 5: _t->setLocalPath((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->refreshFileDetails(); break;
        case 7: _t->updateLockExpireString(); break;
        case 8: _t->updateFileTagModel((*reinterpret_cast< std::add_pointer_t<const OCC::Folder*>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FileDetails::*)();
            if (_t _q_method = &FileDetails::localPathChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FileDetails::*)();
            if (_t _q_method = &FileDetails::fileChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FileDetails::*)();
            if (_t _q_method = &FileDetails::lockExpireStringChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FileDetails::*)();
            if (_t _q_method = &FileDetails::isFolderChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (FileDetails::*)();
            if (_t _q_method = &FileDetails::fileTagModelChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< FileTagModel* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<FileDetails *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->localPath(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->name(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->sizeString(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->lastChangedString(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->iconUrl(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->lockExpireString(); break;
        case 6: *reinterpret_cast< bool*>(_v) = _t->isFolder(); break;
        case 7: *reinterpret_cast< FileTagModel**>(_v) = _t->fileTagModel(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->sharingAvailable(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<FileDetails *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setLocalPath(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *OCC::FileDetails::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::FileDetails::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPEFileDetailsENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OCC::FileDetails::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 9;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void OCC::FileDetails::localPathChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void OCC::FileDetails::fileChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void OCC::FileDetails::lockExpireStringChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void OCC::FileDetails::isFolderChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void OCC::FileDetails::fileTagModelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
