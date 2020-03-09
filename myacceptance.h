#ifndef MYACCEPTANCE_H
#define MYACCEPTANCE_H

#include <QThread>
class Widget;
class myacceptance : public QThread
{
    Q_OBJECT
    friend class Widget;
public:
    myacceptance(Widget *arg);


signals:
   void ansperc(int arg);
    //当前播放时间，秒
   signals:
   void timepos(int arg);
    //返回歌曲名
signals:
   void filename(char * arg);
    //播放总时长（秒）
   signals:
   void timelength(int arg);
    //结束播放时
   signals:
   void songend();

protected:
    void run();
private:
    Widget * widwin;
    QList<char *>  keywords;
    char *str;
    char *tmp;
};

#endif // MYACCEPTANCE_H
