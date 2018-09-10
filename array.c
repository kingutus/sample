#include<stdio.h>
int main()
{
  int a[5],*b[5],sum=0;
  for(int i=0; i<5; i++)
  {
    printf("a[%d]=",i);
    scanf("%d",&a[i]);
  }
  for(int i=0; i<5; i++)
  {
    b[i]=&a[i];
  }
  for(int i=0; i<5; i++)
  {
    sum=sum+*b[i];
  }
  printf("the sum of the array:::%d\n",sum);
  return 0;
}
