#include<dos.h>
#include<graphics.h>
#include<conio.h>


union REGS i, o;

int initmouse()
{
   i.x.ax = 0;
   int86(0X33,&i,&o);
   return ( o.x.ax );
}

void showmouseptr()
{
   i.x.ax = 1;
   int86(0X33,&i,&o);
}

void restrictmouseptr(int x1, int y1, int x2, int y2)
{
   i.x.ax = 7;
   i.x.cx = x1;
   i.x.dx = x2;
   int86(0X33,&i,&o);

   i.x.ax = 8;
   i.x.cx = y1;
   i.x.dx = y2;
   int86(0X33,&i,&o);
}
void getmousepos(int *button, int *x, int *y)
{
   i.x.ax = 3;
   int86(0X33,&i,&o);

   *button = o.x.bx;
   *x = o.x.cx;
   *y = o.x.dx;

}
main()
{
   int status, gd = DETECT, gm,button,x,y,i;
    char e,a[50],array[50];
 w:  initgraph(&gd,&gm,"C:\\TC\\BGI");
   settextstyle(DEFAULT_FONT,0,2);

   status = initmouse();

   if ( status == 0 )
      outtext("Mouse support not available.\n");
   else
   {
      showmouseptr();
     textcolor(BLUE);
      printf("\n\n\t2048");
     setcolor(RED);
      rectangle(50,100,200,50);
      printf("\n\n\n\n\n\nleftclick - PLAY\nrightclick - RULES");
      restrictmouseptr(50,100,200,50);
	  getmousepos(&button,&x,&y);

      while(!kbhit())
      {
	 getmousepos(&button,&x,&y);

	 if( button == 1 )
	 {
	 button=-1;
       cleardevice();
       initgraph( &gd, &gm, "C:\\TC\\BGI");
       settextjustify( CENTER_TEXT, CENTER_TEXT );
	settextstyle(DEFAULT_FONT,HORIZ_DIR,3);
       setcolor(RED);

   for (i=5;i >=0;i--)
   {
      sprintf(a,"%d",i);
      outtextxy(getmaxx()/2, getmaxy()/2, a);
      delay(1000);

      if ( i == 0 )
	 break;
	   cleardevice();
   }
    }
	 else if( button == 2 )
	 {

		 button=-1;
		 cleardevice();
		 printf(" \n\n\n\n2048 - How to play?\nThe objective of the game is to get the number 2048 using additions of the number two and its multiples.\nYou will have a grid of 16 tiles. Two numbers will be given: usually two number twos, maybe number four.\nMove up or down, left or right trying to join two equal numbers.\nWhen two equal numbers are in touch, they will add up.\nIf we are run out of equal numbers on our grid, or we can not put them in touch, the game will provide us another two, a four or even an eight so we can keep on playing. If there are no free tiles on our grid, the game ends.By adding numbers, we get higher numbers and we can approach to 2048, which is the goal of the game.\n\n\n\n");
		printf("\n\n\n\n\n\npress'e' key to exit");
		scanf("%c",&e);


 if(e=='e')
 {
	 cleardevice();
	 goto w;
 }
 cleardevice();


 }
 }
 }



   getch();
   return 0;
}

