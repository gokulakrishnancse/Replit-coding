#include <stdio.h>

int main(void) {
  int arr[100],size,i,oddsum=0,evensum=0,oddcheck,evencheck;
  printf("Enter the size of the array\n");
  scanf("%d",&size);
  printf("Input %d integer numbers\n",size);
  
  for(i=0;i<size;i++)
    scanf("%d",&arr[i]);

for(i=1;i<size;)
  {
    if((arr[i]==2 || arr[i]==3 || arr[i]==5 || arr[i]==7) || (arr[i]%2!=0 && arr[i]%3!=0 && arr[i]%5!=0 && arr[i]%7!=0))
    {
       if(arr[i]!=1)
         oddcheck=1;
    }
    i=i+2;
  }   

  if(oddcheck==1)
  {
    printf("Odd positioned prime numbers are\n"); 
    for(i=1;i<size;)
    {
      if((arr[i]==2 || arr[i]==3 || arr[i]==5 || arr[i]==7) || (arr[i]%2!=0 && arr[i]%3!=0 && arr[i]%5!=0 && arr[i]%7!=0))
      {
         if(arr[i]!=1)
         {
           printf("%d\n",arr[i]);
           oddsum=oddsum+arr[i];
         }
      }
      i=i+2;
    }
    printf("Summation is %d\n",oddsum);
  }
  else
    printf("No odd positioned prime numbers\n");

  for(i=0;i<size;)
  {
    if((arr[i]==2 || arr[i]==3 || arr[i]==5 || arr[i]==7) || (arr[i]%2!=0 && arr[i]%3!=0 && arr[i]%5!=0 && arr[i]%7!=0))
    {
       if(arr[i]!=1)
         evencheck=1;
    }
    i=i+2;
  }

  if(evencheck==1)
  {
    printf("Even positioned prime numbers are\n"); 
    for(i=0;i<size;)
    {
      if((arr[i]==2 || arr[i]==3 || arr[i]==5 || arr[i]==7) || (arr[i]%2!=0 && arr[i]%3!=0 && arr[i]%5!=0 && arr[i]%7!=0))
      {
         if(arr[i]!=1)
         {
           printf("%d\n",arr[i]);
           evensum=evensum+arr[i];
         }
      }
      i=i+2;
    }
    printf("Summation is %d\n",evensum);
  }
  else
    printf("No even positioned prime numbers\n");

  return 0;
}