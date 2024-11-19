/****************************************************************************
** Meta object code from reading C++ file 'unifiedsearchresultslistmodel.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/gui/tray/unifiedsearchresultslistmodel.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'unifiedsearchresultslistmodel.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSOCCSCOPEUnifiedSearchResultsListModelENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPEUnifiedSearchResultsListModelENDCLASS = QtMocHelpers::stringData(
    "OCC::UnifiedSearchResultsListModel",
    "currentFetchMoreInProgressProviderIdChanged",
    "",
    "isSearchInProgressChanged",
    "errorStringChanged",
    "searchTermChanged",
    "waitingForSearchTermEditEndChanged",
    "setSearchTerm",
    "term",
    "slotSearchTermEditingFinished",
    "slotFetchProvidersFinished",
    "json",
    "statusCode",
    "slotSearchForProviderFinished",
    "resultClicked",
    "providerId",
    "resourceUrl",
    "fetchMoreTriggerClicked",
    "isSearchInProgress",
    "currentFetchMoreInProgressProviderId",
    "errorString",
    "searchTerm",
    "waitingForSearchTermEditEnd"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPEUnifiedSearchResultsListModelENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      11,   14, // methods
       5,  107, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   80,    2, 0x06,    6 /* Public */,
       3,    0,   81,    2, 0x06,    7 /* Public */,
       4,    0,   82,    2, 0x06,    8 /* Public */,
       5,    0,   83,    2, 0x06,    9 /* Public */,
       6,    0,   84,    2, 0x06,   10 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       7,    1,   85,    2, 0x0a,   11 /* Public */,
       9,    0,   88,    2, 0x08,   13 /* Private */,
      10,    2,   89,    2, 0x08,   14 /* Private */,
      13,    2,   94,    2, 0x08,   17 /* Private */,

 // methods: name, argc, parameters, tag, flags, initial metatype offsets
      14,    2,   99,    2, 0x102,   20 /* Public | MethodIsConst  */,
      17,    1,  104,    2, 0x02,   23 /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    8,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QJsonDocument, QMetaType::Int,   11,   12,
    QMetaType::Void, QMetaType::QJsonDocument, QMetaType::Int,   11,   12,

 // methods: parameters
    QMetaType::Void, QMetaType::QString, QMetaType::QUrl,   15,   16,
    QMetaType::Void, QMetaType::QString,   15,

 // properties: name, type, flags, notifyId, revision
      18, QMetaType::Bool, 0x00015001, uint(1), 0,
      19, QMetaType::QString, 0x00015001, uint(0), 0,
      20, QMetaType::QString, 0x00015001, uint(2), 0,
      21, QMetaType::QString, 0x00015103, uint(3), 0,
      22, QMetaType::Bool, 0x00015001, uint(4), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::UnifiedSearchResultsListModel::staticMetaObject = { {
    QMetaObject::SuperData::link<QAbstractListModel::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPEUnifiedSearchResultsListModelENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPEUnifiedSearchResultsListModelENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPEUnifiedSearchResultsListModelENDCLASS_t,
        // property 'isSearchInProgress'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'currentFetchMoreInProgressProviderId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'errorString'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'searchTerm'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'waitingForSearchTermEditEnd'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<UnifiedSearchResultsListModel, std::true_type>,
        // method 'currentFetchMoreInProgressProviderIdChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'isSearchInProgressChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'errorStringChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'searchTermChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'waitingForSearchTermEditEndChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'setSearchTerm'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'slotSearchTermEditingFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotFetchProvidersFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QJsonDocument &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'slotSearchForProviderFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QJsonDocument &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'resultClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QUrl &, std::false_type>,
        // method 'fetchMoreTriggerClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>
    >,
    nullptr
} };

void OCC::UnifiedSearchResultsListModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<UnifiedSearchResultsListModel *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->currentFetchMoreInProgressProviderIdChanged(); break;
        case 1: _t->isSearchInProgressChanged(); break;
        case 2: _t->errorStringChanged(); break;
        case 3: _t->searchTermChanged(); break;
        case 4: _t->waitingForSearchTermEditEndChanged(); break;
        case 5: _t->setSearchTerm((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 6: _t->slotSearchTermEditingFinished(); break;
        case 7: _t->slotFetchProvidersFinished((*reinterpret_cast< std::add_pointer_t<QJsonDocument>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 8: _t->slotSearchForProviderFinished((*reinterpret_cast< std::add_pointer_t<QJsonDocument>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 9: _t->resultClicked((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QUrl>>(_a[2]))); break;
        case 10: _t->fetchMoreTriggerClicked((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (UnifiedSearchResultsListModel::*)();
            if (_t _q_method = &UnifiedSearchResultsListModel::currentFetchMoreInProgressProviderIdChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (UnifiedSearchResultsListModel::*)();
            if (_t _q_method = &UnifiedSearchResultsListModel::isSearchInProgressChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (UnifiedSearchResultsListModel::*)();
            if (_t _q_method = &UnifiedSearchResultsListModel::errorStringChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (UnifiedSearchResultsListModel::*)();
            if (_t _q_method = &UnifiedSearchResultsListModel::searchTermChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (UnifiedSearchResultsListModel::*)();
            if (_t _q_method = &UnifiedSearchResultsListModel::waitingForSearchTermEditEndChanged; *reinterpret_cast<_t *>(_a[1]) == _q_method) {
                *result = 4;
                return;
            }
        }
    } else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<UnifiedSearchResultsListModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< bool*>(_v) = _t->isSearchInProgress(); break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->currentFetchMoreInProgressProviderId(); break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->errorString(); break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->searchTerm(); break;
        case 4: *reinterpret_cast< bool*>(_v) = _t->waitingForSearchTermEditEnd(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<UnifiedSearchResultsListModel *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 3: _t->setSearchTerm(*reinterpret_cast< QString*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
}

const QMetaObject *OCC::UnifiedSearchResultsListModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::UnifiedSearchResultsListModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPEUnifiedSearchResultsListModelENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QAbstractListModel::qt_metacast(_clname);
}

int OCC::UnifiedSearchResultsListModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QAbstractListModel::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 11)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 11;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 11)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 11;
    }else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::BindableProperty
            || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void OCC::UnifiedSearchResultsListModel::currentFetchMoreInProgressProviderIdChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void OCC::UnifiedSearchResultsListModel::isSearchInProgressChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void OCC::UnifiedSearchResultsListModel::errorStringChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}

// SIGNAL 3
void OCC::UnifiedSearchResultsListModel::searchTermChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void OCC::UnifiedSearchResultsListModel::waitingForSearchTermEditEndChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
