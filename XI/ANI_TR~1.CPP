#include <stdio.h>
  #include <conio.h>
  #include <graphics.h>
  #include <dos.h>

  int main() {
	/* request auto detection */
	int gdriver = DETECT, gmode, err;
	int i, x1, y1, x2, y2, maxx, midy;

	/* initialize graphic mode */
	initgraph(&gdriver, &gmode, "C:\\TURBOC3\\BGI");

	err = graphresult();

	if (err != grOk) {
		/* error occurred */
		printf("Graphics Error: %s\n",
				grapherrormsg(err));
		return 0;
	}

	/* max position in x-axis */
	maxx = getmaxx();
	/* mid position in y-axis */
	midy = getmaxy() / 2;

	/* assign positions to draw road */
	x1 = 0, y1 = midy + 43;
	x2 = maxx, y2 = midy + 43;

	for (i = 0; i < maxx - 130; i = i + 3) {
		/* clears the graphic screen */
		cleardevice();

		/* draw the road */
		setcolor(WHITE);
		line(x1, y1, x2, y2);

		/* draw the dump bed(backside) of truck */
		setcolor(LIGHTGRAY);
		setfillstyle(SOLID_FILL, LIGHTGRAY);
		line(0 + i, midy, 80 + i, midy);
		line(80 + i, midy, 80 + i, midy + 30);
		line(80 + i, midy + 30, 47 + i, midy + 30);
		line(0 + i, midy + 30, 23 + i, midy + 30);
		line(0 + i, midy + 30, 0 + i, midy);
		arc(35 + i, midy + 30, 0, 180, 12);
		floodfill(5 + i, midy + 5, LIGHTGRAY);

		/* draw the cab of truck */
		setcolor(YELLOW);
		setfillstyle(SOLID_FILL, YELLOW);
		line(81 + i, midy + 30, 81 + i, midy - 40);
		line(82 + i, midy - 40, 111 + i, midy - 40);
		line(111 + i, midy - 40, 126 + i, midy - 10);
		line(126 + i, midy - 10, 126 + i, midy + 30);
		line(126 + i, midy + 30, 117 + i, midy + 30);
		line(93 + i, midy + 30, 81 + i, midy + 30);
		arc(105 + i, midy + 30, 0, 180, 12);

		/* window */
		line(87 + i, midy - 5, 118 + i, midy - 5);
		line(87 + i, midy - 5, 87 + i, midy - 30);
		line(87 + i, midy - 30, 106 + i, midy - 30);
		line(106 + i, midy - 30, 118 + i, midy - 5);
		floodfill(85 + i, midy + 25, YELLOW);

		setcolor(DARKGRAY);
		if (i % 2 == 0) {
			setfillstyle(SLASH_FILL, DARKGRAY);
		} else {
			setfillstyle(BKSLASH_FILL, DARKGRAY);
		}

		/* draw the tyres */
		circle(35 + i, midy + 30, 8);
		circle(105 + i, midy + 30, 8);
		floodfill(35 + i, midy + 30, DARKGRAY);
		floodfill(105 + i, midy + 30, DARKGRAY);

		/* sleep for 275 milliseconds */
		delay(10);
	}

	getch();

	/* deallocate memory allocated for graphic screen */
	closegraph();
	return 0;
  }
