#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(void) {
  char str[200];
  int len,i;
  printf("Enter the string\n");
  fgets(str,200,stdin);
  len=strlen(str);

  str[0]=toupper(str[0]);
  for(i=1;i<len-1;i++)
  {
    if(str[i]==' ')
    {
      str[i-1]=toupper(str[i-1]);
      str[i+1]=toupper(str[i+1]);
    }
  }
  str[len-2]=toupper(str[len-2]);
  printf("%s",str);
  return 0;
}