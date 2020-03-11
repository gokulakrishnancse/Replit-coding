#include <stdio.h>

int main(void) {
  int arr[5];
  int num,dig,sum,r,q,c,count;
  printf("Choose the option\n1. Check Narcissistic Number\n2. Generate first 15 Narcissistic Numbers\n3. Exit\n");
  scanf("%d",&c);
  switch(c)
  {
    case 1:printf("Enter a number\n");
           scanf("%d",&num);
           q=num;
           for(dig=0;q!=0;dig++)
           {
             r=q%10;
             arr[dig]=r;
             q=q/10;
           }
           for(r=0;r<dig;r++)
           {
             sum=1;
             for(q=0;q<dig;q++)
             sum=sum*arr[r];
             arr[r]=sum;
           }
           sum=0;
           for(r=0;r<dig;r++)
             sum=sum+arr[r];
           if(sum==num)
             printf("the entered number is a Narcissistic Number");
           else
             printf("the entered number is not a Narcissistic Number");
           break;
    case 2:printf("The first 15 Narcissistic Numbers are\n");
           count=0;
           for(num=1;count<15;num++)
           {
             q=num;
             for(dig=0;q!=0;dig++)
             {
               r=q%10;
               arr[dig]=r;
               q=q/10;
             }
             for(r=0;r<dig;r++)
             {
               sum=1;
               for(q=0;q<dig;q++)
               sum=sum*arr[r];
               arr[r]=sum;
             }
             sum=0;
             for(r=0;r<dig;r++)
               sum=sum+arr[r];
             if(sum==num)
             {
               printf("%d ",sum);
               count++;
             }
           }
           break;
    case 3:
           break;
  }
  return 0;
}