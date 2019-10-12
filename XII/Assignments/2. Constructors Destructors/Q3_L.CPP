#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class batsman
{
	public:
		char name[20];
		int run_score,indi_out;
		char modeout[20];
		void getdata()
		{
			cout<<".....Enter information for batsman......."<<endl;
			cout<<"Enter batsman's name: ";
			gets(name);
			cout<<"Enter runs scored: ";
			cin>>run_score;
			cout<<"Enter 0 if NOT-OUT or 1 if OUT: ";
			cin>>indi_out;
			if(indi_out==1)
			{
				cout<<"Enter mode by which out: ";
				gets(modeout);
			}
		}
		void putdata()
		{
			cout<<"......Batsman's Information........."<<endl;
			cout<<"Batsman's name: "<<name<<endl;
			cout<<"Runs scored: "<<run_score<<endl;
			if(indi_out==1)
			{
				cout<<"OUT: "<<"Yes"<<endl;
				cout<<"Mode by which out: "<<modeout<<endl;
			}
		}
		void update()
		{
			int new_run;
			cout<<".....Enter update for batsman....."<<endl;
			cout<<"Enter new run: ";
			cin>>new_run;
			putdata();
			run_score=run_score+new_run;
			cout<<"Updated run: "<<run_score;
		}
};
class bowler
{
	public:
		char bname[20];
		int over_play,maiden_over,run_given,wicket;
		void getinfo()
		{
			cout<<".....Enter information for bolwer......."<<endl;
			cout<<"Enter bowler's name: ";
			gets(bname);
			cout<<"Enter overs played: ";
			cin>>over_play;
			cout<<"Enter maiden overs: ";
			cin>>maiden_over;
			cout<<"Enter runs given: ";
			cin>>run_given;
			cout<<"Enter wicket taken: ";
			cin>>wicket;
		}
		void disp_info()
		{
			cout<<"......Bowler's Information........."<<endl;
			cout<<"Bolwer's name: "<<bname<<endl;
			cout<<"Overs played: "<<over_play<<endl;
			cout<<"Maiden overs: "<<maiden_over<<endl;
			cout<<"Runs given: "<<run_given<<endl;
			cout<<"Wicket taken: "<<wicket<<endl;
		}
		void upd()
		{
			int new_over,new_maidover,new_run,new_wicket;
			cout<<endl<<".....Enter update for bolwer....."<<endl;
			cout<<"Enter new overs played: ";
			cin>>new_over;
			cout<<"Enter new maiden overs: ";
			cin>>new_maidover;
			cout<<"Enter new runs given: ";
			cin>>new_run;
			cout<<"Enter new wickets taken: ";
			cin>>new_wicket;
			disp_info();
			over_play=over_play+new_over;
			maiden_over=maiden_over+new_maidover;
			run_given=run_given+new_run;
			wicket=wicket+new_wicket;
			cout<<"After update......."<<endl;
			cout<<"Overs played: "<<over_play<<endl;
			cout<<"Maiden overs: "<<maiden_over<<endl;
			cout<<"Runs given: "<<run_given<<endl;
			cout<<"Wicket taken: "<<wicket<<endl;
		}
};
void main()
{
	clrscr();
	int ch;
	batsman b1;
	bowler b2;
	b1.getdata();
	b2.getinfo();
	b1.putdata();
	b2.disp_info();
	cout<<"Is ball thrown..?? (1-Yes or 0-NO) ";
	cin>>ch;
	if(ch==1)
	{
		b1.update();
		b2.upd();
	}
	getch();
	clrscr();
}