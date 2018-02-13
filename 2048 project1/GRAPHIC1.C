#include<graphics.h>
#include<conio.h>
#include<stdio.h>
#include<dos.h>
int main()
{
int x=200,y=200;
int gd=DETECT,gm;
for(i=0;i<4;i++)

{
sound(2048);
delay(25);
}nosound();
initgraph(&gd,&gm,"c:\\tc\\bgi");
setcolor(WHITE);
rectangle(150,180,250,300);
rectangle(250,180,420,300);
rectangle(180,250,220,300);
line(200,100,150,180);
line(200,100,250,180);
line(200,100,370,100);
line(370,100,420,180);
setfillstyle(SOLID_FILL,BROWN);
outtextxy(x,y,"2048");
floodfill(152,182,WHITE);
floodfill(252,182,WHITE);
setfillstyle(SLASH_FILL,BLUE);
floodfill(182,252,WHITE);
setfillstyle(HATCH_FILL,GREEN);
floodfill(200,105,WHITE);
floodfill(210,105,WHITE);
printf("press enter to continue....\n");
getch();
closegraph();

}
