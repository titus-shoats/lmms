/****************************************************************************
** Meta object code from reading C++ file 'SampleTrack.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../include/SampleTrack.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'SampleTrack.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_SampleTCO_t {
    QByteArrayData data[12];
    char stringdata0[142];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SampleTCO_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SampleTCO_t qt_meta_stringdata_SampleTCO = {
    {
QT_MOC_LITERAL(0, 0, 9), // "SampleTCO"
QT_MOC_LITERAL(1, 10, 13), // "sampleChanged"
QT_MOC_LITERAL(2, 24, 0), // ""
QT_MOC_LITERAL(3, 25, 15), // "setSampleBuffer"
QT_MOC_LITERAL(4, 41, 13), // "SampleBuffer*"
QT_MOC_LITERAL(5, 55, 2), // "sb"
QT_MOC_LITERAL(6, 58, 13), // "setSampleFile"
QT_MOC_LITERAL(7, 72, 3), // "_sf"
QT_MOC_LITERAL(8, 76, 12), // "updateLength"
QT_MOC_LITERAL(9, 89, 12), // "toggleRecord"
QT_MOC_LITERAL(10, 102, 23), // "playbackPositionChanged"
QT_MOC_LITERAL(11, 126, 15) // "updateTrackTcos"

    },
    "SampleTCO\0sampleChanged\0\0setSampleBuffer\0"
    "SampleBuffer*\0sb\0setSampleFile\0_sf\0"
    "updateLength\0toggleRecord\0"
    "playbackPositionChanged\0updateTrackTcos"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SampleTCO[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    1,   50,    2, 0x0a /* Public */,
       6,    1,   53,    2, 0x0a /* Public */,
       8,    0,   56,    2, 0x0a /* Public */,
       9,    0,   57,    2, 0x0a /* Public */,
      10,    0,   58,    2, 0x0a /* Public */,
      11,    0,   59,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 4,    5,
    QMetaType::Void, QMetaType::QString,    7,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void SampleTCO::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SampleTCO *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sampleChanged(); break;
        case 1: _t->setSampleBuffer((*reinterpret_cast< SampleBuffer*(*)>(_a[1]))); break;
        case 2: _t->setSampleFile((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 3: _t->updateLength(); break;
        case 4: _t->toggleRecord(); break;
        case 5: _t->playbackPositionChanged(); break;
        case 6: _t->updateTrackTcos(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (SampleTCO::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&SampleTCO::sampleChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SampleTCO::staticMetaObject = { {
    &TrackContentObject::staticMetaObject,
    qt_meta_stringdata_SampleTCO.data,
    qt_meta_data_SampleTCO,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SampleTCO::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SampleTCO::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SampleTCO.stringdata0))
        return static_cast<void*>(this);
    return TrackContentObject::qt_metacast(_clname);
}

int SampleTCO::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TrackContentObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void SampleTCO::sampleChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
struct qt_meta_stringdata_SampleTCOView_t {
    QByteArrayData data[3];
    char stringdata0[28];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SampleTCOView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SampleTCOView_t qt_meta_stringdata_SampleTCOView = {
    {
QT_MOC_LITERAL(0, 0, 13), // "SampleTCOView"
QT_MOC_LITERAL(1, 14, 12), // "updateSample"
QT_MOC_LITERAL(2, 27, 0) // ""

    },
    "SampleTCOView\0updateSample\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SampleTCOView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       1,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   19,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,

       0        // eod
};

void SampleTCOView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SampleTCOView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateSample(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject SampleTCOView::staticMetaObject = { {
    &TrackContentObjectView::staticMetaObject,
    qt_meta_stringdata_SampleTCOView.data,
    qt_meta_data_SampleTCOView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SampleTCOView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SampleTCOView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SampleTCOView.stringdata0))
        return static_cast<void*>(this);
    return TrackContentObjectView::qt_metacast(_clname);
}

int SampleTCOView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TrackContentObjectView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 1)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 1;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 1)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 1;
    }
    return _id;
}
struct qt_meta_stringdata_SampleTrack_t {
    QByteArrayData data[6];
    char stringdata0[69];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SampleTrack_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SampleTrack_t qt_meta_stringdata_SampleTrack = {
    {
QT_MOC_LITERAL(0, 0, 11), // "SampleTrack"
QT_MOC_LITERAL(1, 12, 10), // "updateTcos"
QT_MOC_LITERAL(2, 23, 0), // ""
QT_MOC_LITERAL(3, 24, 14), // "setPlayingTcos"
QT_MOC_LITERAL(4, 39, 9), // "isPlaying"
QT_MOC_LITERAL(5, 49, 19) // "updateEffectChannel"

    },
    "SampleTrack\0updateTcos\0\0setPlayingTcos\0"
    "isPlaying\0updateEffectChannel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SampleTrack[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x0a /* Public */,
       3,    1,   30,    2, 0x0a /* Public */,
       5,    0,   33,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    4,
    QMetaType::Void,

       0        // eod
};

void SampleTrack::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SampleTrack *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateTcos(); break;
        case 1: _t->setPlayingTcos((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->updateEffectChannel(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SampleTrack::staticMetaObject = { {
    &Track::staticMetaObject,
    qt_meta_stringdata_SampleTrack.data,
    qt_meta_data_SampleTrack,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SampleTrack::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SampleTrack::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SampleTrack.stringdata0))
        return static_cast<void*>(this);
    return Track::qt_metacast(_clname);
}

int SampleTrack::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Track::qt_metacall(_c, _id, _a);
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
    return _id;
}
struct qt_meta_stringdata_SampleTrackView_t {
    QByteArrayData data[6];
    char stringdata0[68];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SampleTrackView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SampleTrackView_t qt_meta_stringdata_SampleTrackView = {
    {
QT_MOC_LITERAL(0, 0, 15), // "SampleTrackView"
QT_MOC_LITERAL(1, 16, 11), // "showEffects"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 12), // "assignFxLine"
QT_MOC_LITERAL(4, 42, 12), // "channelIndex"
QT_MOC_LITERAL(5, 55, 12) // "createFxLine"

    },
    "SampleTrackView\0showEffects\0\0assignFxLine\0"
    "channelIndex\0createFxLine"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SampleTrackView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   29,    2, 0x0a /* Public */,
       3,    1,   30,    2, 0x08 /* Private */,
       5,    0,   33,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    4,
    QMetaType::Void,

       0        // eod
};

void SampleTrackView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SampleTrackView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->showEffects(); break;
        case 1: _t->assignFxLine((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->createFxLine(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SampleTrackView::staticMetaObject = { {
    &TrackView::staticMetaObject,
    qt_meta_stringdata_SampleTrackView.data,
    qt_meta_data_SampleTrackView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SampleTrackView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SampleTrackView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SampleTrackView.stringdata0))
        return static_cast<void*>(this);
    return TrackView::qt_metacast(_clname);
}

int SampleTrackView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TrackView::qt_metacall(_c, _id, _a);
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
    return _id;
}
struct qt_meta_stringdata_SampleTrackWindow_t {
    QByteArrayData data[7];
    char stringdata0[71];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_SampleTrackWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_SampleTrackWindow_t qt_meta_stringdata_SampleTrackWindow = {
    {
QT_MOC_LITERAL(0, 0, 17), // "SampleTrackWindow"
QT_MOC_LITERAL(1, 18, 11), // "textChanged"
QT_MOC_LITERAL(2, 30, 0), // ""
QT_MOC_LITERAL(3, 31, 8), // "new_name"
QT_MOC_LITERAL(4, 40, 16), // "toggleVisibility"
QT_MOC_LITERAL(5, 57, 2), // "on"
QT_MOC_LITERAL(6, 60, 10) // "updateName"

    },
    "SampleTrackWindow\0textChanged\0\0new_name\0"
    "toggleVisibility\0on\0updateName"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_SampleTrackWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x0a /* Public */,
       4,    1,   32,    2, 0x0a /* Public */,
       6,    0,   35,    2, 0x0a /* Public */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,

       0        // eod
};

void SampleTrackWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<SampleTrackWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->toggleVisibility((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->updateName(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject SampleTrackWindow::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_SampleTrackWindow.data,
    qt_meta_data_SampleTrackWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *SampleTrackWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *SampleTrackWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_SampleTrackWindow.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ModelView"))
        return static_cast< ModelView*>(this);
    if (!strcmp(_clname, "SerializingObjectHook"))
        return static_cast< SerializingObjectHook*>(this);
    return QWidget::qt_metacast(_clname);
}

int SampleTrackWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
