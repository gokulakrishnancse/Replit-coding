#include <stdio.h>
#include <string.h>
int main()
{
  char str1[100],search[30];
  char newstr[10][10]; 
  int i,j=0,ctr=0,check=0; 
  printf("Enter the string\n");
  fgets(str1, sizeof str1, stdin);	
  for(i=0;i<=(strlen(str1));i++)
  {
    if(str1[i]==' '||str1[i]=='\0')
    {
       newstr[ctr][j]='\0';
       ctr++;
       j=0;
    }
    else
    {
      newstr[ctr][j]=str1[i];
      j++;
    }
  }
  printf("Enter the word you want to search\n");
  scanf("%s",search);
  for(i=0;i<ctr;i++)
  {
    if(strcmp(newstr[i],search)==0)
      check=1;
  }
  if(check==1)
    printf("the search word is found");
  else
    printf("the search word is not found");
  return 0;
}