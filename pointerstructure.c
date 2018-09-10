#include<stdio.h>
struct seee
{
  int a[5];
}s1,*p;
int main()
{
  int sum=0;
  p=&s1;
  for(int i=0; i<5; i++)
  {
    printf("enter the element a[%d]:::\n",i);
    scanf("%d",&p->a[i]);

  }
  for(int i=0; i<5; i++)
  {
    sum=sum+p->a[i];

  }
  printf("sum==%d",sum);
}
