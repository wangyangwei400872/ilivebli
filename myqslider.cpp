#include "myqslider.h"
#include <QDebug>
#include <QMouseEvent>
myqslider::myqslider()
{

}

void myqslider::mousePressEvent(QMouseEvent *event)
{
    int a = ((float)event->x()/(float)win)*100;
    this->setValue(a);
}
void myqslider::mouseMoveEvent(QMouseEvent *event)
{
    int a = ((float)event->x()/(float)win)*100;
    this->setValue(a);
}
void myqslider::getsizedaxiao(int x,int y,int win,int hie)
{
    this->win = win;
    this->hie = hie;
    this->setGeometry(QRect(x,y,win,hie));
}

