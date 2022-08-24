#include "rudumbwindow.h"
#include <ctime>
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    srand(time(NULL));
    RUDumbWindow w;
    w.show();
    return a.exec();
}
