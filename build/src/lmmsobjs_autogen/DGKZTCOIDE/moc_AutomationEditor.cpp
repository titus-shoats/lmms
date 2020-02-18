/****************************************************************************
** Meta object code from reading C++ file 'AutomationEditor.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../../include/AutomationEditor.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'AutomationEditor.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_AutomationEditor_t {
    QByteArrayData data[36];
    char stringdata0[488];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AutomationEditor_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AutomationEditor_t qt_meta_stringdata_AutomationEditor = {
    {
QT_MOC_LITERAL(0, 0, 16), // "AutomationEditor"
QT_MOC_LITERAL(1, 17, 21), // "currentPatternChanged"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 15), // "positionChanged"
QT_MOC_LITERAL(4, 56, 8), // "MidiTime"
QT_MOC_LITERAL(5, 65, 6), // "update"
QT_MOC_LITERAL(6, 72, 24), // "updateAfterPatternChange"
QT_MOC_LITERAL(7, 97, 4), // "play"
QT_MOC_LITERAL(8, 102, 4), // "stop"
QT_MOC_LITERAL(9, 107, 11), // "horScrolled"
QT_MOC_LITERAL(10, 119, 7), // "new_pos"
QT_MOC_LITERAL(11, 127, 11), // "verScrolled"
QT_MOC_LITERAL(12, 139, 11), // "setEditMode"
QT_MOC_LITERAL(13, 151, 27), // "AutomationEditor::EditModes"
QT_MOC_LITERAL(14, 179, 4), // "mode"
QT_MOC_LITERAL(15, 184, 18), // "setProgressionType"
QT_MOC_LITERAL(16, 203, 35), // "AutomationPattern::Progressio..."
QT_MOC_LITERAL(17, 239, 4), // "type"
QT_MOC_LITERAL(18, 244, 10), // "setTension"
QT_MOC_LITERAL(19, 255, 18), // "copySelectedValues"
QT_MOC_LITERAL(20, 274, 17), // "cutSelectedValues"
QT_MOC_LITERAL(21, 292, 11), // "pasteValues"
QT_MOC_LITERAL(22, 304, 20), // "deleteSelectedValues"
QT_MOC_LITERAL(23, 325, 14), // "updatePosition"
QT_MOC_LITERAL(24, 340, 1), // "t"
QT_MOC_LITERAL(25, 342, 15), // "zoomingXChanged"
QT_MOC_LITERAL(26, 358, 15), // "zoomingYChanged"
QT_MOC_LITERAL(27, 374, 15), // "setQuantization"
QT_MOC_LITERAL(28, 390, 12), // "barLineColor"
QT_MOC_LITERAL(29, 403, 13), // "beatLineColor"
QT_MOC_LITERAL(30, 417, 9), // "lineColor"
QT_MOC_LITERAL(31, 427, 11), // "vertexColor"
QT_MOC_LITERAL(32, 439, 10), // "scaleColor"
QT_MOC_LITERAL(33, 450, 10), // "graphColor"
QT_MOC_LITERAL(34, 461, 10), // "crossColor"
QT_MOC_LITERAL(35, 472, 15) // "backgroundShade"

    },
    "AutomationEditor\0currentPatternChanged\0"
    "\0positionChanged\0MidiTime\0update\0"
    "updateAfterPatternChange\0play\0stop\0"
    "horScrolled\0new_pos\0verScrolled\0"
    "setEditMode\0AutomationEditor::EditModes\0"
    "mode\0setProgressionType\0"
    "AutomationPattern::ProgressionTypes\0"
    "type\0setTension\0copySelectedValues\0"
    "cutSelectedValues\0pasteValues\0"
    "deleteSelectedValues\0updatePosition\0"
    "t\0zoomingXChanged\0zoomingYChanged\0"
    "setQuantization\0barLineColor\0beatLineColor\0"
    "lineColor\0vertexColor\0scaleColor\0"
    "graphColor\0crossColor\0backgroundShade"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AutomationEditor[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      21,   14, // methods
       8,  156, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,  119,    2, 0x06 /* Public */,
       3,    1,  120,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       5,    0,  123,    2, 0x0a /* Public */,
       6,    0,  124,    2, 0x0a /* Public */,
       7,    0,  125,    2, 0x09 /* Protected */,
       8,    0,  126,    2, 0x09 /* Protected */,
       9,    1,  127,    2, 0x09 /* Protected */,
      11,    1,  130,    2, 0x09 /* Protected */,
      12,    1,  133,    2, 0x09 /* Protected */,
      12,    1,  136,    2, 0x09 /* Protected */,
      15,    1,  139,    2, 0x09 /* Protected */,
      15,    1,  142,    2, 0x09 /* Protected */,
      18,    0,  145,    2, 0x09 /* Protected */,
      19,    0,  146,    2, 0x09 /* Protected */,
      20,    0,  147,    2, 0x09 /* Protected */,
      21,    0,  148,    2, 0x09 /* Protected */,
      22,    0,  149,    2, 0x09 /* Protected */,
      23,    1,  150,    2, 0x09 /* Protected */,
      25,    0,  153,    2, 0x09 /* Protected */,
      26,    0,  154,    2, 0x09 /* Protected */,
      27,    0,  155,    2, 0x09 /* Protected */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, QMetaType::Int,   10,
    QMetaType::Void, 0x80000000 | 13,   14,
    QMetaType::Void, QMetaType::Int,   14,
    QMetaType::Void, 0x80000000 | 16,   17,
    QMetaType::Void, QMetaType::Int,   17,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4,   24,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

 // properties: name, type, flags
      28, QMetaType::QColor, 0x00095103,
      29, QMetaType::QColor, 0x00095103,
      30, QMetaType::QColor, 0x00095103,
      31, QMetaType::QColor, 0x00095103,
      32, QMetaType::QBrush, 0x00095103,
      33, QMetaType::QBrush, 0x00095103,
      34, QMetaType::QColor, 0x00095103,
      35, QMetaType::QColor, 0x00095103,

       0        // eod
};

