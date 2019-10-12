#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	double a,b,c;
	cout<<"Give the first Number "; cin>>a;
	cout<<"Give the second Number "; cin>>b;
	c = a;
	a = b;
	b = c;
	cout<<"After swapping the first number is "<<a<<endl;
	cout<<"After swapping the second number is "<<b;
	getch();
}