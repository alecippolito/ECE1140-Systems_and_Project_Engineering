/****************************************************************************
** Meta object code from reading C++ file 'choosedispatch.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../choosedispatch.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'choosedispatch.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_ChooseDispatch_t {
    const uint offsetsAndSize[16];
    char stringdata0[135];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_ChooseDispatch_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_ChooseDispatch_t qt_meta_stringdata_ChooseDispatch = {
    {
QT_MOC_LITERAL(0, 14), // "ChooseDispatch"
QT_MOC_LITERAL(15, 13), // "DispatchTrain"
QT_MOC_LITERAL(29, 0), // ""
QT_MOC_LITERAL(30, 20), // "sendTrackData_custom"
QT_MOC_LITERAL(51, 13), // "QList<double>"
QT_MOC_LITERAL(65, 21), // "DispatchTrainFunction"
QT_MOC_LITERAL(87, 23), // "on_pushButton_3_clicked"
QT_MOC_LITERAL(111, 23) // "receiveTrackData_choose"

    },
    "ChooseDispatch\0DispatchTrain\0\0"
    "sendTrackData_custom\0QList<double>\0"
    "DispatchTrainFunction\0on_pushButton_3_clicked\0"
    "receiveTrackData_choose"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_ChooseDispatch[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       2,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x06,    1 /* Public */,
       3,    3,   45,    2, 0x06,    2 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,   52,    2, 0x08,    6 /* Private */,
       6,    0,   53,    2, 0x08,    7 /* Private */,
       7,    3,   54,    2, 0x08,    8 /* Private */,

 // signals: parameters
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, QMetaType::QStringList, 0x80000000 | 4,    2,    2,    2,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, 0x80000000 | 4, QMetaType::QStringList, 0x80000000 | 4,    2,    2,    2,

       0        // eod
};

void ChooseDispatch::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<ChooseDispatch *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->DispatchTrain(); break;
        case 1: _t->sendTrackData_custom((*reinterpret_cast< QList<double>(*)>(_a[1])),(*reinterpret_cast< QList<QString>(*)>(_a[2])),(*reinterpret_cast< QList<double>(*)>(_a[3]))); break;
        case 2: _t->DispatchTrainFunction(); break;
        case 3: _t->on_pushButton_3_clicked(); break;
        case 4: _t->receiveTrackData_choose((*reinterpret_cast< QList<double>(*)>(_a[1])),(*reinterpret_cast< QList<QString>(*)>(_a[2])),(*reinterpret_cast< QList<double>(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 2:
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<double> >(); break;
            }
            break;
        case 4:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 2:
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<double> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (ChooseDispatch::*)();
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChooseDispatch::DispatchTrain)) {
                *result = 0;
                return;
            }
        }
        {
            using _t = void (ChooseDispatch::*)(QVector<double> , QVector<QString> , QVector<double> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&ChooseDispatch::sendTrackData_custom)) {
                *result = 1;
                return;
            }
        }
    }
}

const QMetaObject ChooseDispatch::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_ChooseDispatch.offsetsAndSize,
    qt_meta_data_ChooseDispatch,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_ChooseDispatch_t
, QtPrivate::TypeAndForceComplete<ChooseDispatch, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<double>, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<QString>, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<double>, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<double>, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<QString>, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<double>, std::false_type>


>,
    nullptr
} };


const QMetaObject *ChooseDispatch::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *ChooseDispatch::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_ChooseDispatch.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int ChooseDispatch::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QDialog::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}

// SIGNAL 0
void ChooseDispatch::DispatchTrain()
{
    QMetaObject::activate(this, &staticMetaObject, 0, nullptr);
}

// SIGNAL 1
void ChooseDispatch::sendTrackData_custom(QVector<double> _t1, QVector<QString> _t2, QVector<double> _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 1, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
