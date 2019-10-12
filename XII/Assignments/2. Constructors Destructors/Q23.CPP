#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class Play
{
		int Playcode;
		char Playtitle[25];
		float Duration;
		int Noofscenes;
	public:
		Play()
		{
			Duration=45.0;
			Noofscenes=5;
		}
		void Newplay()
		{
			cout<<"enter playcode: ";
			cin>>Playcode;
			cout<<"enter playtitle: ";
			gets(Playtitle);
		}
		void Moreinfo(float d,int n)
		{
			Duration=d;Noofscenes=n;
		}
		void Showplay()
		{
			cout<<"Playcode: "<<Playcode<<endl;
			cout<<"Playtitle: "<<Playtitle<<endl;
			cout<<"Duration: "<<Duration<<endl;
			cout<<"Noofscenes: "<<Noofscenes<<endl;
		}
};
void main()
{
	clrscr();
	Play p;
	p.Newplay();
	cout<<"\n\n";
	p.Showplay();
	getch();
}