#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
#include<math.h>
void main()
{
float a,b,c,d,root1,root2;
clrscr();
cout<<"Give the coefficients respectively ";
cin>>a>>b>>c;
if(!a)
{
cout<<"A sholud not be zero";
getch();
exit(1);
}
else
d=(b*b)-(4*a*c);
if(d>0)
{
cout<<"Roots are real and distinct";
root1=(-b + sqrt(d))/(2*a);
root2=(-b - sqrt(d))/(2*a);
cout<<root1<<'\t'<<root2;
}
else if(d == 0)
{
cout<<'\n'<<"Roots are real and equal";
root1=root2=-b/(2*a);
cout<<root1<<'\t'<<root2;
}
else
cout<<'\n'<<"roots are imaginary";
getch();
}