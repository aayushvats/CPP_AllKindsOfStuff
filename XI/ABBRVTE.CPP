#include<iostream.h>
#include<conio.h>
#include<stdio.h>
void main()
{
clrscr();
int j=0,k=0,l=0;
char n[80];
cout<<"Give your Name"<<endl;
gets(n);
cout<<"The abbrivated name is ";
if(n[0]>=97 && n[0]<=122)
{
	n[0]=n[0]-32;
}
cout<<n[0]<<". ";
for(l=0;n[l]!='\0';l++)
{
	if(n[l]==32)
	{
		for(j=(l+1);n[j]!='\0';j++)
		{
			switch(j)
			{
			case	32:
				if(n[l+1]>=97 && n[l+1]<=122)
				{
					n[l+1]=n[l+1]-32;
				}
				cout<<(l+1)<<". ";
				break;
			default:
				for(k=l+1;n[k]!='\0';k++)
				{
					if(n[l+1]>=97 && n[l+1]<=122)
					{
						n[l+1]=n[l+1]-32;
					}					}
					cout<<n[k];
				 }
				 break;
			}
		}
	}
getch();
}
