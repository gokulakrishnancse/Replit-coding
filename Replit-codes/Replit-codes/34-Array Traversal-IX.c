#include <stdio.h>

int main(void){
  int arr1[100],arr2[100],merarr[100];
  int i,size1,temp,j,size2,add,a=0;
  printf("Input the number of elements to be stored in the first array\n");
  scanf("%d",&size1);
  printf("Input %d elements in the array\n",size1);
  for(i=0;i<size1;i++)
    scanf("%d",&arr1[i]);

  printf("Input the number of elements to be stored in the second array\n");
  scanf("%d",&size2);
  if(size1!=size2)
  {
    printf("make sure both the arrays must be with the same size");
  }
  else
  {
    printf("Input %d elements in the array\n",size2);
    for(i=0;i<size2;i++)
    scanf("%d",&arr2[i]);
    
  add=size1+size2;

  for(i=0;i<size1;i++)
  {
    merarr[a]=arr1[i];
    a=a+1;
  }

  for(i=0;i<size2;i++)
  {
    merarr[a]=arr2[i];
    a=a+1;
  }

  for(i=0;i<add;i++)
  {
    for(j=i+1;j<add;j++)
    {
       if(merarr[i] > merarr[j])
       {
          temp=merarr[i];
          merarr[i]=merarr[j];
          merarr[j]=temp;
       }
    }
  }

 printf("\nThe merged array in descending order is\n");
 for(i=add-1;i>=0;i--)
 printf("%d ",merarr[i]);
 }
return 0;
}