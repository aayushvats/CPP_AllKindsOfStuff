#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void removeSpaces(char* s)
{
	char* original = s;
	char* change = s;
	while(*original)
	{
		if(*original == ' ')
			original++;
		else
			*change++ = *original++;
	}
	*change = '\0';
}
void main()
{
	clrscr();
	char input[50];
	gets(input);
	removeSpaces(input);
	cout<<input;
	getch();
}