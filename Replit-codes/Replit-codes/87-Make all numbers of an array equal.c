#include <stdio.h>

int main(void) {
  int arr[5]={2,3,4,6,9};
  int inp[10];
  int ans[50];
  int isize,asize,i,j,k=0,check,a=0;
  printf("Enter the size of the array\n");
  scanf("%d",&isize);
  asize=5*isize;
  printf("Enter %d elements\n",isize);
  for(i=0;i<isize;i++)
    scanf("%d",&inp[i]);

  for(i=0;i<isize;i++)
    for(j=0;j<5;j++)
    {
      ans[k]=inp[i]*arr[j];
      k++;
    }

  for(i=0;i<5 && check!=isize;i++)
  {
    check=1;
    for(j=5;j<asize;j++)
    {
      a++;
      if(ans[i]==ans[j])
      {
        a=5-a;
        check++;
        j=j+a;
      }
    }
  }
  if(check==isize)
    printf("Yes, it’s possible to make all numbers of an array equal");
  else
    printf("No, it’s not possible to make all numbers of an array equal");
  return 0;
}