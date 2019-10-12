#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>

class Person
{
    public:
	char name[20];
	long phone;
	void set()
	{
		strcpy(name,"NULL");
		phone=7878963522;
	}
	void get()
	{
		cout<<"Enter name: ";
		gets(name);
		cout<<"Enter phone: ";
		cin>>phone;
	}
	void display()
	{
		cout<<"Name: "<<name<<endl;
		cout<<"Phone: "<<phone<<endl;
	}
	Person()
	{
		strcpy(name,"Rahul");
		phone=9965869922;
	}
	Person(char na[20],long ph)
	{
		strcpy(name,na);
		phone=ph;
	}
	void getName()
	{
		cout<<"Enter name:";
		gets(name);
	}
};

class Spouse:public Person
{
	char spouseName[20];
    public:
	void getName()
	{
		cout<<"Enter name:";
		gets(spouseName);
	}
	void display()
	{
		cout<<"\nName: "<<name<<endl;
		cout<<"Phone: "<<phone<<endl;
		cout<<"Spouse Name: "<<spouseName<<endl;
	}
	Spouse()
	{
		strcpy(spouseName,"NULL");
	}
	Spouse(char sn[20])
	{
		strcpy(spouseName,sn);
	}
};

void main()
{
	clrscr();
	Spouse S;
	S.getName();
	S.display();
	getch();
}