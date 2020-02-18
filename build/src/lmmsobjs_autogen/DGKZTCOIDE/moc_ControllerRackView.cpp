/****************************************************************************
** Meta object code from reading C++ file 'ControllerRackView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../include/ControllerRackView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ControllerRackView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ControllerRackView_t {
    QByteArrayData data[9];
    char stringdata0[123];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ControllerRackView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ControllerRackView_t qt_meta_stringdata_ControllerRackView = {
    {
QT_MOC_LITERAL(0, 0, 18), // "ControllerRackView"
QT_MOC_LITERAL(1, 19, 16), // "deleteController"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 15), // "ControllerView*"
QT_MOC_LITERAL(4, 53, 5), // "_view"
QT_MOC_LITERAL(5, 59, 17), // "onControllerAdded"
QT_MOC_LITERAL(6, 77, 11), // "Controller*"
QT_MOC_LITERAL(7, 89, 19), // "onControllerRemoved"
QT_MOC_LITERAL(8, 109, 13) // "addController"

    },
    "ControllerRackView\0deleteController\0"
    "\0ControllerView*\0_view\0onControllerAdded\0"
    "Controller*\0onControllerRemoved\0"
    "addController"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ControllerRackView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x0a /* Public */,
       5,    1,   37,    2, 0x0a /* Public */,
       7,    1,   40,    2, 0x0a /* Public */,
       8,    0,   43,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void, 0x80000000 | 6,    2,
    QMetaType::Void,

       0        // eod
};

void ControllerRackView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ControllerRackView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->deleteController((*reinterpret_cast< ControllerView*(*)>(_a[1]))); break;
        case 1: _t->onControllerAdded((*reinterpret_cast< Controller*(*)>(_a[1]))); break;
        case 2: _t->onControllerRemoved((*reinterpret_cast< Controller*(*)>(_a[1]))); break;
        case 3: _t->addController(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ControllerRackView::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_ControllerRackView.data,
    qt_meta_data_ControllerRackView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ControllerRackView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ControllerRackView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ControllerRackView.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "SerializingObject"))
        return static_cast< SerializingObject*>(this);
    return QWidget::qt_metacast(_clname);
}

int ControllerRackView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
