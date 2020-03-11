#include <stdio.h>

int main(void) {
  int arr[10];
  int size,i,j,count=0;
  printf("Enter the size of the array\n");
  scanf("%d",&size);
  printf("Enter %d elements\n",size);
  for(i=0;i<size;i++)
    scanf("%d",&arr[i]);

  for(i=0;i<size;i++)
    for(j=i+1;j<size;j++)
      if(arr[i]!=arr[j])
        count++;
  printf("Result is %d",count);
  return 0;
}