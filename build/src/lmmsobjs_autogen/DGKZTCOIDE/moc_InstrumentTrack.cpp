/****************************************************************************
** Meta object code from reading C++ file 'InstrumentTrack.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../include/InstrumentTrack.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'InstrumentTrack.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_InstrumentTrack_t {
    QByteArrayData data[13];
    char stringdata0[155];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_InstrumentTrack_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_InstrumentTrack_t qt_meta_stringdata_InstrumentTrack = {
    {
QT_MOC_LITERAL(0, 0, 15), // "InstrumentTrack"
QT_MOC_LITERAL(1, 16, 17), // "instrumentChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 10), // "midiNoteOn"
QT_MOC_LITERAL(4, 46, 4), // "Note"
QT_MOC_LITERAL(5, 51, 11), // "midiNoteOff"
QT_MOC_LITERAL(6, 63, 11), // "nameChanged"
QT_MOC_LITERAL(7, 75, 7), // "newNote"
QT_MOC_LITERAL(8, 83, 7), // "endNote"
QT_MOC_LITERAL(9, 91, 14), // "updateBaseNote"
QT_MOC_LITERAL(10, 106, 11), // "updatePitch"
QT_MOC_LITERAL(11, 118, 16), // "updatePitchRange"
QT_MOC_LITERAL(12, 135, 19) // "updateEffectChannel"

    },
    "InstrumentTrack\0instrumentChanged\0\0"
    "midiNoteOn\0Note\0midiNoteOff\0nameChanged\0"
    "newNote\0endNote\0updateBaseNote\0"
    "updatePitch\0updatePitchRange\0"
    "updateEffectChannel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InstrumentTrack[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       6,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x06 /* Public */,
       3,    1,   65,    2, 0x06 /* Public */,
       5,    1,   68,    2, 0x06 /* Public */,
       6,    0,   71,    2, 0x06 /* Public */,
       7,    0,   72,    2, 0x06 /* Public */,
       8,    0,   73,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       9,    0,   74,    2, 0x09 /* Protected */,
      10,    0,   75,    2, 0x09 /* Protected */,
      11,    0,   76,    2, 0x09 /* Protected */,
      12,    0,   77,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void, 0x80000000 | 4,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void InstrumentTrack::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<InstrumentTrack *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->instrumentChanged(); break;
        case 1: _t->midiNoteOn((*reinterpret_cast< const Note(*)>(_a[1]))); break;
        case 2: _t->midiNoteOff((*reinterpret_cast< const Note(*)>(_a[1]))); break;
        case 3: _t->nameChanged(); break;
        case 4: _t->newNote(); break;
        case 5: _t->endNote(); break;
        case 6: _t->updateBaseNote(); break;
        case 7: _t->updatePitch(); break;
        case 8: _t->updatePitchRange(); break;
        case 9: _t->updateEffectChannel(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (InstrumentTrack::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InstrumentTrack::instrumentChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (InstrumentTrack::*)(const Note & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InstrumentTrack::midiNoteOn)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (InstrumentTrack::*)(const Note & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InstrumentTrack::midiNoteOff)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (InstrumentTrack::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InstrumentTrack::nameChanged)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (InstrumentTrack::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InstrumentTrack::newNote)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (InstrumentTrack::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&InstrumentTrack::endNote)) {
                *result = 5;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject InstrumentTrack::staticMetaObject = { {
    &Track::staticMetaObject,
    qt_meta_stringdata_InstrumentTrack.data,
    qt_meta_data_InstrumentTrack,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *InstrumentTrack::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InstrumentTrack::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_InstrumentTrack.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "MidiEventProcessor"))
        return static_cast< MidiEventProcessor*>(this);
    return Track::qt_metacast(_clname);
}

int InstrumentTrack::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Track::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}

// SIGNAL 0
void InstrumentTrack::instrumentChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void InstrumentTrack::midiNoteOn(const Note & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void InstrumentTrack::midiNoteOff(const Note & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void InstrumentTrack::nameChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 3, nullptr);
}

// SIGNAL 4
void InstrumentTrack::newNote()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}

