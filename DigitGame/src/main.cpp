#include "gui/digitgamemainwindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    DigitGameMainWindow w;
    w.show();

    return a.exec();
}
