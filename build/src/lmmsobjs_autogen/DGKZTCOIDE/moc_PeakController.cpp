/****************************************************************************
** Meta object code from reading C++ file 'PeakController.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../include/PeakController.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'PeakController.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_PeakController_t {
    QByteArrayData data[8];
    char stringdata0[99];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PeakController_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PeakController_t qt_meta_stringdata_PeakController = {
    {
QT_MOC_LITERAL(0, 0, 14), // "PeakController"
QT_MOC_LITERAL(1, 15, 12), // "createDialog"
QT_MOC_LITERAL(2, 28, 17), // "ControllerDialog*"
QT_MOC_LITERAL(3, 46, 0), // ""
QT_MOC_LITERAL(4, 47, 8), // "QWidget*"
QT_MOC_LITERAL(5, 56, 7), // "_parent"
QT_MOC_LITERAL(6, 64, 21), // "handleDestroyedEffect"
QT_MOC_LITERAL(7, 86, 12) // "updateCoeffs"

    },
    "PeakController\0createDialog\0"
    "ControllerDialog*\0\0QWidget*\0_parent\0"
    "handleDestroyedEffect\0updateCoeffs"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PeakController[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       3,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   29,    3, 0x0a /* Public */,
       6,    0,   32,    3, 0x0a /* Public */,
       7,    0,   33,    3, 0x0a /* Public */,

 // slots: parameters
    0x80000000 | 2, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void PeakController::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<PeakController *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: { ControllerDialog* _r = _t->createDialog((*reinterpret_cast< QWidget*(*)>(_a[1])));
            if (_a[0]) *reinterpret_cast< ControllerDialog**>(_a[0]) = std::move(_r); }  break;
        case 1: _t->handleDestroyedEffect(); break;
        case 2: _t->updateCoeffs(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 0:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QWidget* >(); break;
            }
            break;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject PeakController::staticMetaObject = { {
    &Controller::staticMetaObject,
    qt_meta_stringdata_PeakController.data,
    qt_meta_data_PeakController,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PeakController::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PeakController::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PeakController.stringdata0))
        return static_cast<void*>(this);
    return Controller::qt_metacast(_clname);
}

int PeakController::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Controller::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 3)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 3;
    }
    return _id;
}
struct qt_meta_stringdata_PeakControllerDialog_t {
    QByteArrayData data[1];
    char stringdata0[21];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_PeakControllerDialog_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_PeakControllerDialog_t qt_meta_stringdata_PeakControllerDialog = {
    {
QT_MOC_LITERAL(0, 0, 20) // "PeakControllerDialog"

    },
    "PeakControllerDialog"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_PeakControllerDialog[] = {

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

void PeakControllerDialog::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject PeakControllerDialog::staticMetaObject = { {
    &ControllerDialog::staticMetaObject,
    qt_meta_stringdata_PeakControllerDialog.data,
    qt_meta_data_PeakControllerDialog,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *PeakControllerDialog::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *PeakControllerDialog::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_PeakControllerDialog.stringdata0))
        return static_cast<void*>(this);
    return ControllerDialog::qt_metacast(_clname);
}

int PeakControllerDialog::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = ControllerDialog::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
