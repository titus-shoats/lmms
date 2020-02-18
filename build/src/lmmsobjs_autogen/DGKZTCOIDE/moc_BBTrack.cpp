/****************************************************************************
** Meta object code from reading C++ file 'BBTrack.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../include/BBTrack.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'BBTrack.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_BBTCOView_t {
    QByteArrayData data[8];
    char stringdata0[77];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BBTCOView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BBTCOView_t qt_meta_stringdata_BBTCOView = {
    {
QT_MOC_LITERAL(0, 0, 9), // "BBTCOView"
QT_MOC_LITERAL(1, 10, 6), // "update"
QT_MOC_LITERAL(2, 17, 0), // ""
QT_MOC_LITERAL(3, 18, 14), // "openInBBEditor"
QT_MOC_LITERAL(4, 33, 9), // "resetName"
QT_MOC_LITERAL(5, 43, 10), // "changeName"
QT_MOC_LITERAL(6, 54, 11), // "changeColor"
QT_MOC_LITERAL(7, 66, 10) // "resetColor"

    },
    "BBTCOView\0update\0\0openInBBEditor\0"
    "resetName\0changeName\0changeColor\0"
    "resetColor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BBTCOView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x0a /* Public */,
       3,    0,   45,    2, 0x09 /* Protected */,
       4,    0,   46,    2, 0x09 /* Protected */,
       5,    0,   47,    2, 0x09 /* Protected */,
       6,    0,   48,    2, 0x09 /* Protected */,
       7,    0,   49,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void BBTCOView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BBTCOView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->update(); break;
        case 1: _t->openInBBEditor(); break;
        case 2: _t->resetName(); break;
        case 3: _t->changeName(); break;
        case 4: _t->changeColor(); break;
        case 5: _t->resetColor(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject BBTCOView::staticMetaObject = { {
    &TrackContentObjectView::staticMetaObject,
    qt_meta_stringdata_BBTCOView.data,
    qt_meta_data_BBTCOView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BBTCOView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BBTCOView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BBTCOView.stringdata0))
        return static_cast<void*>(this);
    return TrackContentObjectView::qt_metacast(_clname);
}

int BBTCOView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TrackContentObjectView::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_BBTrack_t {
    QByteArrayData data[1];
    char stringdata0[8];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BBTrack_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BBTrack_t qt_meta_stringdata_BBTrack = {
    {
QT_MOC_LITERAL(0, 0, 7) // "BBTrack"

    },
    "BBTrack"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BBTrack[] = {

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

void BBTrack::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject BBTrack::staticMetaObject = { {
    &Track::staticMetaObject,
    qt_meta_stringdata_BBTrack.data,
    qt_meta_data_BBTrack,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BBTrack::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BBTrack::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BBTrack.stringdata0))
        return static_cast<void*>(this);
    return Track::qt_metacast(_clname);
}

int BBTrack::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Track::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_BBTrackView_t {
    QByteArrayData data[3];
    char stringdata0[31];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BBTrackView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BBTrackView_t qt_meta_stringdata_BBTrackView = {
    {
QT_MOC_LITERAL(0, 0, 11), // "BBTrackView"
QT_MOC_LITERAL(1, 12, 17), // "clickedTrackLabel"
QT_MOC_LITERAL(2, 30, 0) // ""

    },
    "BBTrackView\0clickedTrackLabel\0"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BBTrackView[] = {

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

void BBTrackView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<BBTrackView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->clickedTrackLabel(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject BBTrackView::staticMetaObject = { {
    &TrackView::staticMetaObject,
    qt_meta_stringdata_BBTrackView.data,
    qt_meta_data_BBTrackView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BBTrackView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BBTrackView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BBTrackView.stringdata0))
        return static_cast<void*>(this);
    return TrackView::qt_metacast(_clname);
}

int BBTrackView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TrackView::qt_metacall(_c, _id, _a);
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
