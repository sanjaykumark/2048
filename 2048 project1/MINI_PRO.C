#include<graphics.h>
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
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
	if(a[0][0]==a[0][1] || a[0][0]==a[1][0]){return 1;}
	if(a[0][3]==a[0][2] || a[0][3]==a[1][3]){return 1;}
	if(a[3][0]==a[3][1] || a[3][0]==a[2][0]){return 1;}
	if(a[3][3]==a[3][2] || a[3][3]==a[2][3]){return 1;}
	if(a[0][1]==a[0][0] || a[0][1]==a[0][2] || a[0][1]==a[1][1]){return 1;}
	if(a[0][2]==a[0][1] || a[0][2]==a[0][3] || a[0][2]==a[1][2]){return 1;}
	if(a[1][0]==a[0][0] || a[1][0]==a[1][1] || a[1][0]==a[2][0]){return 1;}
	if(a[2][0]==a[1][0] || a[2][0]==a[2][1] || a[2][0]==a[3][0]){return 1;}
	if(a[1][3]==a[0][3] || a[1][3]==a[1][2] || a[1][3]==a[2][3]){return 1;}
	if(a[2][3]==a[1][3] || a[2][3]==a[2][2] || a[2][3]==a[3][3]){return 1;}
	if(a[3][1]==a[3][0] || a[3][1]==a[2][1] || a[3][1]==a[3][2]){return 1;}
	if(a[3][2]==a[3][1] || a[3][2]==a[2][2] || a[3][2]==a[3][3]){return 1;}
	if(a[1][1]==a[1][0] || a[1][1]==a[0][1] || a[1][1]==a[1][2] || a[1][1]==a[2][1]){return 1;}
	if(a[1][2]==a[1][1] || a[1][2]==a[0][2] || a[1][2]==a[2][2] || a[1][2]==a[1][3]){return 1;}
	if(a[2][1]==a[2][0] || a[2][1]==a[3][1] || a[2][1]==a[1][1] || a[2][1]==a[2][2]){return 1;}
	if(a[2][2]==a[2][1] || a[2][2]==a[1][2] || a[2][2]==a[2][3] || a[2][2]==a[3][2]){return 1;}
	return 0;
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
	/*int i,j;
	for(i=0;i<4;i++)
	{
		printf("\n");
		for(j=0;j<4;j++)
		{
	    printf("\t%d",a[i][j]);
		}
	}*/
	int gdriver=DETECT,gmode;
int i,j;
initgraph(&gdriver,&gmode,"c:\\tc\\bgi");
printf("\n\n\n\n\n\n\n\n");
printf("\n\n\n\t\t");
setbkcolor(BLUE);
setfillstyle(SOLID_FILL,RED);
bar(150,150,450,450);
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
    printf("\n\n\n\n\t\t");
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
printf("\n\n\n\n\t\t\t\t Score: %d             Press PgDn Key to Exit",score);
settextstyle(8,0,7);
setcolor(WHITE);
outtextxy(5,5,"2048");
//setfillstyle(SOLID_FILL,RED);
//bar(150,150,450,450);
setcolor(YELLOW);
line(150,150,150,450);
line(225,150,225,450);
line(300,150,300,450);
line(375,150,375,450);
line(450,150,450,450);
line(150,150,450,150);
line(150,225,450,225);
line(150,300,450,300);
line(150,375,450,375);
line(150,450,450,450);
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
	a[i][j]=2;
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
void main()
{
int *a[4],*c[4],*d[4],i,j,k,l,ch2,score=0,loop=1,win,out,check=0;
clrscr();
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
	out=checkout(a);
	if(out==0)
	{
		//closegraph();
		printf("----------------------GAME OVER-------------------------");
		loop=0;break;
	}
	check=checkadd(a,c);
	if(check==0)
	{
	ran(a);
    }
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
	out=checkout(a);
	if(out==0)
	{
		printf("----------------------GAME OVER-------------------------");
		//closegraph();
		loop=0;break;
	}
	check=checkadd(a,c);
	if(check==0)
	{
	ran(a);
    }
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
	out=checkout(a);
	if(out==0)
	{
		printf("----------------------GAME OVER-------------------------");
		//closegraph();
		loop=0;break;
	}
	check=checkadd(a,c);
	if(check==0)
	{
	ran(a);
    }
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
	out=checkout(a);
	if(out==0)
	{
		printf("----------------------GAME OVER-------------------------");
		//closegraph();
		loop=0;break;
	}
	check=checkadd(a,c);
	if(check==0)
	{
	ran(a);
    }
	closegraph();
	display(a,score);
    }
break;
default:closegraph();
	     printf("\n Thank you for playing!\n\n Better Luck Next Time!!\n\n");
	     loop=0;break;
}
}
printf("\n\n\n--------Press any key to exit---------");
getch();
}

