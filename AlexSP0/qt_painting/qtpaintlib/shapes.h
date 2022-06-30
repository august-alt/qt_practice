#ifndef SHAPES_H
#define SHAPES_H

#include <QPaintEvent>
#include <QWidget>



class Shapes : public QWidget
{
public:
    Shapes(QWidget *parent);

protected:
    void paintEvent(QPaintEvent *e);

private:
    void doPainting();

};

#endif // SHAPES_H