void AutomationEditor::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AutomationEditor *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->currentPatternChanged(); break;
        case 1: _t->positionChanged((*reinterpret_cast< const MidiTime(*)>(_a[1]))); break;
        case 2: _t->update(); break;
        case 3: _t->updateAfterPatternChange(); break;
        case 4: _t->play(); break;
        case 5: _t->stop(); break;
        case 6: _t->horScrolled((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->verScrolled((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->setEditMode((*reinterpret_cast< AutomationEditor::EditModes(*)>(_a[1]))); break;
        case 9: _t->setEditMode((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 10: _t->setProgressionType((*reinterpret_cast< AutomationPattern::ProgressionTypes(*)>(_a[1]))); break;
        case 11: _t->setProgressionType((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 12: _t->setTension(); break;
        case 13: _t->copySelectedValues(); break;
        case 14: _t->cutSelectedValues(); break;
        case 15: _t->pasteValues(); break;
        case 16: _t->deleteSelectedValues(); break;
        case 17: _t->updatePosition((*reinterpret_cast< const MidiTime(*)>(_a[1]))); break;
        case 18: _t->zoomingXChanged(); break;
        case 19: _t->zoomingYChanged(); break;
        case 20: _t->setQuantization(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AutomationEditor::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AutomationEditor::currentPatternChanged)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (AutomationEditor::*)(const MidiTime & );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AutomationEditor::positionChanged)) {
                *result = 1;
                return;
            }
        }
    }
#ifndef QT_NO_PROPERTIES
    else if (_c == QMetaObject::ReadProperty) {
        auto *_t = static_cast<AutomationEditor *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: *reinterpret_cast< QColor*>(_v) = _t->barLineColor(); break;
        case 1: *reinterpret_cast< QColor*>(_v) = _t->beatLineColor(); break;
        case 2: *reinterpret_cast< QColor*>(_v) = _t->lineColor(); break;
        case 3: *reinterpret_cast< QColor*>(_v) = _t->vertexColor(); break;
        case 4: *reinterpret_cast< QBrush*>(_v) = _t->scaleColor(); break;
        case 5: *reinterpret_cast< QBrush*>(_v) = _t->graphColor(); break;
        case 6: *reinterpret_cast< QColor*>(_v) = _t->crossColor(); break;
        case 7: *reinterpret_cast< QColor*>(_v) = _t->backgroundShade(); break;
        default: break;
        }
    } else if (_c == QMetaObject::WriteProperty) {
        auto *_t = static_cast<AutomationEditor *>(_o);
        Q_UNUSED(_t)
        void *_v = _a[0];
        switch (_id) {
        case 0: _t->setBarLineColor(*reinterpret_cast< QColor*>(_v)); break;
        case 1: _t->setBeatLineColor(*reinterpret_cast< QColor*>(_v)); break;
        case 2: _t->setLineColor(*reinterpret_cast< QColor*>(_v)); break;
        case 3: _t->setVertexColor(*reinterpret_cast< QColor*>(_v)); break;
        case 4: _t->setScaleColor(*reinterpret_cast< QBrush*>(_v)); break;
        case 5: _t->setGraphColor(*reinterpret_cast< QBrush*>(_v)); break;
        case 6: _t->setCrossColor(*reinterpret_cast< QColor*>(_v)); break;
        case 7: _t->setBackgroundShade(*reinterpret_cast< QColor*>(_v)); break;
        default: break;
        }
    } else if (_c == QMetaObject::ResetProperty) {
    }
#endif // QT_NO_PROPERTIES
}

QT_INIT_METAOBJECT const QMetaObject AutomationEditor::staticMetaObject = { {
    &QWidget::staticMetaObject,
    qt_meta_stringdata_AutomationEditor.data,
    qt_meta_data_AutomationEditor,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AutomationEditor::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AutomationEditor::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AutomationEditor.stringdata0))
        return static_cast<void*>(this);
    if (!strcmp(_clname, "JournallingObject"))
        return static_cast< JournallingObject*>(this);
    return QWidget::qt_metacast(_clname);
}

int AutomationEditor::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 21)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 21;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 21)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 21;
    }
