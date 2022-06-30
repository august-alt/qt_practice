#ifndef TRANSPARENTRECTANGLES_H
#define TRANSPARENTRECTANGLES_H

#include <QWidget>



class TransparentRectangles : public QWidget
{
public:
    TransparentRectangles(QWidget *parent = 0);
protected:
    void paintEvent(QPaintEvent *e);
private:
    void doPainting();
};

#endif // TRANSPARENTRECTANGLES_H
