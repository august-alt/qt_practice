#include "comboboxex.h"
#include "ledit.h"
#include "mainwindow.h"
#include "statusbar.h"

#include <QApplication>
#include "spinbox.h"
#include "slider.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    return a.exec();

}
