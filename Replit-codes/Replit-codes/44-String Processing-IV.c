#include <stdio.h>
#include <string.h>
char str[200],c;
int i,j=0,a[10];
int main(void){
 int target,op;
  printf("Enter the String\n");
  fgets(str,200,stdin);
  printf("Enter the character you want to search\n");
  scanf("%s",&c);
  for(i=0;str[i]!='\0';i++)
  {
    if(str[i]==c)
    {
      a[j]=i;
      j++;
    }
  }
  printf("The character '%c' found in %d index/indices ",c,j);
  for(i=0;i<j;i++)
  {
    op=a[i];
    printf("%d",a[i]);
    if(i<j-1)
     printf(",");
  }
  printf("\n");
  if(j>1)
  {
    printf("Which index you're targeting?\n");
    scanf("%d",&target);
    printf("%d",target);
  }
  else
    printf("%d",op);
  return 0;
}