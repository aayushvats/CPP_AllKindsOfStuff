#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a[5][5],s1=0,s2=0,m,i,j;
	cout<<"Enter size of the square matrix(max 5) : ";
	cin>>m;
	cout<<endl<<"Enter the Matrix row wise "<<endl;
	for(i=0;i<m;++i)
	{
		for(j=0;j<m;++j)
			cin>>a[i][j];
	}
	for(i=0;i<m;++i)
	{
		for(j=0;j<m;++j)
		{
			if(i==j)
				s1+=a[i][j];
			if(i+j==(m-1))
				s2+=a[i][j];
		}
	}
	cout<<endl<<"Sum of 1st diagonal is : "<<s1;
	cout<<endl<<"Sum of 2nd diagonal is : "<<s2;
	getch();
}