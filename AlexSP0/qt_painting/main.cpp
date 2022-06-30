#include "qtpaintlib/colours.h"
#include "qtpaintlib/donut.h"
#include "qtpaintlib/lineargradients.h"
#include "qtpaintlib/lines.h"
#include "mainwindow.h"
#include "qtpaintlib/patterns.h"
#include "qtpaintlib/puff.h"
#include "qtpaintlib/radialgradient.h"
#include "qtpaintlib/shapes.h"
#include "qtpaintlib/transparentrectangles.h"

#include <QApplication>

int main(int argc, char *argv[])
{
//    QApplication a(argc, argv);
//    MainWindow w;
//    w.show();
//    return a.exec();

    QApplication app(argc, argv);

      Puff window(nullptr);

      window.resize(350, 280);;
      window.setWindowTitle("Lines");
      window.show();

      return app.exec();
}
