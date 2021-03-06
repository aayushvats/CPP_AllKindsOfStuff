#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>

#define SPEED 10

class human
{
    protected:
	int posx,posy;
	char v;
    public:
	human();
	void man(int, int);
	void man_left(int&, int&);
	void man_right(int&, int&);
	void man_up(int&, int&);
	void man_down(int&, int&);
};

void human::man(int x, int y)
{
	//face
	circle(x,y,10);
	//body
	line(x,y+10,x,y+10+50);
	//one of the hands
	line(x,y+10,x-7,y+10+30);
	line(x-7,y+10+30,x-7,y+10+30+20);
	//the other one
	line(x,y+10,x+7,y+10+30);
	line(x+7,y+10+30,x+7,y+10+30+20);
	//one of the legs
	line(x,y+10+50,x-4,y+10+50+20);
	line(x-4,y+10+50+20,x-4,y+10+50+20+30);
	//the other leg
	line(x,y+10+50,x+4,y+10+50+20);
	line(x+4,y+10+50+20,x+4,y+10+50+20+30);
}

void human::man_right(int &x, int &y)
{
	x+=SPEED;

	//BODY #1
	//face
	circle(x,y,10);
	//body
	line(x,y+10,x,y+10+50);
	//one of the hands
	line(x,y+10,x-10,y+10+20);
	line(x-10,y+10+20,x-5,y+10+30+15);
	//the other one
	line(x,y+10,x+10,y+10+25);
	line(x+10,y+10+25,x+25,y+10+40);
	//one of the legs
	line(x,y+10+50,x-2,y+10+50+20);
	line(x-2,y+10+50+20,x-12,y+10+50+20+28);
	//the other leg
	line(x,y+10+50,x+6,y+10+50+15);
	line(x+6,y+10+50+15,x+3,y+10+50+20+30);

	delay(80);
	clearviewport();
	x+=SPEED;

	//BODY #2
	//face
	circle(x,y,10);
	//body
	line(x,y+10,x,y+10+50);
	//one of the hands
	line(x,y+10,x-5,y+10+22);
	line(x-5,y+10+18,x+5,y+10+30+13);
	//the other one
	line(x,y+10,x-2,y+10+25);
	line(x-2,y+10+25,x-5,y+10+40);
	//one of the legs
	line(x,y+10+50,x+5,y+10+50+20);
	line(x+5,y+10+50+20,x,y+10+50+20+28);
	//the other leg
	line(x,y+10+50,x-3,y+10+50+15);
	line(x-3,y+10+50+15,x-6,y+10+50+20+30);

	delay(80);

}

void human::man_left(int &x, int &y)
{
	x-=SPEED;

	//BODY #1
	//face
	circle(x,y,10);
	//body
	line(x,y+10,x,y+10+50);
	//one of the hands
	line(x,y+10,x+10,y+10+20);
	line(x+10,y+10+20,x+5,y+10+30+15);
	//the other one
	line(x,y+10,x-10,y+10+25);
	line(x-10,y+10+25,x-25,y+10+40);
	//one of the legs
	line(x,y+10+50,x+2,y+10+50+20);
	line(x+2,y+10+50+20,x+12,y+10+50+20+28);
	//the other leg
	line(x,y+10+50,x-6,y+10+50+15);
	line(x-6,y+10+50+15,x-3,y+10+50+20+30);

	delay(80);
	clearviewport();
	x-=SPEED;

	//BODY #2
	//face
	circle(x,y,10);
	//body
	line(x,y+10,x,y+10+50);
	//one of the hands
	line(x,y+10,x+5,y+10+22);
	line(x+5,y+10+18,x-5,y+10+30+13);
	//the other one
	line(x,y+10,x+2,y+10+25);
	line(x+2,y+10+25,x+5,y+10+40);
	//one of the legs
	line(x,y+10+50,x-5,y+10+50+20);
	line(x-5,y+10+50+20,x,y+10+50+20+28);
	//the other leg
	line(x,y+10+50,x+3,y+10+50+15);
	line(x+3,y+10+50+15,x+6,y+10+50+20+30);

	delay(80);
}

