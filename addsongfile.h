#ifndef ADDSONGFILE_H
#define ADDSONGFILE_H

#include <QWidget>
#include <sys/types.h>
#include <dirent.h>
#include <QList>
class addsongfile : public QWidget
{
    Q_OBJECT
public:
    explicit addsongfile(QWidget *parent = 0);
    //读取对应目录的文件
    int songcatalogs(char * songfile,void* songlist);
signals:

public slots:
    
private:
    //保存歌曲
    //QList<char *>  addsonglist;
};

#endif // ADDSONGFILE_H
