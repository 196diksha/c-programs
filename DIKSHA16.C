//program to calculate factorial
#include<stdio.h>
#include<conio.h>
int main()
{
void calculate_factorial();

calculate_factorial();
getch();
return 0;
}
void calculate_factorial()
{
int i, n, fact=1;
printf("enter the value of n");
scanf("%d",&n);
for(i=1; i<=n; i++)
{
fact=fact*i;
}
printf("%d",fact);

}
