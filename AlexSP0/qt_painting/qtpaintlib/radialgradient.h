#ifndef RADIALGRADIENT_H
#define RADIALGRADIENT_H

#include <QWidget>



class RadialGradient : public QWidget
{
public:
    RadialGradient(QWidget *parent = 0);

protected:
    void paintEvent(QPaintEvent *e);

private:
    void doPainting();
};

#endif // RADIALGRADIENT_H
