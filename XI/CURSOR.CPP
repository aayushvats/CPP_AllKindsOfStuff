#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	clrscr();
	char n=2,m;
	int a=1,b=1,j;
	for(int i=1;i<=2;)
	{
		gotoxy(a,b);
		cout<<n;
		m=getch();
		if(m==100)
		{
			a++;
			cout<<"/r";
		}
		else if(m==97)
		{
			a--;
			cout<<"/r";
		}
		else if(m==115)
		{
			b++;
			cout<<"/r";
		}
		else if(m==119)
		{
			b--;
			cout<<"/r";
		}
		else if(m==101)
		{
			exit(1);
		}
		clrscr();
	}
	getch();
}