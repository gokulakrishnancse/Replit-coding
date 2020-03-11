#include <stdio.h>

int main(void) {
  int num,prime,i,diff;
  printf("Enter the value for N\n");
  scanf("%d",&num);
  for(i=0;i<=num;i++)
  {
    if((i==2 || i==3 || i==5 || i==7) || (i%2!=0 && i%3!=0 && i%5!=0 && i%7!=0))
      prime=i;
  }

  diff=num-prime;
  printf("Result is %d",diff);

  return 0;
}