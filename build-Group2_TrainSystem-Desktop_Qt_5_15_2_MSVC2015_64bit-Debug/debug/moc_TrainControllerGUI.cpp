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
    QByteArrayData data[19];
    char stringdata0[403];
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
QT_MOC_LITERAL(8, 145, 20), // "receiveTimeDialation"
QT_MOC_LITERAL(9, 166, 23), // "on_eBrakeButton_clicked"
QT_MOC_LITERAL(10, 190, 19), // "on_adButton_clicked"
QT_MOC_LITERAL(11, 210, 24), // "on_incTempButton_clicked"
QT_MOC_LITERAL(12, 235, 24), // "on_decTempButton_clicked"
QT_MOC_LITERAL(13, 260, 24), // "on_announcement1_clicked"
QT_MOC_LITERAL(14, 285, 24), // "on_announcement2_clicked"
QT_MOC_LITERAL(15, 310, 23), // "on_announcment3_clicked"
QT_MOC_LITERAL(16, 334, 24), // "on_announcement4_clicked"
QT_MOC_LITERAL(17, 359, 21), // "on_tempSubmit_clicked"
QT_MOC_LITERAL(18, 381, 21) // "on_kpkiSubmit_clicked"

    },
    "TrainControllerGUI\0on_incSpeed_clicked\0"
    "\0on_decSpeed_clicked\0on_doorButton_clicked\0"
    "on_lightButton_clicked\0on_serviceBrake_clicked\0"
    "on_mode_clicked\0receiveTimeDialation\0"
    "on_eBrakeButton_clicked\0on_adButton_clicked\0"
    "on_incTempButton_clicked\0"
    "on_decTempButton_clicked\0"
    "on_announcement1_clicked\0"
    "on_announcement2_clicked\0"
    "on_announcment3_clicked\0"
    "on_announcement4_clicked\0on_tempSubmit_clicked\0"
    "on_kpkiSubmit_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TrainControllerGUI[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    0,   99,    2, 0x08 /* Private */,
       3,    0,  100,    2, 0x08 /* Private */,
       4,    0,  101,    2, 0x08 /* Private */,
       5,    0,  102,    2, 0x08 /* Private */,
       6,    0,  103,    2, 0x08 /* Private */,
       7,    0,  104,    2, 0x08 /* Private */,
       8,    1,  105,    2, 0x08 /* Private */,
       9,    0,  108,    2, 0x08 /* Private */,
      10,    0,  109,    2, 0x08 /* Private */,
      11,    0,  110,    2, 0x08 /* Private */,
      12,    0,  111,    2, 0x08 /* Private */,
      13,    0,  112,    2, 0x08 /* Private */,
      14,    0,  113,    2, 0x08 /* Private */,
      15,    0,  114,    2, 0x08 /* Private */,
      16,    0,  115,    2, 0x08 /* Private */,
      17,    0,  116,    2, 0x08 /* Private */,
      18,    0,  117,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Double,    2,
    QMetaType::Void,
    QMetaType::Void,
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
        case 6: _t->receiveTimeDialation((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 7: _t->on_eBrakeButton_clicked(); break;
        case 8: _t->on_adButton_clicked(); break;
        case 9: _t->on_incTempButton_clicked(); break;
        case 10: _t->on_decTempButton_clicked(); break;
        case 11: _t->on_announcement1_clicked(); break;
        case 12: _t->on_announcement2_clicked(); break;
        case 13: _t->on_announcment3_clicked(); break;
        case 14: _t->on_announcement4_clicked(); break;
        case 15: _t->on_tempSubmit_clicked(); break;
        case 16: _t->on_kpkiSubmit_clicked(); break;
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
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 17;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
