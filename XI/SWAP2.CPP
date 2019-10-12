#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	double a,b;
	cout<<"Give the first number "; cin>>a;
	cout<<"give the second number "; cin>>b;
	a = a - b;
	b = a + b;
	a = b - a;
	cout<<"After swapping the first number is "<<a<<endl;
	cout<<"After swapping the second number is "<<b;
	getch();
}