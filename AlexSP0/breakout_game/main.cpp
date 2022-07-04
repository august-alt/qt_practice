#include "breakout.h"
#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Breakout window;
    window.resize(300, 400);
    window.setWindowTitle("Breakout");
    window.show();

    return a.exec();
}
