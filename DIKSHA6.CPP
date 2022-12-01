#include<stdio.h>
#include<conio.h>
void main()
{
clrscr();
int p,q;
printf("enter the value of numbers ");
scanf("%d%d",&p,&q);
p=p+q;
q=p-q;
p=p-q;

printf("first variable=%d second=%d",p,q);
getch();
}
