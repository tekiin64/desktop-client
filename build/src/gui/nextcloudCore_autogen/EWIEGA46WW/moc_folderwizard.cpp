/****************************************************************************
** Meta object code from reading C++ file 'folderwizard.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/gui/folderwizard.h"
#include <QtNetwork/QSslError>
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'folderwizard.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSOCCSCOPEFormatWarningsWizardPageENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPEFormatWarningsWizardPageENDCLASS = QtMocHelpers::stringData(
    "OCC::FormatWarningsWizardPage"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPEFormatWarningsWizardPageENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::FormatWarningsWizardPage::staticMetaObject = { {
    QMetaObject::SuperData::link<QWizardPage::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPEFormatWarningsWizardPageENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPEFormatWarningsWizardPageENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPEFormatWarningsWizardPageENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FormatWarningsWizardPage, std::true_type>
    >,
    nullptr
} };

void OCC::FormatWarningsWizardPage::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *OCC::FormatWarningsWizardPage::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::FormatWarningsWizardPage::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPEFormatWarningsWizardPageENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWizardPage::qt_metacast(_clname);
}

int OCC::FormatWarningsWizardPage::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizardPage::qt_metacall(_c, _id, _a);
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSOCCSCOPEFolderWizardLocalPathENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPEFolderWizardLocalPathENDCLASS = QtMocHelpers::stringData(
    "OCC::FolderWizardLocalPath",
    "slotChooseLocalFolder",
    ""
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPEFolderWizardLocalPathENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   20,    2, 0x09,    1 /* Protected */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::FolderWizardLocalPath::staticMetaObject = { {
    QMetaObject::SuperData::link<FormatWarningsWizardPage::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPEFolderWizardLocalPathENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPEFolderWizardLocalPathENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPEFolderWizardLocalPathENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FolderWizardLocalPath, std::true_type>,
        // method 'slotChooseLocalFolder'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void OCC::FolderWizardLocalPath::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FolderWizardLocalPath *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->slotChooseLocalFolder(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *OCC::FolderWizardLocalPath::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::FolderWizardLocalPath::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPEFolderWizardLocalPathENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return FormatWarningsWizardPage::qt_metacast(_clname);
}

int OCC::FolderWizardLocalPath::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FormatWarningsWizardPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSOCCSCOPEFolderWizardRemotePathENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPEFolderWizardRemotePathENDCLASS = QtMocHelpers::stringData(
    "OCC::FolderWizardRemotePath",
    "showWarn",
    "",
    "slotAddRemoteFolder",
    "slotCreateRemoteFolder",
    "slotCreateRemoteFolderFinished",
    "slotHandleMkdirNetworkError",
    "QNetworkReply*",
    "slotHandleLsColNetworkError",
    "slotUpdateDirectories",
    "slotGatherEncryptedPaths",
    "QMap<QString,QString>",
    "slotRefreshFolders",
    "slotItemExpanded",
    "QTreeWidgetItem*",
    "slotCurrentItemChanged",
    "slotFolderEntryEdited",
    "text",
    "slotLsColFolderEntry",
    "slotTypedPathFound",
    "subpaths",
    "changeStyle"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPEFolderWizardRemotePathENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  110,    2, 0x109,    1 /* Protected | MethodIsConst  */,
       1,    0,  113,    2, 0x129,    3 /* Protected | MethodCloned | MethodIsConst  */,
       3,    0,  114,    2, 0x09,    4 /* Protected */,
       4,    1,  115,    2, 0x09,    5 /* Protected */,
       5,    0,  118,    2, 0x09,    7 /* Protected */,
       6,    1,  119,    2, 0x09,    8 /* Protected */,
       8,    1,  122,    2, 0x09,   10 /* Protected */,
       9,    1,  125,    2, 0x09,   12 /* Protected */,
      10,    2,  128,    2, 0x09,   14 /* Protected */,
      12,    0,  133,    2, 0x09,   17 /* Protected */,
      13,    1,  134,    2, 0x09,   18 /* Protected */,
      15,    1,  137,    2, 0x09,   20 /* Protected */,
      16,    1,  140,    2, 0x09,   22 /* Protected */,
      18,    0,  143,    2, 0x09,   24 /* Protected */,
      19,    1,  144,    2, 0x09,   25 /* Protected */,
      21,    0,  147,    2, 0x08,   27 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void, 0x80000000 | 7,    2,
    QMetaType::Void, QMetaType::QStringList,    2,
    QMetaType::Void, QMetaType::QString, 0x80000000 | 11,    2,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 14,    2,
    QMetaType::Void, 0x80000000 | 14,    2,
    QMetaType::Void, QMetaType::QString,   17,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QStringList,   20,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::FolderWizardRemotePath::staticMetaObject = { {
    QMetaObject::SuperData::link<FormatWarningsWizardPage::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPEFolderWizardRemotePathENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPEFolderWizardRemotePathENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPEFolderWizardRemotePathENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FolderWizardRemotePath, std::true_type>,
        // method 'showWarn'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'showWarn'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotAddRemoteFolder'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotCreateRemoteFolder'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'slotCreateRemoteFolderFinished'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotHandleMkdirNetworkError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>,
        // method 'slotHandleLsColNetworkError'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QNetworkReply *, std::false_type>,
        // method 'slotUpdateDirectories'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QStringList &, std::false_type>,
        // method 'slotGatherEncryptedPaths'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QMap<QString,QString> &, std::false_type>,
        // method 'slotRefreshFolders'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotItemExpanded'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTreeWidgetItem *, std::false_type>,
        // method 'slotCurrentItemChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<QTreeWidgetItem *, std::false_type>,
        // method 'slotFolderEntryEdited'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'slotLsColFolderEntry'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'slotTypedPathFound'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QStringList &, std::false_type>,
        // method 'changeStyle'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void OCC::FolderWizardRemotePath::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FolderWizardRemotePath *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->showWarn((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 1: _t->showWarn(); break;
        case 2: _t->slotAddRemoteFolder(); break;
        case 3: _t->slotCreateRemoteFolder((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 4: _t->slotCreateRemoteFolderFinished(); break;
        case 5: _t->slotHandleMkdirNetworkError((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1]))); break;
        case 6: _t->slotHandleLsColNetworkError((*reinterpret_cast< std::add_pointer_t<QNetworkReply*>>(_a[1]))); break;
        case 7: _t->slotUpdateDirectories((*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[1]))); break;
        case 8: _t->slotGatherEncryptedPaths((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QMap<QString,QString>>>(_a[2]))); break;
        case 9: _t->slotRefreshFolders(); break;
        case 10: _t->slotItemExpanded((*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[1]))); break;
        case 11: _t->slotCurrentItemChanged((*reinterpret_cast< std::add_pointer_t<QTreeWidgetItem*>>(_a[1]))); break;
        case 12: _t->slotFolderEntryEdited((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 13: _t->slotLsColFolderEntry(); break;
        case 14: _t->slotTypedPathFound((*reinterpret_cast< std::add_pointer_t<QStringList>>(_a[1]))); break;
        case 15: _t->changeStyle(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkReply* >(); break;
            }
            break;
        case 6:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QNetworkReply* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *OCC::FolderWizardRemotePath::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::FolderWizardRemotePath::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPEFolderWizardRemotePathENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return FormatWarningsWizardPage::qt_metacast(_clname);
}

int OCC::FolderWizardRemotePath::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = FormatWarningsWizardPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSOCCSCOPEFolderWizardSelectiveSyncENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPEFolderWizardSelectiveSyncENDCLASS = QtMocHelpers::stringData(
    "OCC::FolderWizardSelectiveSync",
    "virtualFilesCheckboxClicked",
    ""
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPEFolderWizardSelectiveSyncENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   20,    2, 0x08,    1 /* Private */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::FolderWizardSelectiveSync::staticMetaObject = { {
    QMetaObject::SuperData::link<QWizardPage::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPEFolderWizardSelectiveSyncENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPEFolderWizardSelectiveSyncENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPEFolderWizardSelectiveSyncENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FolderWizardSelectiveSync, std::true_type>,
        // method 'virtualFilesCheckboxClicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void OCC::FolderWizardSelectiveSync::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FolderWizardSelectiveSync *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->virtualFilesCheckboxClicked(); break;
        default: ;
        }
    }
    (void)_a;
}

const QMetaObject *OCC::FolderWizardSelectiveSync::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::FolderWizardSelectiveSync::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPEFolderWizardSelectiveSyncENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWizardPage::qt_metacast(_clname);
}

int OCC::FolderWizardSelectiveSync::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizardPage::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 1;
    }
    return _id;
}
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSOCCSCOPEFolderWizardENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPEFolderWizardENDCLASS = QtMocHelpers::stringData(
    "OCC::FolderWizard"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPEFolderWizardENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::FolderWizard::staticMetaObject = { {
    QMetaObject::SuperData::link<QWizard::staticMetaObject>(),
    qt_meta_stringdata_CLASSOCCSCOPEFolderWizardENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPEFolderWizardENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPEFolderWizardENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<FolderWizard, std::true_type>
    >,
    nullptr
} };

void OCC::FolderWizard::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    (void)_o;
    (void)_id;
    (void)_c;
    (void)_a;
}

const QMetaObject *OCC::FolderWizard::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *OCC::FolderWizard::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSOCCSCOPEFolderWizardENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QWizard::qt_metacast(_clname);
}

int OCC::FolderWizard::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWizard::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
