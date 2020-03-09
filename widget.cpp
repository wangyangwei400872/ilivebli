#include "widget.h"
#include "formzijiem.h"
#include "addsongfileqthrad.h"
#include "myqslider.h"
#include "formgongchi.h"
#include <QListWidgetItem>
#include <QMouseEvent>
#include <QListWidget>
#include <QLabel>
#include "ui_widget.h"
#include <QDebug>
#include <QPushButton>
#include <stdio.h>
Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    //form11 = new Formzijiem(this);
    //QTextCodec::setCodecForCStrings(QTextCodec::codecForName("GB2312"));
    //固定窗口大小
    this->setMinimumSize(1000,700);
    //需要初始化的参数
    initialization();
    //注册信号与槽
    registersignal();
    //获取目录
    add_file.songcatalogs(songaddress,&songlist1);
    //获取歌词目录
    //fgong.addgongworecatalog(songaddcata);
    //给list添加数据
    gainfil();
    //总曲目
    songsizemax=songlist1.size(); 
    //启动播放歌曲函数
    myplypersong();
    char a[512]="";
    char b[512]="";
    sscanf(songlist1[songsizenew],"%[^-] %s",a,b);
    ui->label_4->setText(a);
    ui->label_4->setText(b);
    usleep(100*1000);
    //获取歌词
    //传入地址及歌词目录
    addsong->addgongworefile(songlist1[songsizenew],songaddcata);
    //运行进程
    addsong->start();
}

