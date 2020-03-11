#include <stdio.h>

int main(void) {
  int arr[20];
  int rslt[20];
  int size,i,j,temp,check;
  printf("Enter the size of the array\n");
  scanf("%d",&size);
  printf("Enter %d integer elements\n",size);
  for(i=0;i<size;i++)
    scanf("%d",&arr[i]);
  for(i=0;i<size;i++)
    rslt[i]=arr[i];

  for(i=0;i<size;i++)
    for(j=0;j<size;j++)
        if(rslt[i]<rslt[j])
        {
          temp=rslt[i];
          rslt[i]=rslt[j];
          rslt[j]=temp;
        }

  printf("Final output is\n");
  for(i=0;i<size;i++)
  {
    check=0;
    for(j=0;j<size && check==0;j++)
      if(arr[i]==rslt[j])
      {
        if(j==0)
          printf("-1 ");
        else
          printf("%d ",rslt[j-1]);
        check=1;
      }
  }
  return 0;
}