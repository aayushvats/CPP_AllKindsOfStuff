#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>

//Initalising the variables globally which are needed in the program

int x=100,y=100,m,tu=0,tp=0,un=0,ua=0,up=0,uu=0,upa=0,gd=DETECT,gm;
int w=0,crt=0,d=15,i=0,ci=0,uns=0,ups=0,tb=0,tg=0,ta=0,cc=0,ct=0,ce=0;
int mc=0,mv=0,mo=0,cost=0,uuu=0,ddd=0,lll=0,rrr=0,tc=0,ti=0;
char v,ti2[80];
struct user 			//structure to information of the user
{
	char name[80];
	char address[80];
	char phone[80];
	char username[80];
	char password[80];
} user, temp;

void popup()			//fuction to show the popup animation
{
	for(int i=0,j=0; i!=100; i++,j+=2)
	{
		setviewport(322+j,242+i,318-j,238-i,1);
		clearviewport();
		rectangle(320+j,242+i,318-j,238-i);
		delay(10);
	}
}

void cup1(int a, int b)        //funtion for making a cup
{
	setcolor(DARKGRAY);
	ellipse(a,b,180,360,40,65);
	ellipse(a,b,0,360,40,10);
	arc((a-37),(b+28),100,300,20);
	setcolor(YELLOW);
	arc((a-37),(b+28),100,300,19);
	arc((a-37),(b+28),100,300,18);
	arc((a-37),(b+28),100,300,17);
	setcolor(DARKGRAY);
	arc((a-37),(b+28),100,300,16);
	ellipse((a-25),(b-10),270,90,5,10);
	ellipse((a-25),(b-30),90,270,5,10);
	ellipse(a,(b-10),270,90,5,10);
	ellipse(a,(b-30),90,270,5,10);
	ellipse((a+25),(b-10),270,90,5,10);
	ellipse((a+25),(b-30),90,270,5,10);
	setfillstyle(SOLID_FILL,YELLOW);
	floodfill(a,(b+30),DARKGRAY);
}
void cup2(int a, int b)		//function for making another cup
{
	ellipse(a,b,180,360,40,65);
	ellipse(a,b,0,360,40,10);
	arc((a+35),(b+28),255,70,20);
	setcolor(YELLOW);
	arc((a+35),(b+28),255,70,19);
	arc((a+35),(b+28),255,70,18);
	arc((a+35),(b+28),255,70,17);
	setcolor(DARKGRAY);
	arc((a+35),(b+28),255,70,16);
	ellipse((a-25),(b-10),90,270,5,10);
	ellipse((a-25),(b-30),270,90,5,10);
	ellipse(a,(b-10),90,270,5,10);
	ellipse(a,(b-30),270,90,5,10);
	ellipse((a+25),(b-10),90,270,5,10);
	ellipse((a+25),(b-30),270,90,5,10);
	setfillstyle(SOLID_FILL,YELLOW);
	floodfill((a-10),(b+30),DARKGRAY);
}
void logo(int a, int b)		       //function for making the logo flashed while loading
{
	setcolor(DARKGRAY);
	arc((a+141),(b+142),45,135,200);
	arc((a+141),(b+172),45,135,170);
	line(a,b,(a+20),(b+52));
	line((a+282),b,(a+262),(b+52));
	line((a+61),(b+51),(a+220),(b+51));
	line((a+61),(b+115),(a+220),(b+115));
	arc((a+61),(b+83),90,270,32);
	arc((a+220),(b+83),270,90,32);
	line((a+10),(b+26),(a-30),(b+52));
	line((a+272),(b+26),(a+312),(b+52));
	line((a+33),(b+40),(a+38),(b+53));
	line((a-14),(b+89),(a+38),(b+53));
	line((a+249),(b+40),(a+244),(b+53));
	line((a+296),(b+89),(a+244),(b+53));
	line((a-14),(b+89),(a-7),(b+64));
	line((a-7),(b+64),(a-30),(b+52));
	line((a+296),(b+89),(a+289),(b+64));
	line((a+289),(b+64),(a+312),(b+52));
	setfillstyle(SOLID_FILL,WHITE);
	floodfill((a+35),(b+8),DARKGRAY);
	floodfill((a+6),(b+43),DARKGRAY);
	floodfill((a+276),(b+45),DARKGRAY);
	setfillstyle(SOLID_FILL,GREEN);
	floodfill((a+184),(b+82),DARKGRAY);
	settextstyle(1,0,6);
	setcolor(RED);
	outtextxy((a+23),(b-31),"C");
	outtextxy((a+59),(b-46),"E");
	outtextxy((a+95),(b-58),"N");
	outtextxy((a+131),(b-66),"T");
	outtextxy((a+167),(b-58),"R");
	outtextxy((a+203),(b-46),"A");
	outtextxy((a+239),(b-31),"L");
	settextstyle(3,0,5);
	setcolor(WHITE);
	outtextxy((a+66),(b+52),"P E R K");
	settextstyle(3,0,2);
	outtextxy((a+41),(b+62),"o");
	outtextxy((a+235),(b+62),"o");
}
void loading_page()		//the loading page animation
{
	settextstyle(3,0,2);
	outtextxy(50,420,"MADE BY :- Aayush & Tathagat");
	int i,j;
	setviewport(0,0,639,240,1);
	for(i=-40,j=680; j!=540 ; j-=4)
	{
		clearviewport();

		if(i!=72)
			i+=4;

		//cup #1
		cup1(i,95);

		//cup #2
		cup2(j,95);

		//central perk logo
		logo(159,78);

		delay(100);
	}
	setviewport(0,240,639,400,1);
	for(i=0,j=0; i!=360*(3/2); ++i, j+=5)
	{
		clearviewport();
		arc(320,80,0+i,315+j,15);
		arc(320,80,0+i,315+j,16);
		arc(320,80,0+i,315+j,17);
		arc(320,80,0+i,315+j,18);
		arc(320,80,0+i,315+j,19);
		arc(320,80,0+i,315+j,20);
		delay(10);
	}
}

