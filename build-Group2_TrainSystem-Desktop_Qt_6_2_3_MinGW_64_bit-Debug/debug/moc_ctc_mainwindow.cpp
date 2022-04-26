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
    const uint offsetsAndSize[60];
    char stringdata0[628];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_CTC_MainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_CTC_MainWindow_t qt_meta_stringdata_CTC_MainWindow = {
    {
QT_MOC_LITERAL(0, 14), // "CTC_MainWindow"
QT_MOC_LITERAL(15, 15), // "sendStationData"
QT_MOC_LITERAL(31, 0), // ""
QT_MOC_LITERAL(32, 13), // "QList<double>"
QT_MOC_LITERAL(46, 10), // "QList<int>"
QT_MOC_LITERAL(57, 18), // "QList<QList<bool>>"
QT_MOC_LITERAL(76, 13), // "sendTrainData"
QT_MOC_LITERAL(90, 11), // "QList<bool>"
QT_MOC_LITERAL(102, 8), // "sendTime"
QT_MOC_LITERAL(111, 15), // "sendInitialTime"
QT_MOC_LITERAL(127, 11), // "sendCTCmode"
QT_MOC_LITERAL(139, 33), // "on_actionDispatch_Train_trigg..."
QT_MOC_LITERAL(173, 15), // "RedLineSelected"
QT_MOC_LITERAL(189, 17), // "GreenLineSelected"
QT_MOC_LITERAL(207, 25), // "on_previousButton_clicked"
QT_MOC_LITERAL(233, 21), // "on_NextButton_clicked"
QT_MOC_LITERAL(255, 43), // "on_actionView_Green_Line_Stat..."
QT_MOC_LITERAL(299, 41), // "on_actionView_Red_Line_Status..."
QT_MOC_LITERAL(341, 38), // "on_actionView_Train_Statuses_..."
QT_MOC_LITERAL(380, 11), // "receiveTime"
QT_MOC_LITERAL(392, 18), // "receiveTimeRequest"
QT_MOC_LITERAL(411, 24), // "receiveDispatchImmediate"
QT_MOC_LITERAL(436, 22), // "receiveDispatchStandby"
QT_MOC_LITERAL(459, 18), // "receiveBlockStatus"
QT_MOC_LITERAL(478, 18), // "updateTrainDisplay"
QT_MOC_LITERAL(497, 32), // "on_actionView_Schedule_triggered"
QT_MOC_LITERAL(530, 23), // "receiveDispatchSchedule"
QT_MOC_LITERAL(554, 25), // "on_actionManual_triggered"
QT_MOC_LITERAL(580, 28), // "on_actionAutomatic_triggered"
QT_MOC_LITERAL(609, 18) // "receiveModeRequest"

    },
    "CTC_MainWindow\0sendStationData\0\0"
    "QList<double>\0QList<int>\0QList<QList<bool>>\0"
    "sendTrainData\0QList<bool>\0sendTime\0"
    "sendInitialTime\0sendCTCmode\0"
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
    "receiveModeRequest"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CTC_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
      24,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    5,  158,    2, 0x06,    1 /* Public */,
       6,    5,  169,    2, 0x06,    7 /* Public */,
       8,    2,  180,    2, 0x06,   13 /* Public */,
       9,    2,  185,    2, 0x06,   16 /* Public */,
      10,    1,  190,    2, 0x06,   19 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
      11,    0,  193,    2, 0x08,   21 /* Private */,
      12,    0,  194,    2, 0x08,   22 /* Private */,
      13,    0,  195,    2, 0x08,   23 /* Private */,
      14,    0,  196,    2, 0x08,   24 /* Private */,
      15,    0,  197,    2, 0x08,   25 /* Private */,
      16,    0,  198,    2, 0x08,   26 /* Private */,
      17,    0,  199,    2, 0x08,   27 /* Private */,
      18,    0,  200,    2, 0x08,   28 /* Private */,
      19,    2,  201,    2, 0x08,   29 /* Private */,
      20,    0,  206,    2, 0x08,   32 /* Private */,
      21,    7,  207,    2, 0x08,   33 /* Private */,
      22,    8,  222,    2, 0x08,   41 /* Private */,
      23,    4,  239,    2, 0x08,   50 /* Private */,
      24,    0,  248,    2, 0x08,   55 /* Private */,
      25,    0,  249,    2, 0x08,   56 /* Private */,
      26,    9,  250,    2, 0x08,   57 /* Private */,
      27,    0,  269,    2, 0x08,   67 /* Private */,
      28,    0,  270,    2, 0x08,   68 /* Private */,
      29,    0,  271,    2, 0x08,   69 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 3, QMetaType::QStringList, 0x80000000 | 4, 0x80000000 | 5,    2,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool, QMetaType::Int, 0x80000000 | 3, 0x80000000 | 7,    2,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Bool,    2,

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
    QMetaType::Void, QMetaType::Bool, QMetaType::Int, QMetaType::Double, 0x80000000 | 7, QMetaType::Int, QMetaType::QTime, QMetaType::QString,    2,    2,    2,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::Bool, QMetaType::Int, QMetaType::Double, QMetaType::Int, 0x80000000 | 7, QMetaType::Int, QMetaType::QTime, QMetaType::QString,    2,    2,    2,    2,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::Bool, QMetaType::Int, QMetaType::Int, QMetaType::Bool,    2,    2,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::Int, QMetaType::Double, 0x80000000 | 7, QMetaType::Int, QMetaType::QTime, QMetaType::Int, QMetaType::QTime, QMetaType::QString,    2,    2,    2,    2,    2,    2,    2,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void CTC_MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CTC_MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sendStationData((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QList<double>(*)>(_a[2])),(*reinterpret_cast< QList<QString>(*)>(_a[3])),(*reinterpret_cast< QList<int>(*)>(_a[4])),(*reinterpret_cast< QList<QList<bool>>(*)>(_a[5]))); break;
        case 1: _t->sendTrainData((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QList<double>(*)>(_a[4])),(*reinterpret_cast< QList<bool>(*)>(_a[5]))); break;
        case 2: _t->sendTime((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->sendInitialTime((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 4: _t->sendCTCmode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 5: _t->on_actionDispatch_Train_triggered(); break;
        case 6: _t->RedLineSelected(); break;
        case 7: _t->GreenLineSelected(); break;
        case 8: _t->on_previousButton_clicked(); break;
        case 9: _t->on_NextButton_clicked(); break;
        case 10: _t->on_actionView_Green_Line_Statuses_triggered(); break;
        case 11: _t->on_actionView_Red_Line_Statuses_triggered(); break;
        case 12: _t->on_actionView_Train_Statuses_triggered(); break;
        case 13: _t->receiveTime((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 14: _t->receiveTimeRequest(); break;
        case 15: _t->receiveDispatchImmediate((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< QList<bool>(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< QTime(*)>(_a[6])),(*reinterpret_cast< QString(*)>(_a[7]))); break;
        case 16: _t->receiveDispatchStandby((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< QList<bool>(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< QTime(*)>(_a[7])),(*reinterpret_cast< QString(*)>(_a[8]))); break;
        case 17: _t->receiveBlockStatus((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 18: _t->updateTrainDisplay(); break;
        case 19: _t->on_actionView_Schedule_triggered(); break;
        case 20: _t->receiveDispatchSchedule((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< QList<bool>(*)>(_a[4])),(*reinterpret_cast< int(*)>(_a[5])),(*reinterpret_cast< QTime(*)>(_a[6])),(*reinterpret_cast< int(*)>(_a[7])),(*reinterpret_cast< QTime(*)>(_a[8])),(*reinterpret_cast< QString(*)>(_a[9]))); break;
        case 21: _t->on_actionManual_triggered(); break;
        case 22: _t->on_actionAutomatic_triggered(); break;
        case 23: _t->receiveModeRequest(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 4:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<QList<bool>> >(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<double> >(); break;
            case 3:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<int> >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 4:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<bool> >(); break;
            case 3:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<double> >(); break;
            }
            break;
        case 15:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 3:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<bool> >(); break;
            }
            break;
        case 16:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 4:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<bool> >(); break;
            }
            break;
        case 20:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 3:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<bool> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CTC_MainWindow::*)(bool , QVector<double> , QVector<QString> , QVector<int> , QVector<QVector<bool>> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CTC_MainWindow::sendStationData)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CTC_MainWindow::*)(int , bool , int , QVector<double> , QVector<bool> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CTC_MainWindow::sendTrainData)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CTC_MainWindow::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CTC_MainWindow::sendTime)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (CTC_MainWindow::*)(int , int );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CTC_MainWindow::sendInitialTime)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (CTC_MainWindow::*)(bool );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CTC_MainWindow::sendCTCmode)) {
                *result = 4;
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
, QtPrivate::TypeAndForceComplete<CTC_MainWindow, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<double>, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<QString>, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<int>, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<QVector<bool>>, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<double>, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<bool>, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<bool>, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<QTime, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<bool>, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<QTime, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<double, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<bool>, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<QTime, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<QTime, std::false_type>, QtPrivate::TypeAndForceComplete<QString, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


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
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 24)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 24;
    }
    return _id;
}

// SIGNAL 0
void CTC_MainWindow::sendStationData(bool _t1, QVector<double> _t2, QVector<QString> _t3, QVector<int> _t4, QVector<QVector<bool>> _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}

// SIGNAL 1
void CTC_MainWindow::sendTrainData(int _t1, bool _t2, int _t3, QVector<double> _t4, QVector<bool> _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CTC_MainWindow::sendTime(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CTC_MainWindow::sendInitialTime(int _t1, int _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void CTC_MainWindow::sendCTCmode(bool _t1)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))) };
    QMetaObject::activate(this, &staticMetaObject, 4, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
