#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{
	clrscr();
	char *name[]={"Anand","Naureen","Banjot","Wahid","Sheena"};
	int i,j;
	cout<<"\nOriginal string\n";
	for(i=0;i<5;i++)
		cout<<name[i]<<endl;
	char *t;
	for(i=0,j=4;i<5/2;i++,j--)
	{
		t=name[i];
		name[i]=name[j];
		name[j]=t;
	}
	cout<<"\nReversed string:\n";
	for(i=0;i<5;i++)
		cout<<name[i]<<endl;
	getch();
}