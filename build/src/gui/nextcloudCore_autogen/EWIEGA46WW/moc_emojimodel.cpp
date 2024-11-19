/****************************************************************************
** Meta object code from reading C++ file 'emojimodel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/gui/emojimodel.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'emojimodel.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSOCCSCOPEEmojiENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPEEmojiENDCLASS = QtMocHelpers::stringData(
    "OCC::Emoji",
    "unicode",
    "shortname",
    "isCustom"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPEEmojiENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       3,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // properties: name, type, flags, notifyId, revision
       1, QMetaType::QString, 0x00015003, uint(-1), 0,
       2, QMetaType::QString, 0x00015003, uint(-1), 0,
       3, QMetaType::Bool, 0x00015003, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::Emoji::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSOCCSCOPEEmojiENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPEEmojiENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPEEmojiENDCLASS_t,
        // property 'unicode'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'shortname'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'isCustom'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Emoji, std::true_type>
    >,
    nullptr
} };

void OCC::Emoji::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<Emoji *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->unicode; break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->shortname; break;
        case 2: *reinterpret_cast< bool*>(_v) = _t->isCustom; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<Emoji *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->unicode != *reinterpret_cast< QString*>(_v)) {
                _t->unicode = *reinterpret_cast< QString*>(_v);
            }
            break;
        case 1:
            if (_t->shortname != *reinterpret_cast< QString*>(_v)) {
                _t->shortname = *reinterpret_cast< QString*>(_v);
            }
            break;
        case 2:
            if (_t->isCustom != *reinterpret_cast< bool*>(_v)) {
                _t->isCustom = *reinterpret_cast< bool*>(_v);
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
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSOCCSCOPEEmojiModelENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPEEmojiModelENDCLASS = QtMocHelpers::stringData(
    "OCC::EmojiModel",
    "historyChanged",
    "",
    "modelChanged",
    "history",
    "QVariantList",
    "setCategory",
    "category",
    "emojiUsed",
    "QVariant",
    "modelData",
    "model",
    "emojiCategoriesModel",
    "QAbstractListModel*",
    "people",
    "nature",
    "food",
    "activity",
    "travel",
    "objects",
    "symbols",
    "flags"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPEEmojiModelENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
      11,   53, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x06,   12 /* Public */,
       3,    0,   45,    2, 0x06,   13 /* Public */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
       4,    0,   46,    2, 0x102,   14 /* Public | MethodIsConst  */,
       6,    1,   47,    2, 0x02,   15 /* Public */,
       8,    1,   50,    2, 0x02,   17 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,

 // methods: parameters
    0x80000000 | 5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void, 0x80000000 | 9,   10,

 // properties: name, type, flags, notifyId, revision
      11, 0x80000000 | 5, 0x00015009, uint(1), 0,
      12, 0x80000000 | 13, 0x00015409, uint(-1), 0,
       4, 0x80000000 | 5, 0x00015009, uint(0), 0,
      14, 0x80000000 | 5, 0x00015409, uint(-1), 0,
      15, 0x80000000 | 5, 0x00015409, uint(-1), 0,
      16, 0x80000000 | 5, 0x00015409, uint(-1), 0,
      17, 0x80000000 | 5, 0x00015409, uint(-1), 0,
      18, 0x80000000 | 5, 0x00015409, uint(-1), 0,
      19, 0x80000000 | 5, 0x00015409, uint(-1), 0,
      20, 0x80000000 | 5, 0x00015409, uint(-1), 0,
      21, 0x80000000 | 5, 0x00015409, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::EmojiModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QObject::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPEEmojiModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPEEmojiModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPEEmojiModelENDCLASS_t,
        // property 'model'
        QtPrivate::TypeAndForceComplete<QVariantList, std::true_type>,
        // property 'emojiCategoriesModel'
        QtPrivate::TypeAndForceComplete<QAbstractListModel*, std::true_type>,
        // property 'history'
        QtPrivate::TypeAndForceComplete<QVariantList, std::true_type>,
        // property 'people'
        QtPrivate::TypeAndForceComplete<QVariantList, std::true_type>,
        // property 'nature'
        QtPrivate::TypeAndForceComplete<QVariantList, std::true_type>,
        // property 'food'
        QtPrivate::TypeAndForceComplete<QVariantList, std::true_type>,
        // property 'activity'
        QtPrivate::TypeAndForceComplete<QVariantList, std::true_type>,
        // property 'travel'
        QtPrivate::TypeAndForceComplete<QVariantList, std::true_type>,
        // property 'objects'
        QtPrivate::TypeAndForceComplete<QVariantList, std::true_type>,
        // property 'symbols'
        QtPrivate::TypeAndForceComplete<QVariantList, std::true_type>,
        // property 'flags'
        QtPrivate::TypeAndForceComplete<QVariantList, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<EmojiModel, std::true_type>,
        // method 'historyChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'modelChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'history'
        QtPrivate::TypeAndForceComplete<QVariantList, std::false_type>,
        // method 'setCategory'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'emojiUsed'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVariant &, std::false_type>
    >,
    nullptr
} };

void OCC::EmojiModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EmojiModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->historyChanged(); break;
        case 1: _t->modelChanged(); break;
        case 2: { QVariantList _r = _t->history();
            if (_a[0]) *reinterpret_cast< QVariantList*>(_a[0]) = std::move(_r); }  break;
        case 3: _t->setCategory((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->emojiUsed((*reinterpret_cast< std::add_pointer_t<QVariant>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (EmojiModel::*)();
            if (_t _q_method = &EmojiModel::historyChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (EmojiModel::*)();
            if (_t _q_method = &EmojiModel::modelChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
    } else if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QAbstractListModel* >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<EmojiModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QVariantList*>(_v) = _t->model(); break;
        case 1: *reinterpret_cast< QAbstractListModel**>(_v) = _t->emojiCategoriesModel(); break;
        case 2: *reinterpret_cast< QVariantList*>(_v) = _t->history(); break;
        case 3: *reinterpret_cast< QVariantList*>(_v) = _t->people; break;
        case 4: *reinterpret_cast< QVariantList*>(_v) = _t->nature; break;
        case 5: *reinterpret_cast< QVariantList*>(_v) = _t->food; break;
        case 6: *reinterpret_cast< QVariantList*>(_v) = _t->activity; break;
        case 7: *reinterpret_cast< QVariantList*>(_v) = _t->travel; break;
        case 8: *reinterpret_cast< QVariantList*>(_v) = _t->objects; break;
        case 9: *reinterpret_cast< QVariantList*>(_v) = _t->symbols; break;
        case 10: *reinterpret_cast< QVariantList*>(_v) = _t->flags; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *OCC::EmojiModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::EmojiModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPEEmojiModelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int OCC::EmojiModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 5;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    }
    return _id;
}

// SIGNAL 0
void OCC::EmojiModel::historyChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void OCC::EmojiModel::modelChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}
QT_WARNING_POP