//function to input in graphics screen with previously defined textstyles

void input(int x, int y, char m[], int n)
{
	for(int i=0; i<80; ++i)
		m[i]=' ';
	for(i=0;i<80;i++)
	{
		m[i]=getch();
		if(m[i]==13)
			break;
		else
		{
			if(n==0)    	//input normally
				outtextxy(x,y,&m[i]);
			else if(n==1)   //input like a password
				outtextxy(x,y,"*");
			else
				exit(1);
			x+=10;
		}
	}
	m[i]='\0';   //putting the NULL at the end
}

//function to output in graphics screen with previously defined textstyles

void output(int x, int y, char m[], int n)
{
	if(n==0)	       //output normally
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
	 else if(n==1)	       //output like in password
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

//function for cursor
void crsr()
{
	settextstyle(0,0,1);
	setcolor(WHITE);
	outtextxy(x,y,"");
	m=getch();
	if(m==100)   //if 'd'
		x+=5;
	else if(m==97)    //if 'a'
		x-=5;
	else if(m==115)   //if 's'
		y+=5;
	else if(m==119)   //if 'w'
		y-=5;
	else if(m==101)   //if 'e'
		exit(1);
}

//function for the tutorial

void tutorial(void)
{
	cleardevice();
	setviewport(0,0,639,479,1);
	setcolor(DARKGRAY);
	settextstyle(COMPLEX_FONT,0,7);
	outtextxy(10,-20,"Tutorial");
	setviewport(0,80,639,479,1);
	x=205; y=125;
	for(;;)
	{
		clearviewport();
		setcolor(BLUE);
		settextstyle(SIMPLEX_FONT,0,1);
		outtextxy(5,25,"1. Use W (to go up) ,A (to go left), S (to go down) ,D (to go left)");
		outtextxy(5,45,"   to move the cursor");
		if(rrr==1 && lll==1 && uuu==1 && ddd==1)
		{
			outtextxy(5,75,"2. While inputting something first click(press enter) on the tag name");
			setcolor(MAGENTA);
			outtextxy(200,300,"NAME :");
			setcolor(BLUE);
		}
		if(ti!=0)
		{
			settextstyle(SIMPLEX_FONT,0,1);
			outtextxy(5,105,"3. Now input and press enter when you are finished inputting");
			settextstyle(SCRIPT_FONT,0,3);
			setcolor(MAGENTA);
			output(250,300,ti2,0);
			setcolor(BLUE);
			settextstyle(SIMPLEX_FONT,0,1);
			outtextxy(5,135,"4. Now you can move the cursor again");
			setcolor(RED);
			outtextxy(5,155,"5. You can always use the following tips :");
			outtextxy(5,175,"     i)   'b' -> go back");
			outtextxy(5,195,"     ii)  'c' -> open cart");
			outtextxy(5,207,"     iii) 'e' -> exit");
			settextstyle(SIMPLEX_FONT,0,2);
			setcolor(BLUE);
			outtextxy(10,250,"Press 'n' to exit tutorial");
		}

		crsr();
		if(m==100)
			rrr=1;
		else if(m==97)
			lll=1;
		else if(m==115)
			uuu=1;
		else if(m==119)
			ddd=1;
		else if(m=='n')
			break;
		else if(m==13)
		{
			if(y>=310 && y<=315 && x>=200 && x<=245)
			{
				settextstyle(SIMPLEX_FONT,0,1);
				setcolor(BLUE);
				outtextxy(5,105,"3. Now input and press enter when you are finished inputting");
				settextstyle(SCRIPT_FONT,0,3);
				setcolor(MAGENTA);
				input(250,300,ti2,0);
				ti++;
			}
		}
	}
}

void main()
{

	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");    //initialising the graphics screen
	cleardevice();
	setbkcolor(CYAN);

	loading_page();
	getch();
	tutorial();

	setviewport(0,0,639,479,1);
	cleardevice();

	//login_page
	login:

	cleardevice();

	//making the cup
	setcolor(DARKGRAY);
	rectangle(0,0,640,480);
	ellipse(0,200,270,90,230,20);
	arc(0,200,270,0,230);
	arc(228,330,192,107,45);
	arc(228,330,203,97,65);
	setfillstyle(SOLID_FILL,GREEN);
	floodfill(200,250,DARKGRAY);
	floodfill(278,330,DARKGRAY);
	setcolor(RED);
	settextstyle(COMPLEX_FONT,0,9);
	outtextxy(10,-20,"Login");
	setfillstyle(SOLID_FILL,LIGHTCYAN);

	setviewport(300,150,630,470,1);
	for(;;)
	{
		clearviewport();

		settextstyle(SIMPLEX_FONT,0,3);
		setcolor(BLUE);
		outtextxy(5,50,"Username :");
		outtextxy(5,80,"Password :");
		settextstyle(SMALL_FONT,0,5);
		outtextxy(5,160,"Don't have an account already ? click here");
		if(tu!=0)	//if entered username
		{
			settextstyle(SCRIPT_FONT,0,3);
			setcolor(MAGENTA);
			output(120,50,temp.username,0);
		}
		if(tp!=0)	//if entered password
		{
			settextstyle(SCRIPT_FONT,0,3);
			setcolor(MAGENTA);
			output(120,80,temp.password,1);
		}
		if(tp!=0 && tu!=0)	//if entered both
		{
			bar3d(100,130,170,160,10,1);
			settextstyle(TRIPLEX_FONT,0,3);
			setcolor(GREEN);
			outtextxy(108,130,"DONE");
		}
		crsr();
		if(m==13)
		{
			settextstyle(SCRIPT_FONT,0,3);
			if(x>=0 && x<=100 && y>=60 && y<=70)
			{
				setcolor(MAGENTA);
				input(120,50,temp.username,0);
				tu++;
			}
			else if(x>=0 && x<100 && y>=90 && y<=105)
			{
				setcolor(MAGENTA);
				input(120,80,temp.password,1);
				tp++;
			}
			else if(x>=295 && x<=320 && y>=160 && y<=165)
				goto rgstr;
			else if(x>=100 && x<=170 && y>=130 && y<=160)
			{
				clearviewport();
				settextstyle(EUROPEAN_FONT,0,3);
				outtextxy(0,0,"..FATAL ERROR..");
				settextstyle(EUROPEAN_FONT,0,2);
				outtextxy(0,50,"Looks like you");
				outtextxy(0,100,"dont have an");
				outtextxy(0,150,"Account");
				delay(3000);
				goto rgstr;
			}
		}
	}

	//register_page
	rgstr:
	closegraph();    //clearing memory for new data to be entered
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	setbkcolor(CYAN);
	setcolor(DARKGRAY);

	//making the glass
	rectangle(0,0,640,480);
	ellipse(640,150,90,270,150,10);
	ellipse(640,220,90,270,135,12);
	line(490,150,550,450);
	ellipse(640,450,180,270,90,5);
	line(640,450,470,110);
	line(640,430,474,102);
	line(470,110,410,110);
	line(474,102,410,102);
	setfillstyle(SOLID_FILL,BROWN);
	floodfill(635,420,DARKGRAY);
	floodfill(630,450,DARKGRAY);
	floodfill(630,220,DARKGRAY);
	floodfill(507,220,DARKGRAY);
	setcolor(RED);
	settextstyle(COMPLEX_FONT,0,9);
	outtextxy(10,-20,"Register");
	setviewport(30,130,450,400,1);
	for(;;)
	{
		clearviewport();

		settextstyle(SIMPLEX_FONT,0,3);
		setcolor(BLUE);
		outtextxy(40,50,"Name :");
		outtextxy(40,80,"Address :");
		outtextxy(40,110,"Phone No :");
		outtextxy(40,140,"Username");
		outtextxy(40,170,"Password");
		if(un!=0)  //name
		{
			settextstyle(SCRIPT_FONT,0,3);
			setcolor(MAGENTA);
			output(120,50,user.name,0);
		}
		if(ua!=0)  //address
		{
			settextstyle(SCRIPT_FONT,0,3);
			setcolor(MAGENTA);
			output(140,80,user.address,0);
		}
		if(up!=0)  //phone
		{
			settextstyle(SCRIPT_FONT,0,3);
			setcolor(MAGENTA);
			output(155,110,user.phone,0);
		}
		if(uu!=0)  //username
		{
			settextstyle(SCRIPT_FONT,0,3);
			setcolor(MAGENTA);
			output(160,140,user.username,0);
		}
		if(upa!=0) //password
		{
			settextstyle(SCRIPT_FONT,0,3);
			setcolor(MAGENTA);
			output(160,170,user.password,1);
		}
		if(un!=0 && ua!=0 && up!=0 && uu!=0 && upa!=0) //all entered
		{
			setcolor(LIGHTCYAN);
			bar3d(125,220,200,260,10,1);
		}
		if(uns==2)  //if name has digits
		{
			settextstyle(COMPLEX_FONT,0,4);
			setcolor(RED);
			outtextxy(30,50,"! ");
		}
		if(ups==2)  //if phone number has characters
		{
			settextstyle(COMPLEX_FONT,0,4);
			setcolor(RED);
			outtextxy(30,110,"! ");
		}

		crsr();
		if(m==13)
		{
			settextstyle(SCRIPT_FONT,0,3);

			//inputting different things
			if(x>=40 && x<=100 && y>=60 && y<=70)
			{
				setcolor(MAGENTA);
				input(120,50,user.name,0);
				un++;
				uns=0;
				for(int i=0; user.name[i]!='\0'; ++i)
				{
					if(!isalpha(user.name[i]))
						if(user.name[i]!=' ')
							uns=1;
				}
			}
			else if(x>=40 && x<=120 && y>=90 && y<=100)
			{
				setcolor(MAGENTA);
				input(140,80,user.address,0);
				ua++;
			}
			else if(x>=40 && x<=135 && y>=120 && y<=130)
			{
				setcolor(MAGENTA);
				input(155,110,user.phone,0);
				up++;
				ups=0;
				for(int i=0; user.phone[i]!='\0'; ++i)
				{
					if(!isdigit(user.phone[i]))
						ups=1;
				}
			}
			else if(x>=40 && x<=140 && y>=150 && y<=160)
			{
				setcolor(MAGENTA);
				input(160,140,user.username,0);
				uu++;
			}
			else if(x>=40 && x<=140 && y>=180 && y<=190)
			{
				setcolor(MAGENTA);
				input(160,170,user.password,1);
				upa++;
			}
			else if(x>=125 && x<=200 && y>=220 && y<=260)
			{
				if(uns!=0)
				{
					un=0;
					settextstyle(COMPLEX_FONT,0,4);
					setcolor(RED);
					outtextxy(30,50,"! ");
					uns=2;
				}
				if(ups!=0)
				{
					up=0;
					settextstyle(COMPLEX_FONT,0,4);
					setcolor(RED);
					outtextxy(30,110,"! ");
					ups=2;
				}
				if(ups==0 && uns==0)
					goto menu;
			}
		}
	}

	//menu_page
	menu:
	closegraph();

	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	setbkcolor(CYAN);
	setcolor(RED);
	settextstyle(1,0,3);
	rectangle(0,0,640,480);

	//making the menu screen

	setviewport(0,0,639,65,1);
	setcolor(BLUE);
	settextstyle(GOTHIC_FONT,0,5);
	outtextxy(5,5,"Central Perk");

	line(0,10,400,10);      //upar vali line
	line(450,10,470,10);    //upar vali line returns
	line(520,10,639,10);    //upar vali line vapis se

	rectangle(470,0,520,50); //dibbe
	line(480,50,480,65);     //dibbe ka design
	line(510,50,510,65);     //dibbe ka design 2
	line(495,55,480,65);     //dibbe ka design 3
	line(495,55,510,65);     //dibbe ka design 4
	arc(495,40,0,180,15);	 //bandabody
	circle(495,13,8);        //shakal

	rectangle(400,0,450,50); //dibba 2
	line(410,50,410,65);     //dibbe 2 ka design
	line(440,50,440,65);     //dibbe 2 ka design 2
	line(425,55,410,65);     //dibbe 2 ka design 3
	line(425,55,440,65);     //dibbe 2 ka design 4

	line(415,30,435,30);	//cartbase

	settextstyle(DEFAULT_FONT,0,1);
	char C[10];
	sprintf(C,"%d",crt);
	outtextxy(420,15,C);

	line(415,30,405,15);
	line(435,30,445,15);	//tan t = +ve
	line(445,15,450,15);
	circle(417,37,3);
	circle(435,37,3);

	setviewport(0,450,639,479,1);
	line(0,0,640,0);    //navigatioin bar
	line(215,0,215,30);  //navigation bar ki lines
	line(430,0,430,30);  //navigation bar ki lines 2

	ellipse(105,15,275,90,15,7); 	//back button
	line(105,8,103,8);          //back button 2
	line(103,8,107,11);		//back button arrow
	line(103,8,107,5);          //back button arrow 2

	line(320,15,320,25);	 //home button
	line(340,15,340,25);   //home button 2
	line(330,6,312,17);   //home button roof
	line(330,6,348,17);   //home button roof 2

	line(525,15,545,15);   //options button
	line(525,10,545,10);   //options button 2
	line(525,20,545,20);   //options button 3

	setviewport(0,65,639,449,1);
	line(20,185,20,205); //seedhi
	line(20,185,5,195);  //tan theta = +ve
	line(20,205,5,195);  //tan theta = -ve

	line(619,185,619,205);
	line(619,185,634,195);
	line(619,205,634,195);

	between:        //if the person is in between
	setviewport(0,65,639,449,1);
	for(;;)
	{
		clearviewport();
		setcolor(RED);
		line(20,185,20,205); //seedhi
		line(20,185,5,195);  //tan theta=+ve
		line(20,205,5,195);  //tan theta = -ve

		line(619,185,619,205);    //arrow right
		line(619,185,634,195);    //arrow right 2
		line(619,205,634,195);    //arrow right 3

		if(w==0)
		{
			rectangle(100,100,530,350);
			settextstyle(1,0,4);
			outtextxy(280,115,"TEA");
			int a=190, b=-25;
			//cappuccino
			arc(160+a,175-b,170,225,150);
			arc(160+a,175-b,170,229,140);
			arc(60+a,175-b,315,10,150);
			arc(60+a,175-b,311,10,140);
			line(20+a,283-b,210+a,283-b);
			arc(218+a,205-b,238,96,45);
			arc(218+a,205-b,238,96,40);
			arc(20+a,288-b,90,270,5);
			arc(207+a,288-b,270,90,5);
			ellipse(29+a,318-b,33,105,40,25);
			ellipse(197+a,318-b,70,147,30,25);
			line(63+a,305-b,170+a,305-b);
			arc(17+a,148-b,358,178,5);
			arc(203+a,148-b,0,178,5);
			line(20+a,148-b,199+a,148-b);
		}
		else if(w==1)
		{
			rectangle(100,100,530,350);
			settextstyle(1,0,4);
			outtextxy(265,115,"COFFEE");
			int a=190, b=-25;
			//cappuccino
			arc(160+a,175-b,170,225,150);
			arc(160+a,175-b,170,229,140);
			arc(60+a,175-b,315,10,150);
			arc(60+a,175-b,311,10,140);
			line(20+a,283-b,210+a,283-b);
			arc(218+a,205-b,238,96,45);
			arc(218+a,205-b,238,96,40);
			arc(20+a,288-b,90,270,5);
			arc(207+a,288-b,270,90,5);
			ellipse(29+a,318-b,33,105,40,25);
			ellipse(197+a,318-b,70,147,30,25);
			line(63+a,305-b,170+a,305-b);
			arc(17+a,148-b,358,178,5);
			arc(203+a,148-b,0,178,5);
			line(20+a,148-b,199+a,148-b);
		}
		else if(w==2)
		{
			rectangle(100,100,530,350);
			settextstyle(1,0,4);
			outtextxy(230,105,"MILK SHAKE");
			int a=125, b=-95;
			line(165+a,95-b,165+a,240-b);	//wrongline
			line(265+a,95-b,265+a,240-b);	//rightline
			line(125+a,95-b,265+a,95-b); 	//swarg
			line(165+a,240-b,265+a,240-b);	//paataal
			line(165+a,95-b,145+a,75-b);	//swargseupperWRONG
			line(145+a,75-b,125+a,95-b);
			line(125+a,95-b,125+a,220-b);
			line(125+a,220-b,165+a,240-b);
			line(265+a,95-b,245+a,75-b);
			line(245+a,75-b,145+a,75-b);
			line(125+a,150-b,165+a,170-b);
			line(125+a,190-b,165+a,210-b);
			rectangle(165+a,170-b,265+a,210-b);
			rectangle(245+a,75-b,145+a,60-b);
		}


		crsr();
		if(y<-5)
		{
			y=65;
			goto up;
		}
		else if(y>384)
		{
			y=0;
			goto below;
		}
		if(m==13)
		{
			//changing between items
			if(x>=620 && x<=630 && y>=185 && y<=195)
			{
				if(w==0)
					w=1;
				else if(w==1)
					w=2;
				else if(w==2)
					w=0;
			}

			//opening items
			else if(x>=5 && x<=15 && y>=185 && y<=195)
			{
				if(w==0)
					w=2;
				else if(w==2)
					w=1;
				else if(w==1)
					w=0;
			}
			else if(x>=100 && x<=520 && y>=100 && y<=340)
				goto items;
		}
		else if(m=='c')
			goto cart;

	}

	up:        //if the person is in the top row
	setviewport(0,0,639,65,1);
	for(;;)
	{
		clearviewport();

		setcolor(BLUE);
		settextstyle(GOTHIC_FONT,0,5);
		outtextxy(5,5,"Central Perk");

		setcolor(RED);
		line(0,10,400,10);      //upar vali line
		line(450,10,470,10);    //upar vali line returns
		line(520,10,639,10);    //upar vali line vapis se

		rectangle(470,0,520,50); //dibba
		line(480,50,480,65);     //dibbe ka design
		line(510,50,510,65);     //dibbe ka design 2
		line(495,55,480,65);     //dibbe ka design 3
		line(495,55,510,65);     //dibbe ka design 4
		arc(495,40,0,180,15);	 //bandabody
		circle(495,13,8);        //shakal

		rectangle(400,0,450,50); //dibba 2
		line(410,50,410,65);     //dibbe 2 ka design
		line(440,50,440,65);     //dibbe 2 ka design 2
		line(425,55,410,65);     //dibbe 2 ka design 3
		line(425,55,440,65);     //dibbe 2 ka design 4

		line(415,30,435,30);	//cartbase

		settextstyle(DEFAULT_FONT,0,1);
		char C[10];
		sprintf(C,"%d",crt);
		outtextxy(420,15,C);

		line(415,30,405,15);
		line(435,30,445,15);	//tan t = +ve
		line(445,15,450,15);
		circle(417,37,3);
		circle(435,37,3);


		crsr();
		if(y>65)
		{
			y=0;
			goto between;
		}
		if(m==13)
		{
			//entering details
			if(x>=470 && x<=515 && y>=0 && y<=45)
				goto details;
			//entering cart
			else if(x>=400 && x<=445 && y>=0 && y<=45)
				goto cart;
		}
		else if(m=='c')
			goto cart;

	}

	below:  //if the person is in the navigation bar
	setviewport(0,450,639,479,1);
	for(;;)
	{
		clearviewport();
		setcolor(RED);
		line(0,0,640,0);    //navigatioin bar
		line(215,0,215,30);  //navigation bar ki lines
		line(430,0,430,30);  //navigation bar ki lines 2

		ellipse(105,15,275,90,15,7); 	//back button
		line(105,8,103,8);          //back button 2
		line(103,8,107,11);		//back button arrow
		line(103,8,107,5);          //back button arrow 2

		line(320,15,320,25);	 //home button
		line(340,15,340,25);   //home button 2
		line(330,6,312,17);   //home button roof
		line(330,6,348,17);   //home button roof 2

		line(525,15,545,15);   //options button
		line(525,10,545,10);   //options button 2
		line(525,20,545,20);   //options button 3


		crsr();
		if(y<-5)
		{
			y=384;
			goto between;
		}
		if(m==13)
		{
			if(x>=0 && x<=205)
			{/*does nothing*/}
			else if(x>=220 && x<=420)
			{/*does nothing*/}
			else if(x>=435 && x<=630)
			{exit(0);}
		else if(m=='c')
			goto cart;
		}
	}

	//if person enters details
	details:
	for(i=0; i<=350; i++)
	{
		setviewport(15,0,615,0+i,1);
		clearviewport();
		setcolor(RED);
		rectangle(0,0,599,349);
		settextstyle(COMPLEX_FONT,0,5);
		outtextxy(25,5,"PERSONAL DETAILS");
		circle(170-d,190,105);
		settextstyle(SIMPLEX_FONT,0,3);
		outtextxy(300-d,110,"NAME :");		//300,110
		outtextxy(300-d,160,"ADDRESS :");	//300,160
		outtextxy(300-d,210,"PHONE NO :");	//300,210

		settextstyle(TRIPLEX_FONT,0,1);
		output(300-d+110,110,user.name,0);
		output(300-d+110,160,user.address,0);
		output(300-d+110,210,user.phone,0);

		outtextxy(10,320,"Press 'b' to go back");

		delay(10);
	}
	v=getch();
	if(v=='b' || v=='B')
		goto menu;



	//if person enters cart
	cart:
	for(i=0; i<=415; i++)  //animation
	{
		setviewport(15,0,615,0+i,1);
		setcolor(RED);
		rectangle(0,0,599,350);

		rectangle(470-d,350,520-d,400);
		line(480-d,400,480-d,415);
		line(510-d,400,510-d,415);
		line(495-d,405,480-d,415);
		line(495-d,405,510-d,415);
		int x=385,y=360;
		ellipse(105+x-d,15+y,275,90,15,7);
		line(105+x-d,8+y,103+x-d,8+y);
		line(103+x-d,8+y,107+x-d,11+y);
		line(103+x-d,8+y,107+x-d,5+y);
		delay(10);
		clearviewport();
	}
	setviewport(15,0,615,415,1);
	for(;;)
	{
		clearviewport();

		setcolor(RED);
		rectangle(0,0,599,350);

		rectangle(470-d,350,520-d,400);
		line(480-d,400,480-d,415);
		line(510-d,400,510-d,415);
		line(495-d,405,480-d,415);
		line(495-d,405,510-d,415);
		int x=385,y=360;
		ellipse(105+x-d,15+y,275,90,15,7);
		line(105+x-d,8+y,103+x-d,8+y);
		line(103+x-d,8+y,107+x-d,11+y);
		line(103+x-d,8+y,107+x-d,5+y);

		if(crt==0)
		{
			settextstyle(3,0,2);
			outtextxy(200,100,"Nothing to Show");
		}
		else
		{
			goto cart_main;
		}

		crsr();
		if(m=='b')
			goto menu;
	}

	//refreshing the cart
	crtrfrsh:
	setviewport(0,0,639,65,1);
	clearviewport();
	setcolor(RED);
	line(0,10,400,10);      //upar vali line
	line(450,10,470,10);    //upar vali line returns
	line(520,10,639,10);    //upar vali line vapis se

	rectangle(470,0,520,50); //dibba
	line(480,50,480,65);     //dibbe ka design
	line(510,50,510,65);     //dibbe ka design 2
	line(495,55,480,65);     //dibbe ka design 3
	line(495,55,510,65);     //dibbe ka design 4
	arc(495,40,0,180,15);	 //bandabody
	circle(495,13,8);        //shakal

	rectangle(400,0,450,50); //dibba 2
	line(410,50,410,65);     //dibbe 2 ka design
	line(440,50,440,65);     //dibbe 2 ka design 2
	line(425,55,410,65);     //dibbe 2 ka design 3
	line(425,55,440,65);     //dibbe 2 ka design 4

	line(415,30,435,30);	//cartbase
	settextstyle(DEFAULT_FONT,0,1);
	sprintf(C,"%d",crt);
	outtextxy(420,15,C);
	line(415,30,405,15);
	line(435,30,445,15);	//tan t = +ve
	line(445,15,450,15);
	circle(417,37,3);
	circle(435,37,3);


	//if the person enters any item
	items:
	setviewport(0,65,639,449,1);
	clearviewport();

	if(w==0)
	{
		//tea
		for(;;)
		{
			clearviewport();

			settextstyle(2,0,COMPLEX_FONT);
			outtextxy(200,50,"Black Tea");
			outtextxy(200,178,"Green Tea");
			outtextxy(200,306,"Adrak Tea");

			setcolor(DARKGRAY);
			bar3d(420,50,540,85,10,1);
			bar3d(420,178,540,213,10,1);
			bar3d(420,306,540,341,10,1);
			outtextxy(375,70,"95 /-");
			outtextxy(375,198,"85 /-");
			outtextxy(375,326,"100 /-");
			outtextxy(425,50,"Buy Now");
			outtextxy(425,178,"Buy Now");
			outtextxy(425,306,"Buy Now");

			line(0,5,639,5);
			line(0,128,639,128);
			line(0,256,639,256);

			cup1(90,60);
			cup2(90,180);
			cup2(90,300);


			crsr();
			if(m=='b')
				goto menu;
			else if(y<=-5)
			{
				y=65;
				goto up01;
			}
			else if(y>=389)
			{
				y=0;
				goto below01;
			}
			else if(m==13)
			{
				if(x>=420 && x<=540 && y>=50 && y<=85)
				{ //adding things to cart
					popup();
					outtextxy(200,200,"Your BLACK TEA added to cart");
					delay(2000);
					tb++;
					crt++;
					goto crtrfrsh;
				}
				else if(x>=420 && x<=540 && y>=180 && y<=205)
				{
					popup();
					outtextxy(200,200,"Your GREEN TEA added to cart");
					delay(2000);
					tg++;
					crt++;
					goto crtrfrsh;
				}
				else if(x>=420 && x<=540 && y>=306 && y<=341)
				{
					popup();
					outtextxy(200,200,"Your ADRAK TEA added to cart");
					delay(2000);
					ta++;
					crt++;
					goto crtrfrsh;
				}
			}
			else if(m=='c')
				goto cart;

		}

	}
	else if(w==1)
	{
		//coffee
		for(;;)
		{
			clearviewport();

			settextstyle(2,0,COMPLEX_FONT);
			outtextxy(200,50,"Cappuccino");
			outtextxy(200,178,"Tall Latte");
			outtextxy(200,306,"Expresso");

			setcolor(DARKGRAY);
			bar3d(420,50,540,85,10,1);
			bar3d(420,178,540,213,10,1);
			bar3d(420,306,540,341,10,1);
			outtextxy(375,70,"195 /-");
			outtextxy(375,198,"100 /-");
			outtextxy(375,326,"80 /-");
			outtextxy(425,50,"Buy Now");
			outtextxy(425,178,"Buy Now");
			outtextxy(425,306,"Buy Now");

			line(0,1,639,1);
			line(0,128,639,128);
			line(0,256,639,256);

			cup1(90,60);
			cup1(90,180);
			cup1(90,300);

			crsr();
			if(m=='b')
				goto menu;
			else if(m==13)
			{
				if(x>=420 && x<=540 && y>=50 && y<=85)
				{  //adding things to cart
					popup();
					outtextxy(200,200,"Your CAPPUCCINO added to cart");
					delay(2000);
					cc++;
					crt++;
					goto crtrfrsh;
				}
				else if(x>=420 && x<=540 && y>=180 && y<=205)
				{
					popup();
					outtextxy(200,200,"Your TALL LATTE added to cart");
					delay(2000);
					ct++;
					crt++;
					goto crtrfrsh;
				}
				else if(x>=420 && x<=540 && y>=306 && y<=341)
				{
					popup();
					outtextxy(200,200,"Your EXPRESSO added to cart");
					delay(2000);
					ce++;
					crt++;
					goto crtrfrsh;
				}
			}
			else if(y<=-5)
			{
				y=65;
				goto up01;
			}
			else if(y>=389)
			{
				y=0;
				goto below01;
			}
			else if(m=='c')
				goto cart;

		}
	}
	else if(w==2)
	{
		//milkshake
		for(;;)
		{
			clearviewport();

			settextstyle(2,0,COMPLEX_FONT);
			outtextxy(200,50,"Chocolate");
			outtextxy(200,178,"Oreo");
			outtextxy(200,306,"Vanilla");

			line(0,1,639,1);
			line(0,128,639,128);
			line(0,256,639,256);

			setcolor(DARKGRAY);
			bar3d(420,50,540,85,10,1);
			bar3d(420,178,540,213,10,1);
			bar3d(420,306,540,341,10,1);
			outtextxy(375,70,"90 /-");
			outtextxy(375,198,"120 /-");
			outtextxy(375,326,"80 /-");
			outtextxy(425,50,"Buy Now");
			outtextxy(425,178,"Buy Now");
			outtextxy(425,306,"Buy Now");

			crsr();
			if(m=='b')
				goto menu;
			else if(m==13)
			{
				if(x>=420 && x<=540 && y>=50 && y<=85)
				{	//adding things to the cart
					popup();
					outtextxy(200,200,"Your CHOCOLATE MILKSHAKE added to cart");
					delay(2000);
					mc++;
					crt++;
					goto crtrfrsh;
				}
				else if(x>=420 && x<=540 && y>=180 && y<=205)
				{
					popup();
					outtextxy(200,200,"Your OREO MILKSHAKE added to cart");
					delay(2000);
					mo++;
					crt++;
					goto crtrfrsh;
				}
				else if(x>=420 && x<=540 && y>=306 && y<=341)
				{
					popup();
					outtextxy(200,200,"Your VANILLA MILKSHAKE added to cart");
					delay(2000);
					mv++;
					crt++;
					goto crtrfrsh;
				}
			}
			else if(y<-5)
			{
				y=65;
				goto up01;
			}
			else if(y>=389)
			{
				y=0;
				goto below01;
			}
			else if(m=='c')
				goto cart;

		}
	}

	up01:   //going up while in items
	setviewport(0,0,639,65,1);
	for(;;)
	{
		clearviewport();

		setcolor(BLUE);
		settextstyle(GOTHIC_FONT,0,5);
		outtextxy(5,5,"Central Perk");

		setcolor(RED);
		line(0,10,400,10);      //upar vali line
		line(450,10,470,10);    //upar vali line returns
		line(520,10,639,10);    //upar vali line vapis se

		rectangle(470,0,520,50); //dibba
		line(480,50,480,65);     //dibbe ka design
		line(510,50,510,65);     //dibbe ka design 2
		line(495,55,480,65);     //dibbe ka design 3
		line(495,55,510,65);     //dibbe ka design 4
		arc(495,40,0,180,15);	 //bandabody
		circle(495,13,8);        //shakal

		rectangle(400,0,450,50); //dibba 2
		line(410,50,410,65);     //dibbe 2 ka design
		line(440,50,440,65);     //dibbe 2 ka design 2
		line(425,55,410,65);     //dibbe 2 ka design 3
		line(425,55,440,65);     //dibbe 2 ka design 4

		line(415,30,435,30);	//cartbase

		settextstyle(DEFAULT_FONT,0,1);
		char C[10];
		sprintf(C,"%d",crt);
		outtextxy(420,15,C);

		line(415,30,405,15);
		line(435,30,445,15);	//tan t = +ve
		line(445,15,450,15);
		circle(417,37,3);
		circle(435,37,3);


		crsr();
		if(y>65)
		{
			y=0;
			goto items;
		}
		if(m==13)
		{
			if(x>=470 && x<=515 && y>=0 && y<=45)
				goto details;
			else if(x>=400 && x<=445 && y>=0 && y<=45)
				goto cart;
		}
		else if(m=='c')
			goto cart;

	}

	below01:   //going below while in items
	setviewport(0,450,639,479,1);
	for(;;)
	{
		clearviewport();
		setcolor(RED);
		line(0,0,640,0);    //navigatioin bar
		line(215,0,215,30);  //navigation bar ki lines
		line(430,0,430,30);  //navigation bar ki lines 2

		ellipse(105,15,275,90,15,7); 	//back button
		line(105,8,103,8);          //back button 2
		line(103,8,107,11);		//back button arrow
		line(103,8,107,5);          //back button arrow 2

		line(320,15,320,25);	 //home button
		line(340,15,340,25);   //home button 2
		line(330,6,312,17);   //home button roof
		line(330,6,348,17);   //home button roof 2

		line(525,15,545,15);   //options button
		line(525,10,545,10);   //options button 2
		line(525,20,545,20);   //options button 3


		crsr();
		if(y<-5)
		{
			y=384;
			goto items;
		}
		if(m==13)
		{
			if(x>=0 && x<=205)
			{goto menu;}
			else if(x>=220 && x<=420)
			{goto menu;}
			else if(x>=435 && x<=630)
			{exit(0);}
		}
		else if(m=='c')
			goto cart;

	}


	//if there's something in the cart
	cart_main:

	closegraph();
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	setbkcolor(CYAN);
	setcolor(BLUE);
	settextstyle(COMPLEX_FONT,0,9);
	outtextxy(10,-20,"Cart");
	setviewport(0,100,639,479,1);
	if(tb!=0)
		cost+=(tb*95);
	if(tg!=0)
		cost+=(tg*85);
	if(ta!=0)
		cost+=(ta*100);
	if(cc!=0)
		cost+=(cc*195);
	if(ct!=0)
		cost+=(ct*100);
	if(ce!=0)
		cost+=(ce*80);
	if(mc!=0)
		cost+=(mc*90);
	if(mo!=0)
		cost+=(mo*120);
	if(mv!=0)
		cost+=(mv*95);
	for(;;)
	{
		clearviewport();

		//printing the bill
		settextstyle(SMALL_FONT,0,6);
		setcolor(MAGENTA);
		outtextxy(20,0,"Name of Item");
		outtextxy(220,0,"Price ");
		outtextxy(420,0,"Quantity");
		setcolor(BLUE);
		int g=30;
		if(tb!=0)
		{
			outtextxy(20,g,"BLACK TEA");
			outtextxy(220,g,"95 /-");
			sprintf(C,"%d",tb);
			outtextxy(420,g,C);
			g+=40;
		}
		if(tg!=0)
		{
			outtextxy(20,g,"GREEN TEA");
			outtextxy(220,g,"85/-");
			sprintf(C,"%d",tg);
			outtextxy(420,g,C);
			g+=40;
		}
		if(ta!=0)
		{
			outtextxy(20,g,"ADRAK TEA");
			outtextxy(220,g,"100 /-");
			sprintf(C,"%d",ta);
			outtextxy(420,g,C);
			g+=40;
		}
		if(cc!=0)
		{
			outtextxy(20,g,"CAPPUCCINO");
			outtextxy(220,g,"195 /-");
			sprintf(C,"%d",cc);
			outtextxy(420,g,C);
			g+=40;
		}
		if(ct!=0)
		{
			outtextxy(20,g,"TALL LATTE");
			outtextxy(220,g,"100 /-");
			sprintf(C,"%d",ct);
			outtextxy(420,g,C);
			g+=40;
		}
		if(ce!=0)
		{
			outtextxy(20,g,"EXPRESSO");
			outtextxy(220,g,"80 /-");
			sprintf(C,"%d",ce);
			outtextxy(420,g,C);
			g+=40;
		}
		if(mc!=0)
		{
			outtextxy(20,g,"CHOC. MILKSHAKE");
			outtextxy(220,g,"90 /-");
			sprintf(C,"%d",mc);
			outtextxy(420,g,C);
			g+=40;
		}
		if(mo!=0)
		{
			outtextxy(20,g,"OREO MILKSHAKE");
			outtextxy(220,g,"120 /-");
			sprintf(C,"%d",mo);
			outtextxy(420,g,C);
			g+=40;
		}
		if(mv!=0)
		{
			outtextxy(20,g,"VANILLA MILKSHAKE");
			outtextxy(220,g,"95 /-");
			sprintf(C,"%d",mv);
			outtextxy(420,g,C);
			g+=40;
		}
		setcolor(MAGENTA);
		settextstyle(SMALL_FONT,0,6);
		outtextxy(40,g+20,"Grand Total :");
		sprintf(C,"%d",cost);
		outtextxy(170,g+20,C);

		bar3d(250,300,350,350,10,1);
		outtextxy(270,310,"Continue");


		crsr();
		if(m==13)
		{
			if(x>=250 && x<=350 && y>=300 && y<=350)
				goto purchase;
		}
		if(m=='b')
			goto menu;
	}

	//if the person continues to purchase
	purchase:
	closegraph();
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	cleardevice();
	setbkcolor(CYAN);
	setcolor(DARKGRAY);
	for(;;)
	{
		settextstyle(SANS_SERIF_FONT,0,5);
		outtextxy(20,20,"Placing your order ...");
		setviewport(0,200,639,479,1);
		int maxx = getmaxx();
		int midy = getmaxy() / 2;

		int x1 = 0, y1 = midy + 43;
		int x2 = maxx, y2 = midy + 43;

		for (i = 0; i < maxx - 130; i = i + 3)
		{
			clearviewport();

			setcolor(WHITE);
			line(x1, y1, x2, y2);

			setcolor(LIGHTGRAY);
			setfillstyle(SOLID_FILL, LIGHTGRAY);
			line(0 + i, midy, 80 + i, midy);
			line(80 + i, midy, 80 + i, midy + 30);
			line(80 + i, midy + 30, 47 + i, midy + 30);
			line(0 + i, midy + 30, 23 + i, midy + 30);
			line(0 + i, midy + 30, 0 + i, midy);
			arc(35 + i, midy + 30, 0, 180, 12);
			floodfill(5 + i, midy + 5, LIGHTGRAY);

			setcolor(YELLOW);
			setfillstyle(SOLID_FILL, YELLOW);
			line(81 + i, midy + 30, 81 + i, midy - 40);
			line(82 + i, midy - 40, 111 + i, midy - 40);
			line(111 + i, midy - 40, 126 + i, midy - 10);
			line(126 + i, midy - 10, 126 + i, midy + 30);
			line(126 + i, midy + 30, 117 + i, midy + 30);
			line(93 + i, midy + 30, 81 + i, midy + 30);
			arc(105 + i, midy + 30, 0, 180, 12);

			line(87 + i, midy - 5, 118 + i, midy - 5);
			line(87 + i, midy - 5, 87 + i, midy - 30);
			line(87 + i, midy - 30, 106 + i, midy - 30);
			line(106 + i, midy - 30, 118 + i, midy - 5);
			floodfill(85 + i, midy + 25, YELLOW);

			setcolor(DARKGRAY);
			if (i % 2 == 0)
				setfillstyle(SLASH_FILL, DARKGRAY);
			else
				setfillstyle(BKSLASH_FILL, DARKGRAY);

			circle(35 + i, midy + 30, 8);
			circle(105 + i, midy + 30, 8);
			floodfill(35 + i, midy + 30, DARKGRAY);
			floodfill(105 + i, midy + 30, DARKGRAY);

			delay(50);
		}
		cleardevice();
		setviewport(0,0,639,479,1);
		outtextxy(50,140,"Thank You for choosing us");
		randomize();
		int f=random(3000)+1000;
		settextstyle(SMALL_FONT,0,7);
		outtextxy(50,300,"Your package with order ID :");
		sprintf(C,"%d",f);
		settextstyle(SMALL_FONT,0,9);
		setcolor(RED);
		outtextxy(50,330,C);
		settextstyle(SMALL_FONT,0,7);
		setcolor(DARKGRAY);
		outtextxy(50,370,"Will reach you within one hour");
		delay(8000);
		crt=tb=tg=ta=cc=ct=ce=mc=mv=mo=cost=0;  //initialising the cart
		goto menu;   //returning to menu
	}
}