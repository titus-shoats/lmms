/****************************************************************************
** Meta object code from reading C++ file 'FxLine.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../include/FxLine.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FxLine.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FxLine_t {
    QByteArrayData data[13];
    char stringdata0[198];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FxLine_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FxLine_t qt_meta_stringdata_FxLine = {
    {
QT_MOC_LITERAL(0, 0, 6), // "FxLine"
QT_MOC_LITERAL(1, 7, 13), // "renameChannel"
QT_MOC_LITERAL(2, 21, 0), // ""
QT_MOC_LITERAL(3, 22, 14), // "renameFinished"
QT_MOC_LITERAL(4, 37, 13), // "removeChannel"
QT_MOC_LITERAL(5, 51, 20), // "removeUnusedChannels"
QT_MOC_LITERAL(6, 72, 15), // "moveChannelLeft"
QT_MOC_LITERAL(7, 88, 16), // "moveChannelRight"
QT_MOC_LITERAL(8, 105, 16), // "backgroundActive"
QT_MOC_LITERAL(9, 122, 17), // "strokeOuterActive"
QT_MOC_LITERAL(10, 140, 19), // "strokeOuterInactive"
QT_MOC_LITERAL(11, 160, 17), // "strokeInnerActive"
QT_MOC_LITERAL(12, 178, 19) // "strokeInnerInactive"

    },
    "FxLine\0renameChannel\0\0renameFinished\0"
    "removeChannel\0removeUnusedChannels\0"
    "moveChannelLeft\0moveChannelRight\0"
    "backgroundActive\0strokeOuterActive\0"
    "strokeOuterInactive\0strokeInnerActive\0"
    "strokeInnerInactive"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FxLine[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       6,   14, // methods
       5,   50, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   44,    2, 0x0a /* Public */,
       3,    0,   45,    2, 0x08 /* Private */,
       4,    0,   46,    2, 0x08 /* Private */,
       5,    0,   47,    2, 0x08 /* Private */,
       6,    0,   48,    2, 0x08 /* Private */,
       7,    0,   49,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
       8, QMetaType::QBrush, 0x00095103,
       9, QMetaType::QColor, 0x00095103,
      10, QMetaType::QColor, 0x00095103,
      11, QMetaType::QColor, 0x00095103,
      12, QMetaType::QColor, 0x00095103,

       0        // eod
};

void FxLine::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<FxLine *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->renameChannel(); break;
        case 1: _t->renameFinished(); break;
        case 2: _t->removeChannel(); break;
        case 3: _t->removeUnusedChannels(); break;
        case 4: _t->moveChannelLeft(); break;
        case 5: _t->moveChannelRight(); break;
        default: ;
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<FxLine *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QBrush*>(_v) = _t->backgroundActive(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = _t->strokeOuterActive(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = _t->strokeOuterInactive(); break;
        case 3: *reinterpret_cast< QColor*>(_v) = _t->strokeInnerActive(); break;
        case 4: *reinterpret_cast< QColor*>(_v) = _t->strokeInnerInactive(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<FxLine *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBackgroundActive(*reinterpret_cast< QBrush*>(_v)); break;
        case 1: _t->setStrokeOuterActive(*reinterpret_cast< QColor*>(_v)); break;
        case 2: _t->setStrokeOuterInactive(*reinterpret_cast< QColor*>(_v)); break;
        case 3: _t->setStrokeInnerActive(*reinterpret_cast< QColor*>(_v)); break;
        case 4: _t->setStrokeInnerInactive(*reinterpret_cast< QColor*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject FxLine::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_FxLine.data,
    qt_meta_data_FxLine,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FxLine::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FxLine::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FxLine.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int FxLine::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 5;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 5;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
