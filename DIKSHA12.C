#include<stdio.h>
#include<conio.h>
void main()
{
char a;
int x,y;
clrscr();
printf("enter operator(+,-,*,/):");
scanf("%c",&a);
printf("enter two numbers");
scanf("%d%d",&x,&y);
switch(a)
{
case'*':
printf("%d*%d=%d",x,y,x*y);
break;
case'+':
printf("%d+%d=%d",x,y,x+y);
break;
case'-':
printf("%d-%d=%d",x,y,x-y);
break;
case'/':
printf("%d/%d=%d",x,y,x/y);
break;
default:
printf("not valid");

}
getch();
}