#include<iostream.h>
#include<conio.h>
#include<graphics.h>
#include<dos.h>
void main()
{
	int gd=DETECT, gm;
	initgraph(&gd, &gm, "C:/TURBOC3/BGi");
	cleardevice();
	int x=130,y=50,s=0,menu=1;
    if (s) {
	setfillstyle(1, 8);
	bar(x + 72, y - 15, x + 265, y - 10);
	bar(x + 69, y - 14, x + 75, y + 18);
	bar(x + 70, y + 19, x + 265, y + 23);
	bar(x + 265, y - 14, x + 271, y + 22);
	char pa[] = { 0x3a, 0xb456 };
	setfillpattern(pa, 8);
	bar(x + 70, y - 14, x + 265, y - 10);
	bar(x + 70, y - 14, x + 75, y + 18);
	bar(x + 70, y + 18, x + 265, y + 22);
	bar(x + 265, y - 14, x + 270, y + 22);
	for (int i = 300;;) {
	    delay(5);
	    if (kbhit())
		break;
	    setfillstyle(9, 4);
	    bar(x + 75, y - 10, x + 265, y + 18);
	    i--;
	    setcolor(WHITE);
	    if (menu == 1) {
		if (y == 200) {
		    outtextxy(i, y, "START");
		    if (i <= 290)
			break;
		}
		else if (y == 250) {
		    outtextxy(i, y, "OPTIONS");
		    if (i <= 283)
			break;
		}
		else if (y == 300) {
		    outtextxy(i, y, "HIGHSCORE");
		    if (i <= 290)
			break;
		}
		else if (y == 350) {
		    outtextxy(i, y, "HELP");
		    if (i <= 290)
			break;
		}
		else if (y == 400) {
		    outtextxy(i, y, "EXIT");
		    if (i <= 280)
			break;
		}
	    }
	    else if (menu == 2) {
		if (y == 200) {
		    outtextxy(i, y, "LOAD");
		    if (i <= 280)
			break;
		}
		else if (y == 250) {
		    outtextxy(i, y, "CONTROL");
		    if (i <= 283)
			break;
		}
		else if (y == 300) {
		    outtextxy(i, y, "CREDITS");
		    if (i <= 280)
			break;
		}
		else if (y == 350) {
		    outtextxy(i, y, "PASSWORD");
		    if (i <= 290)
			break;
		}
		else if (y == 400) {
		    outtextxy(i, y, "BACK");
		    if (i <= 280)
			break;
		}
	    }
	}
	if (kbhit()) {
	    setfillstyle(9, 4);
	    bar(x + 75, y - 10, x + 265, y + 18);
	    setcolor(WHITE);
	    if (menu == 1) {
		if (y == 200)
		    outtextxy(300, y, "START");
		else if (y == 250)
		    outtextxy(300, y, "OPTIONS");
		else if (y == 300)
		    outtextxy(300, y, "HIGHSCORE");
		else if (y == 350)
		    outtextxy(300, y, "HELP");
		else if (y == 400)
		    outtextxy(300, y, "EXIT");
	    }
	    else if (menu == 2) {
		if (y == 200)
		    outtextxy(300, y, "LOAD");
		else if (y == 250)
		    outtextxy(300, y, "CONTROL");
		else if (y == 300)
		    outtextxy(300, y, "CREDITS");
		else if (y == 350)
		    outtextxy(300, y, "PASSWORD");
		else if (y == 400)
		    outtextxy(300, y, "BACK");
	    }
	}
    }
    else {
	setfillstyle(9, 4);
	bar(x + 70, y - 15, x + 265, y - 10);
	bar(x + 69, y - 14, x + 75, y + 18);
	bar(x + 70, y + 18, x + 265, y + 23);
	bar(x + 265, y - 14, x + 271, y + 22);
    }

	getch();
}