#include<fstream.h>
#include<conio.h>
#include<string.h>
void wordcount()
{
	ifstream fil("STORY.TXT");
	char word[70];
	long int count=0;
	while(!fil.eof())
	{
		cin>>word;
		if((strcmp("the",word)==0) && (strcmp("The",word)==0));
			count++;
	}
	fil.close();
	cout<<count;
}
void main()
{
	clrscr();
	wordcount();
	getch();
}