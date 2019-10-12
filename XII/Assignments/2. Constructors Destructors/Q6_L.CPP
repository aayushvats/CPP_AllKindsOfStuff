#include<iostream.h>
#include<conio.h>
#include<string.h>
class Serial
{
		int Serialcode;
		char Title[20];
		float Duration;
		int Noofepisodes;
	public:
		Serial()
		{
			Duration=30.0;
			Noofepisodes =10;
		}
		void Newserial()
		{
			cout<<"enter Serialcode: ";
			cin>> Serialcode;
			cout<<"enter Title: ";
			gets(Title);
		}
		void Otherentries(float d,int n)
		{
			Duration=d;
			Noofepisodes =n;
		}
		void Dispdata()
		{
			cout<<" Serialcode: "<< Serialcode <<endl;
			cout<<" Title: "<< Title <<endl;
			cout<<" Duration: "<<Duration<<endl;
			cout<<" No of episodes: "<< Noofepisodes <<endl;
		}
};
void main()
{
	clrscr();
	Serial S;
	S.Newserial();
	cout<<"\n";
	S.Dispdata();
	getch();
}