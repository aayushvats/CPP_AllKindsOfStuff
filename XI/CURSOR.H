int x=100,y=100;
int m;
void crsr()
{
	settextstyle(0,0,1);
	setcolor(WHITE);
	outtextxy(x,y,"");
	m=getch();
	if(m==100)
		x+=5;
	else if(m==97)
		x-=5;
	else if(m==115)
		y+=5;
	else if(m==119)
		y-=5;
	else if(m==101)
		exit(1);
}