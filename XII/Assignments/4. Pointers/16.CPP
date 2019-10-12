#include<iostream.h>
#include<conio.h>
#include<stdio.h>
int string_length(char*);
void reverse(char*);
void main()
{
	clrscr();
	char string[100];
	cout<<"Enter a string\n";
	gets(string);
	reverse(string);
	cout<<"Reverse of entered string is \n"<< string;
	getch();
}
void reverse(char *string)
{
	int length, c;
	char *begin, *end, temp;
	length = string_length(string);
	begin = string;
	end = string;
	for ( c = 0 ; c < ( length - 1 ) ; c++ )
		end++;
	for ( c = 0 ; c < length/2 ; c++ )
	{
		temp = *end;
		*end = *begin;
		*begin = temp;
		begin++;
		end--;
	}
}
int string_length(char *pointer)
{
	int c = 0;
	while( *(pointer+c) != '\0' )
		c++;
	return c;
}