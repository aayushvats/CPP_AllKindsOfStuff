#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
class Outfit
{
		char OCode[15];
		char OType[15];
		int OSize;
		char OFabric[15];
		float OPrice;
		void InitPrice()
		{
			if(strcmpi(OFabric,"DENIM")==0)
			{
				if(strcmpi(OType,"TROUSER")==0)
					OPrice=1500;
				else if(strcmpi(OType,"JACKET")==0)
					OPrice=2500;
			}
			else
			{
				if(strcmpi(OType,"TROUSER")==0)
					OPrice=1500-1500*0.25;
				else if(strcmpi(OType,"JACKET")==0)
					OPrice=2500-2500*0.25;
			}
		}
	public:
		Outfit()
		{
			strcpy(OCode,"NOT ASSIGNED");
			strcpy(OType,"NOT ASSIGNED");
			strcpy(OFabric,"NOT ASSIGNED");
			OSize=0;
			OPrice=0;
		}
		void Input()
		{
			cout<<"Enter code ";
			gets(OCode);
			cout<<"Enter type: ";
			gets(OType);
			cout<<"Enter Size: ";
			cin>>OSize;
			cout<<"Enter Material ";
			gets(OFabric);
			InitPrice();
		}
		void Display()
		{
			cout<<"\nCode:"<<OCode<<endl;
			cout<<"Type:"<<OType<<endl;
			cout<<"Size:"<<OSize<<endl;
			cout<<"Material:"<<OFabric<<endl;
			cout<<"Price:"<<OPrice<<endl;
		}
};
void main()
{
	clrscr();
	Outfit O;
	O.Input();
	O.Display();
	getch();
}