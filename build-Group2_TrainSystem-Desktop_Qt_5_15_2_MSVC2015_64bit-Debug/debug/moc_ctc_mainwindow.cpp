/****************************************************************************
** Meta object code from reading C++ file 'ctc_mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Group2_TrainSystem/ctc_mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctc_mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CTC_MainWindow_t {
    QByteArrayData data[24];
    char stringdata0[498];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CTC_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CTC_MainWindow_t qt_meta_stringdata_CTC_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 14), // "CTC_MainWindow"
QT_MOC_LITERAL(1, 15, 15), // "sendStationData"
QT_MOC_LITERAL(2, 31, 0), // ""
QT_MOC_LITERAL(3, 32, 15), // "QVector<double>"
QT_MOC_LITERAL(4, 48, 16), // "QVector<QString>"
QT_MOC_LITERAL(5, 65, 12), // "QVector<int>"
QT_MOC_LITERAL(6, 78, 23), // "QVector<QVector<bool> >"
QT_MOC_LITERAL(7, 102, 13), // "sendTrainData"
QT_MOC_LITERAL(8, 116, 13), // "QVector<bool>"
QT_MOC_LITERAL(9, 130, 8), // "sendTime"
QT_MOC_LITERAL(10, 139, 33), // "on_actionDispatch_Train_trigg..."
QT_MOC_LITERAL(11, 173, 15), // "RedLineSelected"
QT_MOC_LITERAL(12, 189, 17), // "GreenLineSelected"
QT_MOC_LITERAL(13, 207, 25), // "on_previousButton_clicked"
QT_MOC_LITERAL(14, 233, 21), // "on_NextButton_clicked"
QT_MOC_LITERAL(15, 255, 43), // "on_actionView_Green_Line_Stat..."
QT_MOC_LITERAL(16, 299, 41), // "on_actionView_Red_Line_Status..."
QT_MOC_LITERAL(17, 341, 38), // "on_actionView_Train_Statuses_..."
QT_MOC_LITERAL(18, 380, 11), // "receiveTime"
QT_MOC_LITERAL(19, 392, 18), // "receiveTimeRequest"
QT_MOC_LITERAL(20, 411, 24), // "receiveDispatchImmediate"
QT_MOC_LITERAL(21, 436, 23), // "receiveDispatchSchedule"
QT_MOC_LITERAL(22, 460, 18), // "receiveBlockStatus"
QT_MOC_LITERAL(23, 479, 18) // "updateTrainDisplay"

    },
    "CTC_MainWindow\0sendStationData\0\0"
    "QVector<double>\0QVector<QString>\0"
    "QVector<int>\0QVector<QVector<bool> >\0"
    "sendTrainData\0QVector<bool>\0sendTime\0"
    "on_actionDispatch_Train_triggered\0"
    "RedLineSelected\0GreenLineSelected\0"
    "on_previousButton_clicked\0"
    "on_NextButton_clicked\0"
    "on_actionView_Green_Line_Statuses_triggered\0"
    "on_actionView_Red_Line_Statuses_triggered\0"
    "on_actionView_Train_Statuses_triggered\0"
    "receiveTime\0receiveTimeRequest\0"
    "receiveDispatchImmediate\0"
    "receiveDispatchSchedule\0receiveBlockStatus\0"
    "updateTrainDisplay"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CTC_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      17,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    5,   99,    2, 0x06 /* Public */,
       7,    5,  110,    2, 0x06 /* Public */,
       9,    2,  121,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
      10,    0,  126,    2, 0x08 /* Private */,
      11,    0,  127,    2, 0x08 /* Private */,
      12,    0,  128,    2, 0x08 /* Private */,
      13,    0,  129,    2, 0x08 /* Private */,
      14,    0,  130,    2, 0x08 /* Private */,
      15,    0,  131,    2, 0x08 /* Private */,
      16,    0,  132,    2, 0x08 /* Private */,
      17,    0,  133,    2, 0x08 /* Private */,
      18,    2,  134,    2, 0x08 /* Private */,
      19,    0,  139,    2, 0x08 /* Private */,
      20,    6,  140,    2, 0x08 /* Private */,
      21,    7,  153,    2, 0x08 /* Private */,
      22,    4,  168,    2, 0x08 /* Private */,
      23,    0,  177,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 3, 0x80000000 | 4, 0x80000000 | 5, 0x80000000 | 6,    2,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Bool, QMetaType::Int, 0x80000000 | 3, 0x80000000 | 8,    2,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,

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
    QMetaType::Void, QMetaType::Bool, QMetaType::Int, QMetaType::Double, 0x80000000 | 8, QMetaType::QTime, QMetaType::QString,    2,    2,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::Bool, QMetaType::Int, QMetaType::Double, QMetaType::Int, 0x80000000 | 8, QMetaType::QTime, QMetaType::QString,    2,    2,    2,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::Bool, QMetaType::Int, QMetaType::Int, QMetaType::Bool,    2,    2,    2,    2,
    QMetaType::Void,

       0        // eod
};

void CTC_MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CTC_MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->sendStationData((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QVector<double>(*)>(_a[2])),(*reinterpret_cast< QVector<QString>(*)>(_a[3])),(*reinterpret_cast< QVector<int>(*)>(_a[4])),(*reinterpret_cast< QVector<QVector<bool> >(*)>(_a[5]))); break;
        case 1: _t->sendTrainData((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< bool(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QVector<double>(*)>(_a[4])),(*reinterpret_cast< QVector<bool>(*)>(_a[5]))); break;
        case 2: _t->sendTime((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 3: _t->on_actionDispatch_Train_triggered(); break;
        case 4: _t->RedLineSelected(); break;
        case 5: _t->GreenLineSelected(); break;
        case 6: _t->on_previousButton_clicked(); break;
        case 7: _t->on_NextButton_clicked(); break;
        case 8: _t->on_actionView_Green_Line_Statuses_triggered(); break;
        case 9: _t->on_actionView_Red_Line_Statuses_triggered(); break;
        case 10: _t->on_actionView_Train_Statuses_triggered(); break;
        case 11: _t->receiveTime((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 12: _t->receiveTimeRequest(); break;
        case 13: _t->receiveDispatchImmediate((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< QVector<bool>(*)>(_a[4])),(*reinterpret_cast< QTime(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6]))); break;
        case 14: _t->receiveDispatchSchedule((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< QVector<bool>(*)>(_a[5])),(*reinterpret_cast< QTime(*)>(_a[6])),(*reinterpret_cast< QString(*)>(_a[7]))); break;
        case 15: _t->receiveBlockStatus((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< bool(*)>(_a[4]))); break;
        case 16: _t->updateTrainDisplay(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QString> >(); break;
            case 4:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QVector<bool> > >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<double> >(); break;
            case 3:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<int> >(); break;
            }
            break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 4:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<bool> >(); break;
            case 3:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<double> >(); break;
            }
            break;
        case 13:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 3:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<bool> >(); break;
            }
            break;
        case 14:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 4:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<bool> >(); break;
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
    }
}

QT_INIT_METAOBJECT const QMetaObject CTC_MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CTC_MainWindow.data,
    qt_meta_data_CTC_MainWindow,
    qt_static_metacall,
    nullptr,
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
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 17)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 17;
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
QT_WARNING_POP
QT_END_MOC_NAMESPACE
