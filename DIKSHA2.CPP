#include<stdio.h>
#include<conio.h>
#include<math.h>
int main()
{
float p,r,t,ci;
clrscr();
printf("enter the value of principle,rate,time");
scanf("%f%f%f",&p,&r,&t);
ci=p*pow(1+r/100,t);
printf("compound interest is %f",ci);
getch();
return 0;
}
