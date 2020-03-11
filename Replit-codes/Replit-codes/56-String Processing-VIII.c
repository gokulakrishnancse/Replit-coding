#include <stdio.h>
#include <string.h>
int main(void) {
  char alp[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
  char inp[10];
  char rslt[10];
  int i,j,k=0,len;
  //int count=0;
  printf("Enter the string\n");
  scanf("%s",inp);
  len=strlen(inp);
  for(i=0;i<26;i++)
  {
    for(j=0;inp[j]!='\0';j++)
    {
      if(alp[i]==inp[j])
      {
        rslt[k]=inp[j];
        k++;
      }
      if(k==len)
        i=27;
    }
    //count++;
    //printf("%d\n",count);
  }
  if(strcmp(inp,rslt)==0)
    printf("-1");
  else
    printf("%s",rslt);
  return 0;
}