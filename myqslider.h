#ifndef MYQSLIDER_H
#define MYQSLIDER_H

#include <QSlider>
#include <QMouseEvent>
class myqslider : public QSlider
{
    Q_OBJECT
public:
    myqslider();
    //鼠标点击事件
    void mousePressEvent(QMouseEvent *event);

    //鼠标移动事件
    void mouseMoveEvent(QMouseEvent *arg);
    //鼠标抬起


    void getsizedaxiao(int x,int y,int win,int hie);

private:
    //记录鼠标是否点击
    int win,hie;
};

#endif // MYQSLIDER_H
