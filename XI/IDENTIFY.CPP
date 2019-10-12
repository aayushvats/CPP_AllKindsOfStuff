#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
char a;
cout<<"Input any character "; cin>>a;
if((a>='A' && a<='Z') || (a>='a' && a<='z'))
cout<<a<<" is a CHARACTER";
else if(a>='1' && a<='9')
cout<<a<<" is a DIGIT";
else
cout<<a<<" is a STRING";
getch();
}