#include <stdio.h>

int main(void) {
  int arr[20];
  int rslt[20];
  int odd[20];
  int even[20];
  int size,i,j,c,oc=0,ec=0;
  printf("Enter the size of the array\n");
  scanf("%d",&size);
  printf("Input %d elements\n",size);
  for(i=0;i<size;i++)
    scanf("%d",&arr[i]);

  for(i=0;i<size;i++)
  {
    c=0;
    for(j=0;j<size;j++)
    {
      if(arr[i]>arr[j])
        c++;
    }
    rslt[c]=arr[i];
  }
  j=0;
  for(i=0;i<size;i++)
  {
    if(rslt[i]%2==0)
    {
      even[j]=rslt[i];
      j++;
      ec++;
    }
  }
  j=0;
  for(i=0;i<size;i++)
  {
    if(rslt[i]%2==1)
    {
      odd[j]=rslt[i];
      j++;
      oc++;
    }
  }
  j=0;
  if(rslt[0]%2==0)
  {
    for(i=0;i<ec || i<oc;i++)
    {
      if(i<ec)
      {
        arr[j]=even[i];
        j++;
      }
      if(i<oc)
      {
        arr[j]=odd[i];
        j++;
      }
    }
  }
  else
  {
    for(i=0;i<ec || i<oc;i++)
    {
      if(i<oc)
      {
        arr[j]=odd[i];
        j++;
      }
      if(i<ec)
      {
        arr[j]=even[i];
        j++;
      }
    }
  }

  if(arr[0]%2==0)
    printf("Smallest value is %d, so output is Even-Odd pattern\n",rslt[0]);
  else
    printf("Smallest value is %d, so output is Odd-Even pattern\n",rslt[0]);

  for(i=0;i<size-1;i++)
    printf("%d,",arr[i]);
  if(i==size-1)
    printf("%d",arr[i]);

  return 0;
}