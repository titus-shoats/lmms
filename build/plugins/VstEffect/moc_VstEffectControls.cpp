/****************************************************************************
** Meta object code from reading C++ file 'VstEffectControls.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../plugins/VstEffect/VstEffectControls.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'VstEffectControls.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_VstEffectControls_t {
    QByteArrayData data[12];
    char stringdata0[124];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_VstEffectControls_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_VstEffectControls_t qt_meta_stringdata_VstEffectControls = {
    {
QT_MOC_LITERAL(0, 0, 17), // "VstEffectControls"
QT_MOC_LITERAL(1, 18, 10), // "updateMenu"
QT_MOC_LITERAL(2, 29, 0), // ""
QT_MOC_LITERAL(3, 30, 12), // "managePlugin"
QT_MOC_LITERAL(4, 43, 10), // "openPreset"
QT_MOC_LITERAL(5, 54, 10), // "savePreset"
QT_MOC_LITERAL(6, 65, 10), // "rollPreset"
QT_MOC_LITERAL(7, 76, 10), // "rolrPreset"
QT_MOC_LITERAL(8, 87, 9), // "selPreset"
QT_MOC_LITERAL(9, 97, 12), // "setParameter"
QT_MOC_LITERAL(10, 110, 6), // "Model*"
QT_MOC_LITERAL(11, 117, 6) // "action"

    },
    "VstEffectControls\0updateMenu\0\0"
    "managePlugin\0openPreset\0savePreset\0"
    "rollPreset\0rolrPreset\0selPreset\0"
    "setParameter\0Model*\0action"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_VstEffectControls[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x09 /* Protected */,
       3,    0,   55,    2, 0x09 /* Protected */,
       4,    0,   56,    2, 0x09 /* Protected */,
       5,    0,   57,    2, 0x09 /* Protected */,
       6,    0,   58,    2, 0x09 /* Protected */,
       7,    0,   59,    2, 0x09 /* Protected */,
       8,    0,   60,    2, 0x09 /* Protected */,
       9,    1,   61,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 10,   11,

       0        // eod
};

void VstEffectControls::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<VstEffectControls *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->updateMenu(); break;
        case 1: _t->managePlugin(); break;
        case 2: _t->openPreset(); break;
        case 3: _t->savePreset(); break;
        case 4: _t->rollPreset(); break;
        case 5: _t->rolrPreset(); break;
        case 6: _t->selPreset(); break;
        case 7: _t->setParameter((*reinterpret_cast< Model*(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Model* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject VstEffectControls::staticMetaObject = { {
    &EffectControls::staticMetaObject,
    qt_meta_stringdata_VstEffectControls.data,
    qt_meta_data_VstEffectControls,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *VstEffectControls::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *VstEffectControls::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_VstEffectControls.stringdata0))
        return static_cast<void*>(this);
    return EffectControls::qt_metacast(_clname);
}

int VstEffectControls::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = EffectControls::qt_metacall(_c, _id, _a);
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
struct qt_meta_stringdata_manageVSTEffectView_t {
    QByteArrayData data[8];
    char stringdata0[92];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_manageVSTEffectView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_manageVSTEffectView_t qt_meta_stringdata_manageVSTEffectView = {
    {
QT_MOC_LITERAL(0, 0, 19), // "manageVSTEffectView"
QT_MOC_LITERAL(1, 20, 10), // "syncPlugin"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 20), // "displayAutomatedOnly"
QT_MOC_LITERAL(4, 53, 12), // "setParameter"
QT_MOC_LITERAL(5, 66, 6), // "Model*"
QT_MOC_LITERAL(6, 73, 6), // "action"
QT_MOC_LITERAL(7, 80, 11) // "closeWindow"

    },
    "manageVSTEffectView\0syncPlugin\0\0"
    "displayAutomatedOnly\0setParameter\0"
    "Model*\0action\0closeWindow"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_manageVSTEffectView[] = {

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
       1,    0,   34,    2, 0x09 /* Protected */,
       3,    0,   35,    2, 0x09 /* Protected */,
       4,    1,   36,    2, 0x09 /* Protected */,
       7,    0,   39,    2, 0x09 /* Protected */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 5,    6,
    QMetaType::Void,

       0        // eod
};

void manageVSTEffectView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<manageVSTEffectView *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->syncPlugin(); break;
        case 1: _t->displayAutomatedOnly(); break;
        case 2: _t->setParameter((*reinterpret_cast< Model*(*)>(_a[1]))); break;
        case 3: _t->closeWindow(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< Model* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject manageVSTEffectView::staticMetaObject = { {
    &QObject::staticMetaObject,
    qt_meta_stringdata_manageVSTEffectView.data,
    qt_meta_data_manageVSTEffectView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *manageVSTEffectView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *manageVSTEffectView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_manageVSTEffectView.stringdata0))
        return static_cast<void*>(this);
    return QObject::qt_metacast(_clname);
}

int manageVSTEffectView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QObject::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 4)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 4;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
