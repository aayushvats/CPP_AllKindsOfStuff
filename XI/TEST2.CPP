#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
	clrscr();
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	setcolor(9);
	setbkcolor(7);
	//marque
	for(int i=0; i!=300; ++i)
	{
		cleardevice();
		outtextxy(100+i,400-i,"Hello World");
		delay(20);
	}
	//loading
	for(int j=0;j!=1;++j)
	{
		int p=2,i,j;
		for(i=0,j=0; i!=360; ++i, j+=5)
		{
			cleardevice();
			ellipse(300,200,0+i,315+j,15,15);
			ellipse(300,200,0+i,315+j,16,16);
			ellipse(300,200,0+i,315+j,17,17);
			ellipse(300,200,0+i,315+j,18,18);
			ellipse(300,200,0+i,315+j,19,19);
			ellipse(300,200,0+i,315+j,20,20);
			delay(10);
		}
	}
	getch();
}