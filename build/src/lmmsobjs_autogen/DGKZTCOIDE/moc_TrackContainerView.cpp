/****************************************************************************
** Meta object code from reading C++ file 'TrackContainerView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../include/TrackContainerView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TrackContainerView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TrackContainerView_t {
    QByteArrayData data[19];
    char stringdata0[199];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TrackContainerView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TrackContainerView_t qt_meta_stringdata_TrackContainerView = {
    {
QT_MOC_LITERAL(0, 0, 18), // "TrackContainerView"
QT_MOC_LITERAL(1, 19, 15), // "positionChanged"
QT_MOC_LITERAL(2, 35, 0), // ""
QT_MOC_LITERAL(3, 36, 8), // "MidiTime"
QT_MOC_LITERAL(4, 45, 4), // "_pos"
QT_MOC_LITERAL(5, 50, 13), // "realignTracks"
QT_MOC_LITERAL(6, 64, 15), // "createTrackView"
QT_MOC_LITERAL(7, 80, 10), // "TrackView*"
QT_MOC_LITERAL(8, 91, 6), // "Track*"
QT_MOC_LITERAL(9, 98, 2), // "_t"
QT_MOC_LITERAL(10, 101, 15), // "deleteTrackView"
QT_MOC_LITERAL(11, 117, 3), // "_tv"
QT_MOC_LITERAL(12, 121, 9), // "dropEvent"
QT_MOC_LITERAL(13, 131, 11), // "QDropEvent*"
QT_MOC_LITERAL(14, 143, 3), // "_de"
QT_MOC_LITERAL(15, 147, 14), // "dragEnterEvent"
QT_MOC_LITERAL(16, 162, 16), // "QDragEnterEvent*"
QT_MOC_LITERAL(17, 179, 4), // "_dee"
QT_MOC_LITERAL(18, 184, 14) // "stopRubberBand"

    },
    "TrackContainerView\0positionChanged\0\0"
    "MidiTime\0_pos\0realignTracks\0createTrackView\0"
    "TrackView*\0Track*\0_t\0deleteTrackView\0"
    "_tv\0dropEvent\0QDropEvent*\0_de\0"
    "dragEnterEvent\0QDragEnterEvent*\0_dee\0"
    "stopRubberBand"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TrackContainerView[] = {

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
       1,    1,   49,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,   52,    2, 0x0a /* Public */,
       6,    1,   53,    2, 0x0a /* Public */,
      10,    1,   56,    2, 0x0a /* Public */,
      12,    1,   59,    2, 0x0a /* Public */,
      15,    1,   62,    2, 0x0a /* Public */,
      18,    0,   65,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    0x80000000 | 7, 0x80000000 | 8,    9,
    QMetaType::Void, 0x80000000 | 7,   11,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void,

       0        // eod
};

void TrackContainerView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TrackContainerView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->positionChanged((*reinterpret_cast< const MidiTime(*)>(_a[1]))); break;
        case 1: _t->realignTracks(); break;
        case 2: { TrackView* _r = _t->createTrackView((*reinterpret_cast< Track*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< TrackView**>(_a[0]) = std::move(_r); }  break;
        case 3: _t->deleteTrackView((*reinterpret_cast< TrackView*(*)>(_a[1]))); break;
        case 4: _t->dropEvent((*reinterpret_cast< QDropEvent*(*)>(_a[1]))); break;
        case 5: _t->dragEnterEvent((*reinterpret_cast< QDragEnterEvent*(*)>(_a[1]))); break;
        case 6: _t->stopRubberBand(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Track* >(); break;
            }
            break;
        case 3:
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
            using _t = void (TrackContainerView::*)(const MidiTime & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TrackContainerView::positionChanged)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TrackContainerView::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_TrackContainerView.data,
    qt_meta_data_TrackContainerView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TrackContainerView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TrackContainerView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TrackContainerView.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "ModelView"))
        return static_cast< ModelView*>(this);
    if (!strcmp(_clname, "JournallingObject"))
        return static_cast< JournallingObject*>(this);
    if (!strcmp(_clname, "SerializingObjectHook"))
        return static_cast< SerializingObjectHook*>(this);
    return QWidget::qt_metacast(_clname);
}

int TrackContainerView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void TrackContainerView::positionChanged(const MidiTime & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
struct qt_meta_stringdata_InstrumentLoaderThread_t {
    QByteArrayData data[1];
    char stringdata0[23];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_InstrumentLoaderThread_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_InstrumentLoaderThread_t qt_meta_stringdata_InstrumentLoaderThread = {
    {
QT_MOC_LITERAL(0, 0, 22) // "InstrumentLoaderThread"

    },
    "InstrumentLoaderThread"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_InstrumentLoaderThread[] = {

 // content:
       8,       // revision
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

void InstrumentLoaderThread::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject InstrumentLoaderThread::staticMetaObject = { {
    &QThread::staticMetaObject,
    qt_meta_stringdata_InstrumentLoaderThread.data,
    qt_meta_data_InstrumentLoaderThread,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *InstrumentLoaderThread::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *InstrumentLoaderThread::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_InstrumentLoaderThread.stringdata0))
        return static_cast<void*>(this);
    return QThread::qt_metacast(_clname);
}

int InstrumentLoaderThread::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QThread::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
