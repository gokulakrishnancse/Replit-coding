#include <stdio.h>

int main(void) {
  char ch;
  printf("Enter a character");
  scanf("%c",&ch);
  printf("ASCII value of %c is %d",ch,ch);
  return 0;
}