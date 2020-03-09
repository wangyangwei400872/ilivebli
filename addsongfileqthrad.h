#ifndef ADDSONGFILEQTHRAD_H
#define ADDSONGFILEQTHRAD_H

#include <QThread>

typedef struct qlistsong
{
    int qlisttime;
    char * qlistsongcsite;
}QLISTSONG;

class Widget;
class addsongfileqthrad : public QThread
{
    Q_OBJECT
    friend class Widget;
public:
    addsongfileqthrad(Widget * wid);
    //读取歌词文件 传入的是地址
    //int addgongworecatalog(char * str);
    //解析地址传入的是当前播放的歌名
    int addgongworefile(char * str1,char * str2);
signals:
    //发生一个二维数组
   void ansperc(char ** arg);

protected:
    void run();

private:
    Widget * addwid;
    //保存当前地址
    char * sitestr;
    //QList<QLISTSONG> addlsitsong;
    QList<QLISTSONG> songwordzheng;
    char * mylyricsite;
    char * mynidongdi;
    char * tmp;
    char * songlyric[10];
    //播放标志位
    int ybof;
};

#endif // ADDSONGFILEQTHRAD_H
