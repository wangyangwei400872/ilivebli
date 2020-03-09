#ifndef MYQTHREAD_H
#define MYQTHREAD_H

#include <QThread>
#include <pthread.h>
#include <QMutex>
#include <QMutexLocker>
class Widget;
class myqthread : public QThread
{
    Q_OBJECT
    friend class Widget;
public:
    myqthread(Widget *arg);
    //给有名管道发生命令
    void putordetr(char *arg);
    //解析命令
    ~myqthread();
    void sendloadfile(char *arg);    //0 更换歌曲
    void sendvolume(int arg);   //1 设置音量，传参：1-100
    void sendmule(int arg);   //2 静音开关 传参：1 静音 0关闭静音
    void sendpause();          //3 暂停、取消暂停
    void sendseek(int arg);   //4 快进快退 正数快进 负数快退 传参：（int）秒数
    void sendpercentpos();   //5 发生查询文件播放进度（百分比）
    void sendtimepos();   //6 查询当前播放时间
    void sendfilename();   //7 查询播放文件名
    void sendtimelength();   //8 查询播放文件长度
    void sendend();   //9 end关闭播放器

protected:
    void run();


private:
    Widget *widarg;
    char * str;
    int jingzhihaha=1;
    QList<char *> songorder;
    int runsize=0;
    int qthreadsize=0;
    //创建锁
    pthread_mutex_t pthmu1;
    //QMutex mutex;
};

#endif // MYQTHREAD_H