// SIGNAL 5
void InstrumentTrack::endNote()
{
    QMetaObject::activate(this, &staticMetaObject, 5, nullptr);
}
struct qt_meta_stringdata_InstrumentTrackView_t {
    QByteArrayData data[13];
    char stringdata0[199];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_InstrumentTrackView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_InstrumentTrackView_t qt_meta_stringdata_InstrumentTrackView = {
    {
QT_MOC_LITERAL(0, 0, 19), // "InstrumentTrackView"
QT_MOC_LITERAL(1, 20, 22), // "toggleInstrumentWindow"
QT_MOC_LITERAL(2, 43, 0), // ""
QT_MOC_LITERAL(3, 44, 3), // "_on"
QT_MOC_LITERAL(4, 48, 24), // "activityIndicatorPressed"
QT_MOC_LITERAL(5, 73, 25), // "activityIndicatorReleased"
QT_MOC_LITERAL(6, 99, 14), // "midiInSelected"
QT_MOC_LITERAL(7, 114, 15), // "midiOutSelected"
QT_MOC_LITERAL(8, 130, 17), // "midiConfigChanged"
QT_MOC_LITERAL(9, 148, 11), // "muteChanged"
QT_MOC_LITERAL(10, 160, 12), // "assignFxLine"
QT_MOC_LITERAL(11, 173, 12), // "channelIndex"
QT_MOC_LITERAL(12, 186, 12) // "createFxLine"

    },
    "InstrumentTrackView\0toggleInstrumentWindow\0"
    "\0_on\0activityIndicatorPressed\0"
    "activityIndicatorReleased\0midiInSelected\0"
    "midiOutSelected\0midiConfigChanged\0"
    "muteChanged\0assignFxLine\0channelIndex\0"
    "createFxLine"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InstrumentTrackView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   59,    2, 0x08 /* Private */,
       4,    0,   62,    2, 0x08 /* Private */,
       5,    0,   63,    2, 0x08 /* Private */,
       6,    0,   64,    2, 0x08 /* Private */,
       7,    0,   65,    2, 0x08 /* Private */,
       8,    0,   66,    2, 0x08 /* Private */,
       9,    0,   67,    2, 0x08 /* Private */,
      10,    1,   68,    2, 0x08 /* Private */,
      12,    0,   71,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void,

       0        // eod
};

void InstrumentTrackView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<InstrumentTrackView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->toggleInstrumentWindow((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 1: _t->activityIndicatorPressed(); break;
        case 2: _t->activityIndicatorReleased(); break;
        case 3: _t->midiInSelected(); break;
        case 4: _t->midiOutSelected(); break;
        case 5: _t->midiConfigChanged(); break;
        case 6: _t->muteChanged(); break;
        case 7: _t->assignFxLine((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->createFxLine(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject InstrumentTrackView::staticMetaObject = { {
    &TrackView::staticMetaObject,
    qt_meta_stringdata_InstrumentTrackView.data,
    qt_meta_data_InstrumentTrackView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *InstrumentTrackView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InstrumentTrackView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_InstrumentTrackView.stringdata0))
        return static_cast<void*>(this);
    return TrackView::qt_metacast(_clname);
}

int InstrumentTrackView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TrackView::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 9;
    }
    return _id;
}
struct qt_meta_stringdata_InstrumentTrackWindow_t {
    QByteArrayData data[11];
    char stringdata0[159];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_InstrumentTrackWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_InstrumentTrackWindow_t qt_meta_stringdata_InstrumentTrackWindow = {
    {
QT_MOC_LITERAL(0, 0, 21), // "InstrumentTrackWindow"
QT_MOC_LITERAL(1, 22, 11), // "textChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 9), // "_new_name"
QT_MOC_LITERAL(4, 45, 16), // "toggleVisibility"
QT_MOC_LITERAL(5, 62, 3), // "_on"
QT_MOC_LITERAL(6, 66, 10), // "updateName"
QT_MOC_LITERAL(7, 77, 20), // "updateInstrumentView"
QT_MOC_LITERAL(8, 98, 22), // "saveSettingsBtnClicked"
QT_MOC_LITERAL(9, 121, 18), // "viewNextInstrument"
QT_MOC_LITERAL(10, 140, 18) // "viewPrevInstrument"

    },
    "InstrumentTrackWindow\0textChanged\0\0"
    "_new_name\0toggleVisibility\0_on\0"
    "updateName\0updateInstrumentView\0"
    "saveSettingsBtnClicked\0viewNextInstrument\0"
    "viewPrevInstrument"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InstrumentTrackWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   49,    2, 0x0a /* Public */,
       4,    1,   52,    2, 0x0a /* Public */,
       6,    0,   55,    2, 0x0a /* Public */,
       7,    0,   56,    2, 0x0a /* Public */,
       8,    0,   57,    2, 0x09 /* Protected */,
       9,    0,   58,    2, 0x09 /* Protected */,
      10,    0,   59,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void, QMetaType::QString,    3,
    QMetaType::Void, QMetaType::Bool,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void InstrumentTrackWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<InstrumentTrackWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->textChanged((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        case 1: _t->toggleVisibility((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 2: _t->updateName(); break;
        case 3: _t->updateInstrumentView(); break;
        case 4: _t->saveSettingsBtnClicked(); break;
        case 5: _t->viewNextInstrument(); break;
        case 6: _t->viewPrevInstrument(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject InstrumentTrackWindow::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_InstrumentTrackWindow.data,
    qt_meta_data_InstrumentTrackWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *InstrumentTrackWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InstrumentTrackWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_InstrumentTrackWindow.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ModelView"))
        return static_cast< ModelView*>(this);
    if (!strcmp(_clname, "SerializingObjectHook"))
        return static_cast< SerializingObjectHook*>(this);
    return QWidget::qt_metacast(_clname);
}

int InstrumentTrackWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
