#include<fstream.h>
#include<stdio.h>
#include<conio.h>
void main()
{
	clrscr();
	char s[80],ch;
	int count=0;
	ifstream file("abc.txt");
	while(!file.eof())
	{
		file.getline(s,80);
		for(int i=0;i<80;i++)
		{
			if(s[i]=='$')
			break;
			count++;
		}
	};
	cout<<count;
	file.close();
	getch();
}