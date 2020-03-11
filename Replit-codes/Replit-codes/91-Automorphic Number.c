#include <stdio.h>

int main(void) {
  int iarr[5];
  int oarr[10];
  int isize,osize,r,q,num,c;
  printf("Choose the option\n1. Check Automorphic Number\n2. Generate Automorphic Numbers between 1 & 1000\n3. Exit\n");
  scanf("%d",&c);
  switch(c)
  {
    case 1:  printf("Enter a number\n");
             scanf("%d",&num);
             q=num;
             for(isize=0;q!=0;isize++)
             {
               r=q%10;
               iarr[isize]=r;
               q=q/10;
             }
             q=num*num;
             for(osize=0;q!=0;osize++)
             {
               r=q%10;
               oarr[osize]=r;
               q=q/10;
             }
             q=0;
             for(r=0;r<isize;r++)
               if(iarr[r]==oarr[r])
                 q++;
             if(q==isize)
               printf("the entered number is a Automorphic Number");
             else
               printf("the entered number is not a Automorphic Number");
           break;
    case 2:printf("Automorphic Numbers between 1 & 1000 are\n");
           for(num=1;num<=1000;num++)
           {
             q=num;
             for(isize=0;q!=0;isize++)
             {
               r=q%10;
               iarr[isize]=r;
               q=q/10;
             }
             q=num*num;
             for(osize=0;q!=0;osize++)
             {
               r=q%10;
               oarr[osize]=r;
               q=q/10;
             }
             q=0;
             for(r=0;r<isize;r++)
               if(iarr[r]==oarr[r])
                 q++;
             if(q==isize)
               printf("%d ",num);
           }
           break;
    case 3:
           break;
  }
  return 0;
}