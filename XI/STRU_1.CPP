#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
struct count
{
	char name[20];
	char capital[20];
	int income;
}country[100];
void main()
{
	clrscr();
	int n;
	cout<<"Give the number of countries to be inputted ";
	cin>>n;
	for(int i=0; i<n; ++i)
	{
		cout<<endl<<"give name of country "<<i+1<<" ";
		gets(country[i].name);
		cout<<"give name of "<<i+1<<"'s capital ";
		gets(country[i].capital);
		cout<<"give per capita income of "<<i+1<<" ";
		cin>>country[i].income;
	}
	clrscr();
	char cap[20];
	cout<<"Give the desired capital ";
	gets(cap);
	for(int j=0; j<n; ++j)
	{
		if(strcmpi(cap,country[j].capital)==0)
		{
			cout<<endl<<country[j].name<<" is the corresponding country name";
			cout<<endl<<country[j].income<<" is the corresponding per capita income";
			break;
		}
	}
	char nam[20];
	cout<<endl<<"Give the desired country ";
	gets(nam);
	for(j=0; j<n; ++j)
	{
		if(strcmpi(nam,country[j].name)==0)
		{
			cout<<endl<<country[j].capital<<" is the corresponding capital ";
			cout<<endl<<country[j].income<<" is the corresponding per capita income";
			break;
		}
	}
	int inc;
	cout<<endl<<"Give the desired per capita income ";
	cin>>inc;
	for(j=0; j<n; ++j)
	{
		if(inc==country[j].income)
		{
			cout<<endl<<country[j].name<<" is the corresponding country name";
			cout<<endl<<country[j].capital<<" is the corresponding capital";
			break;
		}
	}
	getch();
}