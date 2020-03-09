#include "formgongchi.h"
#include "ui_formgongchi.h"
#include <QDebug>
#include <QList>
#include <unistd.h>
#include <stdio.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <sys/types.h>
#include <QTextCodec>
#include <dirent.h>
#include <QLabel>

Formgongchi::Formgongchi(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Formgongchi)
{
    ui->setupUi(this);

    mynidongdi = (char *)malloc(256);
    mylyricsite = (char *)malloc(256);
    ui->label->setText("songwordzheng[i].qlistsongcsite");
    ui->label_2->setText("songwordzheng[i].qlistsongcsite");
    ui->label_3->setText("songwordzheng[i].qlistsongcsite");
    ui->label_4->setText("songwordzheng[i].qlistsongcsite");
    ui->label_5->setText("songwordzheng[i].qlistsongcsite");
    ui->label_6->setText("songwordzheng[i].qlistsongcsite");
    ui->label_7->setText("songwordzheng[i].qlistsongcsite");
}

Formgongchi::~Formgongchi()
{
    delete ui;
}
//读取歌词
int Formgongchi::addgongworefile(char * str)
{

}
//读取目录
int Formgongchi::addgongworecatalog(char * str)
{

    strcpy( mylyricsite,str );
    DIR *dir;
    struct dirent *dirp=NULL;
    dir =opendir(str);
    if(dir == NULL)
    {
        return -1;
    }
    while(1)
    {
        dirp = readdir(dir);
        if(dirp == NULL)
            break;

        if(dirp->d_type == DT_REG)
        {
            char *str1 = strstr(dirp->d_name,".lrc");
            if(str1!= NULL)
            {
                char * sitestr = (char *)malloc(1024);
                strcpy(sitestr,str);
                strcat(sitestr, dirp->d_name);
                qDebug().nospace()<<sitestr;

                songword.append(sitestr);
                free(sitestr);
            }
        }

    }
}
//显示歌词
int Formgongchi::showlyric()
{
    printf("遍历歌词\n");
    int i = 3;

        ui->label_4->setText(songwordzheng[i].qlistsongcsite);
        if(i-1 <= 0)
            ui->label_3->setText(songwordzheng[i-1].qlistsongcsite);
            if(i-2 <= 0)
                ui->label_2->setText(songwordzheng[i-2].qlistsongcsite);
                if(i-3 <= 0)
                    ui->label->setText(songwordzheng[i-3].qlistsongcsite);

         if(i+1 <=songwordzheng.size())
             ui->label_5->setText(songwordzheng[i+1].qlistsongcsite);
             if(i+2 <=songwordzheng.size())
                 ui->label_6->setText(songwordzheng[i+2].qlistsongcsite);
                 if(i+3 <=songwordzheng.size())
                     ui->label_7->setText(songwordzheng[i+3].qlistsongcsite);

}
void Formgongchi::set_mytime_pos(int arg)
{
    int i = 0;
    for(i=0;i<songwordzheng.size();i++)
    {
        printf("歌词时间%d , 歌词内容%s\n",songwordzheng[i].qlisttime,songwordzheng[i].qlistsongcsite);
        if(songwordzheng[i].qlisttime == arg)
        {
            ui->label_4->setText(songwordzheng[i].qlistsongcsite);
            if(i-1 <= 0)
                ui->label_3->setText(songwordzheng[i-1].qlistsongcsite);
                if(i-2 <= 0)
                    ui->label_2->setText(songwordzheng[i-2].qlistsongcsite);
                    if(i-3 <= 0)
                        ui->label->setText(songwordzheng[i-3].qlistsongcsite);

             if(i+1 <=songwordzheng.size())
                 ui->label_5->setText(songwordzheng[i+1].qlistsongcsite);
                 if(i+2 <=songwordzheng.size())
                     ui->label_6->setText(songwordzheng[i+2].qlistsongcsite);
                     if(i+3 <=songwordzheng.size())
                         ui->label_7->setText(songwordzheng[i+3].qlistsongcsite);
        }
    }
}
