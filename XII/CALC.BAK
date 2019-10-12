#include<iostream.h>
#include<conio.h>
#include<ctype.h>
void main()
{
	clrscr();
	char a[80];
	cout<<"Enter the Expression : ";
	int ans=0;
	for(int i=0; i<80; ++i)
	{
		a[i]=getch();
		cout<<a[i];
		if(isdigit(a[i]))
		{
			ans*=10;
			ans+=a[i];
		}
		else if(a[i]==13)
			break;
	}
	cout<<"\n"<<ans;
	getch();
}