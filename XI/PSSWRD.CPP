#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdlib.h>
void main()
{
	clrscr();
	char p[20]="password";
	char q[20];
	int a;
	for(int i=1;i<=3;i++)
	{
		cout<<"Enter password ";
		for(int j=0;;j++)
		{
			q[j]=getch();
			if(q[j]==13)
				break;
			else
				cout<<"*";
		}
		q[j]='\0';
		a=strcmp(p,q);
		if(a==0)
		{
			cout<<endl<<"Access Granted";
			getch();
			exit(1);
		}
		else
		{
			cout<<endl<<"Access Denied";
			getch();
		}
	clrscr();
	}
	cout<<"Your 3 chances have been extinguished";
	getch();
}