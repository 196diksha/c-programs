#include<stdio.h>
#include<conio.h>
void main()
{

int c;
clrscr();
printf("enter color code");
scanf("%c",&c);

switch(c)
{
 case 1:

 printf("Red");
 break;
 case 2:

 printf("yellow");
 break;

 case 3:

 printf("blue");
 break;

 case 4:

 printf("green");
 break;

 case 5:

 printf("white");
 break;

 }
 getch();
}