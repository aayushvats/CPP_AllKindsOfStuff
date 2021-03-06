#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
int a[20],b[20],c[40];
int m,n,p,val,i,j,key,pos,temp;
/*Function Prototype*/
void create();
void display();
void insert();
void del();
void search();
void merge();
void sort();
void main()
{
	clrscr();
	int choice;
	do{
		cout<<"\n\n--------Menu-----------\n";
		cout<<"1.Create\n";
		cout<<"2.Display\n";
		cout<<"3.Insert\n";
		cout<<"4.Delete\n";
		cout<<"5.Search\n";
		cout<<"6.Sort\n";
		cout<<"7.Merge\n";
		cout<<"8.Exit\n";
		cout<<"-----------------------";
		cout<<"\nEnter your choice:\t";
		cin>>choice;
		switch(choice)
		{
			case 1:
				create();
				break;
			case 2:
				display();
				break;
			case 3:
				insert();
				break;
			case 4:
				del();
				break;
			case 5:
				search();
				break;
			case 6:
				sort();
				break;
			case 7:
				merge();
				break;
			case 8:
				exit(0);
				break;
			default:
				cout<<"\nInvalid choice:\n";
				break;
		}
	}while(choice!=8);
	getch();
}

void create()
{
	cout<<"\nEnter the size of the array elements:\t";
	cin>>n;
	cout<<"\nEnter the elements for the array:\n";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
}//end of create()

void display()  //displaying an array elements
{
	int i;
	cout<<"\nThe array elements are:\n";
	for(i=0;i<n;i++)
	{
		 cout<<a[i]<<"\t";
	}
}//end of display()

void insert()   //inserting an element in to an array
{
	cout<<"\nEnter the position for the new element:\t";
	cin>>pos;
	cout<<"\nEnter the element to be inserted :\t";
	cin>>val;
	for(i=n-1;i>=pos;i--)
	{
		a[i+1]=a[i];
	}
	a[pos]=val;
	n=n+1;
}//end of insert()

void del()      //deleting an array element
{
	cout<<"\nEnter the position of the element to be deleted:\t";
	cin>>pos;
	val=a[pos];
	for(i=pos;i<n-1;i++)
	{
		a[i]=a[i+1];
	}
	n=n-1;
	cout<<"\nThe deleted element is = "<<val;
}//end of delete()

void search()   //searching an array element
{
	cout<<"\nEnter the element to be searched:\t";
	cin>>key;
	for(i=0;i<n;i++)
	{
		if(a[i]==key)
		{
			cout<<"\nThe element is present at position "<<i;
			break;
		}
	}
	if(i==n)
	{
		cout<<"\nThe search is unsuccessful";
	}
}//end of serach()

void sort()     //sorting the array elements
{
	for(i=0;i<n-1;i++)
	{
		for(j=0;j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	cout<<"\nAfter sorting the array elements are:\n";
	display();
}//end of sort

void merge()    //merging two arrays
{
	cout<<"\nEnter the size of the second array:\t";
	cin>>m;
	cout<<"\nEnter the elements for the second array:\n";
	for(i=0;i<m;i++)
	{
		cin>>b[i];
	}
	for(i=0,j=0;i<n;i++,j++)
	{
		c[j]=a[i];
	}
	for(i=0;i<m;i++,j++)
	{
		c[j]=b[i];
	}
	p=n+m;
	cout<<"\nArray elements after merging:\n";
	for(i=0;i<p;i++)
	{
		cout<<c[i];
	}
}//end of merge()