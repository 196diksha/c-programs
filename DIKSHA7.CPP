#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{
float a,b,c,s,r,area;
clrscr();
printf("enter the value of three sides");
scanf("%f%f%f",&a,&b,&c);
s=(a+b+c)/2;
r=s*(s-a)*(s-b)*(s-c);
area=sqrt(r);
printf("area=%f",area);
getch();

}
