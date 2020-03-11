#include <stdio.h>

int main(void) {
  int inparr[100];
  int arr[1000];
  int size,sum=0,i,j,c,itr,k=0;

  printf("Enter the size of the array\n");
  scanf("%d",&size);
  printf("Enter %d elements\n",size);
  for(i=0;i<size;i++)
    scanf("%d",&inparr[i]);
  for(i=1;i<=size;i++)
    sum=sum+i;
    itr=size-1;
  printf("Sum triangle is\n");

  for(c=0;c<size;c++)
    arr[c]=inparr[c];

  for(j=itr;j>0;j--)
  {
    for(i=0;i<j;i++)
    {
      arr[c]=arr[k]+arr[k+1];
      c++;
      k++;
    }
    if(i==j)
      k++;
  }
  k=1;
  itr=sum-1;
  for(i=0;i<k && k<=size;i++)
  {
    j=itr;
    for(c=0;c<k;c++)
    {
      if(c<k-1)
      {
        printf("%d ",arr[j]);
        j++;
      }
      if(c==k-1)
      {
        printf("%d\n",arr[j]);
        j++;
      }
    }
    k++;
    itr=itr-k;
  }

  return 0;
}