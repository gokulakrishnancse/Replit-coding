#include <stdio.h>

int main(void) {
  int row,space,i,j=0;
  //printf("Input the number\n");
  scanf("%d",&row);
  space=(row*4)-2;
  for(i=1;i<=row;i++)
  {
    while(j<i-1)
    {
      printf("* ");
      j++;
    }
    if(j==i-1)
      printf("*");
    j=0;
    while(j<space)
    {
      printf(" ");
      j++;
    }
    space=space-4;
    j=0;
    while(j<i-1)
    {
      printf("* ");
      j++;
    }
    if(j==i-1)
      printf("*");
    j=0;
    printf("\n");
  }
  space=2;
  j=0;
  for(i=row;i>0;i--)
  {
    while(j<i-1)
    {
      printf("* ");
      j++;
    }
    if(j==i-1)
      printf("*");
    j=0;
    while(j<space)
    {
      printf(" ");
      j++;
    }
    space=space+4;
    j=0;
    while(j<i-1)
    {
      printf("* ");
      j++;
    }
    if(j==i-1)
      printf("*");
    j=0;
    printf("\n");
  }
  return 0;
}