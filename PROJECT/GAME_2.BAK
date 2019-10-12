#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdio.h>
#include<stdlib.h>

//tennis game

class ping_pong
{
	int mode,strt,over,score1,score2,speed;
    public:
	void outline();
	void multiplayer(int, int);
	void singleplayer(int, int);
	void paddle(int, int, int ,int );
	void ask_mode();
	void top();
	void update(int);
	void main_game();
	void ball(int, int, int , int);
};

void ping_pong::outline()
{
	rectangle(1,1,639,479);  //big_box
	rectangle(10,10,629,155); //score_box
	rectangle(10,165,629,469); //game_box
	setfillstyle(8,10);
	floodfill(2,2,15);
}

void ping_pong::ask_mode()
{
	char b;
	setviewport(20,175,529,459,1);
	for(int i=0; i!=170; i+=2)
	{
		clearviewport();
		rectangle(310-i,73,310+i,213);
		delay(10);
	}
	//140 480
	mode=1;
	settextstyle(6,0,4);
	outtextxy(180,73,"Choose Your Mode");
	multiplayer(200,140);
	singleplayer(360,135);
	for(;;)
	{
		setcolor(2);
		if(mode==1)
		{
			multiplayer(200,140);
			setcolor(15);
			singleplayer(360,135);
		}
		if(mode==2)
		{
			singleplayer(360,135);
			setcolor(15);
			multiplayer(200,140);
		}
		b=getch();
		if(b=='d')
			mode=2;
		else if(b=='a')
			mode=1;
		else if(b==13)
			break;
	}
	for(i=170; i!=0; i-=2)
	{
		clearviewport();
		rectangle(310+i,73,310-i,213);
		delay(10);
		clearviewport();
	}
}

void ping_pong::paddle(int x1, int y1, int a, int b)
{
	setviewport(a+x1,b+y1,a+x1+160,b+y1+15,1);
	rectangle(0,0,160,15);
}

void ping_pong::ball(int x1, int y1, int a, int b)
{
	setviewport(a+x1,b+y1,a+x1+10,b+y1+10,1);
	circle(5,5,5);
}

void ping_pong::multiplayer(int x, int y)
{
	circle(x+18,y+10,10);
	ellipse(x+18,y+48,0,180,18,28);
	circle(x+43,y+8,8);
	ellipse(x+43,y+39,0,140,15,22);
}

void ping_pong::singleplayer(int x, int y)
{
	circle(x+18,y+10,10);
	ellipse(x+18,y+48,0,180,18,28);
}

void ping_pong::top()
{
	strt=0;
	over=0;
	setviewport(12,12,627,153,1);
	settextstyle(10,0,4);
	outtextxy(10,0,"PING");
	outtextxy(10,50,"PONG");
	setcolor(14);
	if(mode==1)
	{
		multiplayer(120,10);
		setcolor(15);
		settextstyle(6,0,1);
		setcolor(3);
		outtextxy(190,25,"PLAYER 1 :");
		outtextxy(190,42,"Right -> 'w'");
		outtextxy(190,59,"Left  -> 'a'");
		setcolor(4);
		outtextxy(190,79,"PLAYER 2 :");
		outtextxy(190,96,"Right -> 'l'");
		outtextxy(190,113,"Left  -> 'j'");
		setcolor(15);
	}
	else if(mode==2)
	{
		singleplayer(120,10);
		setcolor(15);
		settextstyle(6,0,1);
		outtextxy(190,40,"Right -> 'd'");
		outtextxy(190,60,"Left  -> 'a'");
	}
	settextstyle(3,0,3);
	outtextxy(190,0,"CONTROLS : ");
	outtextxy(350,0,"MOTIVE : ");
	settextstyle(6,0,1);
	outtextxy(350,25,"Don't let the ");
	outtextxy(350,42,"ball drop ");
}

