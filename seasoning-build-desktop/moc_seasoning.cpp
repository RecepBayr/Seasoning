/****************************************************************************
** Meta object code from reading C++ file 'seasoning.h'
**
** Created: Sat Nov 13 12:01:39 2021
**      by: The Qt Meta Object Compiler version 62 (Qt 4.6.3)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../seasoning/seasoning.h"
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'seasoning.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 62
#error "This file was generated using the moc from 4.6.3. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

QT_BEGIN_MOC_NAMESPACE
static const uint qt_meta_data_seasoning[] = {

 // content:
       4,       // revision
       0,       // classname
       0,    0, // classinfo
      31,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: signature, parameters, type, tag, flags
      11,   10,   10,   10, 0x0a,
      18,   10,   10,   10, 0x0a,
      28,   10,   10,   10, 0x0a,
      39,   10,   10,   10, 0x0a,
      50,   10,   10,   10, 0x0a,
      61,   10,   10,   10, 0x0a,
      72,   10,   10,   10, 0x0a,
      83,   10,   10,   10, 0x0a,
      94,   10,   10,   10, 0x0a,
     105,   10,   10,   10, 0x0a,
     116,   10,   10,   10, 0x0a,
     127,   10,   10,   10, 0x0a,
     139,   10,   10,   10, 0x0a,
     151,   10,   10,   10, 0x0a,
     163,   10,   10,   10, 0x0a,
     175,   10,   10,   10, 0x0a,
     187,   10,   10,   10, 0x0a,
     199,   10,   10,   10, 0x0a,
     211,   10,   10,   10, 0x0a,
     223,   10,   10,   10, 0x0a,
     235,   10,   10,   10, 0x0a,
     247,   10,   10,   10, 0x0a,
     259,   10,   10,   10, 0x0a,
     271,   10,   10,   10, 0x0a,
     283,   10,   10,   10, 0x0a,
     295,   10,   10,   10, 0x0a,
     307,   10,   10,   10, 0x0a,
     319,   10,   10,   10, 0x0a,
     334,   10,   10,   10, 0x08,
     361,  353,   10,   10, 0x08,
     383,   10,   10,   10, 0x08,

       0        // eod
};

static const char qt_meta_stringdata_seasoning[] = {
    "seasoning\0\0fire()\0station()\0station1()\0"
    "station2()\0station3()\0station4()\0"
    "station5()\0station6()\0station7()\0"
    "station8()\0station9()\0station10()\0"
    "station11()\0station12()\0station13()\0"
    "station14()\0station15()\0station16()\0"
    "station17()\0station18()\0station19()\0"
    "station20()\0station21()\0station22()\0"
    "station23()\0station24()\0station25()\0"
    "manualselect()\0on_reset_clicked()\0"
    "checked\0on_Stop_toggled(bool)\0"
    "on_start_clicked()\0"
};

const QMetaObject seasoning::staticMetaObject = {
    { &QMainWindow::staticMetaObject, qt_meta_stringdata_seasoning,
      qt_meta_data_seasoning, 0 }
};

#ifdef Q_NO_DATA_RELOCATION
const QMetaObject &seasoning::getStaticMetaObject() { return staticMetaObject; }
#endif //Q_NO_DATA_RELOCATION

const QMetaObject *seasoning::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->metaObject : &staticMetaObject;
}

void *seasoning::qt_metacast(const char *_clname)
{
    if (!_clname) return 0;
    if (!strcmp(_clname, qt_meta_stringdata_seasoning))
        return static_cast<void*>(const_cast< seasoning*>(this));
    return QMainWindow::qt_metacast(_clname);
}

int seasoning::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        switch (_id) {
        case 0: fire(); break;
        case 1: station(); break;
        case 2: station1(); break;
        case 3: station2(); break;
        case 4: station3(); break;
        case 5: station4(); break;
        case 6: station5(); break;
        case 7: station6(); break;
        case 8: station7(); break;
        case 9: station8(); break;
        case 10: station9(); break;
        case 11: station10(); break;
        case 12: station11(); break;
        case 13: station12(); break;
        case 14: station13(); break;
        case 15: station14(); break;
        case 16: station15(); break;
        case 17: station16(); break;
        case 18: station17(); break;
        case 19: station18(); break;
        case 20: station19(); break;
        case 21: station20(); break;
        case 22: station21(); break;
        case 23: station22(); break;
        case 24: station23(); break;
        case 25: station24(); break;
        case 26: station25(); break;
        case 27: manualselect(); break;
        case 28: on_reset_clicked(); break;
        case 29: on_Stop_toggled((*reinterpret_cast< bool(*)>(_a[1]))); break;
        case 30: on_start_clicked(); break;
        default: ;
        }
        _id -= 31;
    }
    return _id;
}
QT_END_MOC_NAMESPACE
