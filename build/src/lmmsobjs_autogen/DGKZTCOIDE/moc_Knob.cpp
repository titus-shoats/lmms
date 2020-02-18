/****************************************************************************
** Meta object code from reading C++ file 'Knob.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../include/Knob.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Knob.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Knob_t {
    QByteArrayData data[20];
    char stringdata0[209];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Knob_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Knob_t qt_meta_stringdata_Knob = {
    {
QT_MOC_LITERAL(0, 0, 4), // "Knob"
QT_MOC_LITERAL(1, 5, 13), // "sliderPressed"
QT_MOC_LITERAL(2, 19, 0), // ""
QT_MOC_LITERAL(3, 20, 14), // "sliderReleased"
QT_MOC_LITERAL(4, 35, 11), // "sliderMoved"
QT_MOC_LITERAL(5, 47, 5), // "value"
QT_MOC_LITERAL(6, 53, 10), // "enterValue"
QT_MOC_LITERAL(7, 64, 14), // "friendlyUpdate"
QT_MOC_LITERAL(8, 79, 11), // "toggleScale"
QT_MOC_LITERAL(9, 91, 11), // "innerRadius"
QT_MOC_LITERAL(10, 103, 11), // "outerRadius"
QT_MOC_LITERAL(11, 115, 12), // "centerPointX"
QT_MOC_LITERAL(12, 128, 12), // "centerPointY"
QT_MOC_LITERAL(13, 141, 9), // "lineWidth"
QT_MOC_LITERAL(14, 151, 10), // "outerColor"
QT_MOC_LITERAL(15, 162, 9), // "lineColor"
QT_MOC_LITERAL(16, 172, 8), // "arcColor"
QT_MOC_LITERAL(17, 181, 7), // "knobNum"
QT_MOC_LITERAL(18, 189, 9), // "knobTypes"
QT_MOC_LITERAL(19, 199, 9) // "textColor"

    },
    "Knob\0sliderPressed\0\0sliderReleased\0"
    "sliderMoved\0value\0enterValue\0"
    "friendlyUpdate\0toggleScale\0innerRadius\0"
    "outerRadius\0centerPointX\0centerPointY\0"
    "lineWidth\0outerColor\0lineColor\0arcColor\0"
    "knobNum\0knobTypes\0textColor"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Knob[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
      10,   52, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x06 /* Public */,
       3,    0,   45,    2, 0x06 /* Public */,
       4,    1,   46,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    0,   49,    2, 0x08 /* Private */,
       7,    0,   50,    2, 0x08 /* Private */,
       8,    0,   51,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Float,    5,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       9, QMetaType::Float, 0x00095103,
      10, QMetaType::Float, 0x00095103,
      11, QMetaType::Float, 0x00095103,
      12, QMetaType::Float, 0x00095103,
      13, QMetaType::Float, 0x00095103,
      14, QMetaType::QColor, 0x00095103,
      15, QMetaType::QColor, 0x00095003,
      16, QMetaType::QColor, 0x00095003,
      17, 0x80000000 | 18, 0x0009500b,
      19, QMetaType::QColor, 0x00095103,

 // enums: name, alias, flags, count, data

 // enum data: key, value

       0        // eod
};

void Knob::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<Knob *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sliderPressed(); break;
        case 1: _t->sliderReleased(); break;
        case 2: _t->sliderMoved((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 3: _t->enterValue(); break;
        case 4: _t->friendlyUpdate(); break;
        case 5: _t->toggleScale(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (Knob::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Knob::sliderPressed)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (Knob::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Knob::sliderReleased)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (Knob::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&Knob::sliderMoved)) {
                *result = 2;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Knob *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< float*>(_v) = _t->innerRadius(); break;
        case 1: *reinterpret_cast< float*>(_v) = _t->outerRadius(); break;
        case 2: *reinterpret_cast< float*>(_v) = _t->centerPointX(); break;
        case 3: *reinterpret_cast< float*>(_v) = _t->centerPointY(); break;
        case 4: *reinterpret_cast< float*>(_v) = _t->lineWidth(); break;
        case 5: *reinterpret_cast< QColor*>(_v) = _t->outerColor(); break;
        case 6: *reinterpret_cast< QColor*>(_v) = _t->lineColor(); break;
        case 7: *reinterpret_cast< QColor*>(_v) = _t->arcColor(); break;
        case 8: *reinterpret_cast< knobTypes*>(_v) = _t->knobNum(); break;
        case 9: *reinterpret_cast< QColor*>(_v) = _t->textColor(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Knob *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setInnerRadius(*reinterpret_cast< float*>(_v)); break;
        case 1: _t->setOuterRadius(*reinterpret_cast< float*>(_v)); break;
        case 2: _t->setCenterPointX(*reinterpret_cast< float*>(_v)); break;
        case 3: _t->setCenterPointY(*reinterpret_cast< float*>(_v)); break;
        case 4: _t->setLineWidth(*reinterpret_cast< float*>(_v)); break;
        case 5: _t->setOuterColor(*reinterpret_cast< QColor*>(_v)); break;
        case 6: _t->setlineColor(*reinterpret_cast< QColor*>(_v)); break;
        case 7: _t->setarcColor(*reinterpret_cast< QColor*>(_v)); break;
        case 8: _t->setknobNum(*reinterpret_cast< knobTypes*>(_v)); break;
        case 9: _t->setTextColor(*reinterpret_cast< QColor*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject Knob::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_Knob.data,
    qt_meta_data_Knob,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Knob::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Knob::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Knob.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "FloatModelView"))
        return static_cast< FloatModelView*>(this);
    return QWidget::qt_metacast(_clname);
}

int Knob::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
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
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 10;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 10;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void Knob::sliderPressed()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void Knob::sliderReleased()
{
    QMetaObject::activate(this, &staticMetaObject, 1, nullptr);
}

// SIGNAL 2
void Knob::sliderMoved(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
