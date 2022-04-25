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
    QByteArrayData data[17];
    char stringdata0[302];
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
QT_MOC_LITERAL(4, 55, 13), // "QVector<bool>"
QT_MOC_LITERAL(5, 69, 16), // "dispatchSchedule"
QT_MOC_LITERAL(6, 86, 18), // "receiveStationData"
QT_MOC_LITERAL(7, 105, 15), // "QVector<double>"
QT_MOC_LITERAL(8, 121, 16), // "QVector<QString>"
QT_MOC_LITERAL(9, 138, 12), // "QVector<int>"
QT_MOC_LITERAL(10, 151, 23), // "QVector<QVector<bool> >"
QT_MOC_LITERAL(11, 175, 30), // "on_DepartureCheck_stateChanged"
QT_MOC_LITERAL(12, 206, 4), // "arg1"
QT_MOC_LITERAL(13, 211, 28), // "on_ArrivalCheck_stateChanged"
QT_MOC_LITERAL(14, 240, 17), // "updateTimeDisplay"
QT_MOC_LITERAL(15, 258, 17), // "receiveSystemTime"
QT_MOC_LITERAL(16, 276, 25) // "on_DispatchButton_clicked"

    },
    "CTC_DispatchTrain\0requestSystemTime\0"
    "\0dispatchImmediate\0QVector<bool>\0"
    "dispatchSchedule\0receiveStationData\0"
    "QVector<double>\0QVector<QString>\0"
    "QVector<int>\0QVector<QVector<bool> >\0"
    "on_DepartureCheck_stateChanged\0arg1\0"
    "on_ArrivalCheck_stateChanged\0"
    "updateTimeDisplay\0receiveSystemTime\0"
    "on_DispatchButton_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CTC_DispatchTrain[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       3,       // signalCount

 // signals: name, argc, parameters, tag, flags
       1,    0,   59,    2, 0x06 /* Public */,
       3,    6,   60,    2, 0x06 /* Public */,
       5,    7,   73,    2, 0x06 /* Public */,

 // slots: name, argc, parameters, tag, flags
       6,    5,   88,    2, 0x08 /* Private */,
      11,    1,   99,    2, 0x08 /* Private */,
      13,    1,  102,    2, 0x08 /* Private */,
      14,    2,  105,    2, 0x08 /* Private */,
      15,    2,  110,    2, 0x08 /* Private */,
      16,    0,  115,    2, 0x08 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, QMetaType::Int, QMetaType::Double, 0x80000000 | 4, QMetaType::QTime, QMetaType::QString,    2,    2,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::Bool, QMetaType::Int, QMetaType::Double, QMetaType::Int, 0x80000000 | 4, QMetaType::QTime, QMetaType::QString,    2,    2,    2,    2,    2,    2,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 7, 0x80000000 | 8, 0x80000000 | 9, 0x80000000 | 10,    2,    2,    2,    2,    2,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int,   12,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void, QMetaType::Int, QMetaType::Int,    2,    2,
    QMetaType::Void,

       0        // eod
};

void CTC_DispatchTrain::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CTC_DispatchTrain *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->requestSystemTime(); break;
        case 1: _t->dispatchImmediate((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< QVector<bool>(*)>(_a[4])),(*reinterpret_cast< QTime(*)>(_a[5])),(*reinterpret_cast< QString(*)>(_a[6]))); break;
        case 2: _t->dispatchSchedule((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< double(*)>(_a[3])),(*reinterpret_cast< int(*)>(_a[4])),(*reinterpret_cast< QVector<bool>(*)>(_a[5])),(*reinterpret_cast< QTime(*)>(_a[6])),(*reinterpret_cast< QString(*)>(_a[7]))); break;
        case 3: _t->receiveStationData((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QVector<double>(*)>(_a[2])),(*reinterpret_cast< QVector<QString>(*)>(_a[3])),(*reinterpret_cast< QVector<int>(*)>(_a[4])),(*reinterpret_cast< QVector<QVector<bool> >(*)>(_a[5]))); break;
        case 4: _t->on_DepartureCheck_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 5: _t->on_ArrivalCheck_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 6: _t->updateTimeDisplay((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 7: _t->receiveSystemTime((*reinterpret_cast< int(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2]))); break;
        case 8: _t->on_DispatchButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<int*>(_a[0]) = -1; break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 3:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<bool> >(); break;
            }
            break;
        case 2:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<int*>(_a[0]) = -1; break;
            case 4:
                *reinterpret_cast<int*>(_a[0]) = qRegisterMetaType< QVector<bool> >(); break;
            }
            break;
        case 3:
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
            using _t = void (CTC_DispatchTrain::*)(bool , int , double , QVector<bool> , QTime , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CTC_DispatchTrain::dispatchImmediate)) {
                *result = 1;
                return;
            }
        }
        {
            using _t = void (CTC_DispatchTrain::*)(bool , int , double , int , QVector<bool> , QTime , QString );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CTC_DispatchTrain::dispatchSchedule)) {
                *result = 2;
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
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 9)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 9;
    }
    return _id;
}

// SIGNAL 0
void CTC_DispatchTrain::requestSystemTime()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void CTC_DispatchTrain::dispatchImmediate(bool _t1, int _t2, double _t3, QVector<bool> _t4, QTime _t5, QString _t6)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}

// SIGNAL 2
void CTC_DispatchTrain::dispatchSchedule(bool _t1, int _t2, double _t3, int _t4, QVector<bool> _t5, QTime _t6, QString _t7)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t4))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t5))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t6))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t7))) };
    QMetaObject::activate(this, &staticMetaObject, 2, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
