#include<stdio.h>
#include<conio.h>
#include<fstream.h>
void main()
{
	clrscr();
	char c,fname[10];
	ofstream filout;
	filout.open("C://TURBOC3//BIN//PROJECT//CNTRLS.txt");
	cout<<"Write in file (Enter $ to stop):\n";
	while((c=getchar())!='$')
	{
		filout<<c;
	}
	filout.close();
	ifstream filin;
	filin.open("C://TURBOC3//BIN//PROJECT//CNTRLS.txt");
	while(filin)
	{
		filin.get(c);
		cout<<c;
	}
	getch();
}