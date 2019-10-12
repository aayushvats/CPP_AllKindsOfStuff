#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
void main()
{
	clrscr();
	char a,b;
	while(1)
	{
		a=getch();
		if(a==0)
		{
			b=getch();
			if(b==72)
			{
				clrscr();
				cout<<"UP\n";
			}
			else if(b==80)
			{
				clrscr();
				cout<<"DOWN\n";
			}
			else if(b==75)
			{
				clrscr();
				cout<<"LEFT\n";
			}
			else if(b==77)
			{
				clrscr();
				cout<<"RIGHT\n";
			}
		}
		else if(a==27)
			break;
		/*switch(a)
		{
			case 0 :
			{
				b=getch();
				switch(b)
				{
					case 72 :
						clrscr();
						cout<<"UP\n";
						break;
					case 80 :
						clrscr();
						cout<<"DOWN\n";
						break;
					case 75 :
						clrscr();
						cout<<"LEFT\n";
						break;
					case 77 :
						clrscr();
						cout<<"RIGHT\n";
						break;
				}
				break;
			}
			case 'e' :
				return;
		}*/
	}
}