Widget::~Widget()
{
    classsongplay->sendend();
    delete globalarg1;
    delete globalarg2;
    free(ysongstore);
    free(songaddress);
    //close(fifo_cmd);
    delete ui;
}
//初始化列表
void Widget::initialization()
{
    //给读取歌曲目录地址申请空间
    //songaddress = (char *) malloc(1024);
    //初始化歌曲目录地址
    strcpy(songaddress,"../music_file/");
    //初始化歌曲歌词目录
    strcpy(songaddcata,"../misic_lrc/");
    //初始化局部变量
    globalarg1 = new char[1024];
    globalarg2 = new char[1024];
    //当前播放曲目
    songsizenew=0;
    //自定义滑动条
    myqsli1=new myqslider;
    myqsli1->setParent(this);
    //myqsli1->setGeometry(QRect(240,660,445,31));
    myqsli1->getsizedaxiao(240,660,445,31);
    myqsli1->setMaximum(100);
    myqsli1->setPageStep(1);
    myqsli1->setTracking(true);
    myqsli1->setOrientation(Qt::Horizontal);
    myqsli1->setInvertedAppearance(false);
    myqsli1->setInvertedControls(false);
    myqsli1->setTickPosition(QSlider::NoTicks);

    myqsli2=new myqslider;
    myqsli2->setParent(this);
    //myqsli2->setGeometry(QRect(730,660,125,31));
    myqsli2->getsizedaxiao(760,660,125,31);
    myqsli2->setMaximum(100);
    myqsli2->setPageStep(1);
    myqsli2->setTracking(true);
    myqsli2->setOrientation(Qt::Horizontal);
    myqsli2->setInvertedAppearance(false);
    myqsli2->setInvertedControls(false);
    myqsli2->setTickPosition(QSlider::NoTicks);
    ui->listWidget->setStyleSheet("background-color:transparent");
    ui->listWidget->setFrameShape(QListWidget::NoFrame);
    ui->label_6->setAlignment(Qt::AlignCenter);
    ui->label_7->setAlignment(Qt::AlignCenter);
    ui->label_8->setAlignment(Qt::AlignCenter);
    ui->label_9->setAlignment(Qt::AlignCenter);
    ui->label_10->setAlignment(Qt::AlignCenter);
    ui->label_11->setAlignment(Qt::AlignCenter);
    ui->label_12->setAlignment(Qt::AlignCenter);
    ui->label_13->setAlignment(Qt::AlignCenter);
    ui->label_14->setAlignment(Qt::AlignCenter);
    //初始化播放类
    classsongplay = new myqthread(this);
    classsongplay->start();
    classsongrealize = new myacceptance(this);
    classsongrealize->start();
    songplaymarks = 1;
    ysongstore = (char *) malloc(1024);
    addsong = new addsongfileqthrad(this);
    ui->listWidget->setVerticalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
    ui->listWidget->setHorizontalScrollBarPolicy(Qt::ScrollBarAlwaysOff);
}
//注册信号与槽
void Widget::registersignal()
{
    //上一曲
    //void form_but2();
    connect(&form11,&Formzijiem::form_but2,this,&Widget::on_pushButton_2_pressed);
    //下一曲
    //void form_but3();
    connect(&form11,&Formzijiem::form_but3,this,&Widget::on_pushButton_4_pressed);
    //快退
    //void form_but4();on_pushButton_pressed()
    connect(&form11,&Formzijiem::form_but4,this,&Widget::on_pushButton_pressed);
    //void form_but5();on_pushButton_5_pressed()
    //暂停
    connect(&form11,&Formzijiem::form_but5,this,&Widget::on_pushButton_5_pressed);
    //void form_but6();on_pushButton_3_pressed()
    connect(&form11,&Formzijiem::form_but6,this,&Widget::on_pushButton_3_pressed);
    //静音
    connect(&form11,&Formzijiem::form_but7,this,&Widget::on_pushButton_6_pressed);
    //播放进度
    connect(classsongrealize,&myacceptance::ansperc,this,&Widget::set_ansperc);
    //播放秒数
    connect(classsongrealize,&myacceptance::timepos,this,&Widget::set_timepos);

    //timelength(swsize);
    connect(classsongrealize,&myacceptance::timelength,this,&Widget::set_timelength);
    //emit filename(swstr);
    connect(classsongrealize,&myacceptance::filename,this,&Widget::set_filename);
    //滚动条发生变化
    connect(myqsli2,&myqslider::valueChanged,this,&Widget::set_valueChanged);
    //set_mytime_pos(int arg)
    //connect(classsongrealize,&myacceptance::timepos,&fgong,&Formgongchi::set_mytime_pos);
    connect(addsong,&addsongfileqthrad::ansperc,this,&Widget::test_set_ansperc);
    //切换界面
    connect(&form11,&Formzijiem::openformjiemian,this,&Widget::set_openformjiemian);
}
//播放歌曲
void Widget::myplypersong()
{

    strcpy(globalarg1,songaddress);
    strcat(globalarg1,songlist1[songsizenew]);
    //创建无名管道
    pipe(fifo_less);
    //删除有名管道
    unlink("./fifo_file");
    //创建有名管道
    mkfifo("./fifo_file",0666);
    //打开文件
    fifo_cmd = open("./fifo_file",O_RDWR);
    if(fifo_cmd<0)
    {
        perror("no open songfile");
    }
    //创建子进程
    pid_t pid;
    pid =vfork();
    if(pid< 0)
    {
        perror("pid no");
    }
    else if(pid == 0)
    {
        dup2(fifo_less[1],1);
        execlp("mplayer","mplayer","-ac","mad"
               ,"-slave","-quiet","-idle"
               ,"-input","file=./fifo_file"
               ,globalarg1
               ,NULL);
        exit(1);
    }
    else
    {

    }
}
//重铸歌名
char* Widget::recaslingsongname(char * arg,int size)
{
    char * tmp=(char *)malloc(1024);
        int y=0;
        for(int i = 0 ; i<size ; i++)
        {

            if(arg[i] == ' ')
            {
                tmp[y]= 92;
                y++;
                tmp[y] = arg[i];
                y++;
            }
            else
            {
                tmp[y] = arg[i];
                y++;
            }
        }
        tmp[y]=0;
        strcpy(ysongstore,"loadfile ");
        strcat(ysongstore,songaddress);
        strcat(ysongstore,tmp);
        strcat(ysongstore,"\n");
        free(tmp);
        return ysongstore;

}
//暂停
void Widget::on_pushButton_3_pressed()
{
    //songplaymarks 歌曲是否播放标志位 1 播放  0 暂停
    if(songplaymarks == 0)
    {
        songplaymarks =1;
        ui->pushButton_3->setIcon(QIcon(":/new/prefix1/picture_png/pause.png"));
    }
    else
    {
        songplaymarks =0;
        ui->pushButton_3->setIcon(QIcon(":/new/prefix1/picture_png/play.png"));
    }
    //发送停止信号
    classsongplay->sendpause();

}
//获取进度后刷新进度条
void Widget::set_ansperc(int arg)
{
    myqsli1->setValue(arg);

}
//上一曲
void Widget::on_pushButton_2_pressed()
{
    usleep(100*1000);
    //当前播放曲目
    //int songsizenew;
    //总曲目
    //int songsizemax;
    if(songsizenew == 0)
    {
        songsizenew =songsizemax-1;
    }
    else
    {
        songsizenew--;
    }
    changesong(songsizenew);
}
//更换需要播放歌曲参数 歌曲编号
void Widget::changesong(int size)
{

    char *tmp = (char *)malloc(1024);
    //获取当前播放歌曲
    //recaslingsongname歌名加\函数
    //songlist1 list容器
    //size歌曲编号
    strcpy(tmp,recaslingsongname(songlist1[size],strlen(songlist1[size])));
    //调用classsongplay的切换歌曲函数
    classsongplay->sendloadfile(tmp);
    //暂停标志位  播放时变为播放
    songplaymarks =1;
    //更换为播放时图标（暂停图片）
    ui->pushButton_3->setIcon(QIcon(":/new/prefix1/picture_png/pause.png"));
    ui->label_4->setText(songlist1[songsizenew]);
    //传入地址及歌词目录
    addsong->addgongworefile(songlist1[songsizenew],songaddcata);
    free(tmp);
}
//下一曲
void Widget::on_pushButton_4_pressed()
{
    usleep(100*100);
    //当前播放曲目
    //int songsizenew;
    //总曲目
    //int songsizemax;
    if(songsizenew == songsizemax-1)
    {
           songsizenew =0;
    }
    else
    {
        songsizenew++;
    }
    changesong(songsizenew);
}
//快退
void Widget::on_pushButton_pressed()
{
    classsongplay->sendseek(-15);
    if(songplaymarks == 0)
    {
        classsongplay->sendpause();
    }
}
//快进
void Widget::on_pushButton_5_pressed()
{
    classsongplay->sendseek(15);
    if(songplaymarks == 0)
    {
        classsongplay->sendpause();
    }
}
//当前播放时间
void Widget::set_timepos(int arg)
{
    dangtime=arg;
    char chartime[256]="";
    sprintf(chartime,"%02d:%02d",arg/60,arg%60);
    //printf("            *************%s\n",chartime);
    ui->label_2->setText(chartime);
}
//总时间
void Widget::set_timelength(int arg)
{
    zhongtime =arg;
    char chartime[256]="";
    sprintf(chartime,"%02d:%02d",arg/60,arg%60);
    //printf("            *************%s\n",chartime);
    ui->label_3->setText(chartime);
}
//静音
void Widget::on_pushButton_6_pressed()
{
    if(songplaymarks1 == 0)
    {
        songplaymarks1 =1;
        ui->pushButton_6->setIcon(QIcon(":/new/prefix1/picture_png/mute.png"));
    }
    else
    {
        songplaymarks1 =0;

        ui->pushButton_6->setIcon(QIcon(":/new/prefix1/picture_png/voice+.png"));
    }
    //发送停止信号
    classsongplay->sendmule(songplaymarks1);
    if(songplaymarks == 0)
    {
        classsongplay->sendpause();
    }
}
void Widget::set_filename(char * argv)
{

    ui->label_4->setText(argv);
    if(songplaymarks == 0)
    {

        classsongplay->sendpause();
    }
}
void Widget::set_valueChanged(int arg)
{

    classsongplay->sendvolume(arg);

    if(songplaymarks == 0)
    {

        classsongplay->sendpause();

    }
}
//给listwidget添加数据
void Widget::gainfil()
{
   for(int i = 0;i< songlist1.size() ;i++)
    {
        QListWidgetItem *item = new QListWidgetItem;

        item->setText(songlist1[i]);
        ui->listWidget->addItem(item);
        //printf("传递到另外一个窗口 %s\n",(*asize)[i]);
    }
}

