#include <stdio.h>
#include <string.h>

int main(void){
  char arr[100];
  int i,j,count,len;
  printf("Enter the input string\n");
  fgets(arr,100,stdin);
  len=strlen(arr);
  printf("RLE result is ");
  for(i=0;i<len-1;)
  {
    j=i;
    count=0;
    while(arr[i]==arr[j])
    {
      count++;
      j++;
    }
    printf("%d%c",count,arr[i]);
    i=j;
  }
return 0;
}