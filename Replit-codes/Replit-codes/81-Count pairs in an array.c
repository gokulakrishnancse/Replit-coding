#include <stdio.h>

int main(void) {
  int arr[100];
  int k,i,j,count=0,size,temp,sum;
  printf("Enter the size of the array\n");
  scanf("%d",&size);
  printf("Input %d elements\n",size);
  for(i=0;i<size;i++)
    scanf("%d",&arr[i]);
  printf("Enter the value for k\n");
  scanf("%d",&k);

  for(i=0;i<size-1;i++)
  {
    for(j=i+1;j<size;j++)
    {
      sum=arr[i]+arr[j];
      if(sum%k==0)
        count++;
    }
  }

  printf("Result is %d",count);
    

  return 0;
}