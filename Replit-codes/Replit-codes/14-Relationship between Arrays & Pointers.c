#include <stdio.h>

int main(void) {
  int i;
  char str[5]="hello";
  char *ptr=str;
  for(i=0;i<5;i++)
  {
  printf("%c  ",*ptr);
  ptr++;
  }
  return 0;
}