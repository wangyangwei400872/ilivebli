/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QListWidget *listWidget;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QLabel *label_8;
    QLabel *label_9;
    QLabel *label_10;
    QLabel *label_11;
    QLabel *label_12;
    QLabel *label_13;
    QLabel *label_14;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QStringLiteral("Widget"));
        Widget->resize(1000, 700);
        pushButton = new QPushButton(Widget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(20, 660, 31, 31));
        QIcon icon;
        icon.addFile(QStringLiteral(":/new/prefix1/picture_png/11-.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton->setIcon(icon);
        pushButton->setFlat(true);
        pushButton_2 = new QPushButton(Widget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(60, 660, 31, 31));
        pushButton_2->setInputMethodHints(Qt::ImhNone);
        QIcon icon1;
        icon1.addFile(QStringLiteral(":/new/prefix1/picture_png/last.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_2->setIcon(icon1);
        pushButton_2->setFlat(true);
        pushButton_3 = new QPushButton(Widget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(100, 660, 31, 31));
        QIcon icon2;
        icon2.addFile(QStringLiteral(":/new/prefix1/picture_png/pause.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_3->setIcon(icon2);
        pushButton_3->setFlat(true);
        pushButton_4 = new QPushButton(Widget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(140, 660, 31, 31));
        QIcon icon3;
        icon3.addFile(QStringLiteral(":/new/prefix1/picture_png/next.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_4->setIcon(icon3);
        pushButton_4->setFlat(true);
        pushButton_5 = new QPushButton(Widget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(180, 660, 31, 31));
        QIcon icon4;
        icon4.addFile(QStringLiteral(":/new/prefix1/picture_png/10+.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_5->setIcon(icon4);
        pushButton_5->setFlat(true);
        pushButton_6 = new QPushButton(Widget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(730, 660, 31, 31));
        QIcon icon5;
        icon5.addFile(QStringLiteral(":/new/prefix1/picture_png/mute.png"), QSize(), QIcon::Normal, QIcon::Off);
        pushButton_6->setIcon(icon5);
        pushButton_6->setFlat(true);
        pushButton_7 = new QPushButton(Widget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(900, 660, 81, 31));
        pushButton_7->setFlat(true);
        label = new QLabel(Widget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(750, 40, 121, 31));
        label_2 = new QLabel(Widget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(205, 668, 41, 17));
        label_3 = new QLabel(Widget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(690, 670, 41, 17));
        label_4 = new QLabel(Widget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(110, 30, 421, 41));
        listWidget = new QListWidget(Widget);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(680, 80, 301, 531));
        label_5 = new QLabel(Widget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(110, 80, 421, 41));
        label_6 = new QLabel(Widget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(100, 150, 451, 17));
        label_7 = new QLabel(Widget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(100, 200, 451, 17));
        label_8 = new QLabel(Widget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(100, 250, 451, 17));
        label_9 = new QLabel(Widget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(100, 300, 451, 16));
        label_10 = new QLabel(Widget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(100, 350, 451, 16));
        label_11 = new QLabel(Widget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(100, 400, 451, 16));
        label_12 = new QLabel(Widget);
        label_12->setObjectName(QStringLiteral("label_12"));
        label_12->setGeometry(QRect(100, 450, 451, 16));
        label_13 = new QLabel(Widget);
        label_13->setObjectName(QStringLiteral("label_13"));
        label_13->setGeometry(QRect(100, 500, 451, 16));
        label_14 = new QLabel(Widget);
        label_14->setObjectName(QStringLiteral("label_14"));
        label_14->setGeometry(QRect(100, 550, 451, 16));

        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0));
        pushButton->setText(QString());
        pushButton_2->setText(QString());
        pushButton_3->setText(QString());
        pushButton_4->setText(QString());
        pushButton_5->setText(QString());
        pushButton_6->setText(QString());
        pushButton_7->setText(QApplication::translate("Widget", "\347\225\214\351\235\242\344\272\244\344\272\222", 0));
        label->setText(QApplication::translate("Widget", "<html><head/><body><p align=\"center\"><span style=\" font-size:16pt; font-weight:600; color:#ff0bfb;\">\346\222\255\346\224\276\345\210\227\350\241\250</span></p></body></html>", 0));
        label_2->setText(QApplication::translate("Widget", "00:00", 0));
        label_3->setText(QApplication::translate("Widget", "00:00", 0));
        label_4->setText(QApplication::translate("Widget", "<html><head/><body><p align=\"center\">\346\255\214\345\220\215</p></body></html>", 0));
        label_5->setText(QApplication::translate("Widget", "<html><head/><body><p align=\"center\">\346\255\214\346\211\213</p></body></html>", 0));
        label_6->setText(QApplication::translate("Widget", "TextLabel", 0));
        label_7->setText(QApplication::translate("Widget", "TextLabel", 0));
        label_8->setText(QApplication::translate("Widget", "TextLabel", 0));
        label_9->setText(QApplication::translate("Widget", "TextLabel", 0));
        label_10->setText(QApplication::translate("Widget", "TextLabel", 0));
        label_11->setText(QApplication::translate("Widget", "TextLabel", 0));
        label_12->setText(QApplication::translate("Widget", "TextLabel", 0));
        label_13->setText(QApplication::translate("Widget", "TextLabel", 0));
        label_14->setText(QApplication::translate("Widget", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
