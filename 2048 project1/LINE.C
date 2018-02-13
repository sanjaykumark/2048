#include<graphics.h>
#include<conio.h>
main()
{
int gd=DETECT,gm;
int i,j;
initgraph(&gd,&gm,"C:\\TC\\BGI");
/*for(i=210;i<800;i++)
{
line(100,150,i,150);
delay(20);
} */
for(j=800;j>210;j--)
{
line(200,250,i,250);
delay(100);
}
getch();
closegraph();
return 0;
}
