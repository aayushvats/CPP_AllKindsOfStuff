void input(int x, int y, char m[], int n)
{
	for(int i=0;i<80;i++)
	{
		m[i]=getch();
		if(m[i]==13)
			break;
		else
		{
			if(n==0)
				outtextxy(x,y,&m[i]);
			else if(n==1)
				outtextxy(x,y,"*");
			else
				exit(1);
			x+=10;
		}
	}
	m[i]='\0';
}
void output(int x, int y, char m[], int n)
{
	if(n==0)
	{
		for(int i=0;i<1;i++)
		{
			if(m[i]=='\0')
				break;
			else
				outtextxy(x,y,&m[i]);
			x+=10;
		}
	 }
	 else if(n==1)
	 {
		for(int i=0;i<80;i++)
		{
			if(m[i]=='\0')
				break;
			else
				outtextxy(x,y,"*");
			x+=10;
		}
	 }
}