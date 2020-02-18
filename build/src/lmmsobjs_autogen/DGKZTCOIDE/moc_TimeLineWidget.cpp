/****************************************************************************
** Meta object code from reading C++ file 'TimeLineWidget.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../include/TimeLineWidget.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TimeLineWidget.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TimeLineWidget_t {
    QByteArrayData data[23];
    char stringdata0[371];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TimeLineWidget_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TimeLineWidget_t qt_meta_stringdata_TimeLineWidget = {
    {
QT_MOC_LITERAL(0, 0, 14), // "TimeLineWidget"
QT_MOC_LITERAL(1, 15, 24), // "regionSelectedFromPixels"
QT_MOC_LITERAL(2, 40, 0), // ""
QT_MOC_LITERAL(3, 41, 17), // "selectionFinished"
QT_MOC_LITERAL(4, 59, 15), // "positionChanged"
QT_MOC_LITERAL(5, 75, 8), // "MidiTime"
QT_MOC_LITERAL(6, 84, 2), // "_t"
QT_MOC_LITERAL(7, 87, 20), // "loopPointStateLoaded"
QT_MOC_LITERAL(8, 108, 2), // "_n"
QT_MOC_LITERAL(9, 111, 19), // "positionMarkerMoved"
QT_MOC_LITERAL(10, 131, 14), // "updatePosition"
QT_MOC_LITERAL(11, 146, 16), // "toggleAutoScroll"
QT_MOC_LITERAL(12, 163, 16), // "toggleLoopPoints"
QT_MOC_LITERAL(13, 180, 21), // "toggleBehaviourAtStop"
QT_MOC_LITERAL(14, 202, 12), // "barLineColor"
QT_MOC_LITERAL(15, 215, 14), // "barNumberColor"
QT_MOC_LITERAL(16, 230, 17), // "inactiveLoopColor"
QT_MOC_LITERAL(17, 248, 17), // "inactiveLoopBrush"
QT_MOC_LITERAL(18, 266, 22), // "inactiveLoopInnerColor"
QT_MOC_LITERAL(19, 289, 15), // "activeLoopColor"
QT_MOC_LITERAL(20, 305, 15), // "activeLoopBrush"
QT_MOC_LITERAL(21, 321, 20), // "activeLoopInnerColor"
QT_MOC_LITERAL(22, 342, 28) // "loopRectangleVerticalPadding"

    },
    "TimeLineWidget\0regionSelectedFromPixels\0"
    "\0selectionFinished\0positionChanged\0"
    "MidiTime\0_t\0loopPointStateLoaded\0_n\0"
    "positionMarkerMoved\0updatePosition\0"
    "toggleAutoScroll\0toggleLoopPoints\0"
    "toggleBehaviourAtStop\0barLineColor\0"
    "barNumberColor\0inactiveLoopColor\0"
    "inactiveLoopBrush\0inactiveLoopInnerColor\0"
    "activeLoopColor\0activeLoopBrush\0"
    "activeLoopInnerColor\0loopRectangleVerticalPadding"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TimeLineWidget[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       9,   90, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    2,   64,    2, 0x06 /* Public */,
       3,    0,   69,    2, 0x06 /* Public */,
       4,    1,   70,    2, 0x06 /* Public */,
       7,    1,   73,    2, 0x06 /* Public */,
       9,    0,   76,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    1,   77,    2, 0x0a /* Public */,
      10,    0,   80,    2, 0x0a /* Public */,
      11,    1,   81,    2, 0x0a /* Public */,
      12,    1,   84,    2, 0x0a /* Public */,
      13,    1,   87,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 5,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    8,

 // properties: name, type, flags
      14, QMetaType::QColor, 0x00095103,
      15, QMetaType::QColor, 0x00095103,
      16, QMetaType::QColor, 0x00095103,
      17, QMetaType::QBrush, 0x00095103,
      18, QMetaType::QColor, 0x00095103,
      19, QMetaType::QColor, 0x00095103,
      20, QMetaType::QBrush, 0x00095103,
      21, QMetaType::QColor, 0x00095103,
      22, QMetaType::Int, 0x00095103,

       0        // eod
};

void TimeLineWidget::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TimeLineWidget *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->regionSelectedFromPixels((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 1: _t->selectionFinished(); break;
        case 2: _t->positionChanged((*reinterpret_cast< const MidiTime(*)>(_a[1]))); break;
        case 3: _t->loopPointStateLoaded((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 4: _t->positionMarkerMoved(); break;
        case 5: _t->updatePosition((*reinterpret_cast< const MidiTime(*)>(_a[1]))); break;
        case 6: _t->updatePosition(); break;
        case 7: _t->toggleAutoScroll((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->toggleLoopPoints((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 9: _t->toggleBehaviourAtStop((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (TimeLineWidget::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TimeLineWidget::regionSelectedFromPixels)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (TimeLineWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TimeLineWidget::selectionFinished)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (TimeLineWidget::*)(const MidiTime & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TimeLineWidget::positionChanged)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (TimeLineWidget::*)(int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TimeLineWidget::loopPointStateLoaded)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (TimeLineWidget::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&TimeLineWidget::positionMarkerMoved)) {
                *result = 4;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<TimeLineWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = _t->getBarLineColor(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = _t->getBarNumberColor(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = _t->getInactiveLoopColor(); break;
        case 3: *reinterpret_cast< QBrush*>(_v) = _t->getInactiveLoopBrush(); break;
        case 4: *reinterpret_cast< QColor*>(_v) = _t->getInactiveLoopInnerColor(); break;
        case 5: *reinterpret_cast< QColor*>(_v) = _t->getActiveLoopColor(); break;
        case 6: *reinterpret_cast< QBrush*>(_v) = _t->getActiveLoopBrush(); break;
        case 7: *reinterpret_cast< QColor*>(_v) = _t->getActiveLoopInnerColor(); break;
        case 8: *reinterpret_cast< int*>(_v) = _t->getLoopRectangleVerticalPadding(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<TimeLineWidget *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBarLineColor(*reinterpret_cast< QColor*>(_v)); break;
        case 1: _t->setBarNumberColor(*reinterpret_cast< QColor*>(_v)); break;
        case 2: _t->setInactiveLoopColor(*reinterpret_cast< QColor*>(_v)); break;
        case 3: _t->setInactiveLoopBrush(*reinterpret_cast< QBrush*>(_v)); break;
        case 4: _t->setInactiveLoopInnerColor(*reinterpret_cast< QColor*>(_v)); break;
        case 5: _t->setActiveLoopColor(*reinterpret_cast< QColor*>(_v)); break;
        case 6: _t->setActiveLoopBrush(*reinterpret_cast< QBrush*>(_v)); break;
        case 7: _t->setActiveLoopInnerColor(*reinterpret_cast< QColor*>(_v)); break;
        case 8: _t->setLoopRectangleVerticalPadding(*reinterpret_cast< int*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject TimeLineWidget::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_TimeLineWidget.data,
    qt_meta_data_TimeLineWidget,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TimeLineWidget::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TimeLineWidget::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TimeLineWidget.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "JournallingObject"))
        return static_cast< JournallingObject*>(this);
    return QWidget::qt_metacast(_clname);
}

int TimeLineWidget::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 9;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 9;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void TimeLineWidget::regionSelectedFromPixels(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)), const_cast<void*>(reinterpret_cast<const void*>(&_t2)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void TimeLineWidget::selectionFinished()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void TimeLineWidget::positionChanged(const MidiTime & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void TimeLineWidget::loopPointStateLoaded(int _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void TimeLineWidget::positionMarkerMoved()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
