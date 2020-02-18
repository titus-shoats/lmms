/****************************************************************************
** Meta object code from reading C++ file 'FreeBoy.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../plugins/FreeBoy/FreeBoy.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'FreeBoy.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_FreeBoyInstrument_t {
    QByteArrayData data[1];
    char stringdata0[18];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FreeBoyInstrument_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FreeBoyInstrument_t qt_meta_stringdata_FreeBoyInstrument = {
    {
QT_MOC_LITERAL(0, 0, 17) // "FreeBoyInstrument"

    },
    "FreeBoyInstrument"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FreeBoyInstrument[] = {

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

void FreeBoyInstrument::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject FreeBoyInstrument::staticMetaObject = { {
    &Instrument::staticMetaObject,
    qt_meta_stringdata_FreeBoyInstrument.data,
    qt_meta_data_FreeBoyInstrument,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FreeBoyInstrument::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FreeBoyInstrument::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FreeBoyInstrument.stringdata0))
        return static_cast<void*>(this);
    return Instrument::qt_metacast(_clname);
}

int FreeBoyInstrument::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Instrument::qt_metacall(_c, _id, _a);
    return _id;
}
struct qt_meta_stringdata_FreeBoyInstrumentView_t {
    QByteArrayData data[1];
    char stringdata0[22];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_FreeBoyInstrumentView_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_FreeBoyInstrumentView_t qt_meta_stringdata_FreeBoyInstrumentView = {
    {
QT_MOC_LITERAL(0, 0, 21) // "FreeBoyInstrumentView"

    },
    "FreeBoyInstrumentView"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_FreeBoyInstrumentView[] = {

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

void FreeBoyInstrumentView::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    Q_UNUSED(_o);
    Q_UNUSED(_id);
    Q_UNUSED(_c);
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject FreeBoyInstrumentView::staticMetaObject = { {
    &InstrumentViewFixedSize::staticMetaObject,
    qt_meta_stringdata_FreeBoyInstrumentView.data,
    qt_meta_data_FreeBoyInstrumentView,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *FreeBoyInstrumentView::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *FreeBoyInstrumentView::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_FreeBoyInstrumentView.stringdata0))
        return static_cast<void*>(this);
    return InstrumentViewFixedSize::qt_metacast(_clname);
}

int FreeBoyInstrumentView::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = InstrumentViewFixedSize::qt_metacall(_c, _id, _a);
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
