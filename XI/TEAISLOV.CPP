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
	outtextxy(180,15,"TEA");
	int a=90, b=75;
	//cappuccino
	arc(160+a,175-b,170,225,150);
	arc(160+a,175-b,170,229,140);
	arc(60+a,175-b,315,10,150);
	arc(60+a,175-b,311,10,140);
	line(20+a,283-b,210+a,283-b);
	arc(218+a,205-b,238,96,45);
	arc(218+a,205-b,238,96,40);
	arc(20+a,288-b,90,270,5);
	arc(207+a,288-b,270,90,5);
	ellipse(29+a,318-b,33,105,40,25);
	ellipse(197+a,318-b,70,147,30,25);
	line(63+a,305-b,170+a,305-b);
	arc(17+a,148-b,358,178,5);
	arc(203+a,148-b,0,178,5);


	line(20+a,148-b,199+a,148-b);

	getch();
}