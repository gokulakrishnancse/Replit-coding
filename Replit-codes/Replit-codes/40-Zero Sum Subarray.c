#include <stdio.h>

int main(void){
  int arr[100],i,j,size,sum=0,check=0,a,b;
  printf("Enter the size of the array\n");
  scanf("%d",&size);
  printf("Input %d elements\n",size);
  for(i=0;i<size;i++)
    scanf("%d",&arr[i]);
  for(i=0;i<size;i++)
  {
    for(j=i+1;j<size;j++)
    {
      sum=arr[i]+arr[j];
      if(sum==0)
      {
        check=1;
        a=i;
        b=j;
      }
    }
  }
  if(check==1)
    printf("subarray [%d,%d]'s sum is 0",arr[a],arr[b]);

  if(check==0)
    printf("no subarray yields 0 as sum"); 
  return 0;
}