#include<string.h>
#include<math.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
#include<iostream.h>
#include<process.h>
#include<time.h>
int temp_life;
int i=8,j=18,a[20][20],ri,rj,max=2,speed=2,op_graph=0;
int score=0,nbox=5,life=5,level=1;

clock_t start, end;
void draw(int);
void drawbox(int);
void decr();
void genbox();
void shotbox(int);
void strt();
void putscore(int);
void lifebox(int );

int global=9;int open_times=0,prev_card=0,comp=0;

void card(int left,int top,int right,int bottom)
{
int x,y;
long int er=0;
if(global==9)
er=2000;
else
er=200;
for (long double g=0;g<er;g++)
{
		 x=random(right);
		 y=random(bottom);
		 if(x<left)
		 {
		 g--;
		 continue;
		 }

		 if(y<top)
		 {
		 g--;
		 continue;
		 }

		 int colors=random(15);

		 if(colors==1||colors==10)
		 {
		 g--;
		 continue;
		 }
		 setcolor(BLACK);
		 setfillstyle(SOLID_FILL,colors);
		 bar3d(x-4,y-4,x+4,y+4,1,1);



		 }
}
void open(int left[],int top[],int right[],int bottom[],int game[],int z)
{
sound(900);
delay(16);
nosound();


int x;
global=909;

		 for(int j=left[z],k=top[z],l=right[z],i=bottom[z];j<=right[z];j++)
		 {

		 setfillstyle(SOLID_FILL,BLACK);
		 bar(j+1,k,l+1,i+1);
		 setcolor(WHITE);
		 rectangle(j+1,k,l+1,i+1);
		 sound(j*20);
		 delay(5);
		 nosound();
		 }


		 int number=game[z];
		 char string[5];
		 setcolor(BLACK);
		 settextstyle(TRIPLEX_FONT,HORIZ_DIR,1);
		 outtextxy(left[z]+25,top[z]+35,itoa(number, string, 10));

		 if(open_times==0)
		 prev_card=z;

		 if(open_times==1)
		 if(game[z]==game[prev_card])
		 game[prev_card]=game[z]=-100;

		 open_times++;

		 if(open_times==2)
		 for(int k=0,t=19,b=99;k<4;k++,t+=120,b+=121)     //displaying cards
		 for(int i=0,l=55,r=125;i<4;i++,l+=150,r+=150)
		 {
		 sound(1000);
		 delay(60);
		 nosound();

		 if(k==0 && i==0) delay(90);
		 card(l,t,r,b);
		 open_times=0;
		 }

}

void menu(int a,int b,int c,int d,int e)
{
 setcolor(a);
 settextstyle(TRIPLEX_FONT,HORIZ_DIR,7);
 outtextxy(22,100,"1. BRICKS");

 setcolor(b);
 settextstyle(TRIPLEX_FONT,HORIZ_DIR,7);
 outtextxy(22,200,"2. PAIRS II");

 setcolor(c);
 settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
 outtextxy(15,300,"3. HELP");

 setcolor(d);
 settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
 outtextxy(15,350,"4. CREDITS");

 setcolor(e);
 settextstyle(TRIPLEX_FONT,HORIZ_DIR,4);
 outtextxy(15,400,"5. EXIT");

}

void open_graph()
{
    int   x_center = 320, y_center = 240, rad = 220;
    int   z,k,x[10],y[10];

    setcolor(4);
    for(int xi=30;xi>4;xi--)
    {
    sound(xi*20);
    settextstyle(GOTHIC_FONT,HORIZ_DIR,xi);
    outtextxy(xi,220,"Gaming begins here......");
    delay(320);
    cleardevice();
    }
    setcolor(10);
    for (z=0;z<10;z++)
    {
       x[z]=x_center+rad*cos(36*z*3.14159/180);
       y[z]=y_center+rad*sin(36*z*3.14159/180);
    }
    for (z=0;z<10;z++)
    for (k=0;k<10;k++)
		   {
		   sound(k*200);
		   delay(50);
		   line(x[z],y[z],x[k],y[k]);
		   nosound();
		   }

   for(int h=0;h<500;h++)
   {
   sound(h*9);
setfillstyle( random(12),random(15) );
bar3d(random(640),random(480),random(640),random(480),random(30),
random(18));
   }
  op_graph++;
}
void loading()
{
cleardevice();
  setcolor(13);
  settextstyle(TRIPLEX_FONT,HORIZ_DIR,0);
  setusercharsize(2, 1, 1, 1);
  outtextxy(138,198,"LOADING");              //LOADING
  setcolor(13);
settextstyle(TRIPLEX_FONT,HORIZ_DIR,0);
setusercharsize(2, 1, 1, 1);

setcolor(BLUE);
rectangle(119,199,421,231);
rectangle(118,198,422,232);
setcolor(10);
for(int ii=120;ii<=420;ii++)
{
line(ii,200,ii,230);
sound(ii+1500);
delay(10);
nosound();
}

}
void gameover()
{
cleardevice();
settextstyle(GOTHIC_FONT,0,10);
cout<<"a";
for(int g=0;g<450;g++)
{
sound(g*10);
delay(3);
setcolor(LIGHTRED);
if(g%20==0) {cleardevice();setcolor(12);}
outtextxy(70,g,"game over");
nosound();
}

}

