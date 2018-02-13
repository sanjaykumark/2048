#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<dos.h>
#include<conio.h>
#include<graphics.h>
int checkwin(int *a[]);
int checkout(int *a[]);
void upward(int *a[]);
void downward(int *a[]);
void rightward(int *a[]);
void leftward(int *a[]);
void display(int *a[]);
void ran(int *a[]);
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
void display(int *a[])
{
	int i,j;
for(i=0;i<4;i++)
{
	printf("\n");
	for(j=0;j<4;j++)
	{
	printf("\t%d",a[i][j]);
	}
}
}
void upward(int *a[])
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
void downward(int *a[])
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
void rightward(int *a[])
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
void leftward(int *a[])
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
void main()
{
	int x=200,y=200;
int gd=DETECT,gm;
int *a[4],i,j,k,l,ch2;
clrscr();
for(i=0;i<4;i++)
	a[i]=(int*)malloc(4*sizeof(int));
srand(time(NULL));
for(i=0;i<4;i++)
{
	for(j=0;j<4;j++)
	{
		a[i][j]=0;
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
settextstyle(4,0,1);
outtextxy(x,y,"2048");
floodfill(152,182,WHITE);
floodfill(252,182,WHITE);
setfillstyle(SLASH_FILL,BLUE);
floodfill(182,252,WHITE);
setfillstyle(HATCH_FILL,GREEN);
floodfill(200,105,WHITE);
floodfill(210,105,WHITE);
printf("\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\npress enter to continue....");
getch();
closegraph();
printf("2048 - How to play?\n");
printf("The objective of the game is to get the number 2048 using additions of the number two and its multiples.\n\n");

printf("You will have a grid of 16 tiles. Two numbers will be given: usually two number twos, maybe number four.\n\n");

printf("Move up or down, left or right trying to join two equal numbers.\n\n");


printf("When two equal numbers are in touch, they will add up.\n\n");


printf("If we are run out of equal numbers on our grid, or we can not put them in touch, the game will provide us another two, a four or even an eight so we can keep on playing. If there are no free tiles on our grid, the game ends.\n\n");


printf("By adding numbers, we get higher numbers and we can approach to 2048, which is the goal of the game.\n\n\n\n");


printf("\n\n\npress enter to continue\n");
getch();
for(i=0;i<4;i++)
{
	printf("\n");
	for(j=0;j<4;j++)
	{
		printf("\t%d",a[i][j]);
	}
}
for(i=0;;i++)
{
printf("\n Press the arrow key to play:\n");
getch();
ch2=0;
ch2=getch();
switch(ch2)
{
case 72:for(i=0;i<4;i++)

{
sound(200);
delay(25);
}nosound();
       printf("UP was pressed\n");
	upward(a);
	ran(a);
	checkwin(a);
	checkout(a);
	display(a);
break;
case 80:for(i=0;i<4;i++)

{
sound(200);
delay(25);
}nosound();
printf("down was pressed\n");
	downward(a);
	ran(a);
	checkwin(a);
	checkout(a);
	display(a);
break;
case 77:for(i=0;i<4;i++)

{
sound(200);
delay(25);
}nosound();
printf("Right was pressed\n");
	rightward(a);
	ran(a);
	checkwin(a);
	checkout(a);
	display(a);
break;
case 75:for(i=0;i<4;i++)

{
sound(200);
delay(25);
}nosound();
printf("Left was pressed\n");
	leftward(a);
	ran(a);
	checkwin(a);
	checkout(a);
	display(a);
break;
}
}
}

