#include <stdio.h>

int main(void) {
  int num,ans,i=0,j,temp;
  printf("Enter the score\n");
  scanf("%d",&num);
  ans=num;
  if(num>4)
  {
    for(j=1;j<=num-4;j++)
      i=i+j;
  }

  ans=ans+i;
  printf("%d",ans);
  return 0;
}