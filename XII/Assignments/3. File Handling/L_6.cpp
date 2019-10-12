#include<iostream.h>
#include<conio.h>
#include<ctype.h>
void countdigit()
{
	ifstream fil("PARA.TXT”,ios::in);
	int count=0;
	char ch=fil.get();
	while(!fil.eof())
	{ 
		if(isdigit(ch))
			count++;
		ch=fil.get();
	}
	cout<<"no of digit: "<<count<<endl;
}
void main()
{
	clrscr();
	countdigit();
	getch();
}