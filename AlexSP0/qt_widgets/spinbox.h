#ifndef SPINBOX_H
#define SPINBOX_H

#include <QSpinBox>
#include <QWidget>



class SpinBox : public QWidget {

  Q_OBJECT

  public:
    SpinBox(QWidget *parent = nullptr);

  private:
    QSpinBox *spinbox;
};

#endif // SPINBOX_H
