#include<iostream.h>
#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	float a,c,b;
	cout<<"Input the number of units consumed ";cin>>a;
	if(a<=100)
		b=a*0.40;
	else if(a<=300)
		b=a*0.50;
	else
		b=a*0.60;
	float d=0;
	if(b>250)
		c=b*0.15;
	d = 500 - c + b;
	cout<<"Your bill amount is "<<d;
	getch();
}