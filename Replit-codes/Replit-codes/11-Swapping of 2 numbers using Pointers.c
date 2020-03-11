#include <stdio.h>
void swap(int *ad1,int *ad2)
{
 int temp;
 temp=*ad1;
 *ad1=*ad2;
 *ad2=temp;
}
int main(void) {
  int ip1,ip2;
  printf("enter 2 numbers to swap");
  scanf("%d%d",&ip1,&ip2);
  printf("\nbefore swapping a and b are %d %d",ip1,ip2);
  swap(&ip1,&ip2);
  printf("\nafter swapping a and b are %d %d",ip1,ip2);
  return 0;
}