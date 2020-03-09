#include "formzijiem.h"
#include "ui_formzijiem.h"
#include "myqthread.h"
#include "widget.h"
#include <QPushButton>
Formzijiem::Formzijiem(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Formzijiem)
{
    ui->setupUi(this);
    this->setMinimumSize(287,135);
}

Formzijiem::~Formzijiem()
{
    delete ui;
}

void Formzijiem::on_pushButton_pressed()
{
     emit openformjiemian();
}
//上一曲
void Formzijiem::on_pushButton_2_pressed()
{
    emit form_but2();
}
//下一曲
void Formzijiem::on_pushButton_3_pressed()
{
    emit form_but3();
}
//暂停
void Formzijiem::on_pushButton_6_pressed()
{
    if(isleep == 0)
    {
        isleep =1;
        // setIcon(QIcon(":/new/prefix1/picture_png/pause.png"))
        ui->pushButton_6->setIcon(QIcon(":/new/prefix1/picture_png/play.png"));
    }
    else
    {
        isleep =0;
        ui->pushButton_6->setIcon(QIcon(":/new/prefix1/picture_png/pause.png"));
    }
    emit form_but6();
}
//快进
void Formzijiem::on_pushButton_5_pressed()
{
    emit form_but5();
}
//快退
void Formzijiem::on_pushButton_4_pressed()
{
    emit form_but4();
}

void Formzijiem::on_pushButton_7_pressed()
{
    if(ymute == 0)
    {
        ymute =1;
        // setIcon(QIcon(":/new/prefix1/picture_png/pause.png"))
        ui->pushButton_7->setIcon(QIcon(":/new/prefix1/picture_png/mute.png"));
    }
    else
    {
        ymute =0;
        ui->pushButton_7->setIcon(QIcon(":/new/prefix1/picture_png/voice-.png"));
    }
    emit form_but7();
}