void human::man_up(int &x, int &y)
{
	y-=SPEED;

	//BODY #1
	//face
	circle(x,y,10);
	//body
	line(x,y+10,x,y+10+50);
	//one of the hands
	line(x,y+10,x-7,y+10+30);
	line(x-7,y+10+30,x-7,y+10+30+20);
	//the other one
	line(x,y+10,x+10,y+10+30);
	line(x+10,y+10+30,x+7,y+10+30+20);
	//one of the legs
	line(x,y+10+50,x-6,y+10+50+20);
	line(x-6,y+10+50+20,x-4,y+10+50+20+25);
	//the other leg
	line(x,y+10+50,x+4,y+10+50+20);
	line(x+4,y+10+50+20,x+4,y+10+50+20+30);

	delay(80);
	clearviewport();
	y-=SPEED;

	//BODY #2
	//face
	circle(x,y,10);
	//body
	line(x,y+10,x,y+10+50);
	//one of the hands
	line(x,y+10,x-10,y+10+30);
	line(x-10,y+10+30,x-7,y+10+30+20);
	//the other one
	line(x,y+10,x+7,y+10+30);
	line(x+7,y+10+30,x+7,y+10+30+20);
	//one of the legs
	line(x,y+10+50,x-4,y+10+50+20);
	line(x-4,y+10+50+20,x-4,y+10+50+20+30);
	//the other leg
	line(x,y+10+50,x+6,y+10+50+20);
	line(x+6,y+10+50+20,x+4,y+10+50+20+25);

	delay(80);
}

void human::man_down(int &x, int &y)
{
	y+=SPEED;

	//BODY #1
	//face
	circle(x,y,10);
	//body
	line(x,y+10,x,y+10+50);
	//one of the hands
	line(x,y+10,x-7,y+10+30);
	line(x-7,y+10+30,x-7,y+10+30+20);
	//the other one
	line(x,y+10,x+10,y+10+30);
	line(x+10,y+10+30,x+7,y+10+30+20);
	//one of the legs
	line(x,y+10+50,x-6,y+10+50+22);
	line(x-6,y+10+50+22,x-4,y+10+50+20+35);
	//the other leg
	line(x,y+10+50,x+4,y+10+50+20);
	line(x+4,y+10+50+20,x+4,y+10+50+20+30);

	delay(80);
	clearviewport();
	y+=SPEED;

	//BODY #2
	//face
	circle(x,y,10);
	//body
	line(x,y+10,x,y+10+50);
	//one of the hands
	line(x,y+10,x-10,y+10+30);
	line(x-10,y+10+30,x-7,y+10+30+20);
	//the other one
	line(x,y+10,x+7,y+10+30);
	line(x+7,y+10+30,x+7,y+10+30+20);
	//one of the legs
	line(x,y+10+50,x-4,y+10+50+20);
	line(x-4,y+10+50+20,x-4,y+10+50+20+30);
	//the other leg
	line(x,y+10+50,x+6,y+10+50+22);
	line(x+6,y+10+50+22,x+4,y+10+50+20+35);

	delay(80);
}

human::human()
{
	posx=30;
	posy=25;
}

class menu:private human
{
	int page;
    public:
	void outline();
	void options(int);
	void man_working(int, int, int, int);
	void update();
	void menu01();
};

void menu::outline()
{
	rectangle(1,1,639,479);
	rectangle(10,10,630,470);
	setfillstyle(8,6);
	floodfill(2,2,15);

	// the box
	setcolor(15);
	setfillstyle(1,15);
	rectangle(122,22,522,192);
	floodfill(127,27,15);
	//box cont.
	setcolor(6);
	setfillstyle(1,6);
	rectangle(120,20,520,190);
	floodfill(125,25,6);

	//side boltz
	setcolor(0);
	setfillstyle(1,0);
	fillellipse(141,41,5,5); //left top
	fillellipse(501,41,5,5); //right top
	fillellipse(141,171,5,5); //left bottom
	fillellipse(501,171,5,5); //right bottom
	//bolz cont.
	setcolor(12);
	setfillstyle(1,12);
	fillellipse(140,40,5,5); //left top
	fillellipse(500,40,5,5); //right top
	fillellipse(140,170,5,5); //left bottom
	fillellipse(500,170,5,5); //right bottom

	//heading
	setcolor(0);
	settextstyle(0,0,4);
	outtextxy(162,42,"SUPER");
	settextstyle(0,0,7);
	outtextxy(162,82,"ARCADE");
	//heading cont.
	setcolor(12);
	settextstyle(0,0,4);
	outtextxy(160,40,"SUPER");
	settextstyle(0,0,7);
	outtextxy(160,80,"ARCADE");

	//copyright
	setcolor(15);
	settextstyle(2,0,4);
	outtextxy(270,164,"C");
	circle(272,170,5);
	settextstyle(2,0,6);
	outtextxy(281,160,"2018-19 AAYUSH CO.");

	//land(for the man to walk)
	//(or else he'll fall down)
	line(10,435,630,435);
	setfillstyle(1,2);
	floodfill(14,439,15);
}

void menu::man_working(int x1, int y1, int x2, int y2)
{
	//setlinestyle(SOLID_LINE, 1, 3);
	setviewport(x1,y1,x2,y2,1);
	//rectangle(1,1,x2-x1-1,y2-y1-1);
	clearviewport();
	man(posx,posy);
	for(;;)
	{
		int x ;
		x = getch();
		clearviewport();
		if(x == 'd')
			man_right(posx,posy);
		else if(x == 'a')
			man_left(posx,posy);
		else if(x == 'w')
			man_up(posx,posy);
		else if(x == 's')
			man_down(posx,posy);
				else if(x == 27) //esc
			exit(1);
		else if(x == 13)
		{
			if(page == 1)
			{
				if(posx>=90 && posx<=130)
				{
					page=2;
					posx=30;
					options(0);
				}
				else if(posx>=190 && posx<=250)
				{
					page=3;
					posx=30;
					options(0);
				}
				else if(posx>=310 && posx<=410)
				{
				}
				else if(posx == 490)
				{
					exit(1);
				}
			}
			else if(page == 2)
			{
				if(posx>=70 && posx<=150)
				{
				}
				else if(posx>=190 && posx<=270)
				{
				}
				else if(posx>=330 && posx<=430)
				{
				}
				else if(posx == 490)
				{
					page=1;
					posx=30;
					options(0);
				}
			}
			else if(page == 3)
			{
				if(posx>=70 && posx<=130)
				{
				}
				else if(posx>=190 && posx<=270)
				{
				}
				else if(posx>=330 && posx<=410)
				{
				}
				else if(posx == 490)
				{
					page=1;
					posx=30;
					options(0);
				}
			}
		}
		clearviewport();
		for(int i=0; i<4; ++i)  //to waste unwanted inputs
			if(kbhit())
				v=getch();
		if(!kbhit())
			man(posx,posy);
		if(page == 1)
		{
			if(posx>=90 && posx<=130)
				options(1);
			else if(posx>=190 && posx<=250)
				options(2);
			else if(posx>=310 && posx<=410)
				options(3);
			else if(posx == 490)
				options(4);
			else
				options(0);
		}
		else if(page == 2)
		{
			if(posx>=70 && posx<=150)
				options(1);
			else if(posx>=190 && posx<=270)
				options(2);
			else if(posx>=330 && posx<=430)
				options(3);
			else if(posx == 490)
				options(4);
			else
				options(0);
		}
		else if(page == 3)
		{
			if(posx>=70 && posx<=130)
				options(1);
			else if(posx>=190 && posx<=270)
				options(2);
			else if(posx>=330 && posx<=410)
				options(3);
			else if(posx == 490)
				options(4);
			else
				options(0);
		}
	}
}

void menu::options(int a=0)
{
	setviewport(30,200,610,300,1);
	clearviewport();
	//rectangle(1,1,580,100);
	settextstyle(6,0,2);
	setcolor(8);
	if(page==1)
	{
		if(a!=1)
			outtextxy(85,50,"START");
		if(a!=2)
			outtextxy(180,50,"OPTIONS");
		if(a!=3)
			outtextxy(300,50,"HIGHSCORES");
		if(a!=4)
			outtextxy(470,50,"EXIT");
		setcolor(14);
		settextstyle(6,0,3);
		if(a==1)
			outtextxy(85,20,"START");
		else if(a==2)
			outtextxy(180,20,"OPTIONS");
		else if(a==3)
			outtextxy(300,20,"HIGHSCORES");
		else if(a==4)
			outtextxy(470,20,"EXIT");
	}
	else if(page==2)
	{
		if(a!=1)
			outtextxy(65,50,"CRAZY TAXI");
		if(a!=2)
			outtextxy(190,50,"PING PONG");
		if(a!=3)
			outtextxy(310,50,"DON'T SMASH");
		if(a!=4)
			outtextxy(470,50,"BACK");
		setcolor(14);
		settextstyle(6,0,3);
		if(a==1)
			outtextxy(65,20,"CRAZY TAXI");
		else if(a==2)
			outtextxy(190,20,"PING PONG");
		else if(a==3)
			outtextxy(310,20,"DON'T SMASH");
		else if(a==4)
			outtextxy(470,20,"BACK");
	}
	else if(page==3)
	{
		if(a!=1)
			outtextxy(75,50,"CREDITS");
		if(a!=2)
			outtextxy(180,50,"CERTIFICATE");
		if(a!=3)
			outtextxy(310,50,"CONTROLS");
		if(a!=4)
			outtextxy(470,50,"BACK");
		setcolor(14);
		settextstyle(6,0,3);
		if(a==1)
			outtextxy(75,20,"CREDITS");
		else if(a==2)
			outtextxy(180,20,"CERTIFICATE");
		else if(a==3)
			outtextxy(310,20,"CONTROLS");
		else if(a==4)
			outtextxy(470,20,"BACK");
	}
	setcolor(15);
	man_working(30,300,610,435);
}

void menu::menu01()
{
	setviewport(1,1,639,479,1);
	outline();

	page=1;
	options(0);
}

void main()
{
	int gd=DETECT, gm;
	initgraph(&gd, &gm, "C:/TURBOC3/BGi");
	cleardevice();
	menu M;
	M.menu01();
	getch();
}