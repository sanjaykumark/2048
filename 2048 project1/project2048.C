#include<graphics.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<dos.h>
#include<snap.h>
#include<conio.h>
int checkwin(int *a[]);
int checkout(int *a[]);
void upward(int *a[],int *d[]);
void downward(int *a[],int *d[]);
void rightward(int *a[],int *d[]);
void leftward(int *a[],int *d[]);
void display(int *a[],int score);
void ran(int *a[]);
void save(int *c[],int *a[]);
int getScore(int *c[],int score,int *d[]);
int checkadd(int *a[],int *c[]);
int getRandNum()
{
	int numList[]={2,4};
	return numList[rand()%2];
}
int checkout(int *a[])
{
	int i,j,count=0;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if(a[i][j]>0)
			count=count+1;
		}
	}
	if(count==16)
	{
	if((a[0][0]==a[0][1]) || (a[0][0]==a[1][0]))
	{return 1;}
	if((a[0][3]==a[0][2]) || (a[0][3]==a[1][3]))
	{return 1;}
	if((a[3][0]==a[3][1]) || (a[3][0]==a[2][0]))
	{return 1;}
	if((a[3][3]==a[3][2]) || (a[3][3]==a[2][3]))
	{return 1;}
	if((a[0][1]==a[0][0]) || (a[0][1]==a[0][2]) || (a[0][1]==a[1][1]))
	{return 1;}
	if((a[0][2]==a[0][1]) || (a[0][2]==a[0][3]) || (a[0][2]==a[1][2]))
	{return 1;}
	if((a[1][0]==a[0][0]) || (a[1][0]==a[1][1]) || (a[1][0]==a[2][0]))
	{return 1;}
	if((a[2][0]==a[1][0]) || (a[2][0]==a[2][1]) || (a[2][0]==a[3][0]))
	{return 1;}
	if((a[1][3]==a[0][3]) || (a[1][3]==a[1][2]) || (a[1][3]==a[2][3]))
	{return 1;}
	if((a[2][3]==a[1][3]) || (a[2][3]==a[2][2]) || (a[2][3]==a[3][3]))
	{return 1;}
	if((a[3][1]==a[3][0]) || (a[3][1]==a[2][1]) || (a[3][1]==a[3][2]))
	{return 1;}
	if((a[3][2]==a[3][1]) || (a[3][2]==a[2][2]) || (a[3][2]==a[3][3]))
	{return 1;}
	if((a[1][1]==a[1][0]) || (a[1][1]==a[0][1]) || (a[1][1]==a[1][2]) || (a[1][1]==a[2][1]))
	{return 1;}
	if((a[1][2]==a[1][1]) || (a[1][2]==a[0][2]) || (a[1][2]==a[2][2]) || (a[1][2]==a[1][3]))
	{return 1;}
	if((a[2][1]==a[2][0]) || (a[2][1]==a[3][1]) || (a[2][1]==a[1][1]) || (a[2][1]==a[2][2]))
	{return 1;}
	if((a[2][2]==a[2][1]) || (a[2][2]==a[1][2]) || (a[2][2]==a[2][3]) || (a[2][2]==a[3][2]))
	{return 1;}
	return 0;
    }
    return 1;
}
int checkwin(int *a[])
{
	int i,j;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if(a[i][j]==2048){return 1;}
		}
	}
	return 0;
}
void display(int *a[],int score)
{
	int gdriver=DETECT,gmode;
int i,j,s;
initgraph(&gdriver,&gmode,"c:\\tc\\bgi");
printf("\n\n\n\n\n\n\n\n");
printf("\n\n\n\t\t");
setbkcolor(BLUE);
//setfillstyle(SOLID_FILL,RED);
//bar(150,150,450,450);
if(a[0][0]>512)
printf("    ");
else
{
if(a[0][0]>64)
printf("     ");
else
{
if(a[0][0]>8)
printf("      ");
else
printf("       ");
}
}
    if(a[0][0]>0)
    printf("%d",a[0][0]);
    else
    printf(" ");
//    printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
   // printf("\n\n\n\t\t\t");
    if(a[0][1]>512)
    printf("      ");
    else
    {
    if(a[0][1]>64)
    printf("       ");
    else
    {
    if(a[0][1]>8)
    printf("        ");
    else
    printf("         ");
    }
    }
    if(a[0][1]>0)
    printf("%d",a[0][1]);
    else
    printf(" ");
  //  printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    //printf("\n\n\n\t\t\t");
    if(a[0][2]>512)
    printf("     ");
    else
    {
    if(a[0][2]>64)
    printf("      ");
    else
    {
    if(a[0][2]>8)
    printf("       ");
    else
    printf("        ");
    }
    }
    if(a[0][2]>0)
    printf("%d",a[0][2]);
    else
    printf(" ");
    //printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    //printf("\n\n\n\t\t\t");
    if(a[0][3]>512)
    printf("     ");
    else
    {
    if(a[0][3]>64)
    printf("      ");
    else
    {
    if(a[0][3]>8)
    printf("       ");
    else
    printf("        ");
}
}
    if(a[0][3]>0)
    printf("%d",a[0][3]);
    else
    printf(" ");
    //printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("\n\n\n\n\n\t\t");
    if(a[1][0]>512)
    printf("    ");
    else
    {
    if(a[1][0]>64)
    printf("     ");
    else
    {
    if(a[1][0]>8)
    printf("      ");
    else
    printf("       ");
}
}
    if(a[1][0]>0)
    printf("%d",a[1][0]);
    else
    printf(" ");
    //printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    //printf("\n\n\n\t\t\t");
    if(a[1][1]>512)
    printf("      ");
    else
    {
    if(a[1][1]>64)
    printf("       ");
    else
    {
    if(a[1][1]>8)
    printf("        ");
    else
    printf("         ");
}
}
    if(a[1][1]>0)
    printf("%d",a[1][1]);
    else
    printf(" ");
    //printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    //printf("\n\n\n\t\t\t");
    if(a[1][2]>512)
    printf("     ");
    else
    {
    if(a[1][2]>64)
    printf("      ");
    else
    {
    if(a[1][2]>8)
    printf("       ");
    else
    printf("        ");
}
}
    if(a[1][2]>0)
    printf("%d",a[1][2]);
    else
    printf(" ");
    //printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
   // printf("\n\n\n\t\t\t");
   if(a[1][3]>512)
    printf("     ");
    else
    {
    if(a[1][3]>64)
    printf("      ");
    else
    {
    if(a[1][3]>8)
    printf("       ");
    else
    printf("        ");
}
}
    if(a[1][3]>0)
    printf("%d",a[1][3]);
    else
    printf(" ");
    //printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("\n\n\n\n\n\t\t");
    if(a[2][0]>512)
    printf("    ");
    else
    {
    if(a[2][0]>64)
    printf("     ");
    else
    {
    if(a[2][0]>8)
    printf("      ");
    else
    printf("       ");
}
}
    if(a[2][0]>0)
    printf("%d",a[2][0]);
    else
    printf(" ");
    //printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    //printf("\n\n\n\t\t\t");
    if(a[2][1]>512)
    printf("      ");
    else
    {
    if(a[2][1]>64)
    printf("       ");
    else
    {
    if(a[2][1]>8)
    printf("        ");
    else
    printf("         ");
}
}
    if(a[2][1]>0)
    printf("%d",a[2][1]);
    else
    printf(" ");
    //printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
   // printf("\n\n\n\t\t\t");
   if(a[2][2]>512)
    printf("     ");
    else
    {
    if(a[2][2]>64)
    printf("      ");
    else
    {
    if(a[2][2]>8)
    printf("       ");
    else
    printf("        ");
}
}
    if(a[2][2]>0)
    printf("%d",a[2][2]);
    else
    printf(" ");
    //printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    //printf("\n\n\n\t\t\t");
    if(a[2][3]>512)
    printf("     ");
    else
    {
    if(a[2][3]>64)
    printf("      ");
    else
    {
    if(a[2][3]>8)
    printf("       ");
    else
    printf("        ");
}
}
    if(a[2][3]>0)
    printf("%d",a[2][3]);
    else
    printf(" ");
    //printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    printf("\n\n\n\n\n\t\t");
    if(a[0][1]>512)
    printf("    ");
    else
    {
    if(a[0][1]>64)
    printf("     ");
    else
    {
    if(a[3][0]>8)
    printf("      ");
    else
    printf("       ");
}
}
    if(a[3][0]>0)
    printf("%d",a[3][0]);
    else
    printf(" ");
    //printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    //printf("\n\n\n\t\t\t");
    if(a[3][1]>512)
    printf("      ");
    else
    {
    if(a[3][1]>64)
    printf("       ");
    else
    {
    if(a[3][1]>8)
    printf("        ");
    else
    printf("         ");
}
}
    if(a[3][1]>0)
    printf("%d",a[3][1]);
    else
    printf(" ");
    //printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    //printf("\n\n\n\t\t\t");
    if(a[3][2]>512)
    printf("     ");
    else
    {
    if(a[3][2]>64)
    printf("      ");
    else
    {
    if(a[3][2]>8)
    printf("       ");
    else
    printf("        ");
}
}
    if(a[3][2]>0)
    printf("%d",a[3][2]);
    else
    printf(" ");
    //printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n");
    //printf("\n\n\n\t\t\t");
    if(a[3][3]>512)
    printf("     ");
    else
    {
    if(a[3][3]>64)
    printf("      ");
    else
    {
    if(a[3][3]>8)
    printf("       ");
    else
    printf("        ");
}
}
    if(a[3][3]>0)
    printf("%d",a[3][3]);
    else
    printf(" ");
printf("\n\n\n\t\t\t\t Score: %d             Press PgDn Key to Exit",score);
//settextstyle(8,0,7);
//setcolor(WHITE);
//outtextxy(5,5,"2048");
//setfillstyle(SOLID_FILL,RED);
//bar(150,150,450,450);
setcolor(YELLOW);
/*line(150,150,150,450);
line(225,150,225,450);
line(300,150,300,450);
line(375,150,375,450);
line(450,150,450,450);
line(150,150,450,150);
line(150,225,450,225);
line(150,300,450,300);
line(150,375,450,375);
line(150,450,450,450);*/
line(150,150,150,445);
line(225,150,225,445);
line(300,150,300,445);
line(375,150,375,445);
line(450,150,450,445);
line(150,150,450,150);
line(150,225,450,225);
line(150,300,450,300);
line(150,375,450,375);
line(150,445,450,445);
for ( s = 200 ; s <= 1000 ; s = s + 20 )
   {
      sound(s);
      delay(3);
   }
   nosound();
/*setcolor(RED);
floodfill(175,175,BLUE);
floodfill(175,250,BLUE);
floodfill(175,350,BLUE);
floodfill(175,400,BLUE);
floodfill(250,175,BLUE);
floodfill(250,250,BLUE);
floodfill(250,350,BLUE);
floodfill(250,400,BLUE);
floodfill(350,175,BLUE);
floodfill(350,250,BLUE);
floodfill(350,350,BLUE);
floodfill(350,400,BLUE);
floodfill(400,175,BLUE);
floodfill(400,250,BLUE);
floodfill(400,350,BLUE);
floodfill(400,400,BLUE);*/
}
void upward(int *a[],int *d[])
{
	int i,j,k,*b[4];
	for(i=0;i<4;i++)
	{
	b[i]=(int*)malloc(4*sizeof(int));
    }
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
		b[i][j]=a[i][j];
		}
	}
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			if(a[j][i]==b[j][i])
			{
				for(k=j+1;k<4;k++)
			{
			if(a[j][i]==a[k][i])
			{
				a[k][i]=a[k][i]+a[j][i];
				a[j][i]=0;
			break;
			}
			if(a[k][i]!=0)
			{
				break;
			}
		    }
		}
	    }
	}
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			d[i][j]=a[i][j];
		}
	}
	for(k=0;k<3;k++)
	{
	for(i=3;i>0;i--)
	{
		for(j=0;j<4;j++)
		{
			if(a[i-1][j]==0)
			{
				a[i-1][j]=a[i][j];
				a[i][j]=0;
			}
		}
	}
    }
}
void downward(int *a[],int *d[])
{
	int i,j,k,*b[4];
	for(i=0;i<4;i++)
	{
	b[i]=(int*)malloc(4*sizeof(int));
    }
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
		b[i][j]=a[i][j];
		}
	}
	for(i=0;i<4;i++)
	{
		for(j=3;j>=0;j--)
		{
			if(a[j][i]==b[j][i])
			{
				for(k=j-1;k>=0;k--)
			{
			if(a[j][i]==a[k][i])
			{
				a[k][i]=a[k][i]+a[j][i];
				a[j][i]=0;
			break;
			}
			if(a[k][i]!=0)
			{
				break;
			}
		    }
		}
	    }
	}
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			d[i][j]=a[i][j];
		}
	}
	for(k=0;k<3;k++)
	{
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			if(a[i+1][j]==0)
			{
				a[i+1][j]=a[i][j];
				a[i][j]=0;
			}
		}
	}
    }
}
void rightward(int *a[],int *d[])
{
    int i,j,k,*b[4];
	for(i=0;i<4;i++)
	{
	b[i]=(int*)malloc(4*sizeof(int));
    }
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
		b[i][j]=a[i][j];
		}
	}
	for(i=3;i>=0;i--)
	{
		for(j=3;j>=0;j--)
		{
			if(a[i][j]==b[i][j])
			{
				for(k=j-1;k>=0;k--)
			{
			if(a[i][j]==a[i][k])
			{
				a[i][k]=a[i][k]+a[i][j];
				a[i][j]=0;
			break;
			}
			if(a[i][k]!=0)
			{
				break;
			}
		    }
		}
	    }
	}
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			d[i][j]=a[i][j];
		}
	}
	for(k=0;k<3;k++)
	{
	for(i=0;i<3;i++)
	{
		for(j=0;j<4;j++)
		{
			if(a[j][i+1]==0)
			{
				a[j][i+1]=a[j][i];
				a[j][i]=0;
			}
		}
	}
    }
}
void leftward(int *a[],int *d[])
{
	int i,j,k,*b[4];
	for(i=0;i<4;i++)
	{
	b[i]=(int*)malloc(4*sizeof(int));
    }
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
		b[i][j]=a[i][j];
		}
	}
	for(i=3;i>=0;i--)
	{
		for(j=0;j<3;j++)
		{
			if(a[i][j]==b[i][j])
			{
				for(k=j+1;k<4;k++)
			{
			if(a[i][j]==a[i][k])
			{
				a[i][k]=a[i][k]+a[i][j];
				a[i][j]=0;
			break;
			}
			if(a[i][k]!=0)
			{
				break;
			}
		    }
		}
	    }
	}
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
			d[i][j]=a[i][j];
		}
	}
	for(k=0;k<3;k++)
	{
	for(i=3;i>0;i--)
	{
		for(j=3;j>=0;j--)
		{
			if(a[j][i-1]==0)
			{
				a[j][i-1]=a[j][i];
				a[j][i]=0;
			}
		}
	}
    }
}
void ran(int *a[])
{
	int i,j;
	i=rand()%4;
	j=rand()%4;
	while(a[i][j]>0)
	{
		i=rand()%4;
		j=rand()%4;
	}
	a[i][j]=getRandNum();
}
void save(int *c[],int *a[])
{
    int i,j;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
		c[i][j]=a[i][j];
		}
	}
}
int getScore(int *c[],int score,int *d[])
{
	int i,j;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
		if(c[i][j]!=d[i][j])
	{
	score+=d[i][j];
	    }
		}
	}
	return score;
}
int checkadd(int *a[],int *c[])
{
    int i,j,count=0;
	for(i=0;i<4;i++)
	{
		for(j=0;j<4;j++)
		{
		if(c[i][j]==a[i][j])
	{
	count=count+1;
	    }
		}
	}
	if(count==16)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
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
void main()
{
int *a[4],*c[4],*d[4],i,j,k,l,ch2,score=0,loop=1,win,out,check=0;
int status, gd = DETECT, gm,button,x,y,z;
    char e,m[50],array[50];
    int gdriver1 = DETECT,gmode1;
int x1,y1,i1;
w:	initgraph(&gdriver1,&gmode1,"C:\\TC\\BGI");
       //	x=getmaxx()/2;
       //	y=getmaxy()/2;
     /*	for ( s = 200 ; s <= 1000 ; s = s + 20 )
   {
      sound(s);
      delay(100);
   }   */
   //nosound();
	for(i1=30;i1<100;i1++)
	{
		delay(40);
		setcolor(i1/10);
		sound(i1+200);
		arc(310,375,0,180,i1-10);
		arc(200,375,0,180,i1-10);
		arc(420,375,0,180,i1-10);
		arc(90,375,0,180,i1-10);
		arc(530,375,0,180,i1-10);
	}
	capture("C:\\TC\\Capture\\Capture1.jpg");
	nosound();

/*    int i1=0,m1=0,k1=0;
	int gdriver1=DETECT,gmode1;
w:initgraph(&gdriver1,&gmode1,"c:\\tc\\bgi");
       //	while(!kbhit())
	//{
		cleardevice();
		i1++;
		k1++;
		if(i1>getmaxx())
			i1-=670;
			setcolor(RED);
		line(80+i1,300,90+i1,270);
		line(90+i1,270,120+i1,270);
		line(120+i1,270,160+i1,240);
		line(160+i1,240,230+i1,240);
		line(230+i1,240,275+i1,270);
		line(275+i1,270,310+i1,270);
		line(310+i1,270,335+i1,290);
		line(335+i1,290,335+i1,300);
		line(255+i1,300,335+i1,300);
		line(180+i1,300,210+i1,300);
		line(80+i1,300,135+i1,300);
		setcolor(RED);
		//floodfill(145+k,260,RED);
		//printf("Test");
		outtextxy(150+k1,260,"2048");
		arc(232+i1,300,0,180,23);
		arc(157+i1,300,0,180,23);
		setcolor(BLUE);
		circle(232+i1,300,18);
		circle(157+i1,300,18);
		pieslice(232+i1,300,0+m1,90+m1,18);
		pieslice(232+i1,300,180+m1,270+m1,18);
		pieslice(157+i1,300,0+m1,90+m1,18);
		pieslice(157+i1,300,180+m1,270+m1,18);
		if(m1<-360)
			m1=90;
		m1-=3;
	delay(5);
       //	}
*/
   /* int i1, j1 = 0, gd1 = DETECT, gm1;

   initgraph(&gd1,&gm1,"C:\\TC\\BGI");

   //settextstyle(DEFAULT_FONT,HORIZ_DIR,2);
   //outtextxy(25,240,"Press any key to start the game");

   //getch();
   setviewport(0,0,639,440,1);
   for( i1 = 0 ; i1 <= 420 ; i1 = i1 + 10, j1++ )
   {
      rectangle(50+i1,275,150+i1,400);
      rectangle(150+i1,350,200+i1,400);
      circle(75+i1,410,10);
      circle(175+i1,410,10);
      setcolor(j1);
      delay(30);

      if( i1 == 420 )

	 break;

      clearviewport();
   }*/

   //getch();
   //closegraph();
 //w: initgraph(&gd,&gm,"C:\\TC\\BGI");
   settextstyle(DEFAULT_FONT,HORIZ_DIR,7);
   //outtextxy(240,90,"2048");
   setcolor(GREEN);
   outtextxy(200,50,"2048");
   delay(100);
   settextstyle(DEFAULT_FONT,0,2);

   status = initmouse();

   if ( status == 0 )
      outtext("Mouse support not available.\n");
   else
   {
      showmouseptr();
     //textcolor(BLUE);
      //printf("\n\n\t2048");
     //setcolor(RED);
     // rectangle(50,100,200,50);
     circle(310,200,65);
     line(300,180,300,220);
     line(300,180,330,200);
     line(300,220,330,200);
     floodfill(310,200,GREEN);
     settextstyle(DEFAULT_FONT,0,1);
     outtextxy(20,200,"LEFT CLICK => PLAY");
     outtextxy(450,200,"RIGHT CLICK => HELP");
     //setfillstyle(SOLID_FILL,YELLOW);

      //rectangle(245,135,375,265);
     // printf("\n\n\n\n\n\nleftclick - PLAY\nrightclick - RULES");
      restrictmouseptr(245,135,375,265);
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

   for (z=5;z >=0;z--)
   {
      settextstyle(GOTHIC_FONT,HORIZ_DIR,30);
      sprintf(m,"%d",z);
      outtextxy(getmaxx()/2, getmaxy()/2,m);
      delay(1000);
      cleardevice();
      if ( z == 0 )
      {
for(i=0;i<4;i++)
	a[i]=(int*)malloc(4*sizeof(int));
for(i=0;i<4;i++)
	c[i]=(int*)malloc(4*sizeof(int));
	for(i=0;i<4;i++)
	d[i]=(int*)malloc(4*sizeof(int));
srand(time(NULL));
for(i=0;i<4;i++)
{
	for(j=0;j<4;j++)
	{
		a[i][j]=0;
	}
}
for(i=0;i<4;i++)
{
	for(j=0;j<4;j++)
	{
		c[i][j]=0;
	}
}
for(i=0;i<4;i++)
{
	for(j=0;j<4;j++)
	{
		d[i][j]=0;
	}
}
i=rand()%4;
j=rand()%4;
k=rand()%4;
l=rand()%4;
while((i==k) && (j==l))
{
	k=rand()%4;
	l=rand()%4;
}
a[i][j]=getRandNum();
a[k][l]=getRandNum();
//frontpage();
display(a,score);
while(loop)
{
getch();
ch2=0;
ch2=getch();
switch(ch2)
{
case 72:closegraph();//UP was pressed
    save(c,a);
	upward(a,d);
	score=getScore(c,score,d);
	win=checkwin(a);
	if(win==1)
	{
		//closegraph();
		printf("-----------------------GAME WIN-------------------------");
		loop=0;break;
	}
	else
	{
	check=checkadd(a,c);
	if(check==0)
	{
	ran(a);
    }
	out=checkout(a);
	if(out==0)
	{
	/*	//closegraph();
		printf("----------------------GAME OVER-------------------------");
	getch();
		loop=0;break;*/
		display(a,score);
		 printf("----------------------GAME OVER-------------------------");
       //	printf("\n\n==========>Press any to exit<==========");
	printf("\n Your Score: %d",score);
	       //	getch();
	      //	closegraph();
		//loop=0;
		break;
    }
	/*check=checkadd(a,c);
	if(check==0)
	{
	ran(a);
    }*/
    //closegraph();
	display(a,score);
    }
break;
case 80:closegraph();//down was pressed
    save(c,a);
	downward(a,d);
	score=getScore(c,score,d);
	win=checkwin(a);
	if(win==1)
	{
		printf("-----------------------GAME WIN-------------------------");
		//closegraph();
		loop=0;break;
	}
	else
	{
	check=checkadd(a,c);
	if(check==0)
	{
	ran(a);
    }
	out=checkout(a);
	if(out==0)
	{
		/*printf("----------------------GAME OVER-------------------------");
		//closegraph();
		loop=0;break;*/
		display(a,score);
		 printf("----------------------GAME OVER-------------------------");
       //	printf("\n\n==========>Press any to exit<==========");
	printf("\n Your Score: %d",score);
		//getch();
		//closegraph();
		//loop=0;
		break;
	}
	/*check=checkadd(a,c);
	if(check==0)
	{
	ran(a);
    }*/
    closegraph();
	display(a,score);
    }
break;
case 77:closegraph();//Right was pressed
    save(c,a);
	rightward(a,d);
	score=getScore(c,score,d);
	win=checkwin(a);
	if(win==1)
	{
		printf("-----------------------GAME WIN-------------------------");
		//closegraph();
		loop=0;break;
	}
	else
	{
		check=checkadd(a,c);
	if(check==0)
	{
	ran(a);
    }
	out=checkout(a);
	if(out==0)
	{
		/*printf("----------------------GAME OVER-------------------------");
		//closegraph();
		loop=0;break;*/
		display(a,score);
		 printf("----------------------GAME OVER-------------------------");
       //	printf("\n\n==========>Press any to exit<==========");
	printf("\n Your Score: %d",score);
		//getch();
		//closegraph();
		//loop=0;
		break;
	}
	/*check=checkadd(a,c);
	if(check==0)
	{
	ran(a);
    }*/
    closegraph();
	display(a,score);
    }
break;
case 75:closegraph();
//Left was pressed
    save(c,a);
	leftward(a,d);
	score=getScore(c,score,d);
	win=checkwin(a);
	if(win==1)
	{
	    printf("-----------------------GAME WIN-------------------------");
		//closegraph();
		loop=0;break;
	}
	else
	{
		check=checkadd(a,c);
	if(check==0)
	{
	ran(a);
    }
	out=checkout(a);
	if(out==0)
	{
		/*printf("----------------------GAME OVER-------------------------");
		//closegraph();
		loop=0;break;*/
		 display(a,score);
		 printf("----------------------GAME OVER-------------------------");
       //	printf("\n\n==========>Press any to exit<==========");
	printf("\n Your Score: %d",score);
		//getch();
		//closegraph();
		//loop=0;
		break;
	}
	/*check=checkadd(a,c);
	if(check==0)
	{
	ran(a);
    }*/
	closegraph();
	display(a,score);
    }
break;
default:closegraph();
	     printf("\n Thank you for playing!\n\n Better Luck Next Time!!\n\nYour Score: %d",score);
	     loop=0;break;
	 }
}
	 break;
	   //cleardevice();
   }
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

printf("\n\n\n--------Press any key to exit---------");
getch();
}

