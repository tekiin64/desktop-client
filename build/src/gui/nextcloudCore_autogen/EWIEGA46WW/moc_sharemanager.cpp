/****************************************************************************
** Meta object code from reading C++ file 'sharemanager.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/gui/sharemanager.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QSharedPointer>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'sharemanager.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSOCCSCOPEShareENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPEShareENDCLASS = QtMocHelpers::stringData(
    "OCC::Share",
    "permissionsSet",
    "",
    "shareDeleted",
    "serverError",
    "code",
    "message",
    "passwordSet",
    "hideDownloadSet",
    "passwordSetError",
    "statusCode",
    "deleteShare",
    "setPermissions",
    "OCC::Share::Permissions",
    "permissions",
    "setPassword",
    "password",
    "slotOcsError",
    "slotPasswordSet",
    "QVariant",
    "value",
    "slotSetPasswordError",
    "slotDeleted",
    "slotPermissionsSet",
    "account",
    "AccountPtr",
    "path",
    "id",
    "uidOwner",
    "ownerDisplayName",
    "shareType",
    "ShareType",
    "shareWith",
    "ShareePtr",
    "Permissions",
    "isPasswordSet",
    "TypeSecureFileDropPlaceholderLink",
    "TypeInternalLink",
    "TypePlaceholderLink",
    "TypeUser",
    "TypeGroup",
    "TypeLink",
    "TypeEmail",
    "TypeRemote",
    "TypeCircle",
    "TypeRoom"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPEShareENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
       9,  140, // properties
       1,  185, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   98,    2, 0x06,   11 /* Public */,
       3,    0,   99,    2, 0x06,   12 /* Public */,
       4,    2,  100,    2, 0x06,   13 /* Public */,
       7,    0,  105,    2, 0x06,   16 /* Public */,
       8,    0,  106,    2, 0x06,   17 /* Public */,
       9,    2,  107,    2, 0x06,   18 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      11,    0,  112,    2, 0x0a,   21 /* Public */,
      12,    1,  113,    2, 0x0a,   22 /* Public */,
      15,    1,  116,    2, 0x0a,   24 /* Public */,
      17,    2,  119,    2, 0x09,   26 /* Protected */,
      18,    2,  124,    2, 0x09,   29 /* Protected */,
      21,    2,  129,    2, 0x09,   32 /* Protected */,
      22,    0,  134,    2, 0x08,   35 /* Private */,
      23,    2,  135,    2, 0x08,   36 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,    5,    6,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   10,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, QMetaType::QString,   16,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   10,    6,
    QMetaType::Void, QMetaType::QJsonDocument, 0x80000000 | 19,    2,   20,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   10,    6,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QJsonDocument, 0x80000000 | 19,    2,   20,

 // properties: name, type, flags, notifyId, revision
      24, 0x80000000 | 25, 0x00015409, uint(-1), 0,
      26, QMetaType::QString, 0x00015401, uint(-1), 0,
      27, QMetaType::QString, 0x00015401, uint(-1), 0,
      28, QMetaType::QString, 0x00015401, uint(-1), 0,
      29, QMetaType::QString, 0x00015401, uint(-1), 0,
      30, 0x80000000 | 31, 0x00015409, uint(-1), 0,
      32, 0x80000000 | 33, 0x00015409, uint(-1), 0,
      14, 0x80000000 | 34, 0x0001510b, uint(0), 0,
      35, QMetaType::Bool, 0x00015001, uint(3), 0,

 // enums: name, alias, flags, count, data
      31,   31, 0x0,   10,  190,

 // enum data: key, value
      36, uint(OCC::Share::TypeSecureFileDropPlaceholderLink),
      37, uint(OCC::Share::TypeInternalLink),
      38, uint(OCC::Share::TypePlaceholderLink),
      39, uint(OCC::Share::TypeUser),
      40, uint(OCC::Share::TypeGroup),
      41, uint(OCC::Share::TypeLink),
      42, uint(OCC::Share::TypeEmail),
      43, uint(OCC::Share::TypeRemote),
      44, uint(OCC::Share::TypeCircle),
      45, uint(OCC::Share::TypeRoom),

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::Share::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPEShareENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPEShareENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPEShareENDCLASS_t,
        // property 'account'
        QtPrivate::TypeAndForceComplete<AccountPtr, std::true_type>,
        // property 'path'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'id'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'uidOwner'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'ownerDisplayName'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'shareType'
        QtPrivate::TypeAndForceComplete<ShareType, std::true_type>,
        // property 'shareWith'
        QtPrivate::TypeAndForceComplete<ShareePtr, std::true_type>,
        // property 'permissions'
        QtPrivate::TypeAndForceComplete<Permissions, std::true_type>,
        // property 'isPasswordSet'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // enum 'ShareType'
        QtPrivate::TypeAndForceComplete<Share::ShareType, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Share, std::true_type>,
        // method 'permissionsSet'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'shareDeleted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'serverError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'passwordSet'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'hideDownloadSet'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'passwordSetError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'deleteShare'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setPermissions'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<OCC::Share::Permissions, std::false_type>,
        // method 'setPassword'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'slotOcsError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'slotPasswordSet'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QJsonDocument &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariant &, std::false_type>,
        // method 'slotSetPasswordError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'slotDeleted'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotPermissionsSet'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QJsonDocument &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariant &, std::false_type>
    >,
    nullptr
} };

