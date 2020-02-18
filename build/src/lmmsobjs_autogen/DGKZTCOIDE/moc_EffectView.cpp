/****************************************************************************
** Meta object code from reading C++ file 'EffectView.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../include/EffectView.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'EffectView.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_EffectView_t {
    QByteArrayData data[9];
    char stringdata0[87];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_EffectView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_EffectView_t qt_meta_stringdata_EffectView = {
    {
QT_MOC_LITERAL(0, 0, 10), // "EffectView"
QT_MOC_LITERAL(1, 11, 6), // "moveUp"
QT_MOC_LITERAL(2, 18, 0), // ""
QT_MOC_LITERAL(3, 19, 11), // "EffectView*"
QT_MOC_LITERAL(4, 31, 7), // "_plugin"
QT_MOC_LITERAL(5, 39, 8), // "moveDown"
QT_MOC_LITERAL(6, 48, 12), // "deletePlugin"
QT_MOC_LITERAL(7, 61, 12), // "editControls"
QT_MOC_LITERAL(8, 74, 12) // "closeEffects"

    },
    "EffectView\0moveUp\0\0EffectView*\0_plugin\0"
    "moveDown\0deletePlugin\0editControls\0"
    "closeEffects"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_EffectView[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   54,    2, 0x06 /* Public */,
       5,    1,   57,    2, 0x06 /* Public */,
       6,    1,   60,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   63,    2, 0x0a /* Public */,
       1,    0,   64,    2, 0x0a /* Public */,
       5,    0,   65,    2, 0x0a /* Public */,
       6,    0,   66,    2, 0x0a /* Public */,
       8,    0,   67,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,
    QMetaType::Void, 0x80000000 | 3,    4,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void EffectView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<EffectView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->moveUp((*reinterpret_cast< EffectView*(*)>(_a[1]))); break;
        case 1: _t->moveDown((*reinterpret_cast< EffectView*(*)>(_a[1]))); break;
        case 2: _t->deletePlugin((*reinterpret_cast< EffectView*(*)>(_a[1]))); break;
        case 3: _t->editControls(); break;
        case 4: _t->moveUp(); break;
        case 5: _t->moveDown(); break;
        case 6: _t->deletePlugin(); break;
        case 7: _t->closeEffects(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< EffectView* >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< EffectView* >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< EffectView* >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (EffectView::*)(EffectView * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EffectView::moveUp)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (EffectView::*)(EffectView * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EffectView::moveDown)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (EffectView::*)(EffectView * );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&EffectView::deletePlugin)) {
                *result = 2;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject EffectView::staticMetaObject = { {
    &PluginView::staticMetaObject,
    qt_meta_stringdata_EffectView.data,
    qt_meta_data_EffectView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *EffectView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *EffectView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_EffectView.stringdata0))
        return static_cast<void*>(this);
    return PluginView::qt_metacast(_clname);
}

int EffectView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = PluginView::qt_metacall(_c, _id, _a);
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
void EffectView::moveUp(EffectView * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void EffectView::moveDown(EffectView * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void EffectView::deletePlugin(EffectView * _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
