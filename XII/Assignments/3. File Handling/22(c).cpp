#include<fstream.h>
#include<conio.h>
#include<string.h>
void copyfile()
{ 
	ifstream fin; 
	ofstream fout; 
	fin.open("SPORTS.DAT",ios::in|ios::binary); 
	fout.open("ATHELETIC.DAT",ios::out|ios::binary); 
	Sports s1; 
	while(!fin.eof()) 
	{ 
		fin.read((char*)&s1,sizeof(s1)); 
		if(strcmp(s1.Event,"Athletics")==0) 
			fout.write((char*)&s1,sizeof(s1)); 
	} 
	fin.close(); 
	fout.close(); 
}
void main()
{
	clrscr();
	copyfile();
	getch();
}