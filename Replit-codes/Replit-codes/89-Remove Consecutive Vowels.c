#include <stdio.h>
#include <string.h>

int main(void) {
  char arr[1000];
  char str[1000];
  int len,i,j=1;
  printf("Enter the string\n");
  //fgets(arr,100,stdin);
  scanf("%[^\n]s",arr);
  len=strlen(arr);
  //printf("%d",len);
  str[0]=arr[0];
  for(i=1;i<len;i++)
  {
    if(arr[i]=='a' || arr[i]=='e' || arr[i]=='i' || arr[i]=='o' || arr[i]=='u')
    {
      if(arr[i-1]=='a' || arr[i-1]=='e' || arr[i-1]=='i' || arr[i-1]=='o' || arr[i-1]=='u');
      else
      {
        str[j]=arr[i];
        j++;
      }
    }
    else
    {
      str[j]=arr[i];
      j++;
    }
  }
  for(i=0;i<=j;i++)
  printf("%c",str[i]);

  return 0;
}