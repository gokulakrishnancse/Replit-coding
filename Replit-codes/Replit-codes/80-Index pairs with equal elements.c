#include <stdio.h>

int main(void) {
  int arr[100];
  int size,i,j,count=0,check;

  printf("Enter the size of the array\n");
  scanf("%d",&size);
  printf("Input %d elements\n",size);
  for(i=0;i<size;i++)
    scanf("%d",&arr[i]);
  for(i=0;i<size;i++)
  {
    check=0;
    for(j=i+1;j<size && check==0;j++)
    {
      if(arr[i]==arr[j])
      {
        count++;
        check=1;
      }
    }
  }
  printf("Result is %d",count);

  return 0;
}