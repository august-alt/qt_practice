#ifndef APPLICATION_H
#define APPLICATION_H

#include "widget.h"

#include <QFrame>
#include <QSlider>

class Application : public QFrame {

  Q_OBJECT

  public:
    Application(QWidget *parent = nullptr);

  private:
    QSlider *slider;
    Widget *widget;

    void initUI();
};


#endif // APPLICATION_H
