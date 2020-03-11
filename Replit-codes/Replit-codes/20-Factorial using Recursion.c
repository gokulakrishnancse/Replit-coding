#include <stdio.h>
int find_fact(int);
int main(void)
 {
  int n;
  printf("Enter a number\n");
  scanf("%d", &n);
  printf("Factorial of %d is %d\n", n,find_fact(n));
  return 0;
}
int find_fact(int n){
  if(n>1)
  {
  return n*find_fact(n-1);
  }
  else
  {
    return 1;
  }
  
}
