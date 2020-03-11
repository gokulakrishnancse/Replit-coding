#include <stdio.h>

int main(void) {
  int n,m,i,j;
  int arr[50][50];
  printf("Enter the value for N\n");
  scanf("%d",&n);
  printf("Enter the value for M\n");
  scanf("%d",&m);
  printf("The final spiral matrix is \n");
  int l=0,k=0,val=1;
  int  last_row=n-1,last_col=m-1;
  while(k<=last_row && l<=last_col )
  {
    for(i=l;i<=last_col;i++)
      arr[k][i]=val++;
    k++;
    for(i=k;i<=last_row;i++)
      arr[i][last_col]=val++;
    last_col--;
    if(k<=last_row)
    {
      for(i=last_col;i>=l;i--)
        arr[last_row][i]=val++;
      last_row--;
    }
    if(l<=last_row)
    {
      for(i=last_row;i>=k;i--)
        arr[i][l]=val++;
      l++;
    }
  }
  for(i=0;i<n;i++)
  {
    for(j=0;j<m;j++)
      printf("%d ",arr[i][j]);
    printf("\n");
  }
  return 0;
}