/****************************************************************************
** Meta object code from reading C++ file 'TelaListarMarca.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../TelaListarMarca.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TelaListarMarca.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TelaListarMarca_t {
    QByteArrayData data[8];
    char stringdata0[125];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TelaListarMarca_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TelaListarMarca_t qt_meta_stringdata_TelaListarMarca = {
    {
QT_MOC_LITERAL(0, 0, 15), // "TelaListarMarca"
QT_MOC_LITERAL(1, 16, 27), // "on_pushButtonVoltar_clicked"
QT_MOC_LITERAL(2, 44, 0), // ""
QT_MOC_LITERAL(3, 45, 23), // "on_tblMarca_cellClicked"
QT_MOC_LITERAL(4, 69, 3), // "row"
QT_MOC_LITERAL(5, 73, 6), // "column"
QT_MOC_LITERAL(6, 80, 29), // "on_pushButton_Alterar_clicked"
QT_MOC_LITERAL(7, 110, 14) // "atualizaTabela"

    },
    "TelaListarMarca\0on_pushButtonVoltar_clicked\0"
    "\0on_tblMarca_cellClicked\0row\0column\0"
    "on_pushButton_Alterar_clicked\0"
    "atualizaTabela"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TelaListarMarca[] = {

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
       1,    0,   34,    2, 0x08 /* Private */,
       3,    2,   35,    2, 0x08 /* Private */,
       6,    0,   40,    2, 0x08 /* Private */,
       7,    0,   41,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    4,    5,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void TelaListarMarca::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TelaListarMarca *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_pushButtonVoltar_clicked(); break;
        case 1: _t->on_tblMarca_cellClicked((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 2: _t->on_pushButton_Alterar_clicked(); break;
        case 3: _t->atualizaTabela(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TelaListarMarca::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_TelaListarMarca.data,
    qt_meta_data_TelaListarMarca,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TelaListarMarca::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TelaListarMarca::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TelaListarMarca.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int TelaListarMarca::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
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
