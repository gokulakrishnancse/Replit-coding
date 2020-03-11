#include <stdio.h>

int main(void){
  int arr[100],arr2[100];
  int size,insert,i,j,a=0,temp;
  printf("Enter the size of the array\n");
  scanf("%d",&size);
  printf("Input %d elements\n",size);
  for(i=0;i<size;i++)
    scanf("%d",&arr[i]);

  printf("Enter the value to be inserted\n");
  scanf("%d",&insert);

  for(i=0;i<size;i++)
  {
    for(j=i+1;j<size;j++)
    {
      if(arr[i] > arr[j])
      {
        temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
      }
    }
  }

  printf("The current list of the array after sorting\n");
  for(i=0;i<size;i++)
    printf("%d ",arr[i]);
  
  for(i=0;arr[i]<insert && i<size;i++)
  {
    arr2[a]=arr[i];
    a=a+1;
  }

  arr2[a]=insert;
  a=a+1;

  for(;arr[i]>insert && i<=size;i++)
  {
    arr2[a]=arr[i];
    a=a+1;
  }

  printf("\nAfter Insert the element the new list is\n");
  for(i=0;i<size+1;i++)
    printf("%d ",arr2[i]);
  return 0;
}