#include <stdio.h>

int main(void) {
  int arr[100];
  int i,size,sum=0;
  printf("Enter the size of the array\n");
  scanf("%d",&size);
  printf("Input %d integer numbers\n",size);
  for(i=0;i<size;i++)
  {
    scanf("%d",&arr[i]);
    sum=sum+arr[i];
  }
  printf("The sum of the array elements\n%d",sum);
  return 0;
}