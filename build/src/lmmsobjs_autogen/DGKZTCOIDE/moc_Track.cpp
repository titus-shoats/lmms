/****************************************************************************
** Meta object code from reading C++ file 'Track.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../include/Track.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Track.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TrackContentObject_t {
    QByteArrayData data[8];
    char stringdata0[85];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TrackContentObject_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TrackContentObject_t qt_meta_stringdata_TrackContentObject = {
    {
QT_MOC_LITERAL(0, 0, 18), // "TrackContentObject"
QT_MOC_LITERAL(1, 19, 13), // "lengthChanged"
QT_MOC_LITERAL(2, 33, 0), // ""
QT_MOC_LITERAL(3, 34, 15), // "positionChanged"
QT_MOC_LITERAL(4, 50, 12), // "destroyedTCO"
QT_MOC_LITERAL(5, 63, 4), // "copy"
QT_MOC_LITERAL(6, 68, 5), // "paste"
QT_MOC_LITERAL(7, 74, 10) // "toggleMute"

    },
    "TrackContentObject\0lengthChanged\0\0"
    "positionChanged\0destroyedTCO\0copy\0"
    "paste\0toggleMute"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TrackContentObject[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,
       4,    0,   46,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   47,    2, 0x0a /* Public */,
       6,    0,   48,    2, 0x0a /* Public */,
       7,    0,   49,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TrackContentObject::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TrackContentObject *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->lengthChanged(); break;
        case 1: _t->positionChanged(); break;
        case 2: _t->destroyedTCO(); break;
        case 3: _t->copy(); break;
        case 4: _t->paste(); break;
        case 5: _t->toggleMute(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TrackContentObject::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TrackContentObject::lengthChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TrackContentObject::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TrackContentObject::positionChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TrackContentObject::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TrackContentObject::destroyedTCO)) {
                *result = 2;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject TrackContentObject::staticMetaObject = { {
    &Model::staticMetaObject,
    qt_meta_stringdata_TrackContentObject.data,
    qt_meta_data_TrackContentObject,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TrackContentObject::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TrackContentObject::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TrackContentObject.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "JournallingObject"))
        return static_cast< JournallingObject*>(this);
    return Model::qt_metacast(_clname);
}

int TrackContentObject::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Model::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
    return _id;
}

