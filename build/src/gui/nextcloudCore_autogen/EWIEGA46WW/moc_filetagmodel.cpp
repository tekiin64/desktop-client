/****************************************************************************
** Meta object code from reading C++ file 'filetagmodel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/gui/filetagmodel.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'filetagmodel.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSOCCSCOPEFileTagModelENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPEFileTagModelENDCLASS = QtMocHelpers::stringData(
    "OCC::FileTagModel",
    "serverRelativePathChanged",
    "",
    "accountChanged",
    "maxTagsChanged",
    "totalTagsChanged",
    "overflowTagsStringChanged",
    "setServerRelativePath",
    "serverRelativePath",
    "setAccount",
    "OCC::AccountPtr",
    "account",
    "setMaxTags",
    "maxTags",
    "updateOverflowTagsString",
    "resetForNewFile",
    "fetchFileTags",
    "processFileTagRequestFinished",
    "QVariantMap",
    "result",
    "processFileTagRequestFinishedWithError",
    "AccountPtr",
    "totalTags",
    "overflowTagsString"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPEFileTagModelENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       5,  113, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   92,    2, 0x06,    6 /* Public */,
       3,    0,   93,    2, 0x06,    7 /* Public */,
       4,    0,   94,    2, 0x06,    8 /* Public */,
       5,    0,   95,    2, 0x06,    9 /* Public */,
       6,    0,   96,    2, 0x06,   10 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    1,   97,    2, 0x0a,   11 /* Public */,
       9,    1,  100,    2, 0x0a,   13 /* Public */,
      12,    1,  103,    2, 0x0a,   15 /* Public */,
      14,    0,  106,    2, 0x0a,   17 /* Public */,
      15,    0,  107,    2, 0x0a,   18 /* Public */,
      16,    0,  108,    2, 0x08,   19 /* Private */,
      17,    1,  109,    2, 0x08,   20 /* Private */,
      20,    0,  112,    2, 0x08,   22 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void, 0x80000000 | 10,   11,
    QMetaType::Void, QMetaType::Int,   13,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 18,   19,
    QMetaType::Void,

 // properties: name, type, flags, notifyId, revision
       8, QMetaType::QString, 0x00015103, uint(0), 0,
      11, 0x80000000 | 21, 0x0001510b, uint(1), 0,
      13, QMetaType::Int, 0x00015103, uint(2), 0,
      22, QMetaType::Int, 0x00015001, uint(3), 0,
      23, QMetaType::QString, 0x00015001, uint(4), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::FileTagModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPEFileTagModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPEFileTagModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPEFileTagModelENDCLASS_t,
        // property 'serverRelativePath'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'account'
        QtPrivate::TypeAndForceComplete<AccountPtr, std::true_type>,
        // property 'maxTags'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'totalTags'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'overflowTagsString'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FileTagModel, std::true_type>,
        // method 'serverRelativePathChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'accountChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'maxTagsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'totalTagsChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'overflowTagsStringChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setServerRelativePath'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setAccount'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::AccountPtr &, std::false_type>,
        // method 'setMaxTags'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const int, std::false_type>,
        // method 'updateOverflowTagsString'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'resetForNewFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'fetchFileTags'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'processFileTagRequestFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariantMap &, std::false_type>,
        // method 'processFileTagRequestFinishedWithError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void OCC::FileTagModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FileTagModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->serverRelativePathChanged(); break;
        case 1: _t->accountChanged(); break;
        case 2: _t->maxTagsChanged(); break;
        case 3: _t->totalTagsChanged(); break;
        case 4: _t->overflowTagsStringChanged(); break;
        case 5: _t->setServerRelativePath((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->setAccount((*reinterpret_cast< std::add_pointer_t<OCC::AccountPtr>>(_a[1]))); break;
        case 7: _t->setMaxTags((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 8: _t->updateOverflowTagsString(); break;
        case 9: _t->resetForNewFile(); break;
        case 10: _t->fetchFileTags(); break;
        case 11: _t->processFileTagRequestFinished((*reinterpret_cast< std::add_pointer_t<QVariantMap>>(_a[1]))); break;
        case 12: _t->processFileTagRequestFinishedWithError(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::AccountPtr >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (FileTagModel::*)();
            if (_t _q_method = &FileTagModel::serverRelativePathChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (FileTagModel::*)();
            if (_t _q_method = &FileTagModel::accountChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (FileTagModel::*)();
            if (_t _q_method = &FileTagModel::maxTagsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (FileTagModel::*)();
            if (_t _q_method = &FileTagModel::totalTagsChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (FileTagModel::*)();
            if (_t _q_method = &FileTagModel::overflowTagsStringChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<FileTagModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->serverRelativePath(); break;
        case 1: *reinterpret_cast< AccountPtr*>(_v) = _t->account(); break;
        case 2: *reinterpret_cast< int*>(_v) = _t->maxTags(); break;
        case 3: *reinterpret_cast< int*>(_v) = _t->totalTags(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->overflowTagsString(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<FileTagModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setServerRelativePath(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setAccount(*reinterpret_cast< AccountPtr*>(_v)); break;
        case 2: _t->setMaxTags(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *OCC::FileTagModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::FileTagModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPEFileTagModelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int OCC::FileTagModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void OCC::FileTagModel::serverRelativePathChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void OCC::FileTagModel::accountChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void OCC::FileTagModel::maxTagsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void OCC::FileTagModel::totalTagsChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void OCC::FileTagModel::overflowTagsStringChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP