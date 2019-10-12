#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>

void output(int x, int y, char m[], int n)
{
	if(n==0)	       //output normally
	{
		for(int i=0;i<1;i++)
		{
			if(m[i]=='\0')
				break;
			else
				outtextxy(x,y,&m[i]);
			x+=10;
		}
	 }
	 else if(n==1)	       //output like in password
	 {
		for(int i=0;i<80;i++)
		{
			if(m[i]=='\0')
				break;
			else
				outtextxy(x,y,"*");
			x+=10;
		}
	 }
}

class menu
{
    public:
	void hover(int, int, char *);
	void outline(int , int , int , int);
	void show(int, int, char *);
	void cover(int, int, int, int);
	void mainmenu();
};

void menu::hover(int x1, int y1, char a[])
{
	x1+=22; y1+=10;
	settextstyle(1,0,0);
	outline(x1-10-100,y1,x1+110+150,y1+40);
	setviewport(x1-10-90,y1,x1+110+100,y1+40,0);
	for(int i=15; i>0; i-=3)
	{
		clearviewport();
		floodfill(1,1,15);
		output(i,0,a,0);
		delay(10);
	}
	setviewport(0,0,639,479,0);
}

void menu::outline(int x1, int y1, int x2, int y2)
{
	settextstyle(1,0,0);
	x1-=20; y1-=30; x2+=0; y2-=20;
	outtextxy(x1+8,y1,"É");
	outtextxy(x1+8,y2,"È");
	outtextxy(x2,y1,"»");
	outtextxy(x2,y2,"¼");
	for(int i=x1+17; i<x2-7; ++i)
	{
		outtextxy(i,y1,"Í");
		outtextxy(i,y2,"Í");
	}
	for(int j=y1+17; j<y2-17; ++j)
	{
		outtextxy(x1,j,"º");
		outtextxy(x2,j,"º");
	}
}

void menu::show(int x1, int y1, char a[])
{
	settextstyle(1,0,0);
	setviewport(x1,y1,x1+110,y1+40,0);
	output(10,0,a,0);
	setviewport(0,0,639,479,0);
}

void menu::cover(int x1, int y1, int x2, int y2)
{
	setviewport(x1,y1,x2,y2,0);
	clearviewport();
	floodfill(0,0,1);
	setviewport(0,0,639,479,0);
}

void menu::mainmenu()
{
	int x=1;
	start:
	settextstyle(3,0,7);
	setfillstyle(9,4);
	output(130,0,"GAME ARENA",0);
	cover(200,120,400,150);
	show(220,100+20,"PLAY GAMES");
	cover(200,180,400,210);
	show(220,160+20,"OPTiONS");
	cover(200,240,400,270);
	show(220,220+20,"OPEN iD");
	floodfill(0,0,1);
	if(x==1)
		hover(220,100,"PLAY GAMES");
	else if(x==2)
		hover(220,160,"OPTiONS");
	else if(x==3)
		hover(220,220,"OPEN iD");
	char a=getch();
	if(a=='w')
	{
		if(x>1)
			x-=1;
		else if(x==1)
			x=3;
	}
	else if(a=='s')
	{
		if(x<3)
			x+=1;
		else if(x==3)
			x=1;
	}
	else if(a=='e')
		exit(0);
	goto start;
}

void main()
{
	int gd=DETECT, gm;
	initgraph(&gd, &gm, "C:/TURBOC3/BGi");
	cleardevice();
	menu M;
	M.mainmenu();
	M.outline(20,30,120,340);
	getch();
}