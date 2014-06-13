#include "PaintingMainWindow.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    PaintingMainWindow w;
    w.show();

    return a.exec();
}
