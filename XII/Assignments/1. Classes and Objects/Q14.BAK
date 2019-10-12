#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class Account
{
		char D_Name[30];
		float Amount;
		char acc_type[2];
	public:
		long Acc_No;
		void initial()
		{
			cout<<endl<<"Enter Depositers Name: ";
			gets(D_Name);
			cout<<"Enter Account Number: ";
			cin>>Acc_No;
			cout<<"Enter Type of account (S for Saving and C for Current): ";
			gets(acc_type);
			cout<<"Enter Ammount: ";
			cin>>Amount;
		}
		void Deposit()
		{
			float dip;
			cout<<"Enter Money to deposit:";
			cin>>dip;
			display();
			Amount=Amount+dip;
			cout<<"After deposit total amount is: "<<Amount;
		}
		void Withdraw()
		{
			float wid;
			cout<<endl<<"Entre money to withdraw:";
			cin>>wid;
			if(Amount>=1000)
			{
				display();
				Amount=Amount-wid;
				cout<<endl<<"After withdraw the amount is:"<<Amount;
			}
			else
			{
				cout<<"....you can not withdraw money.....";
			}
}
void display()
{
	cout<<"Depositers Name: "<<D_Name<<endl;
	cout<<"Account Number: "<<Acc_No<<endl;
	cout<<"Account Type: "<<acc_type<<endl;
	cout<<"Amount: "<<Amount<<endl;
}
long getaccno()
{
	return Acc_No;
}
};
void main()
{
	clrscr();
	Account A1[3];
	long a;
	int i,flag=0;
	int ch;
	for(i=0;i<3;i++)
	{
		cout<<endl<<"Enter information for Depositer "<<i+1<<":"<<endl;
		A1[i].initial();
	}
	for(i=0;i<3;i++)
	{
		cout<<endl<<"Depositer- "<<i+1<<":"<<endl;
		A1[i].display();
	}
	cout<<"**************************************"<<endl;
	cout<<" 1->deposit..."<<endl;
	cout<<" 2->withdraw.."<<endl;
	cout<<"Enter your choice:";
	cin>>ch;
	switch(ch)
	{
		case 1:
			cout<<endl<<"Enter account number for which diposit money:";
			cin>>a;
			for(i=0;i<3;i++)
			{
				if(A1[i].getaccno()==a)
				{
					flag=1;
					break;
				}
				else
				{
					flag=0;
				}
			}
			if(flag==0)
			{
				cout<<"Account number not found.....";
			}
			else
			{
				A1[i].Deposit();
			}
			break;
		case 2:
			cout<<endl<<"Enter account number for which withdraw money:";
			cin>>a;
			for(i=0;i<3;i++)
			{
				if(A1[i].getaccno()==a)
				{
					flag=1;
					break;
				}
				else
				{
					flag=0;
				}
			}
			if(flag==0)
			{
				cout<<"Account number not found.....";
			}
			else
			{
				A1[i].Withdraw();
			}
			break;
		}
	getch();
}