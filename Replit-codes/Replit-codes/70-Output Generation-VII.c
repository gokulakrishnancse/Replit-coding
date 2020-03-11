#include <stdio.h>

int main(void) {
  int row,space,i,j,n=1;
  scanf("%d",&row);
  space=row-n;
  for(i=1;i<=row;i++)
  {
    for(j=0;j<i;j++)
    {
      if(j%2==0)
        printf("0");
      else
        printf("1");
    }
    space=row-n;
    for(j=0;j<space;space--)
      printf(" ");
    for(j=0;j<i;j++)
    {
      if(j%2==0)
        printf("0");
      else
        printf("1");
    }
    printf("\n");
    n++;
  }
  return 0;
}