#include<iostream.h>
#include<conio.h>
#include<math.h>
#include<stdlib.h>
void main()
{
	menu:
	clrscr();
	int choice;
	cout<<"THE MAIN MENU";
	cout<<endl<<"1)Calculate the area of a triangle"<<endl;
	cout<<"2)find radius of a circle whose area is given"<<endl;
	cout<<"3)Calculate the volume and surface area of a sphere"<<endl;
	cout<<"4)Exit"<<endl<<"Your Choice: ";
	cin>>choice;
	clrscr();
	switch (choice)
	{
	case 1:
		cout<<"Give the length of the triangle ";
		float l;
		cin>>l;
		cout<<"Give the height of the triangle ";
		float b;
		cin>>b;
		float A;
		A=(l*b)/2;
		cout<<endl<<"Area is "<<A;
		getch();
		clrscr();
		break;
	case 2:
		cout<<"Give the area of the circle ";
		float a;
		cin>>a;
		float r;
		r=sqrt((a*7)/22);
		cout<<endl<<"The radius of the circle is "<<r;
		getch();
		clrscr();
		break;
	case 3:
		cout<<"Give the radius of sphere ";
		int R;
		cin>>R;
		cout<<endl<<"The volume is "<<(4*22*R*R*R)/(3*7)<<endl;
		cout<<"The surface area is "<<(4*22*R*R)/7;
		getch();
		clrscr();
		break;
	case 4:
		exit(1);
	default:
		cout<<"Please enter a valid choice";
	}
		char c;
		cout<<"Wish to continue "<<endl;
		cout<<"Type 'Y' for Yes and 'N' for No"<<endl;
		cin>>c;
		clrscr();
		if(c=='y')
			goto menu;
		else if(c=='n')
			exit(1);
		else
			cout<<"Please enter a valid choice";
	getch();
}