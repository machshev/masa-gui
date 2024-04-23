#include "masamainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MasaMainWindow w;
    w.show();
    return a.exec();
}
