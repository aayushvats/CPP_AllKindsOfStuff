#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
struct date
{
	int day;
	int month;
	int year;
};
struct employee
{
	int code;
	char name[20];
	char dept[20];
	date join_date;
}emp[100];
void main()
{
	clrscr();
	int n;
	cout<<"Give the number of employees ";
	cin>>n;
	for(int i=0; i<n; ++i)
	{
		cout<<endl<<"Give name of employee "<<i+1<<" ";
		gets(emp[i].name);
		cout<<"Give department of employee "<<i+1<<" ";
		gets(emp[i].dept);
		cout<<"Give date of joining of employee "<<i+1<<" (dd-mm-yy) ";
		cin>>emp[i].join_date.day>>emp[i].join_date.month>>emp[i].join_date.year;
	}
	employee t;
	for(i=1; i<n; ++i)
	{
		for(int j=1; j<n; ++j)
		{
			if(strcmp(emp[j-1].name,emp[j].name)>0)
			{
				t=emp[j-1];
				emp[j-1]=emp[j];
				emp[j]=t;
			}
		}
	}
	clrscr();
	cout<<"In alphabetical order are "<<endl;
	for(i=0; i<n; ++i)
	{
		cout<<endl<<endl<<"name of employee "<<emp[i].name;
		cout<<endl<<"department of employee "<<emp[i].dept;
		cout<<endl<<"date of joining of employee "<<emp[i].join_date.day;
		cout<<" "<<emp[i].join_date.month<<" "<<emp[i].join_date.year;
	}
	getch();
}