void main()
{
 int gdriver = DETECT, gmode;
 initgraph(&gdriver, &gmode, "C:\TURBOC3\BGi");
 cleardevice();
 if(op_graph==0) open_graph();

 settextstyle(TRIPLEX_FONT,HORIZ_DIR,0);
 for(int si=1;si<10;si++)
 {
  sound(si*850);
  setcolor(LIGHTCYAN);
  setusercharsize(si,1,si,1);
  outtextxy(13,150,"GAME PACK");
  delay(250);
  nosound();
  cleardevice();
  }

 randomize();
 setfillstyle(3,RED);
 bar3d(0, 0,639,479, 0, 0);//background

 setcolor(WHITE);
 settextstyle(4,HORIZ_DIR,7);
 outtextxy(220,25,"MENU");

 char lion;
 int move=5;

 lion=getch();
 while(lion!=27)
 {

  if(lion==13)  break;
  if(lion=='P') move++;
  if(lion=='H') move--;

  if(move<1)move=5;
  if(move>5)move=1;

  if(move==1)  menu(10,8,8,8,8);
  if(move==2)  menu(8,10,8,8,8);
  if(move==3)  menu(8,8,10,8,8);          //7 gray 14-yellow
  if(move==4)  menu(8,8,8,10,8);
  if(move==5)  menu(8,8,8,8,10);

  lion=getch();
  sound(1700);
  delay(7);
  nosound();
 }
 cleardevice();
 if(move==5) exit(0);



 if(move==1)
 {
  //bricks video game shooting  prg.

 loading();

 int gd=DETECT,gm;
 initgraph(&gd,&gm,"D:\CPP\TC\BGI");

 setcolor(10);
 outtextxy(500,75,"score :");
 outtextxy(500,150,"level :");
 outtextxy(500,225,"Life");
 lifebox(10);
 putscore(10);
 strt();
 }
/*
  PAIRS II

*/
if(move==2)
{
int a[8],game[16],i=0,z=8,k,flag,temp,t,b,l,j=0,u=0,o=0,p=0;
int left[16],top[16],right[16],bottom[16];

randomize();

loading();

for(int ii=0;ii<=640;ii++)
line(ii,0,ii,480);

setcolor(1);
for(ii=0;ii<=640;ii++)
line(0,ii,640,ii);

setcolor(3);
for(ii=640;ii>=0;ii--)
line(ii,0,ii,480);

setcolor(BLUE);
for(ii=640;ii>=0;ii--)
line(0,ii,640,ii);

setcolor(RED);
for(ii=0;ii<=640;ii++)
{
sound(ii*5);
line(640,ii,ii,480);
delay(5);
nosound();
}

setcolor(0);
for(ii=0;ii<=640;ii++)
{
sound(ii*5);
line(0,ii,640,480);
delay(2);
nosound();
}


//selecting 8 nos (1-100)without repeating
randomize();
a[0]=random(100);
while(i!=8)
{
redo:
temp=random(100);
flag=1;
for(k=0;k<=i;k++)
if(a[k]==temp){flag=5;break;}
if (flag==5) goto redo;
else
{
a[i++]=temp;
game[z++]=temp;
}
}

//randomly filling the 8 nos from an array without repeating
int r=0;
while(r!=8)
{
label:
temp=a[random(8)];
flag=1;
for(k=0;k<=r;k++)
if(game[k]==temp){flag=5;break;}
if (flag==5) goto label;
else
game[r++]=temp;
}

setfillstyle(11,RED);
setcolor(YELLOW);
bar(0, 0,638,478);//backgrond

for(k=0,t=19,b=99;k<4;k++,t+=120,b+=121)     //displaying cards
for(i=0,l=55,r=125;i<4;i++,l+=150,r+=150)
{
left[j++]=l;
top[u++]=t;
right[o++]=r;
bottom[p++]=b;
sound(i*200);
card(l,t,r,b);
}
nosound();
for(int you=1;you<=20;you++)
{
if(you%2)
setcolor(LIGHTGREEN);
else
setcolor(RED);
for(k=0,t=15,b=103;k<4;k++,t+=120,b+=121)      //high light cursor
for(i=0,l=50,r=130;i<4;i++,l+=150,r+=150)
for(int we=1;we<=5;we++)
{
sound(we*900);
rectangle(l-we,t-we,r+we,b+we);
nosound();
}
delay(100);
}


setcolor(0);
char ch=getch();
int pntr=0,turn=1;

while(ch!=27)
{

		 if(ch=='M') pntr++;
		 if(ch=='K') pntr--;
		 if(ch=='H') pntr=pntr-4;
		 if(ch=='P') pntr+=4;

		 if(pntr>=17)
		 pntr=pntr-16;

		 if(pntr<1)
		 pntr=pntr+16;

		 int m=1;
		 if(open_times==1)
		 if(pntr-1==prev_card)
		 {
		 		 ch=getch();
		 		 continue;
		 }
int var_new34=9;

if(game[pntr-1]==-100)
var_new34=0;

		 end:
		 for(k=0,t=15,b=103;k<4;k++,t+=120,b+=121)      //high light cursor
		 for(i=0,l=50,r=130;i<4;i++,l+=150,r+=150)
		 {

		 		 setcolor(BLACK);
		 		 if(m==pntr)
		 		 {
		 		 		 setcolor(LIGHTGREEN);
		 		 		 if(game[pntr-1]==-100)
		 		 		 setcolor(LIGHTRED);
		 		 }

		 		 for(int we=1;we<=5;we++)
		 		 rectangle(l-we,t-we,r+we,b+we);
		 		 m++;
		 }

if(var_new34)
if(ch==13)
open(left,top,right,bottom,game,pntr-1);     //open card


int y=0;
for(int wer=0;wer<16;wer++)
if(game[wer]==-100)
y++;
if(y==16) gameover();

 ch=getch();
 sound(2500);
 delay(6);
 nosound();
 }
 if(ch==27) main();

}

if(move==3)
{
char ctrl;
do
 {
char help_topic[]="		*******************HELP*********************\nUSERS\nMANUAL\n\n1. PAIRS II\n\nThe general outline of the game is as follows.\n*\nIt is basically a card game.\n* One can flip and see only two cards at a\ntime simultaneously in the given set of cards.\n* One has to match the\ncards in the given set.\n* One wins the game if all the matches are made\ncorrectly.\n* This game is a time-trailed game i.e. one's score becomes\ninvalid if it exceeds the tine limit.\n* To navigate one can use the arrow\nkeys.\n* To open the card  you can hit enter." ;
char help_brick[]="\nBRICKS\nThe general outline is as follows.\n*It is\na brick game.\n*It consist of a shooting box and we have to shoot the\nbricks.\n*To move the shooting box right press the right direction key and\nto move left press the left direction key.\n*To shoot press the up\ndirection key.\n*Basically there are 5 levels in the game.\n*You can win\neach level when u reach the score of 2500.\n*When u hit each brick you get\n25 points.\n*But if the bricks touch the shooting box or if it touches the\nground one of your life is lost.\n*In total there are 5 lives.";
textcolor(10);
for(int i=0;i<strlen(help_topic);i++)
{
		 sound(i*20);
		 cout<<help_topic[i];
		 delay(15);
		 nosound();
}
int cv;
for(i=0,cv=2000;i<strlen(help_brick);i++,cv--)
{
		 sound(cv*2);
		 cout<<help_brick[i];
		 delay(15);
		 nosound();
}

 ctrl=getch();
 }while(ctrl!=27&&ctrl<28&&ctrl>25);
 if(ctrl==27) main();
}


if(move==4)
{
 cleardevice();
 setcolor(LIGHTGREEN);
 settextstyle(TRIPLEX_FONT,HORIZ_DIR,0);
 setusercharsize(1,1,1,1);

 setcolor(LIGHTGREEN);
 settextstyle(TRIPLEX_FONT,HORIZ_DIR,6);
 outtextxy(320,250,"&");

 setcolor(LIGHTGREEN);
 rectangle(1,1,638,478);//background
 for(int ab=5,bc=420;ab<350;ab++,bc--)
 {
 sound(ab*620);

 setfillstyle(6,BLACK);
 bar(5, 130,637,250);
 bar(9,350,635,450);

 setcolor(random(15));
 settextstyle(TRIPLEX_FONT,HORIZ_DIR,6);

 settextstyle(TRIPLEX_FONT,HORIZ_DIR,6);
 sound(bc*2000);
 delay(1);
 nosound();
 }
sleep(1);
main();
}


}//void main's block

