#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>

class credits
{
    public:
	void outline();
	void credtits(int);
	void showcredits();
};

void credits::outline()
{
	rectangle(1,1,639,479);
	rectangle(10,10,630,470);
	setfillstyle(8,11);
	floodfill(2,2,15);
	settextstyle(8,0,7);
	setcolor(3);
	outtextxy(15,0,"CREDITS");
}

void credits::credtits(int y)
{
	outtextxy(10,y,"In the accomplishment of this project succesfully, many people");
	outtextxy(0,y+15,"have best owned upon me their blessings and their heartpledged");
	outtextxy(0,y+30,"support, this time I am utilising to thank all the people who");
	outtextxy(0,y+45,"have been concerned with this project.");
	outtextxy(10,y+70,"Primarily I would thank god for being able to complete this ");
	outtextxy(0,y+85,"project with success. Then I would like to thank my principal ");
	outtextxy(0,y+100,"Mrs.Veena Goel and computer teachers Ms.Pooja Malhotra and ");
	outtextxy(0,y+115,"Mr.Pankaj Ahuja, whose valuable guidance has been the ones that");
	outtextxy(0,y+130,"helped me patch this project and make it full proof success. Her");
	outtextxy(0,y+145,"suggestions and her instructions have served as the major ");
	outtextxy(0,y+160,"contributor towards the completion of this project.");
	outtextxy(10,y+185,"Then I would like to thank my parents and friends who have");
	outtextxy(0,y+200,"helped me with their valuable suggestions and guidance has been very");
	outtextxy(0,y+215,"helpful in various phases of the completion of the project.");
	outtextxy(10,y+240,"Last but not the least I would like to thank my classmates who");
	outtextxy(0,y+255,"helped me a lot.");
}

void credits::showcredits()
{
	outline();
	settextstyle(0,0,1);
	setcolor(15);
	setviewport(42,95,625,465,1);
	for(int i=425; i>=0; i-=5)
	{
		clearviewport();
		credtits(i);
		delay(205);
	}
	//delay(22*1000);
	for(i=0; i>=(-265); i-=5)
	{
		clearviewport();
		credtits(i);
		delay(205);
	}

}

void main()
{
	int gd=DETECT, gm;
	initgraph(&gd, &gm, "C:/TURBOC3/BGi");
	cleardevice();
	credits C;
	C.showcredits();
	getch();
}