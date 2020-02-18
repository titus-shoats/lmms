/****************************************************************************
** Meta object code from reading C++ file 'ladspa_description.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../plugins/ladspa_browser/ladspa_description.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ladspa_description.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ladspaDescription_t {
    QByteArrayData data[9];
    char stringdata0[109];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_ladspaDescription_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_ladspaDescription_t qt_meta_stringdata_ladspaDescription = {
    {
QT_MOC_LITERAL(0, 0, 17), // "ladspaDescription"
QT_MOC_LITERAL(1, 18, 13), // "doubleClicked"
QT_MOC_LITERAL(2, 32, 0), // ""
QT_MOC_LITERAL(3, 33, 12), // "ladspa_key_t"
QT_MOC_LITERAL(4, 46, 10), // "rowChanged"
QT_MOC_LITERAL(5, 57, 12), // "_pluginIndex"
QT_MOC_LITERAL(6, 70, 15), // "onDoubleClicked"
QT_MOC_LITERAL(7, 86, 16), // "QListWidgetItem*"
QT_MOC_LITERAL(8, 103, 5) // "_item"

    },
    "ladspaDescription\0doubleClicked\0\0"
    "ladspa_key_t\0rowChanged\0_pluginIndex\0"
    "onDoubleClicked\0QListWidgetItem*\0_item"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ladspaDescription[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   29,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       4,    1,   32,    2, 0x08 /* Private */,
       6,    1,   35,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    5,
    QMetaType::Void, 0x80000000 | 7,    8,

       0        // eod
};

void ladspaDescription::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ladspaDescription *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->doubleClicked((*reinterpret_cast< const ladspa_key_t(*)>(_a[1]))); break;
        case 1: _t->rowChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 2: _t->onDoubleClicked((*reinterpret_cast< QListWidgetItem*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ladspaDescription::*)(const ladspa_key_t & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ladspaDescription::doubleClicked)) {
                *result = 0;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject ladspaDescription::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_ladspaDescription.data,
    qt_meta_data_ladspaDescription,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *ladspaDescription::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ladspaDescription::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ladspaDescription.stringdata0))
        return static_cast<void*>(this);
    return QWidget::qt_metacast(_clname);
}

int ladspaDescription::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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

// SIGNAL 0
void ladspaDescription::doubleClicked(const ladspa_key_t & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
