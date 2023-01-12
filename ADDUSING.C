#include<stdio.h>
  void main(){
  void add(int,int);
  int p,q;
  void (*p1)();
  printf("enter two numbers");
  scanf("%d%d",&p,&q);
  p1=&add;
  (*p1)(p,q);
  getch();

}
void add(int x,int y)
{
int r;
r = x+y;
printf("%d",r);
}