#include <stdio.h>

int main(void) {
  float a,b;
  float m,d;
  scanf("%f%f",&a,&b);
  m=a*b;
  d=a/b;
  printf("\nMultilication result is %f",m);
  printf("\nDivision result is %f",d);
  return 0;
}