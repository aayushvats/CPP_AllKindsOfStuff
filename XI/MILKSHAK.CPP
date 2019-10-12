#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void main()
{
	clrscr();
	int gd=DETECT, gm;
	initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
	cleardevice();
	rectangle(0,0,430,250);
	settextstyle(1,0,4);
	outtextxy(130,5,"MILK SHAKE");
	int a=90, b=75;
	line(165,95,165,240);	//wrongline
	line(265,95,265,240);	//rightline
	line(125,95,265,95); 	//swarg
	line(165,240,265,240);	//paataal
	line(165,95,145,75);	//swargseupperWRONG
	line(145,75,125,95);
	line(125,95,125,220);
	line(125,220,165,240);
	line(265,95,245,75);
	line(245,75,145,75);
	line(125,150,165,170);
	line(125,190,165,210);
	rectangle(165,170,265,210);
	rectangle(245,75,145,60);


	getch();
}