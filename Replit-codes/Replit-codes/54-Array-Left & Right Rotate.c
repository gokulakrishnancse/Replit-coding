#include <stdio.h>

int main(void) {
  int arr[100],size,i,j,rotate,temp,choice;
  printf("Enter the size of the array\n");
  scanf("%d",&size);
  printf("Input %d numbers\n",size);
  for(i=0;i<size;i++)
    scanf("%d",&arr[i]);
  printf("Want to perform left rotate or right rotate?\n1.Left rotate\n2.Right rotate\n");
  scanf("%d",&choice);

  switch(choice)
  {
    case 1:printf("Input number of times to rotate\n");
           scanf("%d",&rotate);
           for(j=0;j<rotate;j++)
           {
             i=0;
             temp=arr[i];
             for(i=0;i<size;i++)
               arr[i]=arr[i+1];
             arr[i-1]=temp;
           }
           printf("Array after left rotation %d time(s)\n",rotate);
           for(i=0;i<size;i++)
             printf("%d\n",arr[i]);
           break;

    case 2:printf("Input number of times to rotate\n");
           scanf("%d",&rotate);
           for(j=0;j<rotate;j++)
           {
             i=size-1;
             temp=arr[size-1];
             for(i=size-1;i>0;i--)
               arr[i]=arr[i-1];
             arr[0]=temp;
           }
           printf("Array after right rotation %d time(s)\n",rotate);
           for(i=0;i<size;i++)
             printf("%d\n",arr[i]);
           break;
  }
  return 0;
}