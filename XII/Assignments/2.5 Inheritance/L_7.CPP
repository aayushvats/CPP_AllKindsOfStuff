#include<iostream.h>
#include<conio.h>
class student
{
	char name[20];
	int age;
    public:
	void readData();
	{
		cout<<"Name of Student :";
		cin>>name;
		cout<<"Age of Student  :";
		cin>>age;
	}
	void display()
	{
		cout<<"\nName of Student :"<<name<<"\nAge of Student  :"<<age;
	}
};
class Book
{
	student Enrollno;
	char bookname[20],author[20];
	int no_of_pages;
    public:
	void ReadB()
	{
		Enrollno.readData();
		cout<<"Name of Book   :";
		cin>>bookname;
		cout<<"Name of Author :";
		cin>>author;
		cout<<"Pages of Book  :";
		cin>>no_of_pages;
	}
	void displayB()
	{
		Enrollno.display();
		cout<<"\nName of Book   :";
		cout<<bookname;
		cout<<"\nName of Author :";
		cout<<author;
		cout<<"\nPages of Book  :";
		cout<<no_of_pages;
	}
};
class PrimaryStudet:public student
{
	char Activity[20];
	int no_of_hrs;
    public:
	void ReadPrimary();
	void DisplayPrimary();
};
class SecondaryStudet:public student
{
};
class EQUIPMENT
{
	char name[20];
	int role;
    public:
	void ReadEquip();
	void Display();
};
void main()
{
	poora karle bhosdike !!
}
