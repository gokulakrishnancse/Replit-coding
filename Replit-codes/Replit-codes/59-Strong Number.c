#include <stdio.h>
#include <string.h>
int main(void){
  int sum,num,sep,fact,temp,i,j=0,inp;
  int arr[100];
  printf("Enter the limit\n");
  scanf("%d",&inp);
  for(num=1;num<=inp;num++)
  {
    temp=num;
    sum=0;
    while(temp!=0)
    {
      sep=temp%10;
      temp=temp/10;
      fact=1;
      for(i=1;i<=sep;i++)
        fact=fact*i;
      sum=sum+fact;
    }
    if(sum==num)
    {
      arr[j]=num;
      j++;
    }
  }

  for(i=0;i<j-1;i++)
    printf("%d,",arr[i]);
  if(i==j-1)
    printf("%d",arr[i]);
  printf(" are Strong numbers between 1 & %d",inp);
  
  return 0;
}