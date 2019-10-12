#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
	char a[80];
	clrscr();
	cout << "Enter a string: ";
	gets(a);
	int w = 0;
	for(int i = 0; a[i] != '\0'; i++)
	{
		if (a[i] == ' ')
		{
			w++;
		}
	}
	cout << "The number of words = " << w+1 << endl;
	getch();
}