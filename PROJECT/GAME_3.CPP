#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
#include<stdio.h>

//running game

class run
{
	int strt,over,score,speed;
    public:
	void man1(int, int);
	void man2(int, int);
	void jump(int, int);
	void bottom();
	void obstacle1(int, int);
	void obstacle2(int, int);
	void maingame();
	void outline();
	void update();
};

void run::man1(int x, int y)
{
	setviewport(x,y,x+160,y+140,0);
	//rectangle(1,1,159,139);
	//setlinestyle(SOLID_LINE, 1, 3);
	circle(100,20,14);    //face
	line(63,18,125,48);  //upper arm
	line(63,18,38,33);    //left arm
	line(125,48,150,33);  //right arm
	line(92,34,75,80);  //body
	line(43,85,115,75);  //upper legs
	line(43,85,10,65);   //left leg
	line(115,75,145,105);   //right leg
}

void run::man2(int x, int y)
{
	setviewport(x,y,x+160,y+140,0);
	//rectangle(1,1,159,139);
	//setlinestyle(SOLID_LINE, 1, 3);
	circle(85,14,14);    //face
	line(80,28,53,55);  //left upper arm
	line(53,55,92,60);   //left below arm
	line(80,28,82,63); //right upper arm
	line(82,63,110,53);   //right lower arm
	line(80,28,65,78);   //body
	line(65,78,68,110);  //left upper leg
	line(68,110,60,140);  //left lower leg
	line(65,78,97,100);  //right upper leg
	line(97,100,55,105);  //right lower leg
}

void run::jump(int x, int y)
{
	setviewport(x,y,x+160,y+107,0);
	//rectangle(1,1,159,105);
	//setlinestyle(SOLID_LINE, 1, 3);
	circle(85,15,14);    //face
	line(80,29,55,76);  //body
	line(55,76,95,81);  //left leg up
	line(95,81,82,106);  //left leg down
	line(55,76,98,73); //right leg up
	line(98,73,90,103);  //right leg down
	line(80,29,50,16);  //left arm upper
	line(50,16,30,29);   //left arm lower
	line(80,29,45,23); //right arm up
	line(45,23,30,35);  //right arm down
}

void run::obstacle1(int x, int y)
{
	setviewport(x,y,x+100,y+30,1);
	//rectangle(1,1,99,49);
	setcolor(4);
	line(1,30,5,1);
	line(5,1,10,30);
	line(10,30,15,1);
	line(15,1,20,30);
	line(20,30,25,1);
	line(25,1,30,30);
	line(30,30,35,1);
	line(35,1,40,30);
	line(40,30,45,1);
	line(45,1,50,30);
	line(50,30,55,1);
	line(55,1,60,30);
	line(60,30,65,1);
	line(65,1,70,30);
	line(70,30,75,1);
	line(75,1,80,30);
	line(80,30,85,1);
	line(85,1,90,30);
	line(90,30,95,1);
	line(95,1,100,30);
}

void run::obstacle2(int x, int y)
{
	setviewport(x,y,x+70,y+100,1);
	setcolor(2);
	//rectangle(1,1,69,99);
	line(25,100,25,60); //body of cactus1
	line(45,100,45,45); //body of cactus2
	line(25,60,4,50); //left1
	line(25,45,20,42); //left2
	line(4,50,4,20);	//left3
	line(20,42,20,20);	//left4
	arc(12,20,0,180,8);  //lefttop
	line(25,45,25,10); //body cont.
	arc(35,10,0,180,10); //body top.
	line(45,45,68,30);	//right1
	line(45,33,48,30); //right2
	line(45,10,45,33);  //body cont.
	line(68,30,68,18);  //right3
	line(48,30,48,18);   //right4
	arc(58,18,0,180,10);  //right top
}

void run::bottom()
{
	strt=0;
	over=0;
	speed=150;
	setviewport(12,326,627,467,1);
	settextstyle(10,0,4);
	outtextxy(10,0,"DON'T");
	outtextxy(10,55,"SMASH");
	setcolor(14);

	settextstyle(3,0,3);
	outtextxy(190,0,"CONTROLS : ");
	outtextxy(350,0,"MOTIVE : ");

	setcolor(15);
	settextstyle(6,0,1);
	outtextxy(350,30,"Save yourself");
	outtextxy(350,47,"from obstacles");
	outtextxy(185,40,"Jump -> Spacebar");
}

void run::outline()
{
	rectangle(1,1,639,479);  //big_box
	rectangle(10,324,629,469); //score_box
	rectangle(10,10,629,314); //game_box
	line(10,294,629,294);//land
	setfillstyle(11,14);   //coloring
	floodfill(12,306,15);  //land
	setfillstyle(8,9);
	floodfill(2,2,15);
}

void run::update()
{
	setviewport(475,326,627,467,0);
	if(!strt)
	{
		settextstyle(5,0,2);
		score=0;
		outtextxy(10,20,"Press any ");
		outtextxy(10,50,"key to start ");
		getch();
		strt=1;
	}
	if(strt)
	{
		clearviewport();
		settextstyle(3,0,3);
		outtextxy(10,0,"SCORE :");
		settextstyle(3,0,8);
		char S[10];
		itoa(score,S,10);
		outtextxy(10,10,S);
	}
	if(over)
	{
		settextstyle(3,0,4);
		outtextxy(10,80,"GAME");
		outtextxy(10,105,"OVER");
	}
}

void run::maingame()
{
	outline();
	bottom();
	update();
	int i,r,f=0,j=0,j1=0,up=1,dwn=0,rn=1,m=1,k=10,p=0;
	randomize();
	man1(12,152);
	for(;;)
	{
		setcolor(15);
		++p;
		if(rn==1)
		{
			if(m==1)
			{
				man1(12,152);
					m=2;
			}
			else if(m==2)
			{
				man2(12,152);
					m=1;
			}
		}

		if(j==1)
		{
			if(up==1)
			{
				jump(12,152-j1);
				j1+=15;
				if(152-j1<=22)
				{
					up=0;
					dwn=1;
					j1=0;
				}
			}
			else if(dwn==1)
			{
				jump(12,22+j1);
				j1+=15;
				if(j1>=130)
				{
					dwn=0;
					up=1;
					j=0;
					j1=0;
					rn=1;
				}
			}
		}

		if(f==0)
		{
			r=random(2)+1;
			f=1;
		}

		if(f==1)
		{
			if(r==1)
			{
				obstacle1(530-k,264);
				k+=10;
				if(k==520)
				{
					f=0;
					r=0;
					k=10;
					++score;
					if(speed!=5)
						speed-=5;
					update();
				}
			}
			else if(r==2)
			{
				obstacle2(530-k,194);
				k+=10;
				if(k==520)
				{
					f=0;
					r=0;
					k=10;
					++score;
					if(speed!=5)
						speed-=5;
					update();
				}
			}
		}

		if(rn==1 && (530-k)<=150)
		{
			over=1;
			update();
			getch();
			exit(0);
		}

		if(kbhit())
		{
			char m=getch();
			if(m==32)   //spacebar encounter
			{
				j=1;
				rn=0;
			}
			else if(m==27)  //esc
				exit(0);
		}

		delay(speed);
		setviewport(12,12,628,294,1);
		clearviewport();
	}
}

void main()
{
	int gd=DETECT, gm;
	initgraph(&gd, &gm, "C:/TURBOC3/BGi");
	cleardevice();
	run B;
	B.maingame();
	getch();
}