/****************************************************************************
** Meta object code from reading C++ file 'tarea3arreglos.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../TareasParcial1/tarea3arreglos.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tarea3arreglos.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Tarea3Arreglos_t {
    QByteArrayData data[10];
    char stringdata[167];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Tarea3Arreglos_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Tarea3Arreglos_t qt_meta_stringdata_Tarea3Arreglos = {
    {
QT_MOC_LITERAL(0, 0, 14), // "Tarea3Arreglos"
QT_MOC_LITERAL(1, 15, 12), // "agregarBoton"
QT_MOC_LITERAL(2, 28, 0), // ""
QT_MOC_LITERAL(3, 29, 13), // "insertarBoton"
QT_MOC_LITERAL(4, 43, 12), // "limpiarBoton"
QT_MOC_LITERAL(5, 56, 13), // "eliminarBoton"
QT_MOC_LITERAL(6, 70, 23), // "on_agregarBoton_clicked"
QT_MOC_LITERAL(7, 94, 24), // "on_insertarBoton_clicked"
QT_MOC_LITERAL(8, 119, 24), // "on_eliminarBoton_clicked"
QT_MOC_LITERAL(9, 144, 22) // "on_vaciarBoton_clicked"

    },
    "Tarea3Arreglos\0agregarBoton\0\0insertarBoton\0"
    "limpiarBoton\0eliminarBoton\0"
    "on_agregarBoton_clicked\0"
    "on_insertarBoton_clicked\0"
    "on_eliminarBoton_clicked\0"
    "on_vaciarBoton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Tarea3Arreglos[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       8,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   54,    2, 0x08 /* Private */,
       3,    0,   55,    2, 0x08 /* Private */,
       4,    0,   56,    2, 0x08 /* Private */,
       5,    0,   57,    2, 0x08 /* Private */,
       6,    0,   58,    2, 0x08 /* Private */,
       7,    0,   59,    2, 0x08 /* Private */,
       8,    0,   60,    2, 0x08 /* Private */,
       9,    0,   61,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void Tarea3Arreglos::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Tarea3Arreglos *_t = static_cast<Tarea3Arreglos *>(_o);
        switch (_id) {
        case 0: _t->on_agregarBoton_clicked(); break;
        case 1: _t->on_insertarBoton_clicked(); break;
        case 2: _t->on_eliminarBoton_clicked(); break;
        case 3: _t->on_vaciarBoton_clicked(); break;
        default: ;
        }
    }
    Q_UNUSED(_a);
}

const QMetaObject Tarea3Arreglos::staticMetaObject = {
    { &QWidget::staticMetaObject, qt_meta_stringdata_Tarea3Arreglos.data,
      qt_meta_data_Tarea3Arreglos,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Tarea3Arreglos::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tarea3Arreglos::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Tarea3Arreglos.stringdata))
        return static_cast<void*>(const_cast< Tarea3Arreglos*>(this));
    return QWidget::qt_metacast(_clname);
}

int Tarea3Arreglos::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QWidget::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 8)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 8;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 8)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 8;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
