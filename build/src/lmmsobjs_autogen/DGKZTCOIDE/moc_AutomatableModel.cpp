/****************************************************************************
** Meta object code from reading C++ file 'AutomatableModel.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../include/AutomatableModel.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AutomatableModel.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AutomatableModel_t {
    QByteArrayData data[9];
    char stringdata0[93];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AutomatableModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AutomatableModel_t qt_meta_stringdata_AutomatableModel = {
    {
QT_MOC_LITERAL(0, 0, 16), // "AutomatableModel"
QT_MOC_LITERAL(1, 17, 16), // "initValueChanged"
QT_MOC_LITERAL(2, 34, 0), // ""
QT_MOC_LITERAL(3, 35, 3), // "val"
QT_MOC_LITERAL(4, 39, 9), // "destroyed"
QT_MOC_LITERAL(5, 49, 7), // "jo_id_t"
QT_MOC_LITERAL(6, 57, 2), // "id"
QT_MOC_LITERAL(7, 60, 5), // "reset"
QT_MOC_LITERAL(8, 66, 26) // "unlinkControllerConnection"

    },
    "AutomatableModel\0initValueChanged\0\0"
    "val\0destroyed\0jo_id_t\0id\0reset\0"
    "unlinkControllerConnection"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AutomatableModel[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       4,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    1,   34,    2, 0x06 /* Public */,
       4,    1,   37,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    0,   40,    2, 0x0a /* Public */,
       8,    0,   41,    2, 0x0a /* Public */,

 // signals: parameters
    QMetaType::Void, QMetaType::Float,    3,
    QMetaType::Void, 0x80000000 | 5,    6,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AutomatableModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AutomatableModel *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->initValueChanged((*reinterpret_cast< float(*)>(_a[1]))); break;
        case 1: _t->destroyed((*reinterpret_cast< jo_id_t(*)>(_a[1]))); break;
        case 2: _t->reset(); break;
        case 3: _t->unlinkControllerConnection(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AutomatableModel::*)(float );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AutomatableModel::initValueChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AutomatableModel::*)(jo_id_t );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AutomatableModel::destroyed)) {
                *result = 1;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject AutomatableModel::staticMetaObject = { {
    &Model::staticMetaObject,
    qt_meta_stringdata_AutomatableModel.data,
    qt_meta_data_AutomatableModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AutomatableModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AutomatableModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AutomatableModel.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "JournallingObject"))
        return static_cast< JournallingObject*>(this);
    return Model::qt_metacast(_clname);
}

int AutomatableModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Model::qt_metacall(_c, _id, _a);
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

// SIGNAL 0
void AutomatableModel::initValueChanged(float _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void AutomatableModel::destroyed(jo_id_t _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_FloatModel_t {
    QByteArrayData data[1];
    char stringdata0[11];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FloatModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FloatModel_t qt_meta_stringdata_FloatModel = {
    {
QT_MOC_LITERAL(0, 0, 10) // "FloatModel"

    },
    "FloatModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FloatModel[] = {

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

void FloatModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject FloatModel::staticMetaObject = { {
    &TypedAutomatableModel<float>::staticMetaObject,
    qt_meta_stringdata_FloatModel.data,
    qt_meta_data_FloatModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FloatModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FloatModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FloatModel.stringdata0))
        return static_cast<void*>(this);
    return TypedAutomatableModel<float>::qt_metacast(_clname);
}

int FloatModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TypedAutomatableModel<float>::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_IntModel_t {
    QByteArrayData data[1];
    char stringdata0[9];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_IntModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_IntModel_t qt_meta_stringdata_IntModel = {
    {
QT_MOC_LITERAL(0, 0, 8) // "IntModel"

    },
    "IntModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_IntModel[] = {

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

void IntModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject IntModel::staticMetaObject = { {
    &TypedAutomatableModel<int>::staticMetaObject,
    qt_meta_stringdata_IntModel.data,
    qt_meta_data_IntModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *IntModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *IntModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_IntModel.stringdata0))
        return static_cast<void*>(this);
    return TypedAutomatableModel<int>::qt_metacast(_clname);
}

int IntModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TypedAutomatableModel<int>::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_BoolModel_t {
    QByteArrayData data[1];
    char stringdata0[10];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_BoolModel_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_BoolModel_t qt_meta_stringdata_BoolModel = {
    {
QT_MOC_LITERAL(0, 0, 9) // "BoolModel"

    },
    "BoolModel"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_BoolModel[] = {

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

void BoolModel::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject BoolModel::staticMetaObject = { {
    &TypedAutomatableModel<bool>::staticMetaObject,
    qt_meta_stringdata_BoolModel.data,
    qt_meta_data_BoolModel,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *BoolModel::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *BoolModel::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_BoolModel.stringdata0))
        return static_cast<void*>(this);
    return TypedAutomatableModel<bool>::qt_metacast(_clname);
}

int BoolModel::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = TypedAutomatableModel<bool>::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
