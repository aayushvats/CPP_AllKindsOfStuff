#include<iostream.h>
#include<conio.h>
#include<stdio.h>
struct employee
{
	char name[20];
	char address[80];
	int phone;
	int salary;
}emp1[5];
struct perks
{
	char grade;
	int da;
	int hra;
	int net_salary;
}emp2[5];
void main()
{
	clrscr();
	for(int i=0; i<5; ++i)
	{
		cout<<endl<<"Give the name of "<<i+1<<" ";
		gets(emp1[i].name);
		cout<<"Give the address "<<i+1<<" ";
		gets(emp1[i].address);
		cout<<"Give the number "<<i+1<<" ";
		cin>>emp1[i].phone;
		cout<<"Give the Salary "<<i+1<<" ";
		cin>>emp1[i].salary;
		cout<<"Give the grade "<<i+1<<" ";
		cin>>emp2[i].grade;
		if(emp2[i].grade=='a' || emp2[i].grade=='A')
			emp2[i].da=emp2[i].hra=(emp1[i].salary)/4;
		else if(emp2[i].grade=='b' ||  emp2[i].grade=='B')
			emp2[i].da=emp2[i].hra=(emp1[i].salary)/5;
		emp2[i].net_salary=emp1[i].salary+emp2[i].da+emp2[i].hra;
	}
	clrscr();
	for(int j=0; j<5; ++j)
	{
		cout<<endl<<"name of "<<j+1<<" is "<<emp1[j].name;
		cout<<endl<<"the Salary of "<<j+1<<" is "<<emp2[j].net_salary;
	}
	getch();
}