/****************************************************************************
** Meta object code from reading C++ file 'ctc_dispatchtrain.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Group2_TrainSystem/ctc_dispatchtrain.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QVector>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctc_dispatchtrain.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CTC_DispatchTrain_t {
    QByteArrayData data[18];
    char stringdata0[323];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_CTC_DispatchTrain_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_CTC_DispatchTrain_t qt_meta_stringdata_CTC_DispatchTrain = {
    {
QT_MOC_LITERAL(0, 0, 17), // "CTC_DispatchTrain"
QT_MOC_LITERAL(1, 18, 17), // "requestSystemTime"
QT_MOC_LITERAL(2, 36, 0), // ""
QT_MOC_LITERAL(3, 37, 17), // "dispatchImmediate"
QT_MOC_LITERAL(4, 55, 15), // "dispatchStandby"
QT_MOC_LITERAL(5, 71, 16), // "dispatchSchedule"
QT_MOC_LITERAL(6, 88, 14), // "requestCTCMode"
QT_MOC_LITERAL(7, 103, 18), // "receiveStationData"
QT_MOC_LITERAL(8, 122, 15), // "QVector<double>"
QT_MOC_LITERAL(9, 138, 16), // "QVector<QString>"
QT_MOC_LITERAL(10, 155, 30), // "on_DepartureCheck_stateChanged"
QT_MOC_LITERAL(11, 186, 4), // "arg1"
QT_MOC_LITERAL(12, 191, 28), // "on_ArrivalCheck_stateChanged"
QT_MOC_LITERAL(13, 220, 17), // "updateTimeDisplay"
QT_MOC_LITERAL(14, 238, 17), // "receiveSystemTime"
QT_MOC_LITERAL(15, 256, 25), // "on_DispatchButton_clicked"
QT_MOC_LITERAL(16, 282, 25), // "on_ScheduleButton_clicked"
QT_MOC_LITERAL(17, 308, 14) // "receiveCTCMode"

    },
    "CTC_DispatchTrain\0requestSystemTime\0"
    "\0dispatchImmediate\0dispatchStandby\0"
    "dispatchSchedule\0requestCTCMode\0"
    "receiveStationData\0QVector<double>\0"
    "QVector<QString>\0on_DepartureCheck_stateChanged\0"
    "arg1\0on_ArrivalCheck_stateChanged\0"
    "updateTimeDisplay\0receiveSystemTime\0"
    "on_DispatchButton_clicked\0"
    "on_ScheduleButton_clicked\0receiveCTCMode"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CTC_DispatchTrain[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      13,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       5,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   79,    2, 0x06 /* Public */,
       3,    5,   80,    2, 0x06 /* Public */,
       4,    6,   91,    2, 0x06 /* Public */,
       5,    8,  104,    2, 0x06 /* Public */,
       6,    0,  121,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       7,    3,  122,    2, 0x08 /* Private */,
      10,    1,  129,    2, 0x08 /* Private */,
      12,    1,  132,    2, 0x08 /* Private */,
      13,    2,  135,    2, 0x08 /* Private */,
      14,    2,  140,    2, 0x08 /* Private */,
      15,    0,  145,    2, 0x08 /* Private */,
      16,    0,  146,    2, 0x08 /* Private */,
      17,    1,  147,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::Double, QMetaType::Int, QMetaType::QTime, QMetaType::QString,    2,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::Bool, QMetaType::Double, QMetaType::Int, QMetaType::Int, QMetaType::QTime, QMetaType::QString,    2,    2,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::Bool, QMetaType::Double, QMetaType::Int, QMetaType::Int, QMetaType::QTime, QMetaType::Int, QMetaType::QTime, QMetaType::QString,    2,    2,    2,    2,    2,    2,    2,    2,
    QMetaType::Void,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 8, 0x80000000 | 9,    2,    2,    2,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int,   11,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,    2,

       0        // eod
};

void CTC_DispatchTrain::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CTC_DispatchTrain *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->requestSystemTime(); break;
        case 1: _t->dispatchImmediate((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< QTime(*)>(_a[4])),(*reinterpret_cast< QString(*)>(_a[5]))); break;
        case 2: _t->dispatchStandby((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< QTime(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6]))); break;
        case 3: _t->dispatchSchedule((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< double(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< QTime(*)>(_a[5])),(*reinterpret_cast< int(*)>(_a[6])),(*reinterpret_cast< QTime(*)>(_a[7])),(*reinterpret_cast< QString(*)>(_a[8]))); break;
        case 4: _t->requestCTCMode(); break;
        case 5: _t->receiveStationData((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QVector<double>(*)>(_a[2])),(*reinterpret_cast< QVector<QString>(*)>(_a[3]))); break;
        case 6: _t->on_DepartureCheck_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 7: _t->on_ArrivalCheck_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 8: _t->updateTimeDisplay((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 9: _t->receiveSystemTime((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 10: _t->on_DispatchButton_clicked(); break;
        case 11: _t->on_ScheduleButton_clicked(); break;
        case 12: _t->receiveCTCMode((*reinterpret_cast< bool(*)>(_a[1]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 5:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 2:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<QString> >(); break;
            case 1:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<double> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CTC_DispatchTrain::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CTC_DispatchTrain::requestSystemTime)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (CTC_DispatchTrain::*)(bool , double , int , QTime , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CTC_DispatchTrain::dispatchImmediate)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CTC_DispatchTrain::*)(bool , double , int , int , QTime , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CTC_DispatchTrain::dispatchStandby)) {
                *result = 2;
                return;
            }
        }
        {
            using _t = void (CTC_DispatchTrain::*)(bool , double , int , int , QTime , int , QTime , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CTC_DispatchTrain::dispatchSchedule)) {
                *result = 3;
                return;
            }
        }
        {
            using _t = void (CTC_DispatchTrain::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CTC_DispatchTrain::requestCTCMode)) {
                *result = 4;
                return;
            }
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject CTC_DispatchTrain::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CTC_DispatchTrain.data,
    qt_meta_data_CTC_DispatchTrain,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *CTC_DispatchTrain::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CTC_DispatchTrain::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CTC_DispatchTrain.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int CTC_DispatchTrain::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 13)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 13;
    }
    return _id;
}

// SIGNAL 0
void CTC_DispatchTrain::requestSystemTime()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void CTC_DispatchTrain::dispatchImmediate(bool _t1, double _t2, int _t3, QTime _t4, QString _t5)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CTC_DispatchTrain::dispatchStandby(bool _t1, double _t2, int _t3, int _t4, QTime _t5, QString _t6)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}

// SIGNAL 3
void CTC_DispatchTrain::dispatchSchedule(bool _t1, double _t2, int _t3, int _t4, QTime _t5, int _t6, QTime _t7, QString _t8)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t7))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t8))) };
    QMetaObject::activate(this, &staticMetaObject, 3, _a);
}

// SIGNAL 4
void CTC_DispatchTrain::requestCTCMode()
{
    QMetaObject::activate(this, &staticMetaObject, 4, nullptr);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
