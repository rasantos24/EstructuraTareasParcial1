/****************************************************************************
** Meta object code from reading C++ file 'tarea1semafaro.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.4.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../TareasParcial1/tarea1semafaro.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'tarea1semafaro.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.4.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
struct qt_meta_stringdata_Tarea1Semafaro_t {
    QByteArrayData data[5];
    char stringdata[65];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_Tarea1Semafaro_t, stringdata) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_Tarea1Semafaro_t qt_meta_stringdata_Tarea1Semafaro = {
    {
QT_MOC_LITERAL(0, 0, 14), // "Tarea1Semafaro"
QT_MOC_LITERAL(1, 15, 23), // "on_pintarCalles_clicked"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 19), // "on_AB_linkActivated"
QT_MOC_LITERAL(4, 60, 4) // "link"

    },
    "Tarea1Semafaro\0on_pintarCalles_clicked\0"
    "\0on_AB_linkActivated\0link"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_Tarea1Semafaro[] = {

 // content:
       7,       // revision
       0,       // classname
       0,    0, // classinfo
       2,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   24,    2, 0x08 /* Private */,
       3,    1,   25,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    4,

       0        // eod
};

void Tarea1Semafaro::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        Tarea1Semafaro *_t = static_cast<Tarea1Semafaro *>(_o);
        switch (_id) {
        case 0: _t->on_pintarCalles_clicked(); break;
        //case 1: _t->on_AB_linkActivated((*reinterpret_cast< const QString(*)>(_a[1]))); break;
        default: ;
        }
    }
}

const QMetaObject Tarea1Semafaro::staticMetaObject = {
    { &QDialog::staticMetaObject, qt_meta_stringdata_Tarea1Semafaro.data,
      qt_meta_data_Tarea1Semafaro,  qt_static_metacall, Q_NULLPTR, Q_NULLPTR}
};


const QMetaObject *Tarea1Semafaro::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *Tarea1Semafaro::qt_metacast(const char *_clname)
{
    if (!_clname) return Q_NULLPTR;
    if (!strcmp(_clname, qt_meta_stringdata_Tarea1Semafaro.stringdata))
        return static_cast<void*>(const_cast< Tarea1Semafaro*>(this));
    return QDialog::qt_metacast(_clname);
}

int Tarea1Semafaro::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 2)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 2;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 2)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 2;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
