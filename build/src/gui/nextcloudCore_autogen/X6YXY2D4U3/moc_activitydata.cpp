/****************************************************************************
** Meta object code from reading C++ file 'activitydata.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.8.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../../src/gui/tray/activitydata.h"
#include <QtCore/qmetatype.h>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'activitydata.h' doesn't include <QObject>."
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
struct qt_meta_stringdata_CLASSOCCSCOPEActivityLinkENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPEActivityLinkENDCLASS = QtMocHelpers::stringData(
    "OCC::ActivityLink",
    "imageSource",
    "imageSourceHovered",
    "label",
    "link",
    "verb",
    "primary"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPEActivityLinkENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       6,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // properties: name, type, flags, notifyId, revision
       1, QMetaType::QString, 0x00015003, uint(-1), 0,
       2, QMetaType::QString, 0x00015003, uint(-1), 0,
       3, QMetaType::QString, 0x00015003, uint(-1), 0,
       4, QMetaType::QString, 0x00015003, uint(-1), 0,
       5, QMetaType::QByteArray, 0x00015003, uint(-1), 0,
       6, QMetaType::Bool, 0x00015003, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::ActivityLink::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSOCCSCOPEActivityLinkENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPEActivityLinkENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPEActivityLinkENDCLASS_t,
        // property 'imageSource'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'imageSourceHovered'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'label'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'link'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'verb'
        QtPrivate::TypeAndForceComplete<QByteArray, std::true_type>,
        // property 'primary'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<ActivityLink, std::true_type>
    >,
    nullptr
} };

void OCC::ActivityLink::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<ActivityLink *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->_imageSource; break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->_imageSourceHovered; break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->_label; break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->_link; break;
        case 4: *reinterpret_cast< QByteArray*>(_v) = _t->_verb; break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->_primary; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<ActivityLink *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->_imageSource != *reinterpret_cast< QString*>(_v)) {
                _t->_imageSource = *reinterpret_cast< QString*>(_v);
            }
            break;
        case 1:
            if (_t->_imageSourceHovered != *reinterpret_cast< QString*>(_v)) {
                _t->_imageSourceHovered = *reinterpret_cast< QString*>(_v);
            }
            break;
        case 2:
            if (_t->_label != *reinterpret_cast< QString*>(_v)) {
                _t->_label = *reinterpret_cast< QString*>(_v);
            }
            break;
        case 3:
            if (_t->_link != *reinterpret_cast< QString*>(_v)) {
                _t->_link = *reinterpret_cast< QString*>(_v);
            }
            break;
        case 4:
            if (_t->_verb != *reinterpret_cast< QByteArray*>(_v)) {
                _t->_verb = *reinterpret_cast< QByteArray*>(_v);
            }
            break;
        case 5:
            if (_t->_primary != *reinterpret_cast< bool*>(_v)) {
                _t->_primary = *reinterpret_cast< bool*>(_v);
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
struct qt_meta_stringdata_CLASSOCCSCOPEPreviewDataENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPEPreviewDataENDCLASS = QtMocHelpers::stringData(
    "OCC::PreviewData",
    "source",
    "link",
    "mimeType",
    "fileId",
    "view",
    "isMimeTypeIcon",
    "filename"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPEPreviewDataENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       7,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // properties: name, type, flags, notifyId, revision
       1, QMetaType::QString, 0x00015003, uint(-1), 0,
       2, QMetaType::QString, 0x00015003, uint(-1), 0,
       3, QMetaType::QString, 0x00015003, uint(-1), 0,
       4, QMetaType::Int, 0x00015003, uint(-1), 0,
       5, QMetaType::QString, 0x00015003, uint(-1), 0,
       6, QMetaType::Bool, 0x00015003, uint(-1), 0,
       7, QMetaType::QString, 0x00015003, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::PreviewData::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSOCCSCOPEPreviewDataENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPEPreviewDataENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPEPreviewDataENDCLASS_t,
        // property 'source'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'link'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'mimeType'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'fileId'
        QtPrivate::TypeAndForceComplete<int, std::true_type>,
        // property 'view'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'isMimeTypeIcon'
        QtPrivate::TypeAndForceComplete<bool, std::true_type>,
        // property 'filename'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<PreviewData, std::true_type>
    >,
    nullptr
} };

void OCC::PreviewData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<PreviewData *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->_source; break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->_link; break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->_mimeType; break;
        case 3: *reinterpret_cast< int*>(_v) = _t->_fileId; break;
        case 4: *reinterpret_cast< QString*>(_v) = _t->_view; break;
        case 5: *reinterpret_cast< bool*>(_v) = _t->_isMimeTypeIcon; break;
        case 6: *reinterpret_cast< QString*>(_v) = _t->_filename; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<PreviewData *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->_source != *reinterpret_cast< QString*>(_v)) {
                _t->_source = *reinterpret_cast< QString*>(_v);
            }
            break;
        case 1:
            if (_t->_link != *reinterpret_cast< QString*>(_v)) {
                _t->_link = *reinterpret_cast< QString*>(_v);
            }
            break;
        case 2:
            if (_t->_mimeType != *reinterpret_cast< QString*>(_v)) {
                _t->_mimeType = *reinterpret_cast< QString*>(_v);
            }
            break;
        case 3:
            if (_t->_fileId != *reinterpret_cast< int*>(_v)) {
                _t->_fileId = *reinterpret_cast< int*>(_v);
            }
            break;
        case 4:
            if (_t->_view != *reinterpret_cast< QString*>(_v)) {
                _t->_view = *reinterpret_cast< QString*>(_v);
            }
            break;
        case 5:
            if (_t->_isMimeTypeIcon != *reinterpret_cast< bool*>(_v)) {
                _t->_isMimeTypeIcon = *reinterpret_cast< bool*>(_v);
            }
            break;
        case 6:
            if (_t->_filename != *reinterpret_cast< QString*>(_v)) {
                _t->_filename = *reinterpret_cast< QString*>(_v);
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
struct qt_meta_stringdata_CLASSOCCSCOPERichSubjectParameterENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPERichSubjectParameterENDCLASS = QtMocHelpers::stringData(
    "OCC::RichSubjectParameter",
    "type",
    "id",
    "name",
    "path",
    "link"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPERichSubjectParameterENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       5,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // properties: name, type, flags, notifyId, revision
       1, QMetaType::QString, 0x00015003, uint(-1), 0,
       2, QMetaType::QString, 0x00015003, uint(-1), 0,
       3, QMetaType::QString, 0x00015003, uint(-1), 0,
       4, QMetaType::QString, 0x00015003, uint(-1), 0,
       5, QMetaType::QUrl, 0x00015003, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::RichSubjectParameter::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSOCCSCOPERichSubjectParameterENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPERichSubjectParameterENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPERichSubjectParameterENDCLASS_t,
        // property 'type'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'id'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'name'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'path'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'link'
        QtPrivate::TypeAndForceComplete<QUrl, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<RichSubjectParameter, std::true_type>
    >,
    nullptr
} };

void OCC::RichSubjectParameter::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<RichSubjectParameter *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->type; break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->id; break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->name; break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->path; break;
        case 4: *reinterpret_cast< QUrl*>(_v) = _t->link; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<RichSubjectParameter *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->type != *reinterpret_cast< QString*>(_v)) {
                _t->type = *reinterpret_cast< QString*>(_v);
            }
            break;
        case 1:
            if (_t->id != *reinterpret_cast< QString*>(_v)) {
                _t->id = *reinterpret_cast< QString*>(_v);
            }
            break;
        case 2:
            if (_t->name != *reinterpret_cast< QString*>(_v)) {
                _t->name = *reinterpret_cast< QString*>(_v);
            }
            break;
        case 3:
            if (_t->path != *reinterpret_cast< QString*>(_v)) {
                _t->path = *reinterpret_cast< QString*>(_v);
            }
            break;
        case 4:
            if (_t->link != *reinterpret_cast< QUrl*>(_v)) {
                _t->link = *reinterpret_cast< QUrl*>(_v);
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
struct qt_meta_stringdata_CLASSOCCSCOPETalkNotificationDataENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPETalkNotificationDataENDCLASS = QtMocHelpers::stringData(
    "OCC::TalkNotificationData",
    "conversationToken",
    "messageId",
    "messageSent",
    "userAvatar"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPETalkNotificationDataENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       4,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // properties: name, type, flags, notifyId, revision
       1, QMetaType::QString, 0x00015003, uint(-1), 0,
       2, QMetaType::QString, 0x00015003, uint(-1), 0,
       3, QMetaType::QString, 0x00015003, uint(-1), 0,
       4, QMetaType::QString, 0x00015003, uint(-1), 0,

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::TalkNotificationData::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSOCCSCOPETalkNotificationDataENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPETalkNotificationDataENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPETalkNotificationDataENDCLASS_t,
        // property 'conversationToken'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'messageId'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'messageSent'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // property 'userAvatar'
        QtPrivate::TypeAndForceComplete<QString, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<TalkNotificationData, std::true_type>
    >,
    nullptr
} };

void OCC::TalkNotificationData::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<TalkNotificationData *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QString*>(_v) = _t->conversationToken; break;
        case 1: *reinterpret_cast< QString*>(_v) = _t->messageId; break;
        case 2: *reinterpret_cast< QString*>(_v) = _t->messageSent; break;
        case 3: *reinterpret_cast< QString*>(_v) = _t->userAvatar; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<TalkNotificationData *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->conversationToken != *reinterpret_cast< QString*>(_v)) {
                _t->conversationToken = *reinterpret_cast< QString*>(_v);
            }
            break;
        case 1:
            if (_t->messageId != *reinterpret_cast< QString*>(_v)) {
                _t->messageId = *reinterpret_cast< QString*>(_v);
            }
            break;
        case 2:
            if (_t->messageSent != *reinterpret_cast< QString*>(_v)) {
                _t->messageSent = *reinterpret_cast< QString*>(_v);
            }
            break;
        case 3:
            if (_t->userAvatar != *reinterpret_cast< QString*>(_v)) {
                _t->userAvatar = *reinterpret_cast< QString*>(_v);
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
struct qt_meta_stringdata_CLASSOCCSCOPEActivityENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSOCCSCOPEActivityENDCLASS = QtMocHelpers::stringData(
    "OCC::Activity",
    "type",
    "OCC::Activity::Type",
    "talkNotificationData",
    "OCC::TalkNotificationData",
    "subjectRichParameters",
    "QVariantMap",
    "Type",
    "DummyFetchingActivityType",
    "NotificationType",
    "SyncResultType",
    "SyncFileItemType",
    "ActivityType",
    "DummyMoreActivitiesAvailableType"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSOCCSCOPEActivityENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       3,   14, // properties
       1,   29, // enums/sets
       0,    0, // constructors
       4,       // flags
       0,       // signalCount

 // properties: name, type, flags, notifyId, revision
       1, 0x80000000 | 2, 0x0001500b, uint(-1), 0,
       3, 0x80000000 | 4, 0x0001500b, uint(-1), 0,
       5, 0x80000000 | 6, 0x0001500b, uint(-1), 0,

 // enums: name, alias, flags, count, data
       7,    7, 0x0,    6,   34,

 // enum data: key, value
       8, uint(OCC::Activity::DummyFetchingActivityType),
       9, uint(OCC::Activity::NotificationType),
      10, uint(OCC::Activity::SyncResultType),
      11, uint(OCC::Activity::SyncFileItemType),
      12, uint(OCC::Activity::ActivityType),
      13, uint(OCC::Activity::DummyMoreActivitiesAvailableType),

       0        // eod
};

Q_CONSTINIT const QMetaObject OCC::Activity::staticMetaObject = { {
    nullptr,
    qt_meta_stringdata_CLASSOCCSCOPEActivityENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSOCCSCOPEActivityENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSOCCSCOPEActivityENDCLASS_t,
        // property 'type'
        QtPrivate::TypeAndForceComplete<OCC::Activity::Type, std::true_type>,
        // property 'talkNotificationData'
        QtPrivate::TypeAndForceComplete<OCC::TalkNotificationData, std::true_type>,
        // property 'subjectRichParameters'
        QtPrivate::TypeAndForceComplete<QVariantMap, std::true_type>,
        // enum 'Type'
        QtPrivate::TypeAndForceComplete<Activity::Type, std::true_type>,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<Activity, std::true_type>
    >,
    nullptr
} };

void OCC::Activity::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::RegisterPropertyMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< OCC::Activity::Type >(); break;
        }
    }  else if (_c == QMetaObject::ReadProperty) {
        auto *_t = reinterpret_cast<Activity *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< OCC::Activity::Type*>(_v) = _t->_type; break;
        case 1: *reinterpret_cast< OCC::TalkNotificationData*>(_v) = _t->_talkNotificationData; break;
        case 2: *reinterpret_cast< QVariantMap*>(_v) = _t->_subjectRichParameters; break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = reinterpret_cast<Activity *>(_o);
        (void)_t;
        void *_v = _a[0];
        switch (_id) {
        case 0:
            if (_t->_type != *reinterpret_cast< OCC::Activity::Type*>(_v)) {
                _t->_type = *reinterpret_cast< OCC::Activity::Type*>(_v);
            }
            break;
        case 1:
            if (_t->_talkNotificationData != *reinterpret_cast< OCC::TalkNotificationData*>(_v)) {
                _t->_talkNotificationData = *reinterpret_cast< OCC::TalkNotificationData*>(_v);
            }
            break;
        case 2:
            if (_t->_subjectRichParameters != *reinterpret_cast< QVariantMap*>(_v)) {
                _t->_subjectRichParameters = *reinterpret_cast< QVariantMap*>(_v);
            }
            break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    } else if (_c == QMetaObject::BindableProperty) {
    }
    (void)_o;
}
QT_WARNING_POP
