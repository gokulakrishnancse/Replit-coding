#include <stdio.h>
 
void swap(int *xp,int *yp)
{
  int temp;
  temp=*xp;
  *xp=*yp;
  *yp=temp;
}
void bubbleSort(int arr[], int n)
{
  int i,j;
  for(i=0;i<n-1;i++)
    for(j=0;j<n-i-1;j++)
      if(arr[j]>arr[j+1])
        swap(&arr[j],&arr[j+1]); 
}
void printArray(int arr[], int size)
{
  int i;
  for(i=0;i<size;i++)
    printf("%d\n",arr[i]);
}
int main(void)
{
  int arr[] = {64, 34, 25, 12, 22, 11, 90};
  int size=sizeof(arr)/4;
  bubbleSort(arr,size);
  printArray(arr,size);
  return 0;
}
