#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
class Tour
{
		char TCode[5];
		int NoofAdults;
		int NoofKids;
		int Kilometres;
		float TotalFare;
	public:
		Tour ()
		{
			strcpy(TCode,"NULL");
			NoofAdults=0;
			NoofKids =0;
			Kilometres =0;
			TotalFare=0;
		}
		void AssignFare();
		void EnterTour()
		{
			cout<<"Enter value of travel code:";
			cin>>TCode;
			cout<<"Enter No. of Adults:";
			cin>>NoofAdults;
			cout<<"Enter No. of Children:";
			cin>> NoofKids;
			cout<<"Enter Distance:";
			cin>> Kilometres;
			AssignFare();
		}
		void ShowTour()
		{
			cout<<"Travel code:"<<TCode<<endl;
			cout<<"No of Adults:"<<NoofAdults<<endl;
			cout<<"No of Children:"<< NoofKids <<endl;
			cout<<"Distance:"<< Kilometres <<endl;
			cout<<"Total Fare:"<<TotalFare<<endl;
		}
};
void Tour :: AssignFare()
{
	int i,j;
	TotalFare=0;
	for(i=0;i<NoofAdults;i++)
	{
		if(Kilometres>=1000)
			TotalFare+=500;
		else if(Kilometres>=500)
			TotalFare+=300;
		else
			TotalFare+=200;
	}
	for(j=0;j<NoofKids;j++)
	{
		if(Kilometres>=1000)
			TotalFare+=500/2;
		else if(Kilometres>=500)
			TotalFare+=300/2;
		else
			TotalFare+=200/2;
	}
}
void main()
{
	clrscr();
	Tour T;
	T.EnterTour();
	cout<<"\n";
	T.ShowTour();
	getch();
}