void strt()
{
int op;
setcolor(0);
line(60+i*25,j*25,60+rj*25,ri*25);

for(ri=0;ri<19;ri++)
for(rj=0;rj<16;rj++)
a[ri][rj]=0;
randomize();
genbox();
drawbox(12);
start=clock();
op=getch();
while(1)
{
while(!kbhit())
{

end = clock();
if((end - start) / CLK_TCK > speed)
{
decr();
start=clock();
}

}

while(kbhit())
{
op=getch();
switch(op)
{
case 77:
draw(0);
if(i<15) i++;
draw(10);
break;
case 75:
draw(0);
if(i>0) i--;
draw(10);
break;
case 72:
       shotbox(i);
       break;
case 27:main();
}
}

}


}

void draw(int color)
{
int c;
c=getcolor();
setcolor(color);
setfillstyle(INTERLEAVE_FILL,color);
bar(50+25*i,j*25,75+25*i,j*25+25);
rectangle(50+25*i,j*25,75+25*i,j*25+25);
setcolor(14);
rectangle(50,0,450,475);

setcolor(c);
}


void genbox()
{
int x;
for(x=0;x<nbox;x++)
{
rj=rand()%16;
if(a[0][rj]==1) x--;
a[0][rj]=1;
}
}




void decr()
{
if(max<17)
{
drawbox(0);
for(ri=max;ri>=0;ri--)
for(rj=0;rj<16;rj++)
a[ri+1][rj]=a[ri][rj];
for(rj=0;rj<16;rj++)
a[0][rj]=0;
genbox();
drawbox(12);
}
else
{
printf("a");
lifebox(0);
--life;
lifebox(10);
if(life==0) gameover();


else {drawbox(0);strt();}
}
}

