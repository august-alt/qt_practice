#include "application.h"
#include "mainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);

    Application window;
    window.resize(370, 200);
    window.setWindowTitle("The Burning widget");
    window.show();

    return a.exec();
}
