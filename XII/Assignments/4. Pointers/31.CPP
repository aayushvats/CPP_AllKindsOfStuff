#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void stcat(char *str1, char *str2);
void main()
{
	char *str1, *str2;
	clrscr();
	cout<<"input the first string: ";
	gets(str1);
	cout<<"input the second string: ";
	gets(str2);
	stcat(str1,str2);
	cout<<"\nthe concatinated string is: ";
	puts(str1);
	getch();
}
void stcat (char *str1, char *str2)
{
	int i = 0,len = 0;
	while(*(str1+len)!='\0')  //calculating the length
		len++;
	while(*(str2+i)!='\0')    //concatination after length
	{
		*(str1+len) = *(str2+i);
		i++;
		len++;
	}
	*(str1+len) = '\0';
}