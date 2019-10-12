#include<iostream.h>
#include<conio.h>
#include<graphics.h>
void main()
{
	clrscr();
	int gd=DETECT, gm;
	initgraph(&gd, &gm, "C:\\TURBOC3\\BGI");
	cleardevice();
	rectangle(15,0,615,350);
	settextstyle(COMPLEX_FONT,0,5);
	outtextxy(25,5,"PERSONAL DETAILS");
	circle(170,190,105);
	settextstyle(SIMPLEX_FONT,0,3);
	outtextxy(300,110,"NAME :");	//300,110
	outtextxy(300,160,"ADDRESS :");	//300,160
	outtextxy(300,210,"PHONE NO :");	//300,210
	rectangle(470,350,520,400);
	line(480,400,480,415);
	line(510,400,510,415);
	line(495,405,480,415);
	line(495,405,510,415);

	int x=385,y=360;
	ellipse(105+x,15+y,275,90,15,7);
	line(105+x,8+y,103+x,8+y);
	line(103+x,8+y,107+x,11+y);
	line(103+x,8+y,107+x,5+y);
	getch();
}