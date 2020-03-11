#include <stdio.h>

int main(void) {
  int arr[100],size,i,j,rotate,temp;
  printf("Enter the size of the array\n");
  scanf("%d",&size);
  printf("Input %d numbers\n",size);
  for(i=0;i<size;i++)
    scanf("%d",&arr[i]);
  printf("Input number of times to rotate\n");
  scanf("%d",&rotate);

  for(j=0;j<rotate;j++)
  {
    i=0;
    temp=arr[i];
    for(i=0;i<size;i++)
      arr[i]=arr[i+1];
    arr[i-1]=temp;
  }
  printf("Array after left rotation %d time(s)\n",rotate);
  for(i=0;i<size;i++)
    printf("%d\n",arr[i]);
  return 0;
}