#include <stdio.h>
#include <string.h>

int main(void){
  int arr[100];
  int size,i,j,n;
  printf("Enter the size of the array\n");
  scanf("%d",&size);
  printf("Enter %d elements\n",size);
  for(i=0;i<size;i++)
    scanf("%d",&arr[i]);

  for(i=0;i<size;i++)
  {
    n=1;
    for(j=i+1;j<size;j++)
    {
      if(arr[i]==arr[j])
      {
        arr[j]=arr[j]+n;
        n++;
      }
    }
  }
  printf("Result after replacing duplicates\n");
  for(i=0;i<size;i++)
    printf("%d\n",arr[i]);
return 0;
}