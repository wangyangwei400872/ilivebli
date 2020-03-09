#ifndef FORMLIST_H
#define FORMLIST_H

#include <QWidget>
//#include "widget.h"
namespace Ui {
class Formlist;
}

class Formlist : public QWidget
{
    Q_OBJECT

public:
    explicit Formlist(QWidget *parent = 0);
    ~Formlist();
    void gainfil(void * size);
private:
    Ui::Formlist *ui;


};

#endif // FORMLIST_H
