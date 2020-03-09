#include "formlist.h"
#include "ui_formlist.h"
#include <stdio.h>
#include <string.h>
#include <QListWidgetItem>
#include <QListWidget>
#include "widget.h"
Formlist::Formlist(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Formlist)
{
    ui->setupUi(this);



}


Formlist::~Formlist()
{
    delete ui;
}
