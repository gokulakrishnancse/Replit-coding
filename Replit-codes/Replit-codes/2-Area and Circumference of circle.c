#include <stdio.h>

int main(void) {
  float a,pi,area,cir;
  pi=3.14;
  printf("Enter the radius");
  scanf("%f",&a);
  area=pi*a*a;
  cir=2*pi*a;
  printf("\narea is %f",area);
  printf("\ncircumference is %f",cir);
  return 0;
}