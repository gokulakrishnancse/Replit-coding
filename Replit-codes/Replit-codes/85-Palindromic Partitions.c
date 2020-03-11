#include <stdio.h>
#include <string.h>

int main(void) {
  char a[100],temp;
  int len,i,j,k;
  printf("Enter the string\n");
  scanf("%s",a);
  len=strlen(a);
  printf("Palindromic partitions are\n");
  for(i=0;i<len;i++)
    printf("%c ",a[i]);
  if(a[0]!=a[len-1])
    for(i=0;i<len;i++)
      for(j=i+1;j<len;j++)
        if(a[i]==a[j])
          printf("\n%c%c",a[i],a[j]);
  if(a[0]==a[len-1])
  {
    printf("\n%c ",a[0]);
    if(a[1]==a[len-2])
      for(i=1;i<len-1;i++)
        printf("%c",a[i]);
    printf(" %c",a[len-1]);
  }
  if(a[0]==a[len-1])
    printf("\n%s",a);
  return 0;
}