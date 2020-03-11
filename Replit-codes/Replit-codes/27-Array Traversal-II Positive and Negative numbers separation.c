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
  printf("Positive numbers are\n");
  for(i=0;i<size;i++){
   if(arr[i]>=0){
      printf("%d\n",arr[i]);
    }
 }
 printf("Negative numbers are\n");
for(i=0;i<size;i++){
  if(arr[i]<0){
    printf("%d\n",arr[i]);
  }
}
  return 0;
}