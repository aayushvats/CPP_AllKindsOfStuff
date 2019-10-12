#include<iostream.h>
#include<conio.h>
#include<stdio.h>
int main(void)
{
	clrscr();
	char c;
	c=getch();
	while(c!=27)
	{
		printf("   %d\n", c);
		c=getch();
	}
	return 0;
}