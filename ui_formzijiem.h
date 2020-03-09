/********************************************************************************
** Form generated from reading UI file 'formzijiem.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMZIJIEM_H
#define UI_FORMZIJIEM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Formzijiem
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;

    void setupUi(QWidget *Formzijiem)
    {
        if (Formzijiem->objectName().isEmpty())
            Formzijiem->setObjectName(QStringLiteral("Formzijiem"));
        Formzijiem->resize(287, 135);
        pushButton = new QPushButton(Formzijiem);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(0, 0, 99, 27));
        pushButton->setFlat(true);
        pushButton_2 = new QPushButton(Formzijiem);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(110, 10, 61, 41));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/picture_png/last.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon);
        pushButton_2->setFlat(true);
        pushButton_3 = new QPushButton(Formzijiem);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(110, 90, 61, 41));
        pushButton_3->setIcon(icon);
        pushButton_3->setFlat(true);
        pushButton_4 = new QPushButton(Formzijiem);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(50, 50, 61, 41));
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/prefix1/picture_png/11-.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon1);
        pushButton_4->setFlat(true);
        pushButton_5 = new QPushButton(Formzijiem);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(170, 50, 61, 41));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/new/prefix1/picture_png/10+.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon2);
        pushButton_5->setFlat(true);
        pushButton_6 = new QPushButton(Formzijiem);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(110, 50, 61, 41));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/new/prefix1/picture_png/pause.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon3);
        pushButton_6->setFlat(true);
        pushButton_7 = new QPushButton(Formzijiem);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(230, 100, 51, 31));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/new/prefix1/picture_png/voice+.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_7->setIcon(icon4);
        pushButton_7->setFlat(true);

        retranslateUi(Formzijiem);

        QMetaObject::connectSlotsByName(Formzijiem);
    } // setupUi

    void retranslateUi(QWidget *Formzijiem)
    {
        Formzijiem->setWindowTitle(QApplication::translate("Formzijiem", "Form", 0));
        pushButton->setText(QApplication::translate("Formzijiem", "\350\277\224\345\233\236\347\252\227\345\217\243\346\250\241\345\274\217", 0));
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
        pushButton_5->setText(QString());
        pushButton_6->setText(QString());
        pushButton_7->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class Formzijiem: public Ui_Formzijiem {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMZIJIEM_H
