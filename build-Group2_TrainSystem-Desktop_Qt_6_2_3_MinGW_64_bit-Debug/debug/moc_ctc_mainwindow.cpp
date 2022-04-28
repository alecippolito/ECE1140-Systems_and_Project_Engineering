/****************************************************************************
** Meta object code from reading C++ file 'ctc_mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Group2_TrainSystem/ctc_mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctc_mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CTC_MainWindow_t {
    const uint offsetsAndSize[70];
    char stringdata0[774];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_CTC_MainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_CTC_MainWindow_t qt_meta_stringdata_CTC_MainWindow = {
    {
QT_MOC_LITERAL(0, 14), // "CTC_MainWindow"
QT_MOC_LITERAL(15, 15), // "sendStationData"
QT_MOC_LITERAL(31, 0), // ""
QT_MOC_LITERAL(32, 13), // "QList<double>"
QT_MOC_LITERAL(46, 13), // "sendTrainData"
QT_MOC_LITERAL(60, 16), // "sendAuthAndSpeed"
QT_MOC_LITERAL(77, 11), // "QList<bool>"
QT_MOC_LITERAL(89, 8), // "sendTime"
QT_MOC_LITERAL(98, 15), // "sendInitialTime"
QT_MOC_LITERAL(114, 11), // "sendCTCmode"
QT_MOC_LITERAL(126, 20), // "sendTrackEditCommand"
QT_MOC_LITERAL(147, 21), // "sendSwitchEditCommand"
QT_MOC_LITERAL(169, 33), // "on_actionDispatch_Train_trigg..."
QT_MOC_LITERAL(203, 15), // "RedLineSelected"
QT_MOC_LITERAL(219, 17), // "GreenLineSelected"
QT_MOC_LITERAL(237, 25), // "on_previousButton_clicked"
QT_MOC_LITERAL(263, 21), // "on_NextButton_clicked"
QT_MOC_LITERAL(285, 43), // "on_actionView_Green_Line_Stat..."
QT_MOC_LITERAL(329, 41), // "on_actionView_Red_Line_Status..."
QT_MOC_LITERAL(371, 38), // "on_actionView_Train_Statuses_..."
QT_MOC_LITERAL(410, 11), // "receiveTime"
QT_MOC_LITERAL(422, 18), // "receiveTimeRequest"
QT_MOC_LITERAL(441, 24), // "receiveDispatchImmediate"
QT_MOC_LITERAL(466, 22), // "receiveDispatchStandby"
QT_MOC_LITERAL(489, 18), // "receiveBlockStatus"
QT_MOC_LITERAL(508, 18), // "updateTrainDisplay"
QT_MOC_LITERAL(527, 32), // "on_actionView_Schedule_triggered"
QT_MOC_LITERAL(560, 23), // "receiveDispatchSchedule"
QT_MOC_LITERAL(584, 25), // "on_actionManual_triggered"
QT_MOC_LITERAL(610, 28), // "on_actionAutomatic_triggered"
QT_MOC_LITERAL(639, 18), // "receiveModeRequest"
QT_MOC_LITERAL(658, 35), // "on_actionOpen_Close_Track_tri..."
QT_MOC_LITERAL(694, 16), // "receiveTrackEdit"
QT_MOC_LITERAL(711, 42), // "on_actionChange_Switch_Locati..."
QT_MOC_LITERAL(754, 19) // "receiveSwitchUpdate"

    },
    "CTC_MainWindow\0sendStationData\0\0"
    "QList<double>\0sendTrainData\0"
    "sendAuthAndSpeed\0QList<bool>\0sendTime\0"
    "sendInitialTime\0sendCTCmode\0"
    "sendTrackEditCommand\0sendSwitchEditCommand\0"
    "on_actionDispatch_Train_triggered\0"
    "RedLineSelected\0GreenLineSelected\0"
    "on_previousButton_clicked\0"
    "on_NextButton_clicked\0"
    "on_actionView_Green_Line_Statuses_triggered\0"
    "on_actionView_Red_Line_Statuses_triggered\0"
    "on_actionView_Train_Statuses_triggered\0"
    "receiveTime\0receiveTimeRequest\0"
    "receiveDispatchImmediate\0"
    "receiveDispatchStandby\0receiveBlockStatus\0"
    "updateTrainDisplay\0on_actionView_Schedule_triggered\0"
    "receiveDispatchSchedule\0"
    "on_actionManual_triggered\0"
    "on_actionAutomatic_triggered\0"
    "receiveModeRequest\0"
    "on_actionOpen_Close_Track_triggered\0"
    "receiveTrackEdit\0"
    "on_actionChange_Switch_Locations_triggered\0"
    "receiveSwitchUpdate"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CTC_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      31,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       8,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    3,  200,    2, 0x06,    1 /* Public */,
       4,    3,  207,    2, 0x06,    5 /* Public */,
       5,    3,  214,    2, 0x06,    9 /* Public */,
       7,    2,  221,    2, 0x06,   13 /* Public */,
       8,    2,  226,    2, 0x06,   16 /* Public */,
       9,    1,  231,    2, 0x06,   19 /* Public */,
      10,    3,  234,    2, 0x06,   21 /* Public */,
      11,    3,  241,    2, 0x06,   25 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      12,    0,  248,    2, 0x08,   29 /* Private */,
      13,    0,  249,    2, 0x08,   30 /* Private */,
      14,    0,  250,    2, 0x08,   31 /* Private */,
      15,    0,  251,    2, 0x08,   32 /* Private */,
      16,    0,  252,    2, 0x08,   33 /* Private */,
      17,    0,  253,    2, 0x08,   34 /* Private */,
      18,    0,  254,    2, 0x08,   35 /* Private */,
      19,    0,  255,    2, 0x08,   36 /* Private */,
      20,    2,  256,    2, 0x08,   37 /* Private */,
      21,    0,  261,    2, 0x08,   40 /* Private */,
      22,    5,  262,    2, 0x08,   41 /* Private */,
      23,    6,  273,    2, 0x08,   47 /* Private */,
      24,    4,  286,    2, 0x08,   54 /* Private */,
      25,    0,  295,    2, 0x08,   59 /* Private */,
      26,    0,  296,    2, 0x08,   60 /* Private */,
      27,    8,  297,    2, 0x08,   61 /* Private */,
      28,    0,  314,    2, 0x08,   70 /* Private */,
      29,    0,  315,    2, 0x08,   71 /* Private */,
      30,    0,  316,    2, 0x08,   72 /* Private */,
      31,    0,  317,    2, 0x08,   73 /* Private */,
      32,    3,  318,    2, 0x08,   74 /* Private */,
      33,    0,  325,    2, 0x08,   78 /* Private */,
      34,    3,  326,    2, 0x08,   79 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 3, QMetaType::QStringList,    2,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool, QMetaType::QString,    2,    2,    2,
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 6, 0x80000000 | 3,    2,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Bool,    2,
    QMetaType::Void, QMetaType::Bool, QMetaType::Int, QMetaType::Bool,    2,    2,    2,
    QMetaType::Void, QMetaType::Bool, QMetaType::Int, QMetaType::Int,    2,    2,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::Double, QMetaType::Int, QMetaType::QTime, QMetaType::QString,    2,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::Bool, QMetaType::Double, QMetaType::Int, QMetaType::Int, QMetaType::QTime, QMetaType::QString,    2,    2,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::Bool, QMetaType::Int, QMetaType::Int, QMetaType::Bool,    2,    2,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::Double, QMetaType::Int, QMetaType::Int, QMetaType::QTime, QMetaType::Int, QMetaType::QTime, QMetaType::QString,    2,    2,    2,    2,    2,    2,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::Int, QMetaType::Bool,    2,    2,    2,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::Int, QMetaType::Int,    2,    2,    2,

       0        // eod
};

