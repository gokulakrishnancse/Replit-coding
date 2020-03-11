#include <stdio.h>
#include <string.h>

int main(void) {
  int len,i,j,count=1,rev,temp,itr;
  char arr[100];
  printf("Enter the string\n");
  fgets(arr,100,stdin);
  len=strlen(arr)-1;
  if(len%2!=0)
    itr=len;
  else
    itr=len-1;
  for(i=0;i<=itr/2;i++)
  {
    rev=len-i;
    count=0;
    for(j=0;j<=i;j++)
    {
      if(arr[j]==arr[rev-1])
        count++;
      rev++;
    }
    if(count==(i+1))
      temp=count;
  }
  for(i=0;i<temp;i++)
    printf("%c",arr[i]);
  return 0;
}