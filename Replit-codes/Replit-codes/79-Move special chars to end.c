#include <stdio.h>
#include <string.h>

int main(void) {
  char upparr[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
  char lowarr[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
  char inparr[100];
  char carr[100];
  char sarr[100];
  int i,j,c=0,s=0,check;
  printf("Enter the input string\n");
  fgets(inparr,100,stdin);
  printf("The final output is\n");

  for(i=0;inparr[i]!='\0';i++)
  {
    check=0;
    for(j=0;j<26 && check==0;j++)
    {
      if(inparr[i]==upparr[j] || inparr[i]==lowarr[j] || inparr[i]==' ')
      {
        carr[c]=inparr[i];
        c++;
        check=1;
      }
    }
    if(check==0)
    {
      sarr[s]=inparr[i];
      s++;
    }
  }
  for(i=0;i<c;i++)
    printf("%c",carr[i]);
  for(i=0;i<s;i++)
    printf("%c",sarr[i]);

  return 0;
}