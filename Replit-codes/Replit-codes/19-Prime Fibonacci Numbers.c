#include <stdio.h>

int main(void) {
  int i,nterm,int1=0,int2=1,next,pi,flag=0;
  printf("\nEnter therange of fibonacci numbers(please skip first two fibonacci numbers i.e 0&1)\n");
  scanf("%d",&nterm);
  printf("the prime fibonacci numbers are");
  for(i=1;i<=nterm;i++)
  {
    next=int1+int2;
    int1=int2;
    int2=next;
    //printf("%d  ",next);
    if(next>1)
    {
      for(pi = 2; pi <= next; ++pi)
      {
        if(next%pi==0)
        {
            break;
        }
      }
        if (next==pi)
          printf("%d\n",next);
    }
  }
  return 0;
}