#include <alloc.h>
#include <conio.h>
#include <graphics.h>
#include <stdio.h>
#include <stdlib.h>
#include<dos.h>
int getcol(int col)
{
	switch(col)
	{
		case 0: return 0;     //BLACK;
		case 1: return 4;     //RED;
		case 2: return 2;     //GREEN
		case 3: return 6;     //BROWN
		case 4: return 1;     //BLUE;
		case 5: return 5;     //MAGENTA;
		case 6: return 3;     //CYAN;
		case 7: return 7;     //LIGHTGRAY;
		case 8: return 8;     //DARKGRAY;
		case 9: return 12;    //LIGHTRED;
		case 10:return 10;    //LIGHTGREEN
		case 11:return 14;    //YELLOW;
		case 12:return 9;     //LIGHTBLUE;
		case 13:return 13;    //LIGHTMAGENTA
		case 14:return 11;    //LIGHTCYAN;
		case 15:return 15;    //WHITE;
	}
	return col;
}
int loadbitmap(char *filename)
{
	FILE *ptr=NULL;                //file handle to open bitmap file
	int width,height;              //width and height of the bitmap
	unsigned long temp=0,i=0,j=0;  //some variables i need
	unsigned long ww;
	ptr=fopen(filename,"rb");      //open the bitmap file
	if(!ptr)
		return 0;             //if its not there return
	width=0;height=0;              //initialise wisth and height to zero
	fseek(ptr,18,SEEK_SET);        //got to offset 18 in file
	for( i=0x1; i<=0x10000; i*=0x100 ) //read the width
	{
		temp=fgetc(ptr);
		width+=(temp*i);
	}
	fseek(ptr,22,SEEK_SET);        //go to offset 22 in file
	for(i=0x1;i<=0x10000;i*=0x100) //read the height
	{
		temp=fgetc(ptr);
		height+=(temp*i);
	}

	ww=width;
	//ww is the number of reads to make for each horizontal line
	if(ww%2)
		//ww has to be half of width - since each pixel is only 4 bits of information
		ww++;
	ww/=2;
	//just getting the correct value
	if(ww%4)
		//now - ww is stored as sets of 4 pixels each
		ww=(ww/4)*4+4;
	//if width is less than ww*2 we ignore what we read

	fseek(ptr,119,SEEK_SET);
	//Ok! offset 119 - lets read the pixels -
	//remember the bitmap is stroed up - side - down
	int ch,ch1,ch2;
	for(i=0;i<height;i++)
		for(j=0;j<ww;j++)
		{
			ch=fgetc(ptr);
			//each character read is 2 pixels - yes 4 bits per pixel - so 16 colors
			ch1=ch;ch2=ch;
			//find those colors using bitwise ops
			ch1=ch1&(0xf0);
			// ~~
			ch2=ch2&(0x0f);
			// ~~
			if(j*2<width)
				//ok so put the first pixel read on screen
				putpixel((j)*2,(height-1-i),getcol(ch1));
			if(j*2+1<width)
				//put the second pixel read on screen
				putpixel((j)*2+1,(height-1-i),getcol(ch2));
		}
	fclose(ptr);
	//close the file handle
	return 1;
}
void main()
{
	int color;
	int gd=DETECT , gm ;
	initgraph(&gd,&gm,"C:\\TURBOC3\\BGI");
	loadbitmap("C:/TURBOC3/BIN/XI/a.bmp"); /* Enter File Name Here */
	getch();
	loadbitmap("C:/TURBOC3/BIN/XI/b.bmp");
	getch();
	closegraph();
}
