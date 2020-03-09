/********************************************************************************
** Form generated from reading UI file 'formgongchi.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMGONGCHI_H
#define UI_FORMGONGCHI_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Formgongchi
{
public:
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;

    void setupUi(QWidget *Formgongchi)
    {
        if (Formgongchi->objectName().isEmpty())
            Formgongchi->setObjectName(QStringLiteral("Formgongchi"));
        Formgongchi->resize(511, 481);
        label = new QLabel(Formgongchi);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(80, 40, 331, 17));
        label_2 = new QLabel(Formgongchi);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(80, 80, 331, 17));
        label_3 = new QLabel(Formgongchi);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(80, 120, 331, 17));
        label_4 = new QLabel(Formgongchi);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(30, 180, 431, 81));
        label_5 = new QLabel(Formgongchi);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(80, 290, 321, 20));
        label_6 = new QLabel(Formgongchi);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(80, 340, 321, 20));
        label_7 = new QLabel(Formgongchi);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(80, 390, 321, 20));

        retranslateUi(Formgongchi);

        QMetaObject::connectSlotsByName(Formgongchi);
    } // setupUi

    void retranslateUi(QWidget *Formgongchi)
    {
        Formgongchi->setWindowTitle(QApplication::translate("Formgongchi", "Form", 0));
        label->setText(QApplication::translate("Formgongchi", "<html><head/><body><p align=\"center\"><span style=\" color:#e60073;\">TextLabel</span></p></body></html>", 0));
        label_2->setText(QApplication::translate("Formgongchi", "<html><head/><body><p align=\"center\"><span style=\" color:#e60073;\">TextLabel</span></p></body></html>", 0));
        label_3->setText(QApplication::translate("Formgongchi", "<html><head/><body><p align=\"center\"><span style=\" color:#e60073;\">TextLabel</span></p></body></html>", 0));
        label_4->setText(QApplication::translate("Formgongchi", "<html><head/><body><p align=\"center\"><span style=\" font-size:22pt; font-weight:600; text-decoration: underline; color:#ffdd19;\">TextLabel</span></p></body></html>", 0));
        label_5->setText(QApplication::translate("Formgongchi", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; color:#0000ff;\">TextLabel</span></p></body></html>", 0));
        label_6->setText(QApplication::translate("Formgongchi", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; color:#0000ff;\">TextLabel</span></p></body></html>", 0));
        label_7->setText(QApplication::translate("Formgongchi", "<html><head/><body><p align=\"center\"><span style=\" font-size:12pt; color:#0000ff;\">TextLabel</span></p></body></html>", 0));
    } // retranslateUi

};

namespace Ui {
    class Formgongchi: public Ui_Formgongchi {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMGONGCHI_H
