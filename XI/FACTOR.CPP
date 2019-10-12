#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int num, i, fact=1;
	cout<<"Enter a number : ";
	cin>>num;
	for(i=num; i>0; i--)
	{
		fact=fact*i;
	}
	cout<<"Factorial of "<<num<<" is "<<fact;
	getch();
}