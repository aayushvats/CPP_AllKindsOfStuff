#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int a;
cout<<"Give any Year ";
cin>>a;
if(a%4 == 0)
 {
 if(a%100 == 0)
  {
  if(a%400 == 0)
   cout<<a<<" is a leap year";
  else
   cout<<a<<" is not a leap year";
   }
 else
  cout<<a<<" is a leap year";
   }
else
 cout<<a<<" is not a leap year";
getch();
}
