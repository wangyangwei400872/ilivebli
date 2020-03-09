#include "myacceptance.h"
#include <stdio.h>
#include "widget.h"
myacceptance::myacceptance(Widget *arg)
{
    widwin = arg ;
    str =(char *)malloc(1024);
    keywords<<"ANS_PERCENT_POSITION"    //播放进度(百分比) 0
              <<"ANS_TIME_POSITION"        //当前进度秒       1
              <<"ANS_FILENAME"             //查询歌名          2
              <<"ANS_LENGTH"               //歌曲总时间         3
              <<"cannot sync MAD frame"    //播放结束         4
                ;
}

void myacceptance::run()
{

       sleep(2);
       for(int y = 0 ; y <3;y++)
       {
           //memset(str,0,1024);

           read(widwin->fifo_less[0],str,1024);
       }
       int i;
       while(1)
       {
           memset(str,0,1024);
           read(widwin->fifo_less[0],str,1024);
           for(i= 0 ;i<5;i++)
           {
                tmp= strstr(str,keywords[i]);
               // printf("接受命令 %s\n",keywords[i]);
               if(tmp !=NULL)
               {
                   break;
               }
           }
           switch(i)
           {
               case 0:
               {
                   //printf("switch 0  str =[%s]\n\n",keywords[i]);
                   int swsize;
                   sscanf(str,"%*[^=]=%d",&swsize);
                   //播放进度，百分比
                   //printf("播放进度，百分比 [%d] \n\n",swsize);
                   emit ansperc(swsize);
                   break;
               }
               case 1:
               {
               //当前播放时间，秒
                   //printf("switch 1  str =[%s]\n\n",keywords[i]);
                   int swsize;
                   sscanf(str,"%*[^=]=%d",&swsize);
                   //printf("当前播放时间，秒 [%d] \n\n",swsize);
                    emit timepos(swsize);

                   break;
               }
               case 2:
               {
                   char * swstr=(char*)malloc(256);
                   int swsize =0;
                   int pie=0;
                   for(int i = 0;str[i]!= 0;i++)
                   {

                       if(pie==2)
                       {
                          swstr[swsize]=0;
                          break;
                       }
                       if(pie==1)
                       {
                          swstr[swsize] =  str[i];
                          swsize++;
                       }



                       if(str[i] == 39)
                       {
                           pie++;
                       }
                   }
                   //printf("获取到的当前歌曲名 ： %s \n",swstr);
                   //返回歌曲名
                   emit filename(swstr);
                   free(swstr);
                   break;
               }
               case 3:
               {
                   int swsize;
                   //printf("播放总时长（秒） [%s] \n\n",str);
                   sscanf(str,"%*[^=]=%d",&swsize);
                   //播放总时长（秒）
                   //printf("播放总时长（秒） [%d] \n\n",swsize);
                   emit timelength(swsize);

                   break;
               }
               case 4:
               {
                   //结束播放时
                  emit songend();
                   break;
               }
           default:
           {
               break;
           }
           }
       }


}
