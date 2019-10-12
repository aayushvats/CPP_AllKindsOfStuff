#include<iostream.h>
#include<string.h>
#include<conio.h>
class Publication
{
	char title[20];
	float price;
    public:
	void getName()
	{
		cout<<"Enter Title: ";
		cin>>title;
		cout<<"Enter Price: $";
		cin>>price;
	}
	void putName()
	{
		cout<<"\nTitle: "<<title;
		cout<<", Price: $"<<price;
	}
	virtual void getData() = 0;
};
class Book : public Publication
{
	int pages;
    public:
	void getData()
	{
		Publication::getName();
		cout<<"Enter Pages: ";
		cin>>pages;
	}
	void putData()
	{
		Publication::putName();
		cout<<", Pages: "<<pages<<endl;
	}
};
class Tape : public Publication
{
	float minutes;
    public:
	void getData()
	{
		Publication::getName();
		cout<<"Enter Minutes: ";
		cin>>minutes;
	}
	void putData()
	{
		Publication::putName();
		cout<<", Minutes: "<<minutes<<endl;
	}
};
void main()
{
	clrscr();
	Publication* ptrPub[100];
	int n = 0;
	char choice;
	do
	{
		cout<<"Book or Tape? (b/t): ";
		cin>>choice;
		if(choice == 'b')
		{
			ptrPub[n] = new Book;
			ptrPub[n]->getData();
		}
		else
		{
			ptrPub[n] = new Tape;
			ptrPub[n]->getData();
		}
		n++;
		cout<<"Enter another? (y/n): ";
		cin>>choice;
	}while(choice == 'y');
	for(int i=0; i<n; i++)
		ptrPub[i]->putName();
	getch();
}