#include<fstream.h>
#include<conio.h>
#include<

//class on long answer question 7

void COPYAREA()
{
	ifstream fin("CONSUMER.DAT",ios::in|ios::binary);
	ofstream fout("BACKUP.DAT",ios::out|ios::binary);
	Consumer c;
	while(!fin.eof())
	{ 
		fin.read((char*)&c,sizeof(c));
		if(c.checkcode("SOUTH")==0)
			fout.write((char*)&c,sizeof(c));
	}
	fin.close(); 
	fout.close(); 
}
void main()
{
	clrscr();
	COPYAREA();
	getch();
}