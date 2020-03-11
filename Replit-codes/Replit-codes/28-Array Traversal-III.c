#include <stdio.h>

int main(void) {
  int arr[100],p[100],n[100];
  int i,size,temp,j;
  int cp=0,cn=0;
  printf("Enter the size of the array\n");
  scanf("%d",&size);
  printf("Input %d integer numbers\n",size);
  for(i=0;i<size;i++){
    scanf("%d",&arr[i]);
  }
  
  for(i=0;i<size;i++){
    for(j=i+1;j<size;j++){
        if(arr[i] > arr[j]){
          temp=arr[i];
          arr[i]=arr[j];
          arr[j]=temp;
           }
    }
  }
 printf("\narray contents in ascending order are\n");
 for(i=0;i<size;i++)
  printf("%d\n",arr[i]);

 printf("\narray contents in descending order are\n");
 for(i=size-1;i>=0;i--)
 printf("%d\n",arr[i]);

 printf("\nsecond largest element in a given array is\n");
 printf("%d\n",arr[size-2]);

 printf("\nsecond smallest element in a given array is\n");
 printf("%d\n",arr[1]);
  return 0;
}