#include <stdio.h>
#include <string.h>

int main(void) {
  char str[100];
  char arr[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
  int rslt[100];
  int i,j,len,temp,k,c;
  printf("Enter the String\n");
  scanf("%s",str);
  len=strlen(str);
  for(i=0;i<len;i++)
  {
    c=0;
    for(j=0;j<26;j++)
      if(str[i]==arr[j])
      {
        temp=j;
        j=27;
      }
    for(k=i+1;k<len;k++)
      for(j=0;j<26;j++)
        if(str[k]==arr[j])
          if(temp<j)
          {
            c=c+1;
            j=27;
          }
    rslt[i]=c;
  }
  for(i=0;i<len-1;i++)
    printf("%d ",rslt[i]);
  if(i==len-1)
    printf("%d",rslt[i]);
  return 0;
}