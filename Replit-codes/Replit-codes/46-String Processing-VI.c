
#include <stdio.h>

int main(void) {
  char str[100],s[100];
  int len=0,i,check;
  printf("Enter the String\n");
  scanf("%s",str);
  for(i=0;str[i]!='\0';i++)
  {
    len++;
  }
  for(i=len-1;i>=0;i--)
  {
    s[len-i-1]=str[i];
  }
  for(i=0;i<len;i++)
  {
    if(s[i]!=str[i])
      check= 0;
    else
      check=1;
  }
  if(check==1)
    printf("The entered string is a palindrome string\n");
  else
    printf("The entered string is not a palindrome string\n");
  return 0;
}