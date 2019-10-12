#include<iostream.h>
#include<stdio.h>
#include<conio.h>
class Student
{
		int roll_no;
		char name[20];
		char Class[8];
		int marks[5];
		float percentage;
		float Calculate()
		{
			percentage = (marks[0]+marks[1]+marks[2]+marks[3]+marks[4])/5;
			return percentage;
		}
	public:
		void Readmarks();
		void Displaymarks();
};
void Student::Readmarks()
{
	cout<<endl<<"Enter roll number: ";
	cin>>roll_no;
	cout<<endl<<"Enter name:";
	gets(name);
	cout<<"Enter marks in ";
	for(int i=0;i<5;i++)
	{
		cout<<endl<<"Subject "<<i+1<<":";
		cin>>marks[i];
	}
	Calculate();
}
void Student::Displaymarks()
{
	cout<<"......Student Marksheet........";
	cout<<endl<<"Roll number:"<<roll_no<<endl;
	cout<<" Name:"<<name<<endl;
	cout<<" Marks in subject-1:"<< marks[0]<<endl;
	cout<<" Marks in subject-2:"<< marks[1]<<endl;
	cout<<" Marks in subject-3:"<<marks[2]<<endl;
	cout<<" Marks in subject-4:"<<marks[3]<<endl;
	cout<<" Marks in subject-5:"<< marks[4]<<endl;
	cout<<" Percentage:"<<percentage<<endl;
}
void main()
{
	clrscr();
	Student obj;
	obj.Readmarks();
	obj.Displaymarks();
	getch();
}