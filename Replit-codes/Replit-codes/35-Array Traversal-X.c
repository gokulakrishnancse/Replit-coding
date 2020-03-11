#include <stdio.h>

int main(void){
  int arr[100],arr2[100];
  int size,insert,index,i,a;
  printf("Enter the size of the array\n");
  scanf("%d",&size);
  printf("Input %d elements\n",size);
  for(i=0;i<size;i++)
    scanf("%d",&arr[i]);

  printf("Enter the value to be inserted\n");
  scanf("%d",&insert);
  printf("Enter the index, after the index, value will be inserted\n");
  scanf("%d",&index);

  printf("The current list of the array\n");
  for(i=0;i<size;i++)
    printf("%d ",arr[i]);

  for(i=0;i<=index;i++)
  {
    arr2[a]=arr[i];
    a=a+1;
  }

  arr2[a]=insert;
  a=a+1;

  for(;i<size;i++)
  {
    arr2[a]=arr[i];
    a=a+1;
  }

  printf("\nAfter Insert the element the new list is\n");
  for(i=0;i<size+1;i++)
    printf("%d ",arr2[i]);
  return 0;
}