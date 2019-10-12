#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<process.h>
#include"graphio.h"
#include"cursor.h"
void main()
{
	clrscr();
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	setbkcolor(CYAN);
	setcolor(DARKGRAY);
	rectangle(0,0,640,480);
	ellipse(0,200,270,90,230,20);
	arc(0,200,270,0,230);
	arc(228,330,192,107,45);
	arc(228,330,203,97,65);
	setfillstyle(SOLID_FILL,BROWN);
	floodfill(200,250,DARKGRAY);
	floodfill(278,330,DARKGRAY);
	setcolor(RED);
	settextstyle(COMPLEX_FONT,0,9);
	outtextxy(10,-20,"Login");
	setviewport(300,150,630,470,1);
	for(;;)
	{
		clearviewport();
		settextstyle(SIMPLEX_FONT,0,3);
		outtextxy(5,50,"Username :");
		outtextxy(5,80,"Password :");
		crsr();
	}
	closegraph();
}