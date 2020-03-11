#include <stdio.h>

int l,m,Row,Col,mat[300][300];
void rotation(int l,int m,int Row,int Col)
{
  int si,sj,i,j,t,f;
  si=l;
  sj=m;
  t=mat[l][m];   
  for(i=l+1;i<=Row;i++)
  {
    f=mat[i][m];
    mat[i][m]=t;
    t=f;
  }
  l++;
  for(i=m+1;i<=Col;i++)
  {
    f=mat[Row][i];
    mat[Row][i]=t;
    t=f;
  }
  m++;
  if(l-1<Row)
    for(i=Row-1;i>=l-1;i--)
    {
      f=mat[i][Col];
      mat[i][Col]=t;
      t=f;
    }
  Col--;
  if(m-1<Col)
    for(i=Col;i>=m;i--)
    {
      f=mat[l-1][i];
      mat[l-1][i]=t;
      t=f;
    }
  Row--;
  mat[si][sj]=t;
  return;
}

int main(void) {
  int r,c,i,j,k=1,f;
  printf("Enter the no. of rows\n");
  scanf("%d",&r);
  printf("Enter the no. of columns\n");
  scanf("%d",&c);
  for (i=0;i<r;++i)
    for (j=0;j<c;++j)
    {
      printf("insert the element for %d,%d\n",i,j);
      scanf("%d",&mat[i][j]);  
    }
  printf("The matrix is\n");
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
      printf("%d ",mat[i][j]);
    printf("\n");
  }
  l=0;
  m=0;
  Row=r-1;
  Col=c-1;
  while(l<Row&&m<Col)
  {
    int rot=2*(Row-l)+2*(Col-m);
    f=k%rot;
    for(i=1;i<=f;i++)
      rotation(l,m,Row,Col);
    l++;
    m++;
    Row--;
    Col--;
  }    
  printf("Anti-clockwise Rotation output is\n");
  for(i=0;i<r;i++)
  {
    for(j=0;j<c;j++)
      printf("%d ",mat[i][j]);
    printf("\n");
  }
  return 0;
}