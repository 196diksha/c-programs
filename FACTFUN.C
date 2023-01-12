// Akash Nehra
// Program for Factorial function program
#include <stdio.h>
#include<conio.h>
void main()
{
	int a,f;
	int factorial(int);
	clrscr();
	printf("Enter the value of a\n");
	scanf("%d",&a);
	f=factorial(a);
	printf("Factorial of %d is %d\n ",a,f);
	getch();
}
	int factorial(int x)
	{
	int y=1,i;
	for(i=1;i<=x;i++)
	{
	y=y*i;
	}
	return y;
	}


