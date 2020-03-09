#include "addsongfile.h"
#include <QDebug>
#include <QList>
#include <sys/types.h>
#include <dirent.h>
addsongfile::addsongfile(QWidget *parent) : QWidget(parent)
{
       
}

int addsongfile::songcatalogs(char * songfile,void * tmplist)
{
    QList<char *> *addsonglist =(QList<char*>*)tmplist;
   //目录的结构体指针
    DIR *dir;
    struct dirent *dirp=NULL;
    dir =opendir(songfile);
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
            char *str = strstr(dirp->d_name,".mp3");
            if(str!= NULL)
            {
                qDebug().nospace()<<dirp->d_name;
                addsonglist->append(dirp->d_name);
            }
        }
        
    }

}
