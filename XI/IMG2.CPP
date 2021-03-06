#include <fstream.h>
#include <conio.h>
#include <graphics.h>
#include <string.h>
#include <iostream.h>
#include <stdlib.h>
#include <malloc.h>
#include <dos.h>
#define true 1
#define false 0
typedef unsigned char BYTE;
typedef unsigned int WORD;
typedef unsigned long DWORD;
typedef signed long LONG;
void *buff;
int ImgType(char *bmpfile)
{
WORD type;
fstream file;
file.open(bmpfile,ios::in|ios::binary);
file.read((char *) &type,sizeof(WORD));
file.close();
if(type == 19778)
return true;
else
return false;
}
void LoadBitmap(int Left, int Top, int Width, int Height, char file[35])
{
fstream bitmap_file;
DWORD index;
BYTE ch,str;
BYTE rgbquad[4];
int Xpos = Left;
int Ypos = Top;
/* Open bitmap file. */
bitmap_file.open(file,ios::in|ios::binary);
if(!bitmap_file)
{
cout<<"Error opening file "<<file;
exit(1);
}
/* Check to see if it is a valid bitmap file */
if(ImgType(file) == false)
{
bitmap_file.close();
cout<<file<<" is not a bitmap file.";
exit(1);
} /* Skip Header and Palette data*/bitmap_file.seekg(54+1024,ios::beg);/* Draw Bitmap */
for(int i=0;i<Height;i++)
{
for(int j=0;j<Width;j++)
{
bitmap_file.read((char *) &ch,1);
putpixel(Xpos+j,Ypos+Height-1-i,(int)ch);
}
}
buff = malloc(imagesize(Left,Top,Left+Width,Top+Height));
getimage(Left,Top,Left+Width,Top+Height,buff);
bitmap_file.close();
}

void DrawBitmap(int left, int top, int value)
{
putimage(left,top,buff,value);
}

void main()
{
	int gd=DETECT,gm;
	int X=10,Y=10;
	initgraph(&gd,&gm,"c://turboc3//bgi");

	/* Load Image */

	LoadBitmap(10,10,32,32,"HEART.bmp");
	DrawBitmap(10,10,XOR_PUT);

	/* Erase Image */
	while(!kbhit())
	{
		delay(1000);
		for(int i=0;i<19;i++)
		{
			if(kbhit())
			exit(0);
			DrawBitmap(X,Y,COPY_PUT);
			delay(500);
			X+=33;
		}
		X=10;
		Y=10+33;
		for(int k=0;k<13;k++)
		{
			for(int j=0;j<19;j++)
			{
				if(kbhit())
				exit(0);
				DrawBitmap(X,Y,COPY_PUT);
				X+=33;
			}
			delay(500);
			X = 10;
			Y+=33;
		}
		delay(1000);
		X = 10;
		Y = 10;
		for(int _i=0;_i<19;_i++)
		{
			if(kbhit())
			exit(0);
			DrawBitmap(X,Y,XOR_PUT);
			delay(500);
			X+=33;
		}
		X=10;
		Y=10+33;
		for(int _k=0;_k<13;_k++)
		{
			for(int _j=0;_j<19;_j++)
			{
				if(kbhit())
				exit(0);
				DrawBitmap(X,Y,XOR_PUT);
				X+=33;
			}
			delay(500);
			X = 10;
			Y+=33;
		}
		X = 10;
		Y = 10;
	}
	getch();
	closegraph();
}