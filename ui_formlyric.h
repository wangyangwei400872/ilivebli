/********************************************************************************
** Form generated from reading UI file 'formlyric.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMLYRIC_H
#define UI_FORMLYRIC_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Formlyric
{
public:
    QLabel *label;
    QLabel *label_2;

    void setupUi(QWidget *Formlyric)
    {
        if (Formlyric->objectName().isEmpty())
            Formlyric->setObjectName(QStringLiteral("Formlyric"));
        Formlyric->resize(116, 699);
        label = new QLabel(Formlyric);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 40, 30, 400));
        label->setMouseTracking(false);
        label->setFocusPolicy(Qt::NoFocus);
        label_2 = new QLabel(Formlyric);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(70, 200, 30, 400));
        label_2->setMouseTracking(false);
        label_2->setFocusPolicy(Qt::NoFocus);

        retranslateUi(Formlyric);

        QMetaObject::connectSlotsByName(Formlyric);
    } // setupUi

    void retranslateUi(QWidget *Formlyric)
    {
        Formlyric->setWindowTitle(QApplication::translate("Formlyric", "Form", 0));
        label->setText(QApplication::translate("Formlyric", "TextLabel", 0));
        label_2->setText(QApplication::translate("Formlyric", "TextLabel", 0));
    } // retranslateUi

};

namespace Ui {
    class Formlyric: public Ui_Formlyric {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMLYRIC_H
