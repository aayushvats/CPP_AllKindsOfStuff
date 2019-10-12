#include<iostream.h>
#include<stdio.h>
#include<conio.h>
class Teacher
{
		char name[20];
		char subject[10];
		float Basic,DA,HRA,salary;
		float Calculate()
		{
			salary=Basic+DA+HRA;
			return salary;
		}
	public:
		void Readdata();
		void Displaydata();
};
void Teacher::Readdata()
{
	cout<<endl<<"Enter name:";
	gets(name);
	cout<<"Enter subject:";
	gets(subject);
	cout<<"Enter Basic :";
	cin>>Basic;
	cout<<"Enter DA :";
	cin>>DA;
	cout<<"Enter HRA :";
	cin>>HRA;
	Calculate();
}
void Teacher::Displaydata()
{
	cout<<"......Teacher Details........"<<endl;
	cout<<"Name:"<<name<<endl;
	cout<<" Subject:"<<subject<<endl;
	cout<<" Basic:"<<Basic<<endl;
	cout<<" DA:"<<DA<<endl;
	cout<<" HRA:"<<HRA<<endl;
	cout<<" Salary:"<<salary<<endl;
}
int main()
{
	clrscr();
	Teacher obj;
	obj.Readdata();
	obj.Displaydata();
	getch();
	return 0;
}