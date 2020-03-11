#include <stdio.h>
#include <string.h>
int main(void) {
  char arr[100];
  char rslt[100];
  char alplw[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
  char alpup[26]={'A','B','C','D','E','F','G','H','I','J','K','L','M','N','O','P','Q','R','S','T','U','V','W','X','Y','Z'};
  int i,j,check,count=0,len;
  printf("Enter the string\n");
  fgets(arr,100,stdin);
  len=strlen(arr)-1;
  for(i=0;i<26;i++)
  {
    check=0;
    for(j=0;j<len && check==0;j++)
      if(arr[j]==alplw[i] || arr[j]==alpup[i])
        check=1;
    if(check==0)
    {
      //printf("%c",alplw[i]);
      rslt[count]=alplw[i];
      count++;
    }
  }
  if(count==0)
    printf("The entered string is perfect pangram.");
  else
    {
      printf("The pangram result is\n");
      for(i=0;i<count;i++)
        printf("%c",rslt[i]);
    }
  return 0;
}