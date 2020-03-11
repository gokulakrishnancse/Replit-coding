#include <stdio.h>

int main(void) {
  int len,sum,i,j,k,temp=0,a,check=0,no=0;
  int arr[20],ans[10];
  printf("Enter array length and sum respectively\n");
  scanf("%d",&len);
  scanf("%d",&sum);
  printf("Enter %d elements\n",len);
  for(i=0;i<len;i++)
    scanf("%d",&arr[i]);

  for(i=0;i<len && check==0;i++)
  {
    a=0;
    temp=0;
    for(j=i;temp<sum;j++)
    {
      temp=temp+arr[j];
      a++;
    }
    if(temp==sum)
    {
      for(k=0;k<a;k++)
      {
        ans[k]=arr[i];
        i++;
      }
      check=1;
    }
  }
  if(check==1)
  {
    printf("Subarray is ");
    for(k=0;k<a-1;k++)
      printf("%d ",ans[k]);
    if(k==a-1)
      printf("%d",ans[k]);
  }
  else
    printf("Subarray not found");
  return 0;
}