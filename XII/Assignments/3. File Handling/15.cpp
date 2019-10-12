#include <fstream.h>
#include <iostream.h>
#include <ctype.h>
#include <conio.h>
void main()
{
	char ch;
	int count=0;
	ifstream in_stream;
	ofstream out_stream;
	clrscr();
	in_stream.open("A.txt");
	out_stream.open("B.txt");
	while (!in_stream.eof())
	{
		ch = (char)in_stream.get( );
		if(isspace(ch))
			count++;
		if(count >= 2)
		{
			ch=' ';
			count = 0;
		}
		else
		{
			out_stream <<ch;
		}
	}
}