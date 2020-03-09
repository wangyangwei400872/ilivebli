#ifndef WIDGET_H
#define WIDGET_H
#include "addsongfileqthrad.h"
#include <QWidget>
#include "myqslider.h"
#include "myacceptance.h"
#include "myqthread.h"
#include "addsongfile.h"
#include <QCloseEvent>
#include <sys/types.h>
#include <stab.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include "formgongchi.h"
#include <QQueue>
#include "formzijiem.h"

namespace Ui {
class Widget;
}

class Widget : public QWidget
{
    Q_OBJECT
    friend class myqthread;
    friend class myacceptance;
    friend class addsongfileqthrad;
public:
    explicit Widget(QWidget *parent = 0);
    ~Widget();
    //初始化配置
    void initialization();
    //注册信号与槽
    void registersignal();
    //程序退出函数
    //virtual closeEvent(QCloseEvent* event);
    //播放歌曲
    void myplypersong();
    //处理更换歌曲名
    char * recaslingsongname(char * argc,int argv);
    //更换需要播放的音乐 参数 编号
    void changesong(int size);
    //
    void gainfil();
    //鼠标移动事件
    void mouseMoveEvent(QMouseEvent *arg);
    //鼠标点击事件
    void mousePressEvent(QMouseEvent *arg);
private slots:
    void on_pushButton_3_pressed();
    void set_ansperc(int arg);
    void set_timepos(int arg);
    void set_timelength(int arg);
    void set_filename(char * argv);
    void set_valueChanged(int arg);
    void test_set_ansperc(char** arg);
    void set_openformjiemian();
    void on_pushButton_2_pressed();

    void on_pushButton_4_pressed();

    void on_pushButton_pressed();

    void on_pushButton_5_pressed();

    void on_pushButton_6_pressed();

    void on_pushButton_7_pressed();

   // void on_listWidget_itemEntered(QListWidgetItem *item);

    //void on_listWidget_itemDoubleClicked(QListWidgetItem *item);

private:
    Ui::Widget *ui;
    //有名管道open文件描述符
    int fifo_cmd;
    //无名管道文件描述符
    int fifo_less[2];
    //当前歌曲地址
    char songaddress[256];
    //当前歌曲目录地址
    char songaddcata[256];
    //定义两个全局通用变量
    char * globalarg1;
    char * globalarg2;
    //创建默认歌曲名容器
    QList<char *>  songlist1;
   // QQueue<char *> qqueueueue;

    //初始化addsongfile
    addsongfile add_file;
    //当前播放曲目
    int songsizenew;
    //总曲目
    int songsizemax;
    //设置两个滑动条
    myqslider* myqsli1;
    myqslider* myqsli2;
    //c初始化播放类
    myqthread * classsongplay;
    //播放器需要更改主线程类
    myacceptance * classsongrealize;
    //音乐停止按钮被按下标志位 0 停止 1 播放
    int songplaymarks ;
    char * ysongstore;
    //静音开关
    int songplaymarks1;
    //当前播放歌曲总时间与当前时间
    int zhongtime;
    int dangtime;
    //Formgongchi fgong;
    addsongfileqthrad * addsong;
    Formzijiem form11;
    QPoint thispos;
};

#endif // WIDGET_H
