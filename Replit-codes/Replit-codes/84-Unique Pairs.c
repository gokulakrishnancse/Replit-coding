#include <stdio.h>

int main(void) {
  int inparr[100];
  int arr[100];
  int i,j,count=0,size,c=1,check;

  printf("Enter the size of the array\n");
  scanf("%d",&size);
  printf("Enter %d  elements\n",size);
  for(i=0;i<size;i++)
    scanf("%d",&arr[i]);
  for(i=1;i<size;i++)
  {
    check=0;
    for(j=0;j<c && check==0;j++)
    {
      if(arr[i]==arr[j])
        check=1;
      if(check==0)
      {
        arr[c]=arr[i];
        check=1;
        c++;
      }
    }
  }
  printf("The following pairs are unique pairs");

  for(i=0;i<c;i++)
  {
    for(j=0;j<c;j++)
    {
     printf("\n(%d,%d)",arr[i],arr[j]);
     count++;
    }
  }
  printf("\nSo the result is %d",count);

  return 0;
}