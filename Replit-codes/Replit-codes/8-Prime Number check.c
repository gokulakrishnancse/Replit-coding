#include <stdio.h>

int main(void) {
  int num;
  printf("Enter a positive number");
  scanf("%d",&num);
  if(num<=0)
  printf("Invalid input");
  if(num==1)
  printf("1 is neither a prime nor a composite number");
  if(num>1)
  {
    if(num==2 || num==3 || num==5 || num==7)
    {
      printf("%d is a prime number",num);
    }
    else
    {
  if(num%2==0 || num%3==0 || num%5==0 || num%7==0)
  {
    printf("%d is not a prime number",num);
  }
  else
  {
    printf("%d is a prime number",num);
  }
  }
  }
  return 0;
}