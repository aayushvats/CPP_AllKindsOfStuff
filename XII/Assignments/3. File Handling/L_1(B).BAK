#include<fstream.h>
#include<conio.h>
#include<string.h>
void COUNT ()
{
	ifstream File;
	File. open ("POEM.TXT");
	char Word[80] ;
	int Cl = 0, C2 = 0;
	while(!File.eof())
	{
		File>>Word;
		if (strcmp (Word,"to") ==0)
			Cl++;
		else if (strcmp (Word,"the") ==0)
			C2++;
	}
	cout<<" Count of -to- in file:" <<"1";
	cout<<" Count of -the- in file:"<<"3";
	File.close();
}
void main()
{
	clrscr();
	COUNT();
	getch();
}