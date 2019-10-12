#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
	clrscr();
	int i,k,j;
	char str[80],str1[80];
	cout<<"Give one word ";
	cin>>str;
	for(i=0;str[i]!='\0';i++)
	{}
	for(k=0,j=(i-1);j>=0;k++,j--)
		str1[k]=str[j];
	str1[k]='\0';
	if(strcmpi(str,str1)==0)
		cout<<"PALINDROME";
	else
		cout<<"NOT PALINDROME";
	getch();
}