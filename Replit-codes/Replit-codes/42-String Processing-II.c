#include <stdio.h>
#include <stdlib.h>

int main(void)
{
  char str[100],arr[10];
  int i=0,sum=0,j=0;	
  printf("Input the String\n");
  fgets(str, sizeof str, stdin);
  printf("The vowel(s) is(are) ");
  while(str[i]!='\0')
  {
    if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u'||str[i]=='A'||str[i]=='E'||str[i]=='I'||str[i]=='O'||str[i]=='U')
    {
      arr[j]=str[i];
      sum=sum+str[i];
      j++;
    }
    i++;
  }
  for(i=0;i<j;i++)
  {
    printf("%c",arr[i]);
    if(i<(j-1))
      printf(", ");
  }
  printf("\nASCII summation is %d",sum);
}