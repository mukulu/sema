#include <QtGui/QApplication>
#include "sema.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Sema w;
    w.show();
    return a.exec();
}
