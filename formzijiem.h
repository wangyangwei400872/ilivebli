#ifndef FORMZIJIEM_H
#define FORMZIJIEM_H

#include "myqthread.h"
#include <QWidget>

namespace Ui {
class Formzijiem;
}

class Formzijiem : public QWidget
{
    Q_OBJECT

public:
    explicit Formzijiem(QWidget *parent = 0);
    ~Formzijiem();
signals:
   void openformjiemian();
    //上一曲
    void form_but2();
    //下一曲
    void form_but3();
    //快退
    void form_but4();
    //快进
    void form_but5();
    //暂停
    void form_but6();
    //静音
    void form_but7();

private slots:
    void on_pushButton_pressed();

    void on_pushButton_2_pressed();

    void on_pushButton_3_pressed();

    void on_pushButton_6_pressed();

    void on_pushButton_5_pressed();

    void on_pushButton_4_pressed();

    void on_pushButton_7_pressed();

private:
    Ui::Formzijiem *ui;
    myqthread *myqt;
    //暂停被按下
    int isleep = 0;
    //静音被按下
    int ymute = 0;
};

#endif // FORMZIJIEM_H
