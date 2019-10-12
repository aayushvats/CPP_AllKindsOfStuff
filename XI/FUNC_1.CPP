#include<iostream.h>
#include<conio.h>
long int sumdig(long int a)
{
	long int s=0,n=0;
	for(;a>0;a=a/10)
	{
		n=a%10;
		s=s+n;
	}
	return(s);
}
void main()
{
	clrscr();
	long int a,s;
	cout<<"Give a number ";
	cin>>a;
	s=sumdig(a);
	cout<<endl<<"The sum of the digits of "<<a<<" is "<<s;
	getch();
}