#include<stdio.h>
int main()
{
  int *p,*q,a,b,sum=0;
  printf("enter two numbers:\n");
  scanf("%d%d",&a,&b);
  p=&a;
  q=&b;
  sum=*p+*q;
  printf("sum of the numbers using pointers.....:%d\n",sum);
  return 0;
}
