#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
#include<stdlib.h>

class loading
{
    public:
	void img1();
	void img2();
	void img3();
	void load();
	void showload();
	void output(int, int, char*);
};

void loading::img1()   //ironman
{
	//face
	arc(320,100,60,120,50);  //top of head
	line(293,57,294,117);   //left face
	line(294,117,310,130);   //left chin
	line(347,57,346,117);    //right face
	line(346,117,330,130); //right chin
	line(310,130,330,130);     //chin base
	line(313,51,313,61);  //top notch left
	line(327,51,327,61);  //top notch right
	line(314,62,326,62);   //top notch bottom
	line(292,75,320,82);//left eyebrow
	line(320,82,348,75);  //right eyebrow
	line(315,81,311,86); //left eye1
	line(311,86,300,82); //left eye2
	line(300,82,300,77); //left eye3
	line(325,81,329,86);  //right eye1
	line(329,86,340,82);  //right eye2
	line(340,82,340,77);  //right eye3  */
	ellipse(294,115,0,90,10,25); //left jawline
	ellipse(346,115,90,180,10,25);//right "
	line(304,115,308,112); //upp jaw left
	line(336,115,332,112); // upp jaw right
	line(308,112,332,112); //upper jaw
	line(310,114,330,114);// lower jaw
	line(310,114,305,119);  //low jaw left
	line(330,114,335,119); //low jaw right
	line(305,119,305,125);  //lowerjaw2
	line(335,119,335,125); //lower jaw3

	//body
	line(295,120,265,122); //neck left
	line(292,120,285,140); //neck left2
	line(285,140,255,150);// side design left
	line(265,122,255,150); //design left
	line(285,140,320,160); // design left 2
	line(285,145,265,155);  //design left3
	line(345,120,375,122);  //neck right
	line(347,120,355,140);  //neck right2
	line(355,140,385,150);   //design right
	line(375,122,385,150); //right design3
	line(355,140,320,160);  // right line
	line(355,145,375,155);//joining line
}

void loading::img2()    //deadpool
{
	//head
	ellipse(320,65,0,180,28,15);//headtop
	line(292,65,292,105); //left side of face
	line(348,65,348,105); //right side of face
	line(292,105,305,130);  //left jaw
	line(335,130,348,105); //right jaw
	ellipse(320,130,180,360,15,2);   //chin
	line(317,87,307,70);     //left eyepatch1
	line(307,70,298,75);    //"2
	line(298,75,298,102);    //"3
	line(298,102,308,110);  //"4
	line(308,110,317,87);    //"5
	line(307,70,305,55);
	line(308,110,306,126);
	line(323,87,333,70); //right eyepatch1
	line(333,70,342,75);    //"2
	line(342,75,342,102);  //"3
	line(342,102,332,110);  //"4
	line(332,110,323,87); //"5
	line(333,70,335,55);
	line(332,110,334,126);
	ellipse(307,87,0,360,6,3);
	ellipse(333,87,0,360,6,3);

	//body
	line(345,115,346,140);//neck right
	line(295,115,294,140);//neck left
	line(294,130,260,145);//shoulder left
	line(346,130,380,145); //shoulder right

	//swords
	//left
	line(286,134,275,90);
	line(276,138,264,93);
	line(275,90,264,93);
	//right
	line(354,134,365,90);
	line(364,138,376,93);
	line(365,90,375,93);
}

void loading::img3()     //batman
{
	//head
	ellipse(320,65,0,180,28,15);//headtop
	line(292,65,292,27); //left horn left
	line(292,27,305,53);//left horn right
	line(348,65,348,27); //right horn right
	line(348,27,335,53);//right horn left
	line(292,65,292,100); //left side of face
	line(348,65,348,100); //right side of face
	line(292,95,320,105);  //left mask
	line(320,105,348,95);   //right mask
	line(320,105,320,84);//mask nose centre
	line(312,103,315,82);  //mask nose left
	line(315,82,298,77);//left eye1
	line(298,77,308,87); //left eye2
	line(308,87,315,82); //left eye3
	line(327,102,325,82);  //mask nose right
	line(325,82,342,77);//right eye1
	line(342,77,332,87); //right eye2
	line(332,87,325,82);  //right eye3
	line(292,100,305,130);  //left jaw
	line(335,130,348,100); //right jaw
	line(312,115,327,115);//mouth
	line(312,115,309,118); // mouth left
	line(327,115,330,118); //mouth right
	ellipse(320,130,180,360,15,2);   //chin

	//body
	line(342,115,343,140);//neck right
	line(298,115,297,140);//neck left
	line(297,130,263,145);//shoulder left
	line(343,130,377,145); //shoulder right
}

void loading::load()
{
	setviewport(300,200,340,240,1);
	for(int i=0; i<360*3; i+=5)
	{
		arc(20,20,0+i,290+i,20);
		arc(20,20,0+i,290+i,19);
		arc(20,20,0+i,290+i,18);
		arc(20,20,0+i,290+i,17);
		arc(20,20,0+i,290+i,16);
		fillellipse(20,20,10,10);
		delay(20);
		clearviewport();
	}
}

void loading::showload()
{
	int r=random(3)+1;
	setcolor(WHITE);
	if(r==1)
		img1();
	else if(r==2)
		img2();
	else if(r==3)
		img3();
	settextstyle(2,0,4);
	setcolor(RED);
	load();
}

void main()
{
	int gd=DETECT, gm;
	initgraph(&gd, &gm, "C:/TURBOC3/BGi");
	setcolor(RED);
	randomize();
	cleardevice();
	loading L;
	L.showload();
}