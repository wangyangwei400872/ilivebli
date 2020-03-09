#ifndef FORMGONGCHI_H
#define FORMGONGCHI_H

#include <QWidget>

//typedef struct qlistsong
//{
 //   int qlisttime;
//    char * qlistsongcsite;
//}QLISTSONG;

namespace Ui {
class Formgongchi;
}

class Formgongchi : public QWidget
{
    Q_OBJECT
    friend class Widget;
public:
    explicit Formgongchi(QWidget *parent = 0);
    ~Formgongchi();
    //读取歌词文件 传入的是地址
    int addgongworecatalog(char * str);
    //传入的是当前播放的歌名
    int addgongworefile(char * str);
    //歌词显示
    int showlyric();
private slots:
    void set_mytime_pos(int arg);

private:
    Ui::Formgongchi *ui;
    //保存歌词名字
    QList<char *> songword;
    //保存每一条歌词
    QList<QLISTSONG> songwordzheng;
    char *mylyricsite;
    char * mynidongdi;
    char * tmp;
};
int mystrstr(char* arg1,char *arg2);
#endif // FORMGONGCHI_H
