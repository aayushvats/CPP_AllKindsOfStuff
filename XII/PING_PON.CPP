#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<stdlib.h>
void ping(int x, int y)
{
	setviewport(x-1,y-1,x+1,y+1,1);
	rectangle(1,1,5,100);
}
void main()
{
	int gd=DETECT, gm, x=25, y=200;
	initgraph(&gd, &gm, "C:/TURBOC3/BGi");
	cleardevice();
	ping(x,y);
	char m;
	for(;;)
	{
		if(kbhit())
		{
			m=getch();
			if(m=='w')
				y-=5;
			else if(m=='s')
				y+=5;
			else if(m=='e')
				exit(0);
			clearviewport();
			ping(x,y);
		}
	}
}