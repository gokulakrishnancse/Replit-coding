#include <stdio.h>
#include <stdlib.h>
int main(void) {
  int arr[100];
  int s,i,search_element,temp=0;
  int *a;
  printf("Enter the size of the array\n");
  scanf("%d",&s);
  printf("Input %d integer numbers\n",s);
  for(i=0;i<s;i++){
    scanf("%d",&arr[i]);
  }
  printf("Enter the element to be searched\n");
  scanf("%d",&search_element);
 a=(int *)calloc(s ,sizeof(int));
 if(a!=NULL){
  int mem=4 * s;
  printf("%d bytes allocated successfully\n",mem);
 }
  
  for(i=0;i<s;i++){
    if(arr[i]==search_element){
      printf("Element %d found at index %d\n",search_element,i);
      //temp=1;
      break;
      
    }
    
  }
   if(i==s){
     printf("The element %d is not found in the given array",search_element);
   }
  
  free (a);
  
  return 0;
}
