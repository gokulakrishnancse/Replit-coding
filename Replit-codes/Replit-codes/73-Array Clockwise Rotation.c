#include <stdio.h>
int main(void) {
  int array[50][50];
  int i,j,r,c;
  int rw=0,cl=0,prev,curr;
  printf("Enter the no. of rows\n");
  scanf("%d",&r);
  printf("Enter the no. of columns\n");
  scanf("%d",&c);
  for(i=0;i<r;++i)
    for(j=0;j<c;++j)
    {
      printf("insert the element for %d,%d\n",i,j);
      scanf("%d",&array[i][j]); 
    }
  int m=r,n=c;
  printf("The matrix is\n");
  for(i=0;i<r;++i)
  {
    for(j=0;j<c;++j)
      printf("%d\t",array[i][j]);
    printf("\n");     
  }      
  while(rw<m&&cl<n) 
  { 
    if(rw+1==m || cl+1==n) 
      break;         
    prev=array[rw + 1][cl]; 
    for(i=cl;i<n;i++) 
    { 
      curr=array[rw][i]; 
      array[rw][i]=prev; 
      prev=curr; 
    } 
    rw++; 
    for(i=rw;i<m;i++) 
    { 
      curr=array[i][n-1]; 
      array[i][n-1]=prev; 
      prev=curr; 
    } 
    n--;
    for(i=n-1;i>=cl;i--) 
    { 
      curr=array[m-1][i]; 
      array[m-1][i]=prev; 
      prev=curr; 
    }
    m--; 
    if (cl<n)  
      for(i=m-1;i>=rw;i--) 
      { 
        curr=array[i][cl]; 
        array[i][cl]=prev; 
        prev=curr; 
      }
    cl++; 
  } 
  printf("Clockwise Rotation output is\n");
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
      printf("%d ",array[i][j]);
    printf("\n");
  }
  return 0;
}