void ping_pong::update(int i)
{
	setviewport(470,12,627,153,0);
	clearviewport();
	if(!strt)
	{
		settextstyle(5,0,2);
		score1=0;
		score2=0;
		speed=10;
		outtextxy(10,20,"Press any ");
		outtextxy(10,50,"key to start ");
		getch();
		strt=1;
	}
	if(strt)
	{
		if(mode==2)
		{
			clearviewport();
			settextstyle(3,0,3);
			outtextxy(10,0,"SCORE :");
			settextstyle(6,0,3);
			char S[10];
			sprintf(S,"%d",score1);
			outtextxy(10,20,S);
			if(score1%4==0)
			{
				if(speed!=1)
					--speed;
			}
		}
		else if(mode==1)
		{
			clearviewport();
			settextstyle(3,0,3);
			outtextxy(10,0,"SCORE :");
			settextstyle(6,0,1);
			outtextxy(10,25,"PLAYER 1 :");
			outtextxy(10,60,"PLAYER 2 :");
			char S1[10],S2[10];
			sprintf(S1,"%d",score1);
			sprintf(S2,"%d",score2);
			outtextxy(10,40,S1);
			outtextxy(10,75,S2);
			if(score1%4==0)
			{
				if(speed!=1)
					--speed;
			}
		}
	}
	if(over)
	{
		if(mode==2)
		{
			settextstyle(3,0,3);
			outtextxy(5,95,"GAME OVER");
			getch();
		}
		if(mode==1)
		{
			settextstyle(3,0,3);
			if(i==1)
				outtextxy(5,95,"PLAYER 1 WON");
			else if(i==2)
				outtextxy(5,95,"PLAYER 2 WON");
		}
	}
}

