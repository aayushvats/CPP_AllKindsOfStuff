#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a;
	cout<<"give a number ";
	cin>>a;
	for(int i=1;i<=a;i++)
	{
	cout<<endl;
	for(int j=1;j<=i;j++)
		cout<<j<<" ";
	}
	getch();
}