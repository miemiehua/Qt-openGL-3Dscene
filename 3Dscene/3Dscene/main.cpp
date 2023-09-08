
#include "myopenglwidget.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    myopenglWidget w;
    w.show();
    return a.exec();
}
