#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
	clrscr();
	int gd=DETECT,gm;
	initgraph(&gd,&gm,"C:/TURBOC3/BGI");
	for(int i=0,j=0; i!=100; i++,j+=2)
	{
		setviewport(322+j,242+i,318-j,238-i,1);
		cleardevice();
		rectangle(320+j,242+i,318-j,238-i);
		delay(10);
	}
	getch();
}