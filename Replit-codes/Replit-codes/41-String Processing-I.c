#include <stdio.h>
#include <string.h>
int main(void){
  char str[100],s[100],l;
  int len,i,j,temp,check=0,sum=1;
  printf("Input the string\n");
  scanf("%s",str);
  len=strlen(str);
  for(i=0;i<len;i++)
    s[i]=str[i];
  for(i=0;i<len-1;i++)
  {
    for(j=i+1;j<len;j++)
    {
      if(str[i]>str[j])
      {
        temp=str[i];
        str[i]=str[j];
        str[j]=temp;
      }
    }
  }
  for(i=1;i<strlen(str);i++)
  {
    if(str[i]-str[i-1]!=1)
      check=1;
  }  
  if(check==0)
  {
    printf("The string ");
    for(i=0;i<len;i++)
    {
      printf("'%c'",str[i]);
      if(len-1>i){
      printf(",");}
    }
    printf(" which are consecutive letters\n");
  }
  else if(check==1)
  {
    printf("The string ");
    for(i=0;i<len;i++)
    {
      printf("'%c'",s[i]);
      if(len-1>i){
      printf(",");}
    }
    printf(" which are not consecutive letters\n");
  }
  for(i=0;i<len;i++)
  {
    for(j=i+1;j<=len;j++)
    {
      if(str[i]==str[j])
      {
        l=str[j];
        sum++;
      }
    }
  }
  if(sum!=1)
   printf("letter '%c' occurs %d time(s)",l,sum);
  else
   printf("All the letters occurs exactly once");
return 0;
}