#include<stdio.h>
int main()
{
  int *a,*b,*c,d,e;
  printf("enter the value of d:\n");
  scanf("%d",&d);
  printf("enter the value of e:\n");
  scanf("%d",&e);
  a=&d;
  b=&e;
  c=a;
  a=b;
  b=c;
  printf("d=%d\n",*a);
  printf("e=%d\n",*b);
  return 0;

}