#ifndef QT_NO_PROPERTIES
   else if (_c == QMetaObject::ReadProperty || _c == QMetaObject::WriteProperty
            || _c == QMetaObject::ResetProperty || _c == QMetaObject::RegisterPropertyMetaType) {
        qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyDesignable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyScriptable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyStored) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyEditable) {
        _id -= 8;
    } else if (_c == QMetaObject::QueryPropertyUser) {
        _id -= 8;
    }
#endif // QT_NO_PROPERTIES
    return _id;
}

// SIGNAL 0
void AutomationEditor::currentPatternChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void AutomationEditor::positionChanged(const MidiTime & _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(&_t1)) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
struct qt_meta_stringdata_AutomationEditorWindow_t {
    QByteArrayData data[7];
    char stringdata0[94];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_AutomationEditorWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_AutomationEditorWindow_t qt_meta_stringdata_AutomationEditorWindow = {
    {
QT_MOC_LITERAL(0, 0, 22), // "AutomationEditorWindow"
QT_MOC_LITERAL(1, 23, 21), // "currentPatternChanged"
QT_MOC_LITERAL(2, 45, 0), // ""
QT_MOC_LITERAL(3, 46, 19), // "clearCurrentPattern"
QT_MOC_LITERAL(4, 66, 4), // "play"
QT_MOC_LITERAL(5, 71, 4), // "stop"
QT_MOC_LITERAL(6, 76, 17) // "updateWindowTitle"

    },
    "AutomationEditorWindow\0currentPatternChanged\0"
    "\0clearCurrentPattern\0play\0stop\0"
    "updateWindowTitle"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_AutomationEditorWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   39,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       3,    0,   40,    2, 0x0a /* Public */,
       4,    0,   41,    2, 0x09 /* Protected */,
       5,    0,   42,    2, 0x09 /* Protected */,
       6,    0,   43,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void AutomationEditorWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<AutomationEditorWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->currentPatternChanged(); break;
        case 1: _t->clearCurrentPattern(); break;
        case 2: _t->play(); break;
        case 3: _t->stop(); break;
        case 4: _t->updateWindowTitle(); break;
        default: ;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (AutomationEditorWindow::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&AutomationEditorWindow::currentPatternChanged)) {
                *result = 0;
                return;
            }
        }
    }
    Q_UNUSED(_a);
}

QT_INIT_METAOBJECT const QMetaObject AutomationEditorWindow::staticMetaObject = { {
    &Editor::staticMetaObject,
    qt_meta_stringdata_AutomationEditorWindow.data,
    qt_meta_data_AutomationEditorWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *AutomationEditorWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *AutomationEditorWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_AutomationEditorWindow.stringdata0))
        return static_cast<void*>(this);
    return Editor::qt_metacast(_clname);
}

int AutomationEditorWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = Editor::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void AutomationEditorWindow::currentPatternChanged()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
