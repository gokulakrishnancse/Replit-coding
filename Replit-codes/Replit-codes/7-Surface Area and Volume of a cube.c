#include <stdio.h>
#include <math.h>
int main(void) {
  double len,surface,volume,p1,p2;
  p1=2;
  p2=3;
  printf("Enter the length of a side");
  scanf("%lf",&len);
  surface=6 * pow(len,p1);
  volume=pow(len,p2);
  printf("\nSurface area = %lf and Volume = %lf",surface,volume);
  return 0;
}