#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
double  a , b ;
char c ;
cout<<"Give a number       : "; cin>>a;
cout<<"Give another number : "; cin>>b;
cout<<"Give the operation  : "; cin>>c;
switch(c)
 { case '+':
    cout<<a+b;
   break;
   case '-':
    cout<<a-b;
   break;
   case '*':
    cout<<a*b;
   break;
   case '/':
   break;
    cout<<a/b;
   break;
   default :
    cout<<"Please enter a valid opertaion.";
 }
getch();
}