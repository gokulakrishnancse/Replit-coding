#include <stdio.h>
#include <string.h>
int position(char);
char s[30];
int i,size,n;
int main(void){
  char c;
  printf("Enter the String\n");
  scanf("%s",s);
  size=strlen(s);
  printf("Enter the character you want to search\n");
  scanf("%s",&c);
  n=position(c);
  printf("%d",n);
  return 0;
}
int position(char c){
  for(i=0;i<strlen(s);i++)
  {
    if(s[i]==c)
      return i;
  }
  return -1;
}