#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a[3][3],c[3]={0,0,0};
	cout<<"enter matrix"<<endl;
	for(int i=0;i<3;i++)
	{
		for(int j=0;j<3;j++)
		{
			cin>>a[i][j];
			c[i]+=a[i][j];
		}
	}
	for(i=0;i<3;i++)
		cout<<"sum of row "<<i+1<<" is "<<c[i]<<endl;
	getch();
}