void ping_pong::main_game()
{
	outline();
	ask_mode();
	top();
	update(0);
	setviewport(11,166,628,468,1);
	int x=253,y=253,b=151,u=0,ur=0,dr=0,d=0,dl=0,ul=0;
	char t;
	randomize();
	if(mode==2)
	{
		int c=random(307)+200,q=random(15)+1,r=random(2)+1;
		if(r==1)
			d=1;
		else if(r==2)
			u=1;
		for(;;)
		{
			setviewport(11,166,628,468,1);
			setcolor(3);
			paddle(x,285,11,166); //paddle
			setcolor(q);
			ball(c,b,11,166);
			delay(speed);
			clearviewport();
			setviewport(11,166,628,468,1);
			//moving the ball.
			if(u==1)
			{
				--b;
			}
			else if(ur==1)
			{
				--b;
				++c;
			}
			else if(dr==1)
			{
				++b;
				++c;
			}
			else if(d==1)
			{
				++b;
			}
			else if(dl==1)
			{
				++b;
				--c;
			}
			else if(ul==1)
			{
				--b;
				--c;
			}
			//changing direction
			if(b==0)
			{
				if(ur==1)
				{
					ur=0;
					dr=1;
				}
				else if(ul==1)
				{
					ul=0;
					dl=1;
				}
				else if(u==1)
				{
					u=0;
					d=1;
				}
			}
			else if(c==0)
			{
				if(ul==1)
				{
					ul=0;
					ur=1;
				}
				else if(dl==1)
				{
					dl=0;
					dr=1;
				}
			}
			else if(c==607)
			{
				if(ur==1)
				{
					ur=0;
					ul=1;
				}
				else if(dr==1)
				{
					dr=0;
					dl=1;
				}
			}
			else if(b==275)            //touching the paddle
			{
				if(c>=x && c<=x+160)
				{
					++score1;
					update(0);
					if(t=='a')
					{
						if(d==1)
						{
							d=0;
							ul=1;
						}
						else if(dr==1)
						{
							dr=0;
							ul=1;
						}
						else if(dl==1)
						{
							dl=0;
							ul=1;
						}
					}
					else
					{
						if(d==1)
						{
							d=0;
							ur=1;
						}
						else if(dr==1)
						{
							dr=0;
							ur=1;
						}
						else if(dl==1)
						{
							dl=0;
							ur=1;
						}
					}
				}
				else
				{
					over=1;
					update(0);
					getch();
					break;
				}
			}
			if(kbhit())
			{
				t=getch();
				setviewport(11,166,628,468,1);
				clearviewport();
				if(t=='a')
				{
					if(x!=3)
						x-=10;
				}
				else if(t=='d')
				{
					if(x!=453)
						x+=10;
				}
				else if(t==27)
					break;
			}
		}
	}
	else if(mode==1)
	{
		int c=random(307)+200,q=random(15)+1,r=random(2)+1;
		if(r==1)
			d=1;
		else if(r==2)
			u=1;
		for(;;)
		{
			setviewport(11,166,628,468,1);
			setcolor(3);
			paddle(x,285,11,166); //paddle   #1
			setcolor(4);
			paddle(y,3,11,166);	//paddle #2
			setcolor(q);
			ball(c,b,11,166);
			delay(speed);
			clearviewport();
			setviewport(11,166,628,468,1);
			//moving the ball.
			if(u==1)
			{
				--b;
			}
			else if(ur==1)
			{
				--b;
				++c;
			}
			else if(dr==1)
			{
				++b;
				++c;
			}
			else if(d==1)
			{
				++b;
			}
			else if(dl==1)
			{
				++b;
				--c;
			}
			else if(ul==1)
			{
				--b;
				--c;
			}
			//changing direction
			if(b==20)
			{
				if(c>=y && c<=y+160)
				{
					++score2;
					update(0);
					if(t=='j')
					{
						if(u==1)
						{
							u=0;
							dr=1;
						}
						else if(ur==1)
						{
							ur=0;
							dl=1;
						}
						else if(ul==1)
						{
							ul=0;
							dl=1;
						}
					}
					else
					{
						if(u==1)
						{
							u=0;
							dr=1;
						}
						else if(ur==1)
						{
							ur=0;
							dr=1;
						}
						else if(ul==1)
						{
							ul=0;
							dr=1;
						}
					}
				}
				else
				{
					over=1;
					update(1);
					getch();
					break;
				}
			}
			else if(c==0)
			{
				if(ul==1)
				{
					ul=0;
					ur=1;
				}
				else if(dl==1)
				{
					dl=0;
					dr=1;
				}
			}
			else if(c==607)
			{
				if(ur==1)
				{
					ur=0;
					ul=1;
				}
				else if(dr==1)
				{
					dr=0;
					dl=1;
				}
			}
			else if(b==275)            //touching the paddle
			{
				if(c>=x && c<=x+160)
				{
					++score1;
					update(0);
					if(t=='a')
					{
						if(d==1)
						{
							d=0;
							ul=1;
						}
						else if(dr==1)
						{
							dr=0;
							ul=1;
						}
						else if(dl==1)
						{
							dl=0;
							ul=1;
						}
					}
					else
					{
						if(d==1)
						{
							d=0;
							ur=1;
						}
						else if(dr==1)
						{
							dr=0;
							ur=1;
						}
						else if(dl==1)
						{
							dl=0;
							ur=1;
						}
					}
				}
				else
				{
					over=1;
					update(2);
					getch();
					break;
				}
			}
			if(kbhit())
			{
				t=getch();
				setviewport(11,166,628,468,1);
				clearviewport();
				if(t=='a')
				{
					if(x!=3)
						x-=10;
				}
				else if(t=='d')
				{
					if(x!=453)
						x+=10;
				}
				else if(t=='j')
				{
					if(y!=3)
						y-=10;
				}
				else if(t=='l')
				{
					if(y!=453)
						y+=10;
				}
				else if(t==27)
					break;
			}
		}

	}
}
void main()
{
	int gd=DETECT, gm;
	initgraph(&gd, &gm, "C:/TURBOC3/BGi");
	cleardevice();
	ping_pong P;
	P.main_game();
}