void Widget::test_set_ansperc(char** arg)
{

    ui->label_6->setText(arg[0]);
    ui->label_7->setText(arg[1]);
    ui->label_8->setText(arg[2]);
    ui->label_9->setText(arg[3]);
    ui->label_10->setText(arg[4]);
    ui->label_11->setText(arg[5]);
    ui->label_12->setText(arg[6]);
    ui->label_13->setText(arg[7]);
    ui->label_14->setText(arg[8]);


}
//关闭当前窗口
void Widget::on_pushButton_7_pressed()
{
    form11.show();
    this->hide();
}
//打开当前窗口
void Widget::set_openformjiemian()
{
    form11.hide();
    this->show();
}
//鼠标点击时移动界面
void Widget::mouseMoveEvent(QMouseEvent *arg)
{
        //qDebug()<<"移动事件鼠标点击事件"<<arg->globalPos();
        //qDebug()<<"移动事件保存的坐标"<<thispos;
        //qDebug()<<"移动事件相对于屏幕"<<thispos-arg->pos();
        qDebug()<<"移动了多少"<<thispos-arg->pos();
        qDebug()<<"移动事件相对于屏幕"<<this->pos()+ thispos-arg->globalPos();
        QPoint tmp=this->pos()+( thispos-arg->globalPos());
        this->move(tmp.x(),tmp.y());
        thispos =tmp;
}
//鼠标点击事件
void Widget::mousePressEvent(QMouseEvent *arg)
{

    thispos = arg->globalPos();

}
