#include <stdio.h>

int main(void) {
  int arr[100];
  int size,i,j,check,sum=0;
  printf("Enter the size of the array\n");
  scanf("%d",&size);
  printf("Enter %d elements\n",size);
  for(i=0;i<size;i++)
    scanf("%d",&arr[i]);

  for(i=0;i<size-1;i++)
  {
    check=0;
    for(j=i+1;j<size && check==0;j++)
    {
      while(arr[j]>arr[i])
        arr[j]=arr[j]-arr[i];
      if(arr[j]<=arr[i])
        check=1;
    }
  }

  for(i=0;i<size;i++)
    sum=sum+arr[i];
  printf("\nResult is %d",sum);

  return 0;
}