#include<fstream.h>
#include<conio.h>
#include<string.h>
void COPYABC()
{
	ifstream fin("TELEPHON.DAT",ios::in|ios::binary);
	ofstream fout("TELEBACK.DAT",ios::out|ios::binary);
	Directory ph;
	while(!fin.eof())
	{
		fin.read((char*)&ph,sizeof(ph));
		if(ph.checkcode("123")==0)
		fout.write((char*)&ph,sizeof(ph));
	}
	fin.close();
	fout.close();
}
void main()
{
	clrscr();
	COPYABC();
	getch();
}