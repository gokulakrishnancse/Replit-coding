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
    if(arr[i]>=49 && arr[i]<=57)
    {
      switch (count)
      {
        case 1: printf("one%c",arr[i]);
               break;
        case 2: printf("two%c",arr[i]);
               break;
        case 3: printf("three%c",arr[i]);
               break;
        case 4: printf("four%c",arr[i]);
               break;
        case 5: printf("five%c",arr[i]);
               break;
        case 6: printf("six%c",arr[i]);
               break;
        case 7: printf("seven%c",arr[i]);
               break;
        case 8: printf("eight%c",arr[i]);
               break;
        case 9: printf("nine%c",arr[i]);
               break;
      }
    }
    else
      printf("%d%c",count,arr[i]);
    i=j;
  }
return 0;
}