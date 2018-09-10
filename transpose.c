#include<stdio.h>
int main()
{
  int a[3][3],b[3][3];
  for(int i=0; i<3; i++)
  {
    for(int j=0; j<3; j++)
    {
    printf("enter a[%d][%d]",i,j);
    scanf("%d",&a[i][j]);
        b[i][j]=0;
  }}
  for(int i=0; i<3; i++)
  {
    for(int j=0; j<3; j++)
    {
      b[i][j]=a[j][i];
    }
}
    for(int i=0; i<3; i++)
    {
      for(int j=0; j<3; j++)
      {
        printf("transpose b[%d][%d]::::%d\n",i,j,b[i][j]);
      }
    }

}
