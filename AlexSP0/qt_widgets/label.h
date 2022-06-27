#ifndef LABEL_H
#define LABEL_H

#include <QLabel>
#include <qwidget.h>



class Label : public QWidget {

  public:
    Label(QWidget *parent = nullptr);

  private:
    QLabel *label;
};

#endif // LABEL_H
