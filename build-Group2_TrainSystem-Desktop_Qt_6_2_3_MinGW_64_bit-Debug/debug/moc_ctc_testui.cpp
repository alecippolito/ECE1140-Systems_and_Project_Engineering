/****************************************************************************
** Meta object code from reading C++ file 'ctc_testui.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../Group2_TrainSystem/ctc_testui.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#include <QtCore/QList>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'ctc_testui.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.2.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_CTC_TestUI_t {
    const uint offsetsAndSize[22];
    char stringdata0[184];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_CTC_TestUI_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_CTC_TestUI_t qt_meta_stringdata_CTC_TestUI = {
    {
QT_MOC_LITERAL(0, 10), // "CTC_TestUI"
QT_MOC_LITERAL(11, 15), // "sendOccupancies"
QT_MOC_LITERAL(27, 0), // ""
QT_MOC_LITERAL(28, 11), // "QList<bool>"
QT_MOC_LITERAL(40, 17), // "receiveSwitchEdit"
QT_MOC_LITERAL(58, 16), // "receiveTrackEdit"
QT_MOC_LITERAL(75, 22), // "on_minusButton_clicked"
QT_MOC_LITERAL(98, 21), // "on_plusButton_clicked"
QT_MOC_LITERAL(120, 29), // "on_newOccupancyButton_clicked"
QT_MOC_LITERAL(150, 19), // "receiveNewAuthority"
QT_MOC_LITERAL(170, 13) // "QList<double>"

    },
    "CTC_TestUI\0sendOccupancies\0\0QList<bool>\0"
    "receiveSwitchEdit\0receiveTrackEdit\0"
    "on_minusButton_clicked\0on_plusButton_clicked\0"
    "on_newOccupancyButton_clicked\0"
    "receiveNewAuthority\0QList<double>"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CTC_TestUI[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       7,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    2,   56,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       4,    3,   61,    2, 0x08,    4 /* Private */,
       5,    3,   68,    2, 0x08,    8 /* Private */,
       6,    0,   75,    2, 0x08,   12 /* Private */,
       7,    0,   76,    2, 0x08,   13 /* Private */,
       8,    0,   77,    2, 0x08,   14 /* Private */,
       9,    3,   78,    2, 0x08,   15 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, 0x80000000 | 3,    2,    2,

 // slots: parameters
    QMetaType::Void, QMetaType::Bool, QMetaType::Int, QMetaType::Int,    2,    2,    2,
    QMetaType::Void, QMetaType::Bool, QMetaType::Int, QMetaType::Bool,    2,    2,    2,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool, 0x80000000 | 3, 0x80000000 | 10,    2,    2,    2,

       0        // eod
};

void CTC_TestUI::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CTC_TestUI *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->sendOccupancies((*reinterpret_cast< QList<bool>(*)>(_a[1])),(*reinterpret_cast< QList<bool>(*)>(_a[2]))); break;
        case 1: _t->receiveSwitchEdit((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< int(*)>(_a[3]))); break;
        case 2: _t->receiveTrackEdit((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< int(*)>(_a[2])),(*reinterpret_cast< bool(*)>(_a[3]))); break;
        case 3: _t->on_minusButton_clicked(); break;
        case 4: _t->on_plusButton_clicked(); break;
        case 5: _t->on_newOccupancyButton_clicked(); break;
        case 6: _t->receiveNewAuthority((*reinterpret_cast< bool(*)>(_a[1])),(*reinterpret_cast< QList<bool>(*)>(_a[2])),(*reinterpret_cast< QList<double>(*)>(_a[3]))); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<bool> >(); break;
            }
            break;
        case 6:
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
            using _t = void (CTC_TestUI::*)(QVector<bool> , QVector<bool> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CTC_TestUI::sendOccupancies)) {
                *result = 0;
                return;
            }
        }
    }
}

const QMetaObject CTC_TestUI::staticMetaObject = { {
    QMetaObject::SuperData::link<QDialog::staticMetaObject>(),
    qt_meta_stringdata_CTC_TestUI.offsetsAndSize,
    qt_meta_data_CTC_TestUI,
    qt_static_metacall,
    nullptr,
qt_incomplete_metaTypeArray<qt_meta_stringdata_CTC_TestUI_t
, QtPrivate::TypeAndForceComplete<CTC_TestUI, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<bool>, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<bool>, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<int, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<bool, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<bool>, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<double>, std::false_type>


>,
    nullptr
} };


const QMetaObject *CTC_TestUI::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *CTC_TestUI::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CTC_TestUI.stringdata0))
        return static_cast<void*>(this);
    return QDialog::qt_metacast(_clname);
}

int CTC_TestUI::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            qt_static_metacall(this, _c, _id, _a);
        _id -= 7;
    }
    return _id;
}

// SIGNAL 0
void CTC_TestUI::sendOccupancies(QVector<bool> _t1, QVector<bool> _t2)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
