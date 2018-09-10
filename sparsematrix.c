#include<stdio.h>
int main()
{
  int a[10][10],sum=0,m,n;
  printf("enter the dimension of the matrix m x n:::");
  scanf("%d%d",&m,&n);
  for(int i=0; i<m; i++)
  {
    for(int j=0; j<n; j++)
    {
      printf("enter the element a[%d][%d]::\n",i,j);
      scanf("%d",&a[i][j]);
    }
  }
  for(int i=0; i<m; i++)
  {
    for(int j=0; j<n; j++)
    {
      if(a[i][j]==0)
      sum=sum+1;
    }
  }
  if(sum>(m+n)/2)
  {
    printf("the given matrix is a sparse matrix");
  }
  else
  {
    printf("the given matrix is not a sparse matrix");
  }


}
