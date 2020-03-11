#include <stdio.h>

int main(void) {
  int n1,n2,n3,n4,n5,n6,n7,n8,n9,n10;
  float sum;
  float avg;
  printf("Input the 10 numbers");
  scanf("\n %d%d%d%d%d%d%d%d%d%d",&n1,&n2,&n3,&n4,&n5,&n6,&n7,&n8,&n9,&n10);
  sum = n1+n2+n3+n4+n5+n6+n7+n8+n9+n10;
  printf("\nThe sum of 10 no is : %.0f",sum);
  avg=sum/10;
  printf("\nThe average is : %f",avg);
  return 0;
}