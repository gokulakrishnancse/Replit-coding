#include <stdio.h>

int main(void) {
  int arri[10];
  int arr[10];
  int num,ind=0,i=0,j,r,q,temp;

  printf("Enter a number\n");
  scanf("%d",&num);
  printf("Possible cyclic permutations are\n");
  q=num;
  while(q!=0)
  {
    r=q%10;
    q=q/10;
    arri[ind]=r;
    ind++;
  }
  
  for(j=ind-1;j>=0;j--)
  {
    arr[i]=arri[j];
    i++;
  }

  for(r=0;r<ind;r++)
  {
    for(i=0;i<ind;i++)
      printf("%d",arr[i]);

    temp=arr[ind-1];
    for(j=ind-2;j>=0;j--)
      arr[j+1]=arr[j];
    arr[0]=temp;
    printf("\n");
  }
 
  return 0;
}