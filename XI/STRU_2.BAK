#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
struct item
{
	int item_no;
	char item_name[20];
	float price;
	int quantity;
}item[100];
struct customer
{
	char item_name[20];
	int invoice;
	int quantity;
}cust[100];
void main()
{
	clrscr();
	int n;
	cout<<"Give the number of items ";
	cin>>n;
	for(int i=0; i<n; ++i)
	{
		cout<<endl<<"Give item no. of item "<<i+1<<" ";
		cin>>item[i].item_no;
		cout<<"Give item name of item "<<i+1<<" ";
		gets(item[i].item_name);
		cout<<"Give price of item "<<i+1<<" ";
		cin>>item[i].price;
		cout<<"Give the quantity in stock for item "<<i+1<<" ";
		cin>>item[i].quantity;
	}
	int m,g=0;
	cout<<endl<<"Give the number of items to be brought ";
	cin>>m;
	for(i=0; i<m; ++i)
	{
		if(g==0)
		{
			cout<<"Give invoice number ";
			cin>>cust[i].invoice;
			++g;
		}
		else
			cust[i].invoice=cust[i-1].invoice;
		cout<<"Give item name of item "<<i+1<<" ";
		gets(cust[i].item_name);
		cout<<"Give the quantity required for item "<<i+1<<" ";
		cin>>cust[i].quantity;
	}
	clrscr();
	int tot=0;
	cout<<"Invoice Number "<<cust[0].invoice;
	cout<<"\t\t\t\t Date: 09-12-2017";
	cout<<endl<<"Item No \t\t Item Name \t\t Quantity \t\t Price";
	for(i=0; i<m ;++i)
	{
		for(int j=0; j<n ;++j)
		{
			if(strcmpi(cust[i].item_name,item[j].item_name)==0)
			{
				cout<<endl<<item[j].item_no<<"\t\t";
				cout<<item[j].item_name<<"\t\t";
				cout<<cust[i].quantity<<"\t\t";
				cout<<item[j].price;
				tot+=item[j].price;
			}
		}
	}
	cout<<endl<<endl<<"Grand Total: "<<tot;
	getch();
}