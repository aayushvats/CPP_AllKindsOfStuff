#include<iostream.h>
#include<graphics.h>
#include<conio.h>
void main()
{
clrscr();
int gd=DETECT,gm;                               //always to be used in graphics mode I don't what is the use of this
initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");          //this too -> initgraph(gd = graph driver , gm = graph mode , path to driver);
line(2,2,625,465);				//line(backward slash in output) -> line(x1,y1,x2,y2);
line(2,465,625,2);				//line(forward slash in output)
outtext("HELLO WORLD");                         //to print in a graphics program although we can use cout<< blah blah blah
outtextxy(255,355,"HELLO WORLD");      	        //to print at a specified position -> outteaxtxy(x,y,"messege");
circle(120,120,110);                  	        //circle -> circle(x,y,radius);
rectangle(450,100,550,300);			//rectangle -> rectangle(int left<<x1>>,int top<<y1>>,int right<<x2>>,int bottom<<y2>>);
ellipse(125,325,0,360,120,50);                  //empty ellipse -> ellipse(x,y,starting angle in degree,ending angle in degree,x_radius,y_radius); the angle is used to draw an elliptical arc
fillellipse(325,120,50,120);			//filled ellipse -> fillellipse(x,y,x_radius,y_radius); it always draws a full ellipse and fills the ellipse with current fuction
setcolor(4);					//used to set color either the name of the color (name should be in capital) can be used or the corresponding value can be used -> setcolor(value);
outtextxy(255,365,"HELLO WORLD");               //just to check xD
setbkcolor(BROWN);                              //to change the background color -> setbkcolor(value);
setfillstyle(6,1);				//to fill all the shapes made after this  -> setfillstyle(pattern, color);
fillellipse(380,390,30,90);			//to check setfillstyle btw setfillstyle works only on those which fill themselves automatically
circle(475,390,50);                             //cirle to check floodfill
floodfill(475,390,4);				//floodfill fills everything -> floodfill(x,y,bordercolor); this floodfill will fill with the style set by setfillstyle
bar(400,30,430,130);				//to draw colored rectangles ->bar(left-top x,left-top y, right bottom x, right-bottom y); this shitty thing was made to draw bar graphs huh!
bar3d(600,30,630,130,7,69);			//to draw 3d colored rectangles ->bar3d(x1,y1,x2,y2,depth,top_flag); top_flag can be 0 or non 0 , it'll draw a topless bar if you use 0, but in case of non 0 there will be a top
bar3d(600,150,630,250,7,0);			//topless bar xD
settextstyle(4,0,4);                            //to change font , it's size , it's allignment i.e. vertical ar horizontal -> settextstyle(font,allignment,size);
outtext("HELLO WORLD");                         //just to check settextstyle xD
getch();
closegraph();                                   //graphics mode should be closed after each program
}