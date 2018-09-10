#include<stdio.h>
#include<stdlib.h>
int main()
{
  int *ptr,sum=0,a[5];
  ptr=(int *) malloc(5*sizeof(int));

  for(int i=0; i<5; i++)
  {
    printf("enter a[%d]:",i);
    scanf("%d",&*(ptr+i));
  }
  for(int i=0; i<5; i++)
  {
    sum=sum+*(ptr+i);
  }
  printf("sum : %d",sum);
  return 0;

}
