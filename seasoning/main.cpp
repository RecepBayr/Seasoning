#include <QtGui/QApplication>
#include "seasoning.h"
#include <QTimer>
#include <QDateTime>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    seasoning w;
    w.show();

    return a.exec();
}
