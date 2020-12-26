/****************************************************************************
** Meta object code from reading C++ file 'TelaInicioMotorista.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.12.5)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../TelaInicioMotorista.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TelaInicioMotorista.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.12.5. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TelaInicioMotorista_t {
    QByteArrayData data[10];
    char stringdata0[200];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TelaInicioMotorista_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TelaInicioMotorista_t qt_meta_stringdata_TelaInicioMotorista = {
    {
QT_MOC_LITERAL(0, 0, 19), // "TelaInicioMotorista"
QT_MOC_LITERAL(1, 20, 17), // "on_Voltar_clicked"
QT_MOC_LITERAL(2, 38, 0), // ""
QT_MOC_LITERAL(3, 39, 18), // "on_Incluir_clicked"
QT_MOC_LITERAL(4, 58, 17), // "on_Listar_clicked"
QT_MOC_LITERAL(5, 76, 23), // "preencherComboCategoria"
QT_MOC_LITERAL(6, 100, 21), // "preencherComboCliente"
QT_MOC_LITERAL(7, 122, 39), // "on_comboBox_Cliente_currentIn..."
QT_MOC_LITERAL(8, 162, 5), // "index"
QT_MOC_LITERAL(9, 168, 31) // "on_comboBox_currentIndexChanged"

    },
    "TelaInicioMotorista\0on_Voltar_clicked\0"
    "\0on_Incluir_clicked\0on_Listar_clicked\0"
    "preencherComboCategoria\0preencherComboCliente\0"
    "on_comboBox_Cliente_currentIndexChanged\0"
    "index\0on_comboBox_currentIndexChanged"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TelaInicioMotorista[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   49,    2, 0x08 /* Private */,
       3,    0,   50,    2, 0x08 /* Private */,
       4,    0,   51,    2, 0x08 /* Private */,
       5,    0,   52,    2, 0x08 /* Private */,
       6,    0,   53,    2, 0x08 /* Private */,
       7,    1,   54,    2, 0x08 /* Private */,
       9,    1,   57,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int,    8,
    QMetaType::Void, QMetaType::Int,    8,

       0        // eod
};

void TelaInicioMotorista::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TelaInicioMotorista *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_Voltar_clicked(); break;
        case 1: _t->on_Incluir_clicked(); break;
        case 2: _t->on_Listar_clicked(); break;
        case 3: _t->preencherComboCategoria(); break;
        case 4: _t->preencherComboCliente(); break;
        case 5: _t->on_comboBox_Cliente_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->on_comboBox_currentIndexChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TelaInicioMotorista::staticMetaObject = { {
    &QDialog::staticMetaObject,
    qt_meta_stringdata_TelaInicioMotorista.data,
    qt_meta_data_TelaInicioMotorista,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TelaInicioMotorista::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TelaInicioMotorista::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TelaInicioMotorista.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int TelaInicioMotorista::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 7)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 7)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 7;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
