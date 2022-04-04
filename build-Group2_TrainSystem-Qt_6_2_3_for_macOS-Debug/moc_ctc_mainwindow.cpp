/****************************************************************************
** Meta object code from reading C++ file 'ctc_mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.2.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../Group2_TrainSystem/ctc_mainwindow.h"
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
    const uint offsetsAndSize[26];
    char stringdata0[296];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(offsetof(qt_meta_stringdata_CTC_MainWindow_t, stringdata0) + ofs), len 
static const qt_meta_stringdata_CTC_MainWindow_t qt_meta_stringdata_CTC_MainWindow = {
    {
QT_MOC_LITERAL(0, 14), // "CTC_MainWindow"
QT_MOC_LITERAL(15, 13), // "dispatchTrain"
QT_MOC_LITERAL(29, 0), // ""
QT_MOC_LITERAL(30, 13), // "QList<double>"
QT_MOC_LITERAL(44, 10), // "QList<int>"
QT_MOC_LITERAL(55, 33), // "on_actionDispatch_Train_trigg..."
QT_MOC_LITERAL(89, 15), // "RedLineSelected"
QT_MOC_LITERAL(105, 17), // "GreenLineSelected"
QT_MOC_LITERAL(123, 25), // "on_previousButton_clicked"
QT_MOC_LITERAL(149, 21), // "on_NextButton_clicked"
QT_MOC_LITERAL(171, 43), // "on_actionView_Green_Line_Stat..."
QT_MOC_LITERAL(215, 41), // "on_actionView_Red_Line_Status..."
QT_MOC_LITERAL(257, 38) // "on_actionView_Train_Statuses_..."

    },
    "CTC_MainWindow\0dispatchTrain\0\0"
    "QList<double>\0QList<int>\0"
    "on_actionDispatch_Train_triggered\0"
    "RedLineSelected\0GreenLineSelected\0"
    "on_previousButton_clicked\0"
    "on_NextButton_clicked\0"
    "on_actionView_Green_Line_Statuses_triggered\0"
    "on_actionView_Red_Line_Statuses_triggered\0"
    "on_actionView_Train_Statuses_triggered"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_CTC_MainWindow[] = {

 // content:
      10,       // revision
       0,       // classname
       0,    0, // classinfo
       9,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       1,       // signalCount

 // signals: name, argc, parameters, tag, flags, initial metatype offsets
       1,    3,   68,    2, 0x06,    1 /* Public */,

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       5,    0,   75,    2, 0x08,    5 /* Private */,
       6,    0,   76,    2, 0x08,    6 /* Private */,
       7,    0,   77,    2, 0x08,    7 /* Private */,
       8,    0,   78,    2, 0x08,    8 /* Private */,
       9,    0,   79,    2, 0x08,    9 /* Private */,
      10,    0,   80,    2, 0x08,   10 /* Private */,
      11,    0,   81,    2, 0x08,   11 /* Private */,
      12,    0,   82,    2, 0x08,   12 /* Private */,

 // signals: parameters
    QMetaType::Void, 0x80000000 | 3, QMetaType::QStringList, 0x80000000 | 4,    2,    2,    2,

 // slots: parameters
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

void CTC_MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<CTC_MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->dispatchTrain((*reinterpret_cast< QList<double>(*)>(_a[1])),(*reinterpret_cast< QList<QString>(*)>(_a[2])),(*reinterpret_cast< QList<int>(*)>(_a[3]))); break;
        case 1: _t->on_actionDispatch_Train_triggered(); break;
        case 2: _t->RedLineSelected(); break;
        case 3: _t->GreenLineSelected(); break;
        case 4: _t->on_previousButton_clicked(); break;
        case 5: _t->on_NextButton_clicked(); break;
        case 6: _t->on_actionView_Green_Line_Statuses_triggered(); break;
        case 7: _t->on_actionView_Red_Line_Statuses_triggered(); break;
        case 8: _t->on_actionView_Train_Statuses_triggered(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 0:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<double> >(); break;
            case 2:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<int> >(); break;
            }
            break;
        }
    } else if (_c == QMetaObject::IndexOfMethod) {
        int *result = reinterpret_cast<int *>(_a[0]);
        {
            using _t = void (CTC_MainWindow::*)(QVector<double> , QVector<QString> , QVector<int> );
            if (*reinterpret_cast<_t *>(_a[1]) == static_cast<_t>(&CTC_MainWindow::dispatchTrain)) {
                *result = 0;
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
, QtPrivate::TypeAndForceComplete<CTC_MainWindow, std::true_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<double>, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<QString>, std::false_type>, QtPrivate::TypeAndForceComplete<QVector<int>, std::false_type>
, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>, QtPrivate::TypeAndForceComplete<void, std::false_type>


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
void CTC_MainWindow::dispatchTrain(QVector<double> _t1, QVector<QString> _t2, QVector<int> _t3)
{
    void *_a[] = { nullptr, const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t1))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t2))), const_cast<void*>(reinterpret_cast<const void*>(std::addressof(_t3))) };
    QMetaObject::activate(this, &staticMetaObject, 0, _a);
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
