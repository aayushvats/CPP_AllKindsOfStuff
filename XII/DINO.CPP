#include<stdio.h>
#include<dos.h>
#include<stdlib.h>
#include<conio.h>
void getup()
{
    textcolor(BLACK);
    textbackground(15);
    clrscr();
    window(10,2,70,3);
    cprintf("Press X to Exit, Press Space to Jump");
    window(62,2,80,3);
    cprintf("SCORE : ");
    window(1,25,80,25);
    for(int x=0;x<79;x++)
    cprintf("0");
    textcolor(0);
}
 
int t,speed=40;
void ds(int jump=0)
{
    static int a=1;
 
    if(jump==0)
        t=0;
    else if(jump==2)
        t--;
    else t++;
    window(2,15-t,18,25);
    cprintf("                 ");
    cprintf("         00000000");
    cprintf("         00000000");
    cprintf("         00000000");
    cprintf(" 0      00000000 ");
    cprintf(" 000  0000000000 ");
    cprintf(" 000000000000  0 ");
    cprintf("   000000000     ");
    if(jump==1 || jump==2){
    cprintf("    000 00       ");
    cprintf("    00   00      ");
    }else if(a==1)
    {
    cprintf("    0000  000    ");
    cprintf("      00         ");
    a=2;
    }
    else if(a==2)
    {
    cprintf("     000 00      ");
    cprintf("          00     ");
    a=1;
    }
    cprintf("                ");
    delay(speed);
}
void obj()
{
    static int x=0,scr=0;
    if(x==56 && t<4)
    {
    scr=0;
    speed=40;
    window(36,8,60,9);
    cprintf("Game Over");
    getch();
    window(36,8,60,9);
    cprintf("         ");
    }
    window(74-x,20,80-x,25);
    cprintf("0    0 ");
    cprintf("0    0 ");
    cprintf("000000 ");
    cprintf("  0    ");
    cprintf("  0  " );
    x++;
    if(x==73)
    {
    x=0;
    scr++;
    window(70,2,80,3);
    cprintf("     ");
    window(70,2,80,3);
    cprintf("%d",scr);
    if(speed>20)
        speed--;
    }
}
void main()
{
    char ch;
    int i;
    getup();
    while(1){
    while(!kbhit())
    {
        ds();
        obj();
    }
    ch=getch();
    if(ch==' ')
    {
        for(i=0;i<10;i++)
        {
        ds(1);
        obj();
        }
        for(i=0;i<10;i++)
        {
        ds(2);
        obj();
        }
    }
    else if (ch=='x')
    return;
    } //outer while
}