#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<dos.h>
double Fibonacci(double);
void main()
{
	double n;
	clrscr();
	cout<<"enter number :";
	cin>>n;
	cout<<"Fibonacci series\n";
	for (double c = 0 ; c < n ; c++ )
	{
		cout<<Fibonacci(c)<<endl;
	}
	getch();
}
double Fibonacci(double n)
{
	if ( n == 0 )
		return 0;
	else if ( n == 1 )
		return 1;
	else
		return ( Fibonacci(n-1) + Fibonacci(n-2) );
}