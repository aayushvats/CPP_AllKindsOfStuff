#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<process.h>
int const min=500;
class Account
{
	char name[20];
	long ano;
    public:
	long balance;
	void getdata()
	{
		cout<<"Enter customer name: ";
		gets(name);
		cout<<"Enter account no.: ";
		cin>>ano;
		cout<<"Enter opening balace: ";
		cin>>balance;
	}
	void display()
	{
		cout<<"Customer name: "<<name<<endl;
		cout<<"Account no: "<<ano<<endl;
		cout<<"Balance :"<<balance;
	}
};
class Current:public Account
{
	float depo,with,pen;
    public:
	void deposit()
	{
		cout<<endl<<"Enter money to deposit: ";
		cin>>depo;
		display();
		balance=balance+depo;
		cout<<endl<<"After deposit main balance is: "<<balance<<endl;
	}
	void withdraw()
	{
		cout<<endl<<"Enter money to withdraw: ";
		cin>>with;
		if(with<balance)
		{
			display();
			balance=balance-with;
			cout<<endl<<"After withdraw main balance is: "<<balance<<endl;
		}
		else
		{
			cout<<endl<<"You cannot withdraw money....."<<endl;
		}
	}
	void check_bal()
	{
		if(balance<min)
		{
			cout<<"Opening balance should not be less than 500...."<<endl;
			balance=balance-150;
			cout<<endl<<"After penalty main balance is:"<<balance<<endl;
		}
	}
};
class Savings:public Account
{
	float depo,with,intr;
    public:
	void deposit()
	{
		cout<<endl<<"Enter money to deposit: ";
		cin>>depo;
		display();
		balance=balance+depo;
		cout<<endl<<"After deposit main balance is: "<<balance<<endl;
	}
	void withdraw()
	{
		cout<<endl<<"Enter money to withdraw: ";
		cin>>with;
		if(with<balance)
		{
			display();
			balance=balance-with;
			cout<<endl<<"After withdraw main balance is: "<<balance<<endl;
		}
		else
		{
			cout<<"You cannot withdraw money....."<<endl;
		}
	}
	void cal_intr()
	{
		intr=(balance*2)/100;
		balance=balance+intr;
		cout<<endl<<"After calculating interest balance is: "<<balance;
	}
};

void main()
{
	clrscr();
	Current c;
	Savings s;
	char ch;
	int choice,ch2;
	cout<<"Enter 'S' for saving and 'C' for current: ";
	cin>>ch;
	if(ch=='C'||ch=='c')
	{
		c.getdata(); c.check_bal();
		l2:
		cout<<"\n 1. Display \n 2.Deposit \n 3.Withdraw \n 4. Exit \n";
		cout<<"Enter your choice: ";
		cin>>choice;
		switch(choice)
		{
			case 1:
				c.display();
				goto l2;
				break;
			case 2:
				c.deposit();
				goto l2;
				break;
			case 3:
				c.withdraw();
				goto l2;
				break;
			case 4:
				exit(0);
		}
	}
	else if(ch=='S'||ch=='s')
	{
		s.getdata();
		l1:
		cout<<"\n 1. Display \n 2.Deposit \n 3.Withdraw \n 4.Calculate iterest \n 5. Exit \n";
		cout<<"Enter your choice: ";
		cin>>ch2;
		switch(ch2)
		{
			case 1:
				s.display();
				goto l1;
				break;
			case 2:
				s.deposit();
				goto l1;
				break;
			case 3:
				s.withdraw();
				goto l1;
				break;
			case 4:
				s.cal_intr();
				goto l1;
				break;
			case 5:
				exit(0);
		}
	}
	else
		cout<<"Wrong choice..........."<<endl;
	getch();
}