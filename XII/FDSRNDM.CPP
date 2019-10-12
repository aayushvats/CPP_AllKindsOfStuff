#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	clrscr();
	randomize();
	int s=random(10)+1,e;

	if(s==1||s==2||s==4||s==5||s==7||s==8||s==9)
		e=random(24)+1;
	else if(s==3||s==6)
		e=random(25)+1;
	else if(s==10)
		e=random(17)+1;

	gotoxy(20,10);
	cout<<"Today... You shall watch ";
	gotoxy(20,11);
	cout<<"Season "<<s<<" Episode "<<e;
	getch();
}