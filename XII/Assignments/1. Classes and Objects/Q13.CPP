#include<iostream.h>
#include<stdio.h>
#include<conio.h>
#include<string.h>
struct Name
{
	char first[40];
	char mid[40];
	char last[60];
};
struct Phone
{
	char area[4];
	char exch[4];
	char numb[6];
};
class P_rec
{
		Name name;
		Phone phone;
	public:
		P_rec();
		void display_rec(void);
};
P_rec::P_rec(void)
{
	strcpy(name.first,"Dev");
	strcpy(name.mid,"Aryan");
	strcpy(name.last,"Dogra");
	strcpy(phone.area,"+91 ");
	strcpy(phone.exch,"9958");
	strcpy(phone.numb,"679035 ");
}
void P_rec::display_rec()
{
	cout<<"\n"<<name.first<<" "<<name.mid<<" "<<name.last<<"\n\n";
	cout<<phone.area<<phone.exch<<phone.numb<<"\n";
}
void main()
{
	clrscr();
	P_rec p;
	p.display_rec();
	getch();
}