void OCC::Share::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Share *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->permissionsSet(); break;
        case 1: _t->shareDeleted(); break;
        case 2: _t->serverError((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 3: _t->passwordSet(); break;
        case 4: _t->hideDownloadSet(); break;
        case 5: _t->passwordSetError((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 6: _t->deleteShare(); break;
        case 7: _t->setPermissions((*reinterpret_cast< std::add_pointer_t<OCC::Share::Permissions>>(_a[1]))); break;
        case 8: _t->setPassword((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 9: _t->slotOcsError((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 10: _t->slotPasswordSet((*reinterpret_cast< std::add_pointer_t<QJsonDocument>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[2]))); break;
        case 11: _t->slotSetPasswordError((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 12: _t->slotDeleted(); break;
        case 13: _t->slotPermissionsSet((*reinterpret_cast< std::add_pointer_t<QJsonDocument>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Share::*)();
            if (_t _q_method = &Share::permissionsSet; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Share::*)();
            if (_t _q_method = &Share::shareDeleted; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Share::*)(int , const QString & );
            if (_t _q_method = &Share::serverError; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (Share::*)();
            if (_t _q_method = &Share::passwordSet; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (Share::*)();
            if (_t _q_method = &Share::hideDownloadSet; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (Share::*)(int , const QString & );
            if (_t _q_method = &Share::passwordSetError; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 5;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Share *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< AccountPtr*>(_v) = _t->account(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->path(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->getId(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->getUidOwner(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->getOwnerDisplayName(); break;
        case 5: *reinterpret_cast< ShareType*>(_v) = _t->getShareType(); break;
        case 6: *reinterpret_cast< ShareePtr*>(_v) = _t->getShareWith(); break;
        case 7: *reinterpret_cast< Permissions*>(_v) = _t->getPermissions(); break;
        case 8: *reinterpret_cast< bool*>(_v) = _t->isPasswordSet(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Share *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 7: _t->setPermissions(*reinterpret_cast< Permissions*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *OCC::Share::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::Share::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPEShareENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OCC::Share::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 14;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void OCC::Share::permissionsSet()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void OCC::Share::shareDeleted()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void OCC::Share::serverError(int _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void OCC::Share::passwordSet()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void OCC::Share::hideDownloadSet()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void OCC::Share::passwordSetError(int _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSOCCSCOPELinkShareENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPELinkShareENDCLASS = QtMocHelpers::stringData(
    "OCC::LinkShare",
    "expireDateSet",
    "",
    "noteSet",
    "nameSet",
    "labelSet",
    "setName",
    "name",
    "setNote",
    "note",
    "setExpireDate",
    "expireDate",
    "setLabel",
    "label",
    "setHideDownload",
    "hideDownload",
    "slotNoteSet",
    "QVariant",
    "value",
    "slotExpireDateSet",
    "reply",
    "slotNameSet",
    "slotLabelSet",
    "slotHideDownloadSet",
    "jsonDoc",
    "hideDownloadSet",
    "link",
    "directDownloadLink",
    "publicCanUpload",
    "publicCanReadDirectory",
    "token"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPELinkShareENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      14,   14, // methods
      10,  142, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       4,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   98,    2, 0x06,   11 /* Public */,
       3,    0,   99,    2, 0x06,   12 /* Public */,
       4,    0,  100,    2, 0x06,   13 /* Public */,
       5,    0,  101,    2, 0x06,   14 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       6,    1,  102,    2, 0x0a,   15 /* Public */,
       8,    1,  105,    2, 0x0a,   17 /* Public */,
      10,    1,  108,    2, 0x0a,   19 /* Public */,
      12,    1,  111,    2, 0x0a,   21 /* Public */,
      14,    1,  114,    2, 0x0a,   23 /* Public */,
      16,    2,  117,    2, 0x08,   25 /* Private */,
      19,    2,  122,    2, 0x08,   28 /* Private */,
      21,    2,  127,    2, 0x08,   31 /* Private */,
      22,    2,  132,    2, 0x08,   34 /* Private */,
      23,    2,  137,    2, 0x08,   37 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void, QMetaType::QDate,   11,
    QMetaType::Void, QMetaType::QString,   13,
    QMetaType::Void, QMetaType::Bool,   15,
    QMetaType::Void, QMetaType::QJsonDocument, 0x80000000 | 17,    2,   18,
    QMetaType::Void, QMetaType::QJsonDocument, 0x80000000 | 17,   20,   18,
    QMetaType::Void, QMetaType::QJsonDocument, 0x80000000 | 17,    2,   18,
    QMetaType::Void, QMetaType::QJsonDocument, 0x80000000 | 17,    2,   18,
    QMetaType::Void, QMetaType::QJsonDocument, 0x80000000 | 17,   24,   15,

 // properties: name, type, flags, notifyId, revision
      26, QMetaType::QUrl, 0x00015401, uint(-1), 0,
      27, QMetaType::QUrl, 0x00015401, uint(-1), 0,
      28, QMetaType::Bool, 0x00015401, uint(-1), 0,
      29, QMetaType::Bool, 0x00015401, uint(-1), 0,
       7, QMetaType::QString, 0x00015103, uint(2), 0,
       9, QMetaType::QString, 0x00015103, uint(1), 0,
      13, QMetaType::QString, 0x00015103, uint(3), 0,
      15, QMetaType::Bool, 0x00015103, uint(1879048217), 0,
      11, QMetaType::QDate, 0x00015103, uint(0), 0,
      30, QMetaType::QString, 0x00015401, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::LinkShare::staticMetaObject = { {
    QMetaObject::SuperData::link<Share::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPELinkShareENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPELinkShareENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPELinkShareENDCLASS_t,
        // property 'link'
        QtPrivate::TypeAndForceComplete<QUrl, std::true_type>,
        // property 'directDownloadLink'
        QtPrivate::TypeAndForceComplete<QUrl, std::true_type>,
        // property 'publicCanUpload'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'publicCanReadDirectory'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'name'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'note'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'label'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'hideDownload'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'expireDate'
        QtPrivate::TypeAndForceComplete<QDate, std::true_type>,
        // property 'token'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<LinkShare, std::true_type>,
        // method 'expireDateSet'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'noteSet'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'nameSet'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'labelSet'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setName'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setNote'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setExpireDate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QDate &, std::false_type>,
        // method 'setLabel'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setHideDownload'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const bool, std::false_type>,
        // method 'slotNoteSet'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QJsonDocument &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariant &, std::false_type>,
        // method 'slotExpireDateSet'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QJsonDocument &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariant &, std::false_type>,
        // method 'slotNameSet'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QJsonDocument &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariant &, std::false_type>,
        // method 'slotLabelSet'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QJsonDocument &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariant &, std::false_type>,
        // method 'slotHideDownloadSet'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QJsonDocument &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariant &, std::false_type>
    >,
    nullptr
} };

void OCC::LinkShare::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<LinkShare *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->expireDateSet(); break;
        case 1: _t->noteSet(); break;
        case 2: _t->nameSet(); break;
        case 3: _t->labelSet(); break;
        case 4: _t->setName((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->setNote((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->setExpireDate((*reinterpret_cast< std::add_pointer_t<QDate>>(_a[1]))); break;
        case 7: _t->setLabel((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 8: _t->setHideDownload((*reinterpret_cast< std::add_pointer_t<bool>>(_a[1]))); break;
        case 9: _t->slotNoteSet((*reinterpret_cast< std::add_pointer_t<QJsonDocument>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[2]))); break;
        case 10: _t->slotExpireDateSet((*reinterpret_cast< std::add_pointer_t<QJsonDocument>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[2]))); break;
        case 11: _t->slotNameSet((*reinterpret_cast< std::add_pointer_t<QJsonDocument>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[2]))); break;
        case 12: _t->slotLabelSet((*reinterpret_cast< std::add_pointer_t<QJsonDocument>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[2]))); break;
        case 13: _t->slotHideDownloadSet((*reinterpret_cast< std::add_pointer_t<QJsonDocument>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (LinkShare::*)();
            if (_t _q_method = &LinkShare::expireDateSet; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (LinkShare::*)();
            if (_t _q_method = &LinkShare::noteSet; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (LinkShare::*)();
            if (_t _q_method = &LinkShare::nameSet; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (LinkShare::*)();
            if (_t _q_method = &LinkShare::labelSet; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<LinkShare *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QUrl*>(_v) = _t->getLink(); break;
        case 1: *reinterpret_cast< QUrl*>(_v) = _t->getDirectDownloadLink(); break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->getPublicUpload(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->getShowFileListing(); break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->getName(); break;
        case 5: *reinterpret_cast< QString*>(_v) = _t->getNote(); break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->getLabel(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->getHideDownload(); break;
        case 8: *reinterpret_cast< QDate*>(_v) = _t->getExpireDate(); break;
        case 9: *reinterpret_cast< QString*>(_v) = _t->getToken(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<LinkShare *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 4: _t->setName(*reinterpret_cast< QString*>(_v)); break;
        case 5: _t->setNote(*reinterpret_cast< QString*>(_v)); break;
        case 6: _t->setLabel(*reinterpret_cast< QString*>(_v)); break;
        case 7: _t->setHideDownload(*reinterpret_cast< bool*>(_v)); break;
        case 8: _t->setExpireDate(*reinterpret_cast< QDate*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *OCC::LinkShare::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::LinkShare::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPELinkShareENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return Share::qt_metacast(_clname);
}

int OCC::LinkShare::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Share::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 14)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 14;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 14)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 14;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void OCC::LinkShare::expireDateSet()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void OCC::LinkShare::noteSet()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void OCC::LinkShare::nameSet()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void OCC::LinkShare::labelSet()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}
namespace CheckNotifySignalValidity_CLASSOCCSCOPELinkShareENDCLASS {
template<typename T> using has_nullary_hideDownloadSet = decltype(std::declval<T>().hideDownloadSet());
template<typename T> using has_unary_hideDownloadSet = decltype(std::declval<T>().hideDownloadSet(std::declval<bool>()));
static_assert(qxp::is_detected_v<has_nullary_hideDownloadSet, OCC::LinkShare> || qxp::is_detected_v<has_unary_hideDownloadSet, OCC::LinkShare>,
              "NOTIFY signal hideDownloadSet does not exist in class (or is private in its parent)");
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSOCCSCOPEUserGroupShareENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPEUserGroupShareENDCLASS = QtMocHelpers::stringData(
    "OCC::UserGroupShare",
    "noteSet",
    "",
    "noteSetError",
    "expireDateSet",
    "setNote",
    "note",
    "setExpireDate",
    "date",
    "slotNoteSet",
    "json",
    "QVariant",
    "slotExpireDateSet",
    "reply",
    "value",
    "expireDate"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPEUserGroupShareENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       2,   75, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   56,    2, 0x06,    3 /* Public */,
       3,    0,   57,    2, 0x06,    4 /* Public */,
       4,    0,   58,    2, 0x06,    5 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    1,   59,    2, 0x0a,    6 /* Public */,
       7,    1,   62,    2, 0x0a,    8 /* Public */,
       9,    2,   65,    2, 0x08,   10 /* Private */,
      12,    2,   70,    2, 0x08,   13 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    6,
    QMetaType::Void, QMetaType::QDate,    8,
    QMetaType::Void, QMetaType::QJsonDocument, 0x80000000 | 11,   10,    6,
    QMetaType::Void, QMetaType::QJsonDocument, 0x80000000 | 11,   13,   14,

 // properties: name, type, flags, notifyId, revision
       6, QMetaType::QString, 0x00015103, uint(0), 0,
      15, QMetaType::QDate, 0x00015103, uint(2), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::UserGroupShare::staticMetaObject = { {
    QMetaObject::SuperData::link<Share::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPEUserGroupShareENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPEUserGroupShareENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPEUserGroupShareENDCLASS_t,
        // property 'note'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'expireDate'
        QtPrivate::TypeAndForceComplete<QDate, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<UserGroupShare, std::true_type>,
        // method 'noteSet'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'noteSetError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'expireDateSet'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setNote'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'setExpireDate'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QDate &, std::false_type>,
        // method 'slotNoteSet'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QJsonDocument &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariant &, std::false_type>,
        // method 'slotExpireDateSet'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QJsonDocument &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariant &, std::false_type>
    >,
    nullptr
} };

void OCC::UserGroupShare::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UserGroupShare *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->noteSet(); break;
        case 1: _t->noteSetError(); break;
        case 2: _t->expireDateSet(); break;
        case 3: _t->setNote((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->setExpireDate((*reinterpret_cast< std::add_pointer_t<QDate>>(_a[1]))); break;
        case 5: _t->slotNoteSet((*reinterpret_cast< std::add_pointer_t<QJsonDocument>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[2]))); break;
        case 6: _t->slotExpireDateSet((*reinterpret_cast< std::add_pointer_t<QJsonDocument>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (UserGroupShare::*)();
            if (_t _q_method = &UserGroupShare::noteSet; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (UserGroupShare::*)();
            if (_t _q_method = &UserGroupShare::noteSetError; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (UserGroupShare::*)();
            if (_t _q_method = &UserGroupShare::expireDateSet; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<UserGroupShare *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->getNote(); break;
        case 1: *reinterpret_cast< QDate*>(_v) = _t->getExpireDate(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<UserGroupShare *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setNote(*reinterpret_cast< QString*>(_v)); break;
        case 1: _t->setExpireDate(*reinterpret_cast< QDate*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *OCC::UserGroupShare::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::UserGroupShare::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPEUserGroupShareENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return Share::qt_metacast(_clname);
}

int OCC::UserGroupShare::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Share::qt_metacall(_c, _id, _a);
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
        _id -= 2;
    }
    return _id;
}

// SIGNAL 0
void OCC::UserGroupShare::noteSet()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void OCC::UserGroupShare::noteSetError()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void OCC::UserGroupShare::expireDateSet()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSOCCSCOPEShareManagerENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPEShareManagerENDCLASS = QtMocHelpers::stringData(
    "OCC::ShareManager",
    "shareCreated",
    "",
    "OCC::SharePtr",
    "share",
    "linkShareCreated",
    "QSharedPointer<OCC::LinkShare>",
    "sharesFetched",
    "QList<OCC::SharePtr>",
    "shares",
    "serverError",
    "code",
    "message",
    "linkShareRequiresPassword",
    "slotSharesFetched",
    "reply",
    "slotLinkShareCreated",
    "slotShareCreated",
    "slotOcsError",
    "statusCode",
    "slotCreateE2eeShareJobFinised"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPEShareManagerENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,   74,    2, 0x06,    1 /* Public */,
       5,    1,   77,    2, 0x06,    3 /* Public */,
       7,    1,   80,    2, 0x06,    5 /* Public */,
      10,    2,   83,    2, 0x06,    7 /* Public */,
      13,    1,   88,    2, 0x06,   10 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      14,    1,   91,    2, 0x08,   12 /* Private */,
      16,    1,   94,    2, 0x08,   14 /* Private */,
      17,    1,   97,    2, 0x08,   16 /* Private */,
      18,    2,  100,    2, 0x08,   18 /* Private */,
      20,    2,  105,    2, 0x08,   21 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    4,
    QMetaType::Void, 0x80000000 | 8,    9,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   11,   12,
    QMetaType::Void, QMetaType::QString,   12,

 // slots: parameters
    QMetaType::Void, QMetaType::QJsonDocument,   15,
    QMetaType::Void, QMetaType::QJsonDocument,   15,
    QMetaType::Void, QMetaType::QJsonDocument,   15,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   19,   12,
    QMetaType::Void, QMetaType::Int, QMetaType::QString,   19,   12,

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::ShareManager::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPEShareManagerENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPEShareManagerENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPEShareManagerENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ShareManager, std::true_type>,
        // method 'shareCreated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const OCC::SharePtr &, std::false_type>,
        // method 'linkShareCreated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QSharedPointer<OCC::LinkShare> &, std::false_type>,
        // method 'sharesFetched'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QList<OCC::SharePtr> &, std::false_type>,
        // method 'serverError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'linkShareRequiresPassword'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'slotSharesFetched'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QJsonDocument &, std::false_type>,
        // method 'slotLinkShareCreated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QJsonDocument &, std::false_type>,
        // method 'slotShareCreated'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QJsonDocument &, std::false_type>,
        // method 'slotOcsError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'slotCreateE2eeShareJobFinised'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void OCC::ShareManager::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ShareManager *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->shareCreated((*reinterpret_cast< std::add_pointer_t<OCC::SharePtr>>(_a[1]))); break;
        case 1: _t->linkShareCreated((*reinterpret_cast< std::add_pointer_t<QSharedPointer<OCC::LinkShare>>>(_a[1]))); break;
        case 2: _t->sharesFetched((*reinterpret_cast< std::add_pointer_t<QList<OCC::SharePtr>>>(_a[1]))); break;
        case 3: _t->serverError((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 4: _t->linkShareRequiresPassword((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 5: _t->slotSharesFetched((*reinterpret_cast< std::add_pointer_t<QJsonDocument>>(_a[1]))); break;
        case 6: _t->slotLinkShareCreated((*reinterpret_cast< std::add_pointer_t<QJsonDocument>>(_a[1]))); break;
        case 7: _t->slotShareCreated((*reinterpret_cast< std::add_pointer_t<QJsonDocument>>(_a[1]))); break;
        case 8: _t->slotOcsError((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        case 9: _t->slotCreateE2eeShareJobFinised((*reinterpret_cast< std::add_pointer_t<int>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QString>>(_a[2]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< OCC::SharePtr >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QSharedPointer<OCC::LinkShare> >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<OCC::SharePtr> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ShareManager::*)(const OCC::SharePtr & );
            if (_t _q_method = &ShareManager::shareCreated; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ShareManager::*)(const QSharedPointer<OCC::LinkShare> & );
            if (_t _q_method = &ShareManager::linkShareCreated; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (ShareManager::*)(const QList<OCC::SharePtr> & );
            if (_t _q_method = &ShareManager::sharesFetched; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (ShareManager::*)(int , const QString & );
            if (_t _q_method = &ShareManager::serverError; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (ShareManager::*)(const QString & );
            if (_t _q_method = &ShareManager::linkShareRequiresPassword; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
    }
}

const QMetaObject *OCC::ShareManager::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::ShareManager::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPEShareManagerENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OCC::ShareManager::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void OCC::ShareManager::shareCreated(const OCC::SharePtr & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void OCC::ShareManager::linkShareCreated(const QSharedPointer<OCC::LinkShare> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void OCC::ShareManager::sharesFetched(const QList<OCC::SharePtr> & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void OCC::ShareManager::serverError(int _t1, const QString & _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void OCC::ShareManager::linkShareRequiresPassword(const QString & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
