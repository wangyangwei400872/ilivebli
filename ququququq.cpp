#include "ququququq.h"
#include "widget.h"
#include <QQueue>
#include <stdio.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <string.h>
#include <stdlib.h>
#include <QThread>
ququququq::ququququq(Widget * sada)
{
    wins = sada;
    fifo_cmd1 = open("./fifo_file",O_RDWR);
}

void ququququq::run()
{
    while(1)
    {
        if(wins->qqueueueue.empty() != NULL)
        {
        usleep(100+1000);
        char * str =wins->qqueueueue.dequeue();
        //strcpy(  str ,wins->qqueueueue.dequeue());
        printf("需要发生命令 %s \n",str);
        //write(fifo_cmd1,str,strlen(str));

        }
    }
}