void CTC_MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CTC_MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sendStationData((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QList<double>(*)>(_a[2])),(*reinterpret_cast< QList<QString>(*)>(_a[3]))); break;
        case 1: _t->sendTrainData((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< QString(*)>(_a[3]))); break;
        case 2: _t->sendAuthAndSpeed((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QList<bool>(*)>(_a[2])),(*reinterpret_cast< QList<double>(*)>(_a[3]))); break;
        case 3: _t->sendTime((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->sendInitialTime((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 5: _t->sendCTCmode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 6: _t->sendTrackEditCommand((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 7: _t->sendSwitchEditCommand((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 8: _t->on_actionDispatch_Train_triggered(); break;
        case 9: _t->RedLineSelected(); break;
        case 10: _t->GreenLineSelected(); break;
        case 11: _t->on_previousButton_clicked(); break;
        case 12: _t->on_NextButton_clicked(); break;
        case 13: _t->on_actionView_Green_Line_Statuses_triggered(); break;
        case 14: _t->on_actionView_Red_Line_Statuses_triggered(); break;
        case 15: _t->on_actionView_Train_Statuses_triggered(); break;
        case 16: _t->receiveTime((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 17: _t->receiveTimeRequest(); break;
        case 18: _t->receiveDispatchImmediate((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QTime(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5]))); break;
        case 19: _t->receiveDispatchStandby((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< QTime(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6]))); break;
        case 20: _t->receiveBlockStatus((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 21: _t->updateTrainDisplay(); break;
        case 22: _t->on_actionView_Schedule_triggered(); break;
        case 23: _t->receiveDispatchSchedule((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< QTime(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< QTime(*)>(_a[7])),(*reinterpret_cast< QString(*)>(_a[8]))); break;
        case 24: _t->on_actionManual_triggered(); break;
        case 25: _t->on_actionAutomatic_triggered(); break;
        case 26: _t->receiveModeRequest(); break;
        case 27: _t->on_actionOpen_Close_Track_triggered(); break;
        case 28: _t->receiveTrackEdit((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 29: _t->on_actionChange_Switch_Locations_triggered(); break;
        case 30: _t->receiveSwitchUpdate((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<double> >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<bool> >(); break;
            case 2:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<double> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CTC_MainWindow::*)(bool , QVector<double> , QVector<QString> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CTC_MainWindow::sendStationData)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CTC_MainWindow::*)(int , bool , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CTC_MainWindow::sendTrainData)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CTC_MainWindow::*)(bool , QVector<bool> , QVector<double> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CTC_MainWindow::sendAuthAndSpeed)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (CTC_MainWindow::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CTC_MainWindow::sendTime)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (CTC_MainWindow::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CTC_MainWindow::sendInitialTime)) {
                *result = 4;
                return;
            }
        }
        {
            using _t = void (CTC_MainWindow::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CTC_MainWindow::sendCTCmode)) {
                *result = 5;
                return;
            }
        }
        {
            using _t = void (CTC_MainWindow::*)(bool , int , bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CTC_MainWindow::sendTrackEditCommand)) {
                *result = 6;
                return;
            }
        }
        {
            using _t = void (CTC_MainWindow::*)(bool , int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CTC_MainWindow::sendSwitchEditCommand)) {
                *result = 7;
                return;
            }
        }
    }
}

const QMetaObject CTC_MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CTC_MainWindow.offsetsAndSize,
    qt_meta_data_CTC_MainWindow,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_CTC_MainWindow_t
, QtPrivate::TypeAndForceComplete<CTC_MainWindow, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<double>, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<QString>, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<bool>, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<double>, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<QTime, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<QTime, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<QTime, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<QTime, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>


>,
    nullptr
} };


const QMetaObject *CTC_MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CTC_MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CTC_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int CTC_MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 31)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 31;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 31)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 31;
    }
    return _id;
}

// SIGNAL 0
void CTC_MainWindow::sendStationData(bool _t1, QVector<double> _t2, QVector<QString> _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CTC_MainWindow::sendTrainData(int _t1, bool _t2, QString _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CTC_MainWindow::sendAuthAndSpeed(bool _t1, QVector<bool> _t2, QVector<double> _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CTC_MainWindow::sendTime(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void CTC_MainWindow::sendInitialTime(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}

// SIGNAL 5
void CTC_MainWindow::sendCTCmode(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 5, _a);
}

// SIGNAL 6
void CTC_MainWindow::sendTrackEditCommand(bool _t1, int _t2, bool _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 6, _a);
}

// SIGNAL 7
void CTC_MainWindow::sendSwitchEditCommand(bool _t1, int _t2, int _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 7, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
