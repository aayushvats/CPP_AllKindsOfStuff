#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
char *search(char *,char);
int len;
void main()
{
	char str[20],ch,*f;
	clrscr();
	cout<<"Enter a string:";
	gets(str);
	cout<<"Enter the character to be searched for:";
	cin>>ch;
	len=strlen(str);
	f=search(str,ch);
	if(f!=NULL)
	cout<<"Character is found.";
	else cout<<"Character is not found.";
	getch();
}
char *search(char *x,char d)
{
	int i;
	for(i=0;i<len;i++)
	{
		if(*x==d)
			return x;
		x++;
	}
	return NULL;
}