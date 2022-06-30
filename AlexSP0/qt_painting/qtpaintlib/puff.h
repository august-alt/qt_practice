#ifndef PUFF_H
#define PUFF_H

#include <QPaintEvent>
#include <QWidget>



class Puff : public QWidget
{
public:
    Puff(QWidget *parent);

protected:
    void paintEvent(QPaintEvent *event);
    void timerEvent(QTimerEvent *event);

private:
    int x;
    qreal opacity;
    int timerId;

    void doPainting();

};

#endif // PUFF_H
