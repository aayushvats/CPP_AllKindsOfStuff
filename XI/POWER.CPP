#include<iostream.h>
#include<conio.h>
void main()
{
	int a,b,i,temp=1;
	clrscr();
	cout<<"Enter number for operation";
	cin>>a>>b;
	for(i=1;i<=b;i++)
	{
		temp=temp*a;
	}
	cout<<endl<<"Result are:: "<<temp;
	getch();
}