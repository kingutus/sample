 #include<stdio.h>
int main()
{
  int rows[10],col[10],val[50][50],a,b,c,sum=0,r[50],c1[50],v[50],k=0,z;
  printf("enter the number of rows:::");
  scanf("%d",&a);
  printf("enter the number of columns:::");
  scanf("%d",&b);
  for(int i=0; i<a; i++)
  {
    for(int j=0; j<b; j++)
    {
      printf("enter the element for row[%d] and col[%d]::\n",i,j);
      scanf("%d",&val[i][j]);
    }  
  }
  for(int i=0; i<a; i++)
  {
    for(int j=0; j<b; j++)
    {
      if(val[i][j]==0)
      sum=sum+1;
    }}
  if(sum>(a+b)/2)
  {
    printf("the given matrix is a sparse matrix\n");
  }
  else
  {
    printf("the given matrix is not a sparse matrix\n");
  }


    printf("the number of zeroes in the given sparse matrix::%d\n",sum);
    c=(a*b)-sum;
    for(int i=0; i<a; i++)
    {
      for(int j=0; j<b; j++)
      {


        if(val[i][j]!=0)
        {
          r[k]=i;
          c1[k]=j;
          v[k]=val[i][j];
          k++;
        }
      }
    }
    printf("rows\t");
    for(int i=0; i<c; i++)
    {

      printf("%d\t",r[i]);

    }
    printf("\n");
    printf("columns\t");
    for(int i=0; i<c; i++)
    {

      printf("%d\t",c1[i]);
    }
    printf("\n");
    printf("values\t");
    for(int i=0; i<c; i++)
    {

      printf("%d\t",v[i]);
    }

    for(int i=0; i<a; i++)
    {
      for(int j=0; j<b; j++)
      {
        z=r[i];
        r[i]=c1[i];
        c1[i]=z;




        }
      }

    printf("\n");
    printf("TRANSPOSE OF THAT MATRIX::");
    printf("\n");
    printf("rows\t");
    for(int i=0; i<c; i++)
    {

      printf("%d\t",r[i]);

    }
    printf("\n");
    printf("columns\t");
    for(int i=0; i<c; i++)
    {

      printf("%d\t",c1[i]);
    }
    printf("\n");
    printf("values\t");
    for(int i=0; i<c; i++)
    {

      printf("%d\t",v[i]);
    }

}
