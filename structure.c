#include<stdio.h>
struct see
{
  int a[5];
}s1;
int main()
{
  int sum=0;

  for(int i=0; i<5; i++)
  {
    printf("enter the element a[%d]::\n",i);
    scanf("%d",&s1.a[i]);
  }
  for(int i=0; i<5; i++)
  {
    sum=sum+s1.a[i];
  }
  printf("sum==%d",sum);
}
