#include<stdio.h>
#include<conio.h>
void main()
{

int A[3][3],i,j;
clrscr();
printf("enter the matrix");
for(i=0;i<3;i++)

{
  for(j=0;j<3;j++)

{
scanf("%d",&A[i][j]);
}
}
for(i=0;i<3;i++)
{
for(j=0;j<3;j++)
if(i==j)
{
printf("%d",A[i][j]);
}
}
 getch();
}