/****************************************************************************
** Meta object code from reading C++ file 'mainwindow.h'
**
** Created by: The Qt Meta Object Compiler version 67 (Qt 5.15.2)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include <memory>
#include "../../../../../source/mainwindow/mainwindow.h"
#include <QtCore/qbytearray.h>
#include <QtCore/qmetatype.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'mainwindow.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 67
#error "This file was generated using the moc from 5.15.2. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
struct qt_meta_stringdata_MainWindow_t {
    QByteArrayData data[22];
    char stringdata0[417];
};
#define QT_MOC_LITERAL(idx, ofs, len) \
    Q_STATIC_BYTE_ARRAY_DATA_HEADER_INITIALIZER_WITH_OFFSET(len, \
    qptrdiff(offsetof(qt_meta_stringdata_MainWindow_t, stringdata0) + ofs \
        - idx * sizeof(QByteArrayData)) \
    )
static const qt_meta_stringdata_MainWindow_t qt_meta_stringdata_MainWindow = {
    {
QT_MOC_LITERAL(0, 0, 10), // "MainWindow"
QT_MOC_LITERAL(1, 11, 25), // "on_cbHideLog_stateChanged"
QT_MOC_LITERAL(2, 37, 0), // ""
QT_MOC_LITERAL(3, 38, 4), // "arg1"
QT_MOC_LITERAL(4, 43, 26), // "on_pbAddIngredient_clicked"
QT_MOC_LITERAL(5, 70, 16), // "on_bQuit_clicked"
QT_MOC_LITERAL(6, 87, 16), // "on_bTest_clicked"
QT_MOC_LITERAL(7, 104, 32), // "on_bPrintListIngredients_clicked"
QT_MOC_LITERAL(8, 137, 24), // "on_bPrintSysInfo_clicked"
QT_MOC_LITERAL(9, 162, 19), // "on_rbFrench_clicked"
QT_MOC_LITERAL(10, 182, 20), // "on_rbEnglish_clicked"
QT_MOC_LITERAL(11, 203, 19), // "on_rbGerman_clicked"
QT_MOC_LITERAL(12, 223, 9), // "showAbout"
QT_MOC_LITERAL(13, 233, 16), // "ToggleDebugPanel"
QT_MOC_LITERAL(14, 250, 1), // "b"
QT_MOC_LITERAL(15, 252, 37), // "on_keySequenceEdit_keySequenc..."
QT_MOC_LITERAL(16, 290, 11), // "keySequence"
QT_MOC_LITERAL(17, 302, 28), // "on_tbChariotte_tabBarClicked"
QT_MOC_LITERAL(18, 331, 5), // "index"
QT_MOC_LITERAL(19, 337, 22), // "on_gbChariotte_toggled"
QT_MOC_LITERAL(20, 360, 27), // "on_bToggleLeftPanel_clicked"
QT_MOC_LITERAL(21, 388, 28) // "on_bToggleRightPanel_clicked"

    },
    "MainWindow\0on_cbHideLog_stateChanged\0"
    "\0arg1\0on_pbAddIngredient_clicked\0"
    "on_bQuit_clicked\0on_bTest_clicked\0"
    "on_bPrintListIngredients_clicked\0"
    "on_bPrintSysInfo_clicked\0on_rbFrench_clicked\0"
    "on_rbEnglish_clicked\0on_rbGerman_clicked\0"
    "showAbout\0ToggleDebugPanel\0b\0"
    "on_keySequenceEdit_keySequenceChanged\0"
    "keySequence\0on_tbChariotte_tabBarClicked\0"
    "index\0on_gbChariotte_toggled\0"
    "on_bToggleLeftPanel_clicked\0"
    "on_bToggleRightPanel_clicked"
};
#undef QT_MOC_LITERAL

static const uint qt_meta_data_MainWindow[] = {

 // content:
       8,       // revision
       0,       // classname
       0,    0, // classinfo
      16,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags
       1,    1,   94,    2, 0x08 /* Private */,
       4,    0,   97,    2, 0x08 /* Private */,
       5,    0,   98,    2, 0x08 /* Private */,
       6,    0,   99,    2, 0x08 /* Private */,
       7,    0,  100,    2, 0x08 /* Private */,
       8,    0,  101,    2, 0x08 /* Private */,
       9,    0,  102,    2, 0x08 /* Private */,
      10,    0,  103,    2, 0x08 /* Private */,
      11,    0,  104,    2, 0x08 /* Private */,
      12,    0,  105,    2, 0x08 /* Private */,
      13,    1,  106,    2, 0x08 /* Private */,
      15,    1,  109,    2, 0x08 /* Private */,
      17,    1,  112,    2, 0x08 /* Private */,
      19,    1,  115,    2, 0x08 /* Private */,
      20,    0,  118,    2, 0x08 /* Private */,
      21,    0,  119,    2, 0x08 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::Bool,   14,
    QMetaType::Void, QMetaType::QKeySequence,   16,
    QMetaType::Void, QMetaType::Int,   18,
    QMetaType::Void, QMetaType::Bool,    3,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        Q_UNUSED(_t)
        switch (_id) {
        case 0: _t->on_cbHideLog_stateChanged((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 1: _t->on_pbAddIngredient_clicked(); break;
        case 2: _t->on_bQuit_clicked(); break;
        case 3: _t->on_bTest_clicked(); break;
        case 4: _t->on_bPrintListIngredients_clicked(); break;
        case 5: _t->on_bPrintSysInfo_clicked(); break;
        case 6: _t->on_rbFrench_clicked(); break;
        case 7: _t->on_rbEnglish_clicked(); break;
        case 8: _t->on_rbGerman_clicked(); break;
        case 9: _t->showAbout(); break;
        case 10: _t->ToggleDebugPanel((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 11: _t->on_keySequenceEdit_keySequenceChanged((*reinterpret_cast< const QKeySequence(*)>(_a[1]))); break;
        case 12: _t->on_tbChariotte_tabBarClicked((*reinterpret_cast< int(*)>(_a[1]))); break;
        case 13: _t->on_gbChariotte_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 14: _t->on_bToggleLeftPanel_clicked(); break;
        case 15: _t->on_bToggleRightPanel_clicked(); break;
        default: ;
        }
    }
}

QT_INIT_METAOBJECT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_MainWindow.data,
    qt_meta_data_MainWindow,
    qt_static_metacall,
    nullptr,
    nullptr
} };


const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_MainWindow.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
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
            *reinterpret_cast<int*>(_a[0]) = -1;
        _id -= 16;
    }
    return _id;
}
QT_WARNING_POP
QT_END_MOC_NAMESPACE
