#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
	clrscr();
	int a,b;
	cout<<"give a number ";
	cin>>a;
	b=sqrt(a);
	for(int i=2;i<=b/2;i++)
	{
		if(b%i==0)
		{
			cout<<"it's square root is not a prime number";
			break;
		}
		else
			cout<<"it's square root is a prime number";
	}
	getch();
}