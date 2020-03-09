#include "addsongfileqthrad.h"
#include "widget.h"
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

addsongfileqthrad::addsongfileqthrad(Widget * wid)
{
    addwid =wid;
    mynidongdi =(char *)malloc(256);
    //创建一个二维苏
    for(int y = 0 ;y< 10 ; y++)
    {
       songlyric[y] =(char *)malloc(256);
    }


    //start();
}

void addsongfileqthrad::run()
{
    ybof = 0;
    while (1) {
        usleep(500*1000);
        for(int i = 0;i<songwordzheng.size();i++)
        {
            if(ybof == i)
            {
                continue;
            }
            else
            {
                ybof = i;
            }
            if(addwid->dangtime == songwordzheng[i].qlisttime)
            {
                //printf("bujiaoshijian addwid->dangtime[%d] == songwordzheng[i].qlisttime[%d]\n",addwid->dangtime,songwordzheng[i].qlisttime);
                if(i-4 < 0)
                {

                    strcpy(songlyric[0],"");
                }
                else
                {
                    strcpy(songlyric[0],songwordzheng[i-4].qlistsongcsite);
                }
                if(i-3 < 0)
                {

                    strcpy(songlyric[1],"");
                }
                else
                {
                    strcpy(songlyric[1],songwordzheng[i-3].qlistsongcsite);
                }
                if(i-2 < 0)
                {

                    strcpy(songlyric[2],"");
                }
                else
                {
                    strcpy(songlyric[2],songwordzheng[i-2].qlistsongcsite);
                }
                if(i-1 < 0)
                {

                    strcpy(songlyric[3],"");
                }
                else
                {
                    strcpy(songlyric[3],songwordzheng[i-1].qlistsongcsite);
                }


                    strcpy(songlyric[4],songwordzheng[i].qlistsongcsite);

                if(i+1 >= songwordzheng.size())
                {
                    strcpy(songlyric[5],"");
                }
                else
                {
                    strcpy(songlyric[5],songwordzheng[i+1].qlistsongcsite);
                }
                if(i+2 >= songwordzheng.size())
                {
                    strcpy(songlyric[6],"");
                }
                else
                {
                    strcpy(songlyric[6],songwordzheng[i+2].qlistsongcsite);
                }
                if(i+3 >= songwordzheng.size())
                {
                    strcpy(songlyric[7],"");
                }
                else
                {
                    strcpy(songlyric[7],songwordzheng[i+3].qlistsongcsite);
                }
                if(i+4 >= songwordzheng.size())
                {
                    strcpy(songlyric[8],"");
                }
                else
                {
                    strcpy(songlyric[8],songwordzheng[i+4].qlistsongcsite);
                }

                emit ansperc(songlyric);
        }
        }
    }

}



