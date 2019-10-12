#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
int string(char str[], char a)
{
	int position,c=strlen(str);
	for(int i=0;i<c;i++)
	{
		if(str[i]==a)
			position=i+1;
	}
	return(position);
}
void main()
{
	clrscr();
	char a[80],b;
	cout<<"Input a string ";
	gets(a);
	cout<<endl<<"Input a character ";
	cin>>b;
	int d=string(a,b);
	cout<<endl<<endl<<"This is at the position "<<d;
	getch();
}