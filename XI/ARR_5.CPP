#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
	clrscr();
	long int ALL[10], ODD[10], EVEN[10];
	int i,j=0,k=0,n;
	cout<<"Enter the size of array All"<<endl;
	cin>>n;
	cout<<"Enter the elements of the array"<<endl;
	for (i=0;i<n;++i)
	{
		cin>>ALL[i];
		if(i==0)
		{
			ODD[j]=ALL[i];
			++j;
		}
		else if(i%2==0)
		{
			ODD[j]=ALL[i];
			++j;
		}
		else
		{
			EVEN[k]=ALL[i];
			++k;
		}
	}
	cout<<endl<<"The Odd placed elements are "<<endl;
	for(i=0;i<j;++i)
	{
		cout<<ODD[i]<<endl;
	}
	cout<<endl<<"The Even placed Elements are "<<endl;
	for(i=0;i<k;++i)
	{
		cout<<EVEN[i]<<endl;
	}
	getch();
}