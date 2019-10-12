#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class student
{
		int admno;
		char sname[20];
		float eng,math,science,total;
		float ctotal()
		{
			return eng+math+science;
		}
	public:
		void Takedata()
		{
			cout<<"\t Enter admission number: ";
			cin>> admno;
			cout<<"\t Enter student name: " ;
			gets(sname);
			cout<< "\t Enter marks in english:";
			cin>>eng;
			cout<< "\t Enter marks in math:";
			cin>>math;
			cout<< "\t Enter marks in science:";
			cin>>science;
			total=ctotal();
		}
		void Showdata()
		{
			cout<<endl<<"\t ..........Student information...."<<endl;
			cout<<"\t Admission number "<<admno;
			cout<<"\n\t Student name "<<sname;
			cout<<"\n\t English "<<eng;
			cout<<"\n\t Math "<<math;
			cout<<"\n\t Science "<<science;
			cout<<"\n\t Total "<<total;
		}
};
void main()
{
	clrscr();
	student obj ;
	obj.Takedata();
	obj.Showdata();
	getch();
}