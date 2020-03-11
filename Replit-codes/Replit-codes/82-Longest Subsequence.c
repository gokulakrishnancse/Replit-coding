#include <stdio.h>

int main(void) {
  int arr[100];
  int rslt[100];
  int size,i,j,q1,r1,q2,r2,r=1,check;

  printf("Enter the size of the array\n");
  scanf("%d",&size);
  printf("Enter %d elements\n",size);
  for(i=0;i<size;i++)
    scanf("%d",&arr[i]);

  rslt[0]=arr[0];
  for(i=0;i<size;i++)
  {
    check=0;
    q1=arr[i]/10;
    r1=arr[i]%10;
    for(j=i+1;j<size && check==0;j++)
    {
      q2=arr[j]/10;
      r2=arr[j]%10;
      if(q1==q2 || q1==r2 || r1==q2 || r1==r2)
      {
        rslt[r]=arr[j];
        r++;
        check=1;
        i=j-1;
      }
    }
  }
  printf("The longest subsequence is ");
  for(i=0;i<r-1;i++)
     printf("%d,",rslt[i]);
  if(i==r-1)
     printf("%d",rslt[i]);  
  return 0;
}