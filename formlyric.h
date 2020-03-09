#ifndef FORMLYRIC_H
#define FORMLYRIC_H

#include <QWidget>

namespace Ui {
class Formlyric;
}

class Formlyric : public QWidget
{
    Q_OBJECT

public:
    explicit Formlyric(QWidget *parent = 0);
    ~Formlyric();

private:
    Ui::Formlyric *ui;
};

#endif // FORMLYRIC_H
