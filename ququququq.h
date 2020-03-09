#ifndef QUQUQUQUQ_H
#define QUQUQUQUQ_H

#include <QThread>
class Widget;
class ququququq : public QThread
{
    friend class Widget;
public:
    ququququq(Widget * sada);
protected:
    void run();
private:
    Widget *wins;
    int fifo_cmd1;
};

#endif // QUQUQUQUQ_H
