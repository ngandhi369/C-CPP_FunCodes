#include<iostream>
#include<stdio.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
int main()
{

	int gd=0,gm,flag=0,x=20,y=300,uplimit=25,downlimit=435,rightlimit=620,leftlimit=20;
	initgraph(&gd,&gm,"C:\\Tc\\BGI");
	while(1)
	{
        while(x<=rightlimit)
        {
            setcolor(RED);
            line(0,10,640,10);
            line(0,450,640,450);
            line(640,10,640,450);
            if(flag==0)
            {
                y+=2;
                x+=1;
                if(y>=downlimit)
                    flag=1;//so now it will goes up
            }
            if(flag==1)
            {
                y-=2;
                x+=1;
                if(y<=uplimit)
                    flag=0;//so now it will goes down
            }
            setcolor(15);
            fillellipse(x,y,20,20);
            setfillstyle(1,10);
            delay(1);
            setcolor(BLACK);
            //setfillstyle(1,10);
            fillellipse(x,y,20,20);
            //fillellipse(x,y,15,15);
            cleardevice();
        }

        while(x>=leftlimit)
        {
            setcolor(RED);
            line(0,10,640,10);
            line(0,450,640,450);
            line(640,10,640,450);
            if(flag==0)
            {
                y+=2;
                x-=1;
                if(y>=downlimit)
                    flag=1;//so now it will goes up
            }
            if(flag==1)
            {
                y-=2;
                x-=1;
                if(y<=uplimit)
                    flag=0;//so now it will goes down
            }
            setcolor(15);
            fillellipse(x,y,20,20);
            delay(1);
            setcolor(BLACK);
            setfillstyle(1,10);
            fillellipse(x,y,15,15);
            cleardevice();
        }
    }
 	getch();
}
