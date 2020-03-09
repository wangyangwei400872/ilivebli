#include "formlyric.h"
#include "ui_formlyric.h"
#include <QLabel>
Formlyric::Formlyric(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Formlyric)
{
    ui->setupUi(this);
    this->setMinimumSize(116,699);
    ui->label->setWordWrap(true);
    ui->label->setText(“sdas”);
}

Formlyric::~Formlyric()
{
    delete ui;
}
