#include "myqthread.h"
#include "widget.h"
#include <stdio.h>
#include <string.h>
#include <QThread>
#include <QMutex>
#include <QMutexLocker>
#include <QQueue>
myqthread::myqthread(Widget *arg1)
{
    widarg =arg1;
    qthreadsize = 0;
    str = (char *)malloc(sizeof(char *));
    songorder<<"loadfile"    //更换歌曲 string
             <<"volume"    //设置音量 x 1
             <<"mute"   //静音开关 1/0 1静音，0取消静音
             <<"pause"    //暂停、取消暂停
             <<"seek"     //快进或快退 正数快进 负数快退
             <<"get_percent_pos"  //获取文件播放进度（百分比）
             <<"get_time_pos" //获取文件的当前位置，秒为单位
             <<"get_file_name"    //获取文件的文件名
             <<"get_time_length"  //获取文件的长度 秒为单位
             <<"quit [1]"  ;    //关闭播放器
    //初始化锁
    pthread_mutex_init(&pthmu1,NULL);
}
//发送命令给有名管道函数
void myqthread::putordetr(char * arg)
{
    //usleep(100+1000);
    //printf("需要发生命令 %s \n",arg);
    write(widarg->fifo_cmd,arg,strlen(arg));

}

void myqthread::sendloadfile(char * arg)    //0 更换歌曲
{
    //sprintf(str,"%s %s 1\n",songorder[0],arg);
    //上锁互斥锁
    pthread_mutex_lock(&pthmu1);
    putordetr(arg);
    //解锁
    pthread_mutex_unlock(&pthmu1);
}
//void sendvolume(int arg);
void myqthread::sendvolume(int arg)   //1 设置音量，传参：1-100
{
    if(arg >100)
        arg = 99;
    if(arg <0)
        arg = 1;
    sprintf(str,"%s %d 1\n",songorder[1],arg);

    //上锁互斥锁
    pthread_mutex_lock(&pthmu1);
    putordetr(str);
    //解锁
    pthread_mutex_unlock(&pthmu1);
}

void myqthread::sendmule(int arg)   //2 静音开关 传参：1 静音 0关闭静音
{

    sprintf(str,"%s %d\n",songorder[2],arg);
    //printf("sendvolume = [%s]\n",str);
    //上锁互斥锁
    pthread_mutex_lock(&pthmu1);
    putordetr(str);
    //解锁
    pthread_mutex_unlock(&pthmu1);
}

void myqthread::sendpause()          //3 暂停、取消暂停
{
    sprintf(str,"%s \n",songorder[3]);

    //上锁互斥锁
    pthread_mutex_lock(&pthmu1);
    putordetr(str);
    //解锁
    pthread_mutex_unlock(&pthmu1);
}

void myqthread::sendseek(int arg)   //4 快进快退 正数快进 负数快退 传参：（int）秒数
{
    sprintf(str,"%s %d\n",songorder[4],arg);
   // printf("sendvolume = [%s]\n",str); 
    //上锁互斥锁
    pthread_mutex_lock(&pthmu1);
    putordetr(str);
    //解锁
    pthread_mutex_unlock(&pthmu1);
}

void myqthread::sendpercentpos()   //5 发生查询文件播放进度（百分比）暂停状态下发生命令会重新开始播放
{
    sprintf(str,"%s\n",songorder[5]);
    //printf("sendvolume = [%s]\n",str);
    //上锁互斥锁
    pthread_mutex_lock(&pthmu1);
    putordetr(str);
    //解锁
    pthread_mutex_unlock(&pthmu1);
}

void myqthread::sendtimepos()  //6 查询当前播放时间 暂停状态下发生命令会重新开始播放
{
    sprintf(str,"%s\n",songorder[6]);
    //printf("sendvolume = [%s]\n",str);
    //上锁互斥锁
    pthread_mutex_lock(&pthmu1);
    putordetr(str);
    //解锁
    pthread_mutex_unlock(&pthmu1);
}

void myqthread::sendfilename()   //7 查询播放文件名
{
    sprintf(str,"%s\n",songorder[7]);
    //printf("sendvolume = [%s]\n",str);
    //上锁互斥锁
    pthread_mutex_lock(&pthmu1);
    putordetr(str);
    //解锁
    pthread_mutex_unlock(&pthmu1);
}

void myqthread::sendtimelength()   //8 查询播放文件长度
{
    sprintf(str,"%s\n",songorder[8]);

    //printf("sendvolume = [%s]\n",str);
    //上锁互斥锁
    pthread_mutex_lock(&pthmu1);
    putordetr(str);
    //解锁
    pthread_mutex_unlock(&pthmu1);
}

void myqthread::sendend()//jieshu
{
    sprintf(str,"%s\n",songorder[9]);
    //上锁互斥锁
    pthread_mutex_lock(&pthmu1);
    putordetr(str);
    //解锁
    pthread_mutex_unlock(&pthmu1);
}
void myqthread::run()
{

    while(1)
    {
        usleep(300*1000);
        //printf("查看停止标志位 %d ;");
       //粘贴标志位
       if(widarg->songplaymarks==1)
        {

          //获取当前歌曲的百分比
          sendpercentpos();
          //获取当前歌曲的当前播放时间
          sendtimepos();
        }
    }

}

myqthread::~myqthread()
{
    pthread_mutex_destroy(&pthmu1);
    free(str);

}