//传入的是当前播放的歌名 str1 歌名 str2 歌曲地址
int addsongfileqthrad::addgongworefile(char * str1,char * str2)
{
    while(songwordzheng.size() != 0)
    {
        songwordzheng.pop_back();
    }
    ybof = 0;
    //创建一个临时变量处理传入的歌名
    char *addsongfile = (char *)malloc(1024);
    strcpy(addsongfile,str1);
    //记录传入字符串的当前字符
    int stri = 0;
    while(1)
    {
        //判断歌名是否到达‘。’
        if(addsongfile[stri]=='.')
        {
            //找到后将点变为0
            addsongfile[stri]=0;

            break;
        }
        //找不到就加一
        stri++;
    }
    //打印是否解析完毕
    printf("删除后缀后： =%s\n",addsongfile);

    strcpy(mynidongdi,str2);
    strcat(mynidongdi,addsongfile);
    strcat(mynidongdi,".lrc");
    printf(" 需要打开的文件名 =%s\n",mynidongdi);
    int tf =open(mynidongdi,O_RDONLY);
    if(tf < 0)
    {
           perror("文件打开失败 。。。。。。。");
           QLISTSONG tmp1 ;
           tmp1.qlisttime=10;
           tmp1.qlistsongcsite="暂无歌词" ;
           songwordzheng.append(tmp1);
           return -1;
    }
    //保存读取的字符chuan
    char *strdeat = (char *)malloc(1024);
    //保存第一个字母
    char temp;
    //记录是否是前两句歌词
    int qianmlianghang=0;
    //读取一行
    //保存指针移动的次数
    int strdeansize=0;
    //char *srcp[256];
    while(1)
    {
            //读取一个字符 并判断是否是换号付
            int readshib=read(tf,&temp,1);
            if(readshib == 0)
            {
                  break;
            }
            if(temp == '\n')
            {
                   //sleep(1);
                   strdeat[strdeansize]=0;
                   strdeansize =0;

                   if(qianmlianghang < 2)
                        {
                            QLISTSONG tmp1 ;
                            tmp1.qlisttime =0;
                            tmp1.qlistsongcsite = (char *)malloc(256);
                            qianmlianghang++;
                            sscanf(strdeat,"[%[^]]",tmp1.qlistsongcsite);
                            //strcpy(tmp1.qlistsongcsite,srcp);

                            songwordzheng.append(tmp1);
                        }
                        int timeextract=0;

                        //取出时间与对应的歌词
                        if(qianmlianghang ==2)
                        {
                            int a,b;
                            char cstr[5][256];
                            char *c = strdeat;
                            while(*c =='[')
                            {
                                  //printf("正在解析的歌词 %s \n",c);
                                  sscanf(c,"[%[^]]",cstr[timeextract]);
                                  //printf("时间读取成功%s \n",cstr[timeextract]);
                                  while(*c != ']')
                                      c++;
                                  c++;
                                  timeextract++;
                            }
                            strcpy(strdeat,c);
                            for(int y = 0 ; y< timeextract ;y++)
                            {
                                sscanf(cstr[y],"%d:%d",&a,&b);
                                QLISTSONG tmp1;
                                tmp1.qlisttime=a*60+b;
                                tmp1.qlistsongcsite = (char *)malloc(256);
                                strcpy(tmp1.qlistsongcsite,strdeat);
                                songwordzheng.append(tmp1);
                            }
                        }

                   }
                   else
                   {
                        strdeat[strdeansize]=temp;
                        strdeansize++;
                   }

               }

               printf("读取歌词成功\n");
               int i = 0;
               if(i-4 < 0)
               {

                   strcpy(songlyric[0],"");
               }
               else
               {
                   strcpy(songlyric[0],songwordzheng[i-4].qlistsongcsite);
               }
               if(i-3 < 0)
               {

                   strcpy(songlyric[1],"");
               }
               else
               {
                   strcpy(songlyric[1],songwordzheng[i-3].qlistsongcsite);
               }
               if(i-2 < 0)
               {

                   strcpy(songlyric[2],"");
               }
               else
               {
                   strcpy(songlyric[2],songwordzheng[i-2].qlistsongcsite);
               }
               if(i-1 < 0)
               {

                   strcpy(songlyric[3],"");
               }
               else
               {
                   strcpy(songlyric[3],songwordzheng[i-1].qlistsongcsite);
               }


                   strcpy(songlyric[4],songwordzheng[i].qlistsongcsite);

               if(i+1 >= songwordzheng.size())
               {
                   strcpy(songlyric[5],"");
               }
               else
               {
                   strcpy(songlyric[5],songwordzheng[i+1].qlistsongcsite);
               }
               if(i+2 >= songwordzheng.size())
               {
                   strcpy(songlyric[6],"");
               }
               else
               {
                   strcpy(songlyric[6],songwordzheng[i+2].qlistsongcsite);
               }
               if(i+3 >= songwordzheng.size())
               {
                   strcpy(songlyric[7],"");
               }
               else
               {
                   strcpy(songlyric[7],songwordzheng[i+3].qlistsongcsite);
               }
               if(i+4 >= songwordzheng.size())
               {
                   strcpy(songlyric[8],"");
               }
               else
               {
                   strcpy(songlyric[8],songwordzheng[i+4].qlistsongcsite);
               }
               for(int i = 0; i< 9; i++)
               {
                   printf("发生的第%d 是 =【%s】\n",i,songlyric[i]);
               }

               emit ansperc(songlyric);
}
