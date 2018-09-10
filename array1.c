#include<stdio.h>
int main()
{
  int a[5],*b=0,sum=0;
  for(int i=0; i<5; i++)
  {
    printf("enter a[%d]\n",i);
    scanf("%d",&a[i]);
  }
  for(int i=0; i<5; i++)
  {
    b=&a[i];
    sum=sum+*b;

  }
  printf("sum is :%d",sum);
  return 0;
}
