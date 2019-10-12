#include<iostream.h>
#include<conio.h>
void main()
{
	clrscr();
	int a,b,LCM=0,HCF=0;
	cin>>a>>b;
	for(int i=1; i<=b; ++i)
		for(int j=1; j<=a; ++j)
			if(a*j==b*i)
				LCM=a*j;
	cout<<" LCM : "<<LCM;
	for(i=2 ; i<=a*b; ++i)
		if(a%i==0 && b%i==0)
			HCF=i;
	cout<<endl<<" HCF : "<<HCF;
	getch();
}