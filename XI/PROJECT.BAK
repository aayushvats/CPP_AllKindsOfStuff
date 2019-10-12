#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
#include<stdio.h>
#include<string.h>
#include<dos.h>
int x=320,y=240,u=0,p=0,ic=0,g=0;
char m;
struct user
{
	char name[80];
	char address[80];
	char phone[80];
	char username[80];
	char password[80];
} user, temp;
void logo(int color)
{
	char X[20],Y[20];
	rectangle(1,1,638,175);
	setfillstyle(1,color);
	floodfill(100,100,8);
	line(60,100,140,100);
	line(100,100,100,20);
	line(60,100,100,20);
	line(100,20,140,100);
	circle(100,75,25);
	settextstyle(3,0,2);
	outtextxy(60,110,"CENTRAL");
	outtextxy(78,130,"PERK");
	sprintf(X,"x = %d",x);
	sprintf(Y,"y = %d",y);
	outtextxy(400,50,X);
	outtextxy(400,70,Y);
}
void input(int x, int y, char m[], int n)
{
	for(int i=0;i<80;i++)
	{
		m[i]=getch();
		if(m[i]==13)
			break;
		else
		{
			if(n==0)
				outtextxy(x,y,&m[i]);
			else if(n==1)
				outtextxy(x,y,"*");
			else
				exit(1);
			x+=10;
		}
	}
}
void output(int x, int y, char m[], int n)
{
	if(n==0)
	{
		for(int i=0;i<1;i++)
		{
			if(m[i]==13)
				break;
			else
				outtextxy(x,y,&m[i]);
			x+=10;
		}
	 }
	 else if(n==1)
	 {
		for(int i=0;i<80;i++)
		{
			if(m[i]==13)
				break;
			else
				outtextxy(x,y,"*");
			x+=10;
		}
	 }
}
void crsr()
{
	settextstyle(0,0,1);
	outtextxy(x,y,"");
	m=getch();
	if(m==100)
	{
		x+=5;
	}
	else if(m==97)
	{
		x-=5;
	}
	else if(m==115)
	{
		y+=5;
	}
	else if(m==119)
	{
		y-=5;
	}
	else if(m==101)
		exit(1);
}
void main()
{
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	cleardevice();
	outtextxy(100,100,"The Best Program in This World doesn't exis...");
	delay(1000);
	for(;;)
	{
		menu:
		cleardevice();
		setcolor(8);
		logo(9);
		setfillstyle(1,12);
		floodfill(2,178,8);
		setfillstyle(1,14);
		bar3d(130,250,270,300,15,1);
		settextstyle(1,0,3);
		outtextxy(140,260,"Register");
		bar3d(390,250,495,300,15,1);
		outtextxy(400,260,"Login");
		bar3d(250,380,430,430,15,1);
		outtextxy(260,380,"Cont. as guest");
		setbkcolor(7);
		setcolor(5);
		crsr();
		if(m==13)
		{
			if(x>130 && x<250 && y>250 && y<300)
			{
				cleardevice();
				setcolor(8);
				logo(9);
				setfillstyle(1,14);
				floodfill(2,178,8);
				setfillstyle(1,12);
				outtextxy(170,225,"Name :");
				outtextxy(170,245,"Address :");
				outtextxy(170,265,"P.No. :");
				outtextxy(170,285,"Username :");
				outtextxy(170,310,"Password :");
				bar3d(280,380,350,420,10,1);
				outtextxy(300,380,"NEXT");
				setcolor(2);
				input(300,225,user.name,0);
				input(300,245,user.address,0);
				input(300,265,user.phone,0);
				input(300,285,user.username,0);
				input(300,315,user.password,1);
				for(;;)
				{
					cleardevice();
					setcolor(8);
					logo(9);
					setfillstyle(1,14);
					floodfill(2,178,8);
					setfillstyle(1,12);
					outtextxy(170,225,"Name :");
					outtextxy(170,245,"Address :");
					outtextxy(170,265,"P.No. :");
					outtextxy(170,285,"Username :");
					outtextxy(170,310,"Password :");
					bar3d(280,380,350,415,10,1);
					outtextxy(300,380,"NEXT");
					settextstyle(3,0,2);
					setcolor(2);
					output(300,225,user.name,0);
					output(300,245,user.address,0);
					output(300,265,user.phone,0);
					output(300,285,user.username,0);
					output(300,315,user.password,1);
					settextstyle(0,0,1);
					setcolor(5);
					crsr();
					if(m==13)
					{
						if(x>280 && x<350 && y>380 && y<420 )
							goto login;
					}
				}
			}
			else if(x>390 && x<495 && y>250 && y<300)
			{
				login:
				cleardevice();
				setcolor(8);
				logo(9);
				setfillstyle(1,3);
				floodfill(2,178,8);
				setfillstyle(1,12);
				outtextxy(170,245,"Username :");
				outtextxy(170,285,"Password :");
				bar3d(280,380,390,420,10,1);
				outtextxy(300,380,"SUBMIT");
				setcolor(2);
				input(300,245,temp.username,0);
				input(300,295,temp.password,1);
				for(;;)
				{
					cleardevice();
					setcolor(8);
					logo(9);
					setfillstyle(1,14);
					floodfill(2,178,8);
					setfillstyle(1,12);
					outtextxy(170,245,"Username :");
					outtextxy(170,285,"Password :");
					bar3d(280,380,390,420,10,1);
					outtextxy(300,380,"SUBMIT");
					setcolor(2);
					output(300,245,temp.username,0);
					output(300,295,temp.password,1);
					settextstyle(0,0,1);
					setcolor(5);
					crsr();
					if(m==13)
					{
						if(x>280 && x<390 && y>380 && y<420)
						{

								goto welcome;
						}
					}
				}
			}
			else if(x>250 && x<430 && y>380 && y<430)
			{
				g++;
				goto guest;
			}
		}
	}
	welcome:
	if(strcmp(user.username,temp.username)!=0)
		u++;
	else if(strcmp(user.password,temp.password)!=0)
		p++;
	else if(strcmp(user.username,temp.username)==0 && strcmp(user.password,temp.password)==0)
		ic++;
	for(;;)
	{
		guest:
		cleardevice();
		setcolor(8);
		logo(9);
		setfillstyle(1,6);
		floodfill(2,178,8);

		settextstyle(0,0,1);
		setcolor(5);
		crsr();
		if(m==13)
		{
		}

	}
}