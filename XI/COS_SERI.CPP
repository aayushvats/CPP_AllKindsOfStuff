#include<iostream.h>
#include<conio.h>
#include<math.h>
void main()
{
clrscr();
float x,n,c,f=1,r=0,R;
cout<<"Input a number ";
cin>>x;
cout<<endl<<"Input number of terms ";
cin>>n;
for(float i=1;i<=n;i++)
{
	 for(float j=2;j<=i;j++)
		f=f*(j);
	 c=pow(-1,i)*(pow(x,(i+1))/f);
	 r=r+c;
}
R=1+r;
cout<<endl<<"The result of cos"<<x<<" is "<<R;
getch();
}