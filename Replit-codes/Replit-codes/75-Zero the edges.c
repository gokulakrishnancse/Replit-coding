#include <stdio.h>

int main(void) {
  int row,clm,i,j,a=0,size;
  int arr[25];
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




    for(i=0;i<clm;i++)
      arr[i]=0;
    j=row*(row-1);
    for(i=j;i<size;i++)
      arr[i]=0;
    for(i=1;i<=(row-2);i++)
    {
      j=row*i;
      arr[j]=0;
      j=j+(clm-1);
      arr[j]=0;
    }
    printf("Result is\n");
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
    printf("\nMake sure your input matrix should be in nxn format");
  return 0;
}