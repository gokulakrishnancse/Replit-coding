#include <stdio.h>

int main(void) {
  int row,clm,i,j,a=0,size,ind=0,temp;
  int arr[25];
  printf("Enter the no. of rows\n");
  scanf("%d",&row);
  printf("Enter the no. of columns\n");
  scanf("%d",&clm);
  size=row*clm;

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
  printf("Result is\n");

  j=0;
  for(i=0;i<row;i++)
  {
    printf("%d",arr[ind]);
    temp=3;
    a=i;
    for(j=0;j<a;j++)
    {
      if(a==4)
        a=3;
      if(a>0)
      {
        printf(" %d",arr[ind-temp]);
        temp=temp+3;
      }
    }
    a++;
    ind=ind+4;
    printf("\n");
  }


  a=clm-2;
  ind=(row-1)*clm;
  for(i=1;i<clm;i++)
  {
    ind=ind+1;
    printf("%d",arr[ind]);
    temp=3;
    for(j=0;j<a;j++)
    {
      printf(" %d",arr[ind-temp]);
      temp=temp+3;
    }
    a--;
    printf("\n");
  }
  return 0;
}