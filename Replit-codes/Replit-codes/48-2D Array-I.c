#include <stdio.h>

int main(void) {
  int row,clm,i,j,a=0,size;
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

  for(i=0;i<size;i++)
    sum=sum+arr[i];
  printf("\nSum of all the elements -> %d",sum);
  return 0;
}