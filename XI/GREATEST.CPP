#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
double a,b,c,d,e;
cout<<"Give any 5 numbers !! "<<endl;
cout<<"Give the first Number ";
cin>>a;
cout<<"Give the second Number ";
cin>>b;
cout<<"Give the third Number ";
cin>>c;
cout<<"Give the fourth Number ";
cin>>d;
cout<<"Give the fifth Number ";
cin>>e;
cout<<"The greatest number is ";
if (a>b && a>c && a>d && a>e)
cout<<a;
if (b>a && b>c && b>d && b>e)
cout<<b;
if (c>a && c>b && c>d && c>e)
cout<<c;
if (d>a && d>b && d>c && d>e)
cout<<d;
if (e>a && e>b && e>c && e>d)
cout<<e;
getch();
}