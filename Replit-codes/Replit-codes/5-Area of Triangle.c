#include <stdio.h>
#include <math.h>
int main(void) {
  int a,b,c,x,area;
  printf("Enter the values of a, b and c");
  scanf("\n%d%d%d",&a,&b,&c);
  x=(a+b+c)/2;
  area=(x*(x-a)*(x-b)*(x-c));
  area=sqrt(area);
  printf("\nArea of a Triangle = %d",area);
  return 0;
}