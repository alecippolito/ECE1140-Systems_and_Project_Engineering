/****************************************************************************
** Meta object code from reading C++ file 'TrainControllerGUI.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Group2_TrainSystem/TrainControllerGUI.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TrainControllerGUI.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TrainControllerGUI_t {
    QByteArrayData data[12];
    char stringdata0[232];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_TrainControllerGUI_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_TrainControllerGUI_t qt_meta_stringdata_TrainControllerGUI = {
    {
QT_MOC_LITERAL(0, 0, 18), // "TrainControllerGUI"
QT_MOC_LITERAL(1, 19, 19), // "on_incSpeed_clicked"
QT_MOC_LITERAL(2, 39, 0), // ""
QT_MOC_LITERAL(3, 40, 19), // "on_decSpeed_clicked"
QT_MOC_LITERAL(4, 60, 21), // "on_doorButton_clicked"
QT_MOC_LITERAL(5, 82, 22), // "on_lightButton_clicked"
QT_MOC_LITERAL(6, 105, 23), // "on_serviceBrake_clicked"
QT_MOC_LITERAL(7, 129, 15), // "on_mode_clicked"
QT_MOC_LITERAL(8, 145, 23), // "on_serviceBrake_pressed"
QT_MOC_LITERAL(9, 169, 23), // "on_eBrakeButton_clicked"
QT_MOC_LITERAL(10, 193, 17), // "on_submit_clicked"
QT_MOC_LITERAL(11, 211, 20) // "receiveTimeDialation"

    },
    "TrainControllerGUI\0on_incSpeed_clicked\0"
    "\0on_decSpeed_clicked\0on_doorButton_clicked\0"
    "on_lightButton_clicked\0on_serviceBrake_clicked\0"
    "on_mode_clicked\0on_serviceBrake_pressed\0"
    "on_eBrakeButton_clicked\0on_submit_clicked\0"
    "receiveTimeDialation"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TrainControllerGUI[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      10,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   64,    2, 0x08 /* Private */,
       3,    0,   65,    2, 0x08 /* Private */,
       4,    0,   66,    2, 0x08 /* Private */,
       5,    0,   67,    2, 0x08 /* Private */,
       6,    0,   68,    2, 0x08 /* Private */,
       7,    0,   69,    2, 0x08 /* Private */,
       8,    0,   70,    2, 0x08 /* Private */,
       9,    0,   71,    2, 0x08 /* Private */,
      10,    0,   72,    2, 0x08 /* Private */,
      11,    1,   73,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    2,

       0        // eod
};

void TrainControllerGUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TrainControllerGUI *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_incSpeed_clicked(); break;
        case 1: _t->on_decSpeed_clicked(); break;
        case 2: _t->on_doorButton_clicked(); break;
        case 3: _t->on_lightButton_clicked(); break;
        case 4: _t->on_serviceBrake_clicked(); break;
        case 5: _t->on_mode_clicked(); break;
        case 6: _t->on_serviceBrake_pressed(); break;
        case 7: _t->on_eBrakeButton_clicked(); break;
        case 8: _t->on_submit_clicked(); break;
        case 9: _t->receiveTimeDialation((*reinterpret_cast< double(*)>(_a[1]))); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject TrainControllerGUI::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_TrainControllerGUI.data,
    qt_meta_data_TrainControllerGUI,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *TrainControllerGUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *TrainControllerGUI::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_TrainControllerGUI.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int TrainControllerGUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 10)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 10;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 10)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 10;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
