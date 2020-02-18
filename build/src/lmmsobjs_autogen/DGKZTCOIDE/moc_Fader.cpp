/****************************************************************************
** Meta object code from reading C++ file 'Fader.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../include/Fader.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'Fader.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_Fader_t {
    QByteArrayData data[5];
    char stringdata0[57];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Fader_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Fader_t qt_meta_stringdata_Fader = {
    {
QT_MOC_LITERAL(0, 0, 5), // "Fader"
QT_MOC_LITERAL(1, 6, 9), // "peakGreen"
QT_MOC_LITERAL(2, 16, 7), // "peakRed"
QT_MOC_LITERAL(3, 24, 10), // "peakYellow"
QT_MOC_LITERAL(4, 35, 21) // "levelsDisplayedInDBFS"

    },
    "Fader\0peakGreen\0peakRed\0peakYellow\0"
    "levelsDisplayedInDBFS"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Fader[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       0,    0, // methods
       4,   14, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // properties: name, type, flags
       1, QMetaType::QColor, 0x00095103,
       2, QMetaType::QColor, 0x00095103,
       3, QMetaType::QColor, 0x00095103,
       4, QMetaType::Bool, 0x00095103,

       0        // eod
};

void Fader::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{

#ifndef QT_NO_PROPERTIES
    if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<Fader *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = _t->peakGreen(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = _t->peakRed(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = _t->peakYellow(); break;
        case 3: *reinterpret_cast< bool*>(_v) = _t->getLevelsDisplayedInDBFS(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<Fader *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setPeakGreen(*reinterpret_cast< QColor*>(_v)); break;
        case 1: _t->setPeakRed(*reinterpret_cast< QColor*>(_v)); break;
        case 2: _t->setPeakYellow(*reinterpret_cast< QColor*>(_v)); break;
        case 3: _t->setLevelsDisplayedInDBFS(*reinterpret_cast< bool*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject Fader::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_Fader.data,
    qt_meta_data_Fader,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *Fader::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Fader::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_Fader.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "FloatModelView"))
        return static_cast< FloatModelView*>(this);
    return QWidget::qt_metacast(_clname);
}

int Fader::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    
#ifndef QT_NO_PROPERTIES
   if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
