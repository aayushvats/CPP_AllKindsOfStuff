#include<iostream.h> 
#include<conio.h> 
#include<stdio.h> 
class Library 
{ 
		int BookNo; 
		char BName[25]; 
		char Author[25]; 
		char Publisher[25]; 
		float Price; 
		int No_of_Copies; 
		int No_of_Copies_Issued; 
	public: 
		void initial() 
		{ 
			cout<<endl<<"\t Enter Book Number: ";
			cin>>BookNo;
			cout<<endl<<"\t Enter Book Name: ";
			gets(BName);
			cout<<endl<<"\t Enter Author Name: ";
			gets(Author);
			cout<<endl<<"\t Enter Publisher Name: ";
			gets(Publisher);
			cout<<endl<<"\t Enter Price: ";
			cin>>Price;
			cout<<endl<<"\t Enter Number of copies: ";
			cin>>No_of_Copies;
		}
		void issue_book()
		{
			cout<<"\t Enter book details......."<<endl;
			initial();
			if(No_of_Copies>0)
			{
				cout<<"\t Enter How many book you want to issue:";
				cin>>No_of_Copies_Issued;
				if(No_of_Copies>=No_of_Copies_Issued)
				{
					No_of_Copies=No_of_Copies-No_of_Copies_Issued;
					cout<<"\n \t "<<No_of_Copies_Issued<<" book is issued..";
					display();
				}
				else
				{
					cout<<"\t"<<No_of_Copies_Issued<<" books is not available in stock..";
				}
			}
			else
			{
				cout<<"\t Book is not available";
			}
		}
		void return_book()
		{
			cout<<"\t Enter book detail you want to return...";
			cout<<endl<<"\t Enter Book Number: ";
			cin>>BookNo;
			cout<<endl<<"\t Enter Book Name: ";
			gets(BName);
			No_of_Copies=No_of_Copies+No_of_Copies_Issued;
			cout<<endl<<BookNo<<":"<<BName<<"\t Book is returned......";
		}
		void display()
		{
			cout<<"\t Book Number: "<<BookNo<<endl;
			cout<<"\t Book Name: "<<BName<<endl;
			cout<<"\t Author Name: "<<Author<<endl;
			cout<<"\t publisher Name: "<<Publisher<<endl;
			cout<<"\t Price: "<<Price<<endl;
		}
};
void main()
{
	clrscr();
	Library l1;
	int ch;
	cout<<"\n \t \t 1->Issue book..."<<endl;
	cout<<"\t \t 2->Return Book....."<<endl;
	cout<<"\t \t Enter your choice...";
	cin>>ch;
	switch(ch)
	{
		case 1: 
			l1.issue_book(); 
			break; 
		case 2:
			l1.return_book();
			break;
	}
getch();
}