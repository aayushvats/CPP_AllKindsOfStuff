#include<iostream.h>
#include<stdio.h>
#include<conio.h>
char *get_substr(char *sub, char *str);
int posn;
void main()
{
	clrscr();
	char *substr,*str;
	cout<<"Enter the string :";
	gets(str);
	cout<<"Enter the substring :";
	gets(substr);
	substr = get_substr(substr,str);
	if (substr!='\0')
		cout << "\nsubstring found ''" <<substr<<"'' at: "<<posn+1;
	else
		cout<< "\nsubstring not found";
	getch();
}
char *get_substr(char *sub, char *str)
{
	char *p, *p2, *start;
	for(posn=0; str[posn]!='\0'; posn++)
	{
		p = &str[posn];
		start = p;
		p2 = sub;
		while(*p2!='\0' && *p2==*p) // check for substring
		{
			p++;
			p2++;
		}
/* If at end of p2 (i.e., substring), then a match has been found. */
		if(!*p2)
			return start; // return pointer to beginning of substring
	}
	return 0;
}