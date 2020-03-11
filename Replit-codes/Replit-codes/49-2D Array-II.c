#include <stdio.h>

int main(void) {
  int row,clm,i,j,a=0,size;
  int arr[25],rs,sum=0,dgn[10],d=0;
  printf("Enter the no. of rows\n");
  scanf("%d",&row);
  printf("Enter the no. of columns\n");
  scanf("%d",&clm);
  size=row*clm;
  rs=size/clm;

  if(row==clm)
  {
  for(i=0;i<row;i++)
  {
    for(j=0;j<clm;j++)
    {
      printf("insert the element for %d,%d\n",i,j);
      if(a<size)
        scanf("%d",&arr[a]);
      a++;
    }
  }
  printf("The matrix is\n");
  a=0;

  for(i=0;i<row;i++)
  {
    for(j=0;j<clm-1;j++)
    {
      printf("%d ",arr[a]);
      a++;
    }
    if(j==clm-1)
      printf("%d",arr[a]);
    a++;
    printf("\n");
    j=0;
  }

  printf("Diagonal elements are ->");
  for(i=0;i<size;)
  {
    dgn[d]=arr[i];
    i=i+(clm+1);
    d++;
  }

  for(i=clm-1;i<size;)
  {
    dgn[d]=arr[i];
    i=i+(clm-1);
    d++;
  }

  for(i=0;i<(2*row)-1;i++)
    printf("%d,",dgn[i]);

  if(i<2*row)
    printf("%d\n",dgn[i]);

  for(i=0;i<row*2;i++)
    sum=sum+dgn[i];
  printf("\nSum of all the elements -> %d",sum);
  }

  else
    printf("\nMake sure your input matrix should be in nxn format");
  return 0;
}