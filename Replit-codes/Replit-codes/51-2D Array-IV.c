#include <stdio.h>

int main(void) {
  int row,clm,i,j,a=0,size,r=0;
  int arr[25],rs,sum=0;
  printf("Enter the no. of rows\n");
  scanf("%d",&row);
  printf("Enter the no. of columns\n");
  scanf("%d",&clm);
  size=row*clm;
  rs=size/clm;
  for(i=0;i<row;i++)
  {
    for(j=0;j<clm;j++)
    {
      printf("Insert the element for %d,%d\n",i,j);
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
  j=0;
  i=0;
  r=row;
  while(j<row)
  {
    while(i<r)
    {
      sum=sum+arr[i];
      i++;
    }
    printf("Sum of row%d->%d\n",j+1,sum);
    j++;
    r=r+row;
    sum=0;
  }

  j=0;
  i=0;
  sum=0;
  r=1;
  while(j<clm)
  {
    while(i<size)
    {
      sum=sum+arr[i];
      i=i+row;
    }
    printf("Sum of column%d->%d\n",j+1,sum);
    j++;
    i=0;
    i=r;
    r++;
    sum=0;
  }
  return 0;
}