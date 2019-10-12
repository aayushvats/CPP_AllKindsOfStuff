#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
class Clothing
{
		char Code[15];
		char Type[15];
		int Size;
		char Material[15];
		float Price;
		void Calc_Price()
		{
			if(strcmpi(Material,"COTTON")==0)
			{
				if(strcmpi(Type,"TROUSER")==0)
					Price=1500;
				else if(strcmpi(Type,"SHIRT")==0)
					Price=1200;
			}
			else
			{
				if(strcmp(Type,"TROUSER")==0)
					Price=1500-1500*0.25;
				else if(strcmp(Type,"SHIRT")==0)
					Price=1200-1200*0.25;
			}
		}
	public:
		Clothing()
		{
			strcpy(Code,"NOT ASSIGNED");
			strcpy(Type,"NOT ASSIGNED");
			strcpy(Material,"NOT ASSIGNED");
			Size=0;
			Price=0;
		}
		void Enter()
		{
			cout<<"Enter code";
			gets(Code);
			cout<<"Enter type:";
			gets(Type);
			cout<<"Enter Size:";
			cin>>Size;
			cout<<"Enter Material";
			gets(Material);
			Calc_Price();
		}
		void Show()
		{
			cout<<"\nCode:"<<Code<<endl;
			cout<<"Type:"<<Type<<endl;
			cout<<"Size:"<<Size<<endl;
			cout<<"Material:"<<Material<<endl;
			cout<<"Price:"<<Price<<endl;
		}
};
void main()
{
	clrscr();
	Clothing C;
	C.Enter();
	cout<<"\n\n";
	C.Show();
	getch();
}