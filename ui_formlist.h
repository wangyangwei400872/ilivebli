/********************************************************************************
** Form generated from reading UI file 'formlist.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORMLIST_H
#define UI_FORMLIST_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Formlist
{
public:
    QListWidget *listWidget;

    void setupUi(QWidget *Formlist)
    {
        if (Formlist->objectName().isEmpty())
            Formlist->setObjectName(QStringLiteral("Formlist"));
        Formlist->resize(256, 531);
        listWidget = new QListWidget(Formlist);
        listWidget->setObjectName(QStringLiteral("listWidget"));
        listWidget->setGeometry(QRect(10, 10, 231, 511));

        retranslateUi(Formlist);

        QMetaObject::connectSlotsByName(Formlist);
    } // setupUi

    void retranslateUi(QWidget *Formlist)
    {
        Formlist->setWindowTitle(QApplication::translate("Formlist", "Form", 0));
    } // retranslateUi

};

namespace Ui {
    class Formlist: public Ui_Formlist {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORMLIST_H
