#include<iostream.h>
#include<conio.h>
#include<process.h>
#include<stdio.h>
#include<string.h>
void palindrome(char a[])
{
	int l=strlen(a);
	char *a1,*b1;
	for(a1=a,b1=&a[l-1];a1<=b1;a1++,b1--)
	{
		if(*a1!=*b1)
		{
			cout<<"No,it is not a Palindrome:";
			exit(0);
		}
	}
	cout<<"Yes,it is a Palindrome:";
}
void main()
{
	clrscr();
	char c[30];
	cout<<"Enter the string:";
	gets(c);
	cout<<endl;
	palindrome(c);
	getch();
}