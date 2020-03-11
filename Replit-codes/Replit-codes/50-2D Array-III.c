#include <stdio.h>

int main(void) {
  int row,clm,i,j,a=0,size;
  int arr[25],dgn[10],d=0;
  printf("Enter the no. of rows\n");
  scanf("%d",&row);
  printf("Enter the no. of columns\n");
  scanf("%d",&clm);
  size=row*clm;

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

  printf("Main Diagonal elements are ->");
  for(i=0;i<row-1;i++)
    printf("%d,",dgn[i]);

  if(i<row)
    printf("%d",dgn[i]);

  printf("\nSecondary Diagonal elements are ->");
  for(i=row;i<(row*2)-1;i++)
    printf("%d,",dgn[i]);

  if(i<row*2)
    printf("%d",dgn[i]);

  j=row;
  for(i=0;i<size;)
  {
    arr[i]=dgn[j];
    i=i+(row+1);
    j=j+1;
  }

  printf("\nAfter interchange, the final matrix is\n");
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
  }
  else
    printf("\nMake sure your input matrix should be in 3x3 format");
  return 0;
}