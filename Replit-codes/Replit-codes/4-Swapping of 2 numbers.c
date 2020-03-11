#include <stdio.h>
int main(void) {
  int a,b,temp;
  //printf("Enter two numbers");
  scanf("\n%d%d",&a,&b);
  printf("\nbefore swapping values are %d %d",a,b);
  temp=a;
  a=b;
  b=temp;
  printf("\nafter swapping values are %d %d",a,b);
  return 0;
}