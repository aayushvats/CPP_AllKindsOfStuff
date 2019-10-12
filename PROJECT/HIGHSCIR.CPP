#include<iostream.h>
#include<conio.h>
#include<graphics.h>

class highscores
{
    public:
	void outline();
	void get_high();
};

void highscores::outline()
{
	rectangle(1,1,639,479);
	rectangle(10,10,630,470);
	setfillstyle(8,11);
	floodfill(2,2,15);
	settextstyle(8,0,7);
	setcolor(3);
	outtextxy(15,0,"HIGHSCORES");
}

void highscores::get_high()
{
	outline();
}

void main()
{
	int gd=DETECT, gm;
	initgraph(&gd, &gm, "C:/TURBOC3/BGi");
	cleardevice();
	highscores H;
	H.get_high();
	getch();
}