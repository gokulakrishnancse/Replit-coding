#include <stdio.h>

int main(void) {
  int a;
  printf("\nEnter the year data to check");
  scanf("%d",&a);
  a=a%4;
  if(a==0)
  {
    printf("Yeah, the entered year is leap year");
  }
  else
  {
    printf("No, the entered year is not a leap year");
  }
  return 0;
}