void drawbox(int c)
{
setcolor(c);

for(ri=0;ri<18;ri++)
for(rj=0;rj<16;rj++)
     if(a[ri][rj]==1)
     {
     max=ri;
     setfillstyle(INTERLEAVE_FILL,c);
     bar(50+rj*25,ri*25,50+rj*25+25,ri*25+25);
     if(c!=0) setcolor(14);
     rectangle(50+rj*25,ri*25,50+rj*25+25,ri*25+25);
     }
setcolor(14);
rectangle(50,0,450,475);
}


void shotbox(int rj)
{
int ri,r;
drawbox(0);
for(ri=18;ri>=0;ri--)
if(a[ri][rj]==1)
{a[ri][rj]=0;

file://for(r=18;r>=ri;r--)
setcolor(13);
line(60+i*25,j*25,60+rj*25,ri*25);
sound(480);
delay(25);
nosound();

putscore(0);
if(score%100==0 && score!=0 )
{

putscore(0);
level++;
putscore(10);

if(speed==1)
if(nbox==5) nbox=7;
else if(nbox==7) nbox=9;
else if(nbox==9) nbox=11;
else
{
setcolor(10);
drawbox(12);
cout<<"a";
cleardevice();
gameover();
main();
}
else speed--;
putscore(0);
score++;
putscore(10);
strt();break;}
else{
score++;
putscore(10);
break;}}
drawbox(12);
setcolor(0);
line(60+i*25,j*25,60+rj*25,ri*25);


}
void putscore(int color)
{
char str[20];
int c;
c=getcolor();
setcolor(color);
itoa(score*25,str,10);
outtextxy(550,75,str);
itoa(level,str,10);
outtextxy(550,150,str);
setcolor(c);
}

void lifebox(int color)
{
int i,c;
c=getcolor();
setcolor(color);
for(i=1;i<=life;i++)
{
setfillstyle(INTERLEAVE_FILL,color);
bar(500,250+i*25,525,275+i*25);
if(color) setcolor(14);
rectangle(500,250+i*25,525,275+i*25);
}
setcolor(c);
}
