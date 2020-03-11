#include <stdio.h>
#include <string.h>

int main(void) {
  int len,pass,i,count=1,check=0;
  char str[100];
  printf("Enter the string\n");
  fgets(str,100,stdin);
  len=strlen(str)-1;
  for(i=1;i<len &&check==0;i++)
    if(str[i]==str[0])
      count++;
    else
      check=1;
  pass=(len/2)+(len%2);
  if(count==pass)
    for(i=0;i<count;i++)
      printf("%c%c",str[i],str[i+count]);
  else
    printf("Not possible to rearrange");
  return 0;
}