#include<iostream.h>
#include<conio.h>
#include<stdio.h>
int NewPlan()
{
	char PlanCode[20],Place[20];
	int Number_of_travellers,Number_of_buses;
	cout<<"Enter Plan code ";
	gets(PlanCode);
	cout<<"Enter Place ";
	gets(Place);
	cout<<"Enter Number of travellers ";
	cin>>Number_of_travellers;
	if(Number_of_travellers < 20)
		Number_of_buses=1;
	else if(Number_of_travellers > 20 && Number_of_travellers < 40)
		Number_of_buses=2;
	else if(Number_of_travellers >= 40)
		Number_of_buses=3;
	return(Number_of_buses);
}
void main()
{
	clrscr();
	int a=NewPlan();
	cout<<endl<<"Number of required busses are "<<a;
	getch();
}