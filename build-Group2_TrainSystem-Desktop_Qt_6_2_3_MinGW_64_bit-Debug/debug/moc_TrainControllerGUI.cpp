/****************************************************************************
** Meta object code from reading C++ file 'TrainControllerGUI.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Group2_TrainSystem/TrainControllerGUI.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'TrainControllerGUI.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_TrainControllerGUI_t {
    const uint offsetsAndSize[36];
    char stringdata0[377];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_TrainControllerGUI_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_TrainControllerGUI_t qt_meta_stringdata_TrainControllerGUI = {
    {
QT_MOC_LITERAL(0, 18), // "TrainControllerGUI"
QT_MOC_LITERAL(19, 19), // "on_incSpeed_clicked"
QT_MOC_LITERAL(39, 0), // ""
QT_MOC_LITERAL(40, 19), // "on_decSpeed_clicked"
QT_MOC_LITERAL(60, 21), // "on_doorButton_clicked"
QT_MOC_LITERAL(82, 22), // "on_lightButton_clicked"
QT_MOC_LITERAL(105, 23), // "on_serviceBrake_clicked"
QT_MOC_LITERAL(129, 15), // "on_mode_clicked"
QT_MOC_LITERAL(145, 17), // "on_submit_clicked"
QT_MOC_LITERAL(163, 20), // "receiveTimeDialation"
QT_MOC_LITERAL(184, 23), // "on_eBrakeButton_clicked"
QT_MOC_LITERAL(208, 19), // "on_adButton_clicked"
QT_MOC_LITERAL(228, 24), // "on_incTempButton_clicked"
QT_MOC_LITERAL(253, 24), // "on_decTempButton_clicked"
QT_MOC_LITERAL(278, 24), // "on_announcement1_clicked"
QT_MOC_LITERAL(303, 24), // "on_announcement2_clicked"
QT_MOC_LITERAL(328, 23), // "on_announcment3_clicked"
QT_MOC_LITERAL(352, 24) // "on_announcement4_clicked"

    },
    "TrainControllerGUI\0on_incSpeed_clicked\0"
    "\0on_decSpeed_clicked\0on_doorButton_clicked\0"
    "on_lightButton_clicked\0on_serviceBrake_clicked\0"
    "on_mode_clicked\0on_submit_clicked\0"
    "receiveTimeDialation\0on_eBrakeButton_clicked\0"
    "on_adButton_clicked\0on_incTempButton_clicked\0"
    "on_decTempButton_clicked\0"
    "on_announcement1_clicked\0"
    "on_announcement2_clicked\0"
    "on_announcment3_clicked\0"
    "on_announcement4_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_TrainControllerGUI[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,  110,    2, 0x08,    1 /* Private */,
       3,    0,  111,    2, 0x08,    2 /* Private */,
       4,    0,  112,    2, 0x08,    3 /* Private */,
       5,    0,  113,    2, 0x08,    4 /* Private */,
       6,    0,  114,    2, 0x08,    5 /* Private */,
       7,    0,  115,    2, 0x08,    6 /* Private */,
       8,    0,  116,    2, 0x08,    7 /* Private */,
       9,    1,  117,    2, 0x08,    8 /* Private */,
      10,    0,  120,    2, 0x08,   10 /* Private */,
      11,    0,  121,    2, 0x08,   11 /* Private */,
      12,    0,  122,    2, 0x08,   12 /* Private */,
      13,    0,  123,    2, 0x08,   13 /* Private */,
      14,    0,  124,    2, 0x08,   14 /* Private */,
      15,    0,  125,    2, 0x08,   15 /* Private */,
      16,    0,  126,    2, 0x08,   16 /* Private */,
      17,    0,  127,    2, 0x08,   17 /* Private */,

 // slots: parameters
    QMetaType::Void,
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

       0        // eod
};

void TrainControllerGUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<TrainControllerGUI *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_incSpeed_clicked(); break;
        case 1: _t->on_decSpeed_clicked(); break;
        case 2: _t->on_doorButton_clicked(); break;
        case 3: _t->on_lightButton_clicked(); break;
        case 4: _t->on_serviceBrake_clicked(); break;
        case 5: _t->on_mode_clicked(); break;
        case 6: _t->on_submit_clicked(); break;
        case 7: _t->receiveTimeDialation((*reinterpret_cast< double(*)>(_a[1]))); break;
        case 8: _t->on_eBrakeButton_clicked(); break;
        case 9: _t->on_adButton_clicked(); break;
        case 10: _t->on_incTempButton_clicked(); break;
        case 11: _t->on_decTempButton_clicked(); break;
        case 12: _t->on_announcement1_clicked(); break;
        case 13: _t->on_announcement2_clicked(); break;
        case 14: _t->on_announcment3_clicked(); break;
        case 15: _t->on_announcement4_clicked(); break;
        default: ;
        }
    }
}

const QMetaObject TrainControllerGUI::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_TrainControllerGUI.offsetsAndSize,
    qt_meta_data_TrainControllerGUI,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_TrainControllerGUI_t
, QtPrivate::TypeAndForceComplete<TrainControllerGUI, std::true_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


>,
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
        if (_id < 16)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 16;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 16)
            *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType();
        _id -= 16;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
