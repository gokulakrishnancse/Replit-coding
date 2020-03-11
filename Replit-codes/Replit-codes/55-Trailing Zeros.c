#include <stdio.h>

int main(void) {
  int num,i,j=0,ip;
  int arr[8]={0,0,0,0,0,0,0,0};
  int pow[8]={128,64,32,16,8,4,2,1};
  printf("Enter the integer\n");
  scanf("%d",&ip);
  num=ip;
  for(i=0;i<8;i++)
  {
    if(pow[i]<=num)
    {
      arr[i]=1;
      num=num%pow[i];
    }
  }
  printf("Binary equivalent of %d is ",ip);
  for(i=0;i<8;i++)
    printf("%d",arr[i]);

  i=7;
  while(arr[i]==0 && i>=0)
  {
    j=j+1;
    i--;
  }
  printf("\nNumber of trailing zeros in its binary representation is %d",j);

  return 0;
}