#include <stdio.h>

int main(void) {
  int arr[20];
  int rslt[20];
  int size,i,j,c;
  printf("Enter the size of the array\n");
  scanf("%d",&size);
  printf("Enter %d elements\n",size);
  for(i=0;i<size;i++)
    scanf("%d",&arr[i]);

  for(i=0;i<size;i++)
  {
    c=0;
    for(j=0;j<size;j++)
    {
      if(arr[i]>arr[j])
        c++;
    }
    rslt[c]=arr[i];
  }

  printf("Smallest pair is [%d,%d]\n",rslt[0],rslt[1]);
  printf("Sum of the smallest pair is %d",rslt[0]+rslt[1]);
  return 0;
}