// SIGNAL 0
void TrackContentObject::lengthChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void TrackContentObject::positionChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void TrackContentObject::destroyedTCO()
{
    QMetaObject::activate(this, &staticMetaObject, 2, nullptr);
}
struct qt_meta_stringdata_TrackContentObjectView_t {
    QByteArrayData data[16];
    char stringdata0[197];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TrackContentObjectView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TrackContentObjectView_t qt_meta_stringdata_TrackContentObjectView = {
    {
QT_MOC_LITERAL(0, 0, 22), // "TrackContentObjectView"
QT_MOC_LITERAL(1, 23, 5), // "close"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 3), // "cut"
QT_MOC_LITERAL(4, 34, 6), // "remove"
QT_MOC_LITERAL(5, 41, 6), // "update"
QT_MOC_LITERAL(6, 48, 12), // "updateLength"
QT_MOC_LITERAL(7, 61, 14), // "updatePosition"
QT_MOC_LITERAL(8, 76, 10), // "mutedColor"
QT_MOC_LITERAL(9, 87, 20), // "mutedBackgroundColor"
QT_MOC_LITERAL(10, 108, 13), // "selectedColor"
QT_MOC_LITERAL(11, 122, 9), // "textColor"
QT_MOC_LITERAL(12, 132, 19), // "textBackgroundColor"
QT_MOC_LITERAL(13, 152, 15), // "textShadowColor"
QT_MOC_LITERAL(14, 168, 19), // "BBPatternBackground"
QT_MOC_LITERAL(15, 188, 8) // "gradient"

    },
    "TrackContentObjectView\0close\0\0cut\0"
    "remove\0update\0updateLength\0updatePosition\0"
    "mutedColor\0mutedBackgroundColor\0"
    "selectedColor\0textColor\0textBackgroundColor\0"
    "textShadowColor\0BBPatternBackground\0"
    "gradient"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TrackContentObjectView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       8,   50, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x0a /* Public */,
       3,    0,   45,    2, 0x0a /* Public */,
       4,    0,   46,    2, 0x0a /* Public */,
       5,    0,   47,    2, 0x0a /* Public */,
       6,    0,   48,    2, 0x09 /* Protected */,
       7,    0,   49,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       8, QMetaType::QColor, 0x00095103,
       9, QMetaType::QColor, 0x00095103,
      10, QMetaType::QColor, 0x00095103,
      11, QMetaType::QColor, 0x00095103,
      12, QMetaType::QColor, 0x00095103,
      13, QMetaType::QColor, 0x00095103,
      14, QMetaType::QColor, 0x00095103,
      15, QMetaType::Bool, 0x00095103,

       0        // eod
};

void TrackContentObjectView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TrackContentObjectView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { bool _r = _t->close();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->cut(); break;
        case 2: _t->remove(); break;
        case 3: _t->update(); break;
        case 4: _t->updateLength(); break;
        case 5: _t->updatePosition(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<TrackContentObjectView *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = _t->mutedColor(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = _t->mutedBackgroundColor(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = _t->selectedColor(); break;
        case 3: *reinterpret_cast< QColor*>(_v) = _t->textColor(); break;
        case 4: *reinterpret_cast< QColor*>(_v) = _t->textBackgroundColor(); break;
        case 5: *reinterpret_cast< QColor*>(_v) = _t->textShadowColor(); break;
        case 6: *reinterpret_cast< QColor*>(_v) = _t->BBPatternBackground(); break;
        case 7: *reinterpret_cast< bool*>(_v) = _t->gradient(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<TrackContentObjectView *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setMutedColor(*reinterpret_cast< QColor*>(_v)); break;
        case 1: _t->setMutedBackgroundColor(*reinterpret_cast< QColor*>(_v)); break;
        case 2: _t->setSelectedColor(*reinterpret_cast< QColor*>(_v)); break;
        case 3: _t->setTextColor(*reinterpret_cast< QColor*>(_v)); break;
        case 4: _t->setTextBackgroundColor(*reinterpret_cast< QColor*>(_v)); break;
        case 5: _t->setTextShadowColor(*reinterpret_cast< QColor*>(_v)); break;
        case 6: _t->setBBPatternBackground(*reinterpret_cast< QColor*>(_v)); break;
        case 7: _t->setGradient(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject TrackContentObjectView::staticMetaObject = { {
    &selectableObject::staticMetaObject,
    qt_meta_stringdata_TrackContentObjectView.data,
    qt_meta_data_TrackContentObjectView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TrackContentObjectView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TrackContentObjectView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TrackContentObjectView.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ModelView"))
        return static_cast< ModelView*>(this);
    return selectableObject::qt_metacast(_clname);
}

int TrackContentObjectView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = selectableObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 6)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 6;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 6)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 6;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_TrackContentWidget_t {
    QByteArrayData data[10];
    char stringdata0[105];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TrackContentWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TrackContentWidget_t qt_meta_stringdata_TrackContentWidget = {
    {
QT_MOC_LITERAL(0, 0, 18), // "TrackContentWidget"
QT_MOC_LITERAL(1, 19, 6), // "update"
QT_MOC_LITERAL(2, 26, 0), // ""
QT_MOC_LITERAL(3, 27, 14), // "changePosition"
QT_MOC_LITERAL(4, 42, 8), // "MidiTime"
QT_MOC_LITERAL(5, 51, 6), // "newPos"
QT_MOC_LITERAL(6, 58, 11), // "darkerColor"
QT_MOC_LITERAL(7, 70, 12), // "lighterColor"
QT_MOC_LITERAL(8, 83, 9), // "gridColor"
QT_MOC_LITERAL(9, 93, 11) // "embossColor"

    },
    "TrackContentWidget\0update\0\0changePosition\0"
    "MidiTime\0newPos\0darkerColor\0lighterColor\0"
    "gridColor\0embossColor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TrackContentWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       4,   34, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x0a /* Public */,
       3,    1,   30,    2, 0x0a /* Public */,
       3,    0,   33,    2, 0x2a /* Public | MethodCloned */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void,

 // properties: name, type, flags
       6, QMetaType::QBrush, 0x00095103,
       7, QMetaType::QBrush, 0x00095103,
       8, QMetaType::QBrush, 0x00095103,
       9, QMetaType::QBrush, 0x00095103,

       0        // eod
};

void TrackContentWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TrackContentWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->update(); break;
        case 1: _t->changePosition((*reinterpret_cast< const MidiTime(*)>(_a[1]))); break;
        case 2: _t->changePosition(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<TrackContentWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QBrush*>(_v) = _t->darkerColor(); break;
        case 1: *reinterpret_cast< QBrush*>(_v) = _t->lighterColor(); break;
        case 2: *reinterpret_cast< QBrush*>(_v) = _t->gridColor(); break;
        case 3: *reinterpret_cast< QBrush*>(_v) = _t->embossColor(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<TrackContentWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setDarkerColor(*reinterpret_cast< QBrush*>(_v)); break;
        case 1: _t->setLighterColor(*reinterpret_cast< QBrush*>(_v)); break;
        case 2: _t->setGridColor(*reinterpret_cast< QBrush*>(_v)); break;
        case 3: _t->setEmbossColor(*reinterpret_cast< QBrush*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject TrackContentWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_TrackContentWidget.data,
    qt_meta_data_TrackContentWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TrackContentWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TrackContentWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TrackContentWidget.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "JournallingObject"))
        return static_cast< JournallingObject*>(this);
    return QWidget::qt_metacast(_clname);
}

int TrackContentWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 3;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 4;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 4;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
struct qt_meta_stringdata_TrackOperationsWidget_t {
    QByteArrayData data[13];
    char stringdata0[147];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TrackOperationsWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TrackOperationsWidget_t qt_meta_stringdata_TrackOperationsWidget = {
    {
QT_MOC_LITERAL(0, 0, 21), // "TrackOperationsWidget"
QT_MOC_LITERAL(1, 22, 21), // "trackRemovalScheduled"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 10), // "TrackView*"
QT_MOC_LITERAL(4, 56, 1), // "t"
QT_MOC_LITERAL(5, 58, 10), // "cloneTrack"
QT_MOC_LITERAL(6, 69, 11), // "removeTrack"
QT_MOC_LITERAL(7, 81, 10), // "updateMenu"
QT_MOC_LITERAL(8, 92, 15), // "toggleRecording"
QT_MOC_LITERAL(9, 108, 2), // "on"
QT_MOC_LITERAL(10, 111, 11), // "recordingOn"
QT_MOC_LITERAL(11, 123, 12), // "recordingOff"
QT_MOC_LITERAL(12, 136, 10) // "clearTrack"

    },
    "TrackOperationsWidget\0trackRemovalScheduled\0"
    "\0TrackView*\0t\0cloneTrack\0removeTrack\0"
    "updateMenu\0toggleRecording\0on\0recordingOn\0"
    "recordingOff\0clearTrack"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TrackOperationsWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    1,   60,    2, 0x08 /* Private */,
      10,    0,   63,    2, 0x08 /* Private */,
      11,    0,   64,    2, 0x08 /* Private */,
      12,    0,   65,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TrackOperationsWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TrackOperationsWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->trackRemovalScheduled((*reinterpret_cast< TrackView*(*)>(_a[1]))); break;
        case 1: _t->cloneTrack(); break;
        case 2: _t->removeTrack(); break;
        case 3: _t->updateMenu(); break;
        case 4: _t->toggleRecording((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->recordingOn(); break;
        case 6: _t->recordingOff(); break;
        case 7: _t->clearTrack(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< TrackView* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TrackOperationsWidget::*)(TrackView * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TrackOperationsWidget::trackRemovalScheduled)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TrackOperationsWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_TrackOperationsWidget.data,
    qt_meta_data_TrackOperationsWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TrackOperationsWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TrackOperationsWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TrackOperationsWidget.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int TrackOperationsWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    }
    return _id;
}

// SIGNAL 0
void TrackOperationsWidget::trackRemovalScheduled(TrackView * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_Track_t {
    QByteArrayData data[9];
    char stringdata0[105];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Track_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Track_t qt_meta_stringdata_Track = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Track"
QT_MOC_LITERAL(1, 6, 14), // "destroyedTrack"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 11), // "nameChanged"
QT_MOC_LITERAL(4, 34, 23), // "trackContentObjectAdded"
QT_MOC_LITERAL(5, 58, 19), // "TrackContentObject*"
QT_MOC_LITERAL(6, 78, 7), // "setName"
QT_MOC_LITERAL(7, 86, 7), // "newName"
QT_MOC_LITERAL(8, 94, 10) // "toggleSolo"

    },
    "Track\0destroyedTrack\0\0nameChanged\0"
    "trackContentObjectAdded\0TrackContentObject*\0"
    "setName\0newName\0toggleSolo"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Track[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,
       3,    0,   40,    2, 0x06 /* Public */,
       4,    1,   41,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    1,   44,    2, 0x0a /* Public */,
       8,    0,   47,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,

       0        // eod
};

void Track::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Track *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->destroyedTrack(); break;
        case 1: _t->nameChanged(); break;
        case 2: _t->trackContentObjectAdded((*reinterpret_cast< TrackContentObject*(*)>(_a[1]))); break;
        case 3: _t->setName((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 4: _t->toggleSolo(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< TrackContentObject* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Track::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Track::destroyedTrack)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Track::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Track::nameChanged)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Track::*)(TrackContentObject * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Track::trackContentObjectAdded)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject Track::staticMetaObject = { {
    &Model::staticMetaObject,
    qt_meta_stringdata_Track.data,
    qt_meta_data_Track,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Track::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Track::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Track.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "JournallingObject"))
        return static_cast< JournallingObject*>(this);
    return Model::qt_metacast(_clname);
}

int Track::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Model::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void Track::destroyedTrack()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Track::nameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Track::trackContentObjectAdded(TrackContentObject * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
struct qt_meta_stringdata_TrackView_t {
    QByteArrayData data[6];
    char stringdata0[55];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TrackView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TrackView_t qt_meta_stringdata_TrackView = {
    {
QT_MOC_LITERAL(0, 0, 9), // "TrackView"
QT_MOC_LITERAL(1, 10, 5), // "close"
QT_MOC_LITERAL(2, 16, 0), // ""
QT_MOC_LITERAL(3, 17, 13), // "createTCOView"
QT_MOC_LITERAL(4, 31, 19), // "TrackContentObject*"
QT_MOC_LITERAL(5, 51, 3) // "tco"

    },
    "TrackView\0close\0\0createTCOView\0"
    "TrackContentObject*\0tco"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TrackView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x0a /* Public */,
       3,    1,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Bool,
    QMetaType::Void, 0x80000000 | 4,    5,

       0        // eod
};

void TrackView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TrackView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { bool _r = _t->close();
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 1: _t->createTCOView((*reinterpret_cast< TrackContentObject*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< TrackContentObject* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TrackView::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_TrackView.data,
    qt_meta_data_TrackView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TrackView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TrackView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TrackView.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ModelView"))
        return static_cast< ModelView*>(this);
    if (!strcmp(_clname, "JournallingObject"))
        return static_cast< JournallingObject*>(this);
    return QWidget::qt_metacast(_clname);
}

int TrackView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
