#include <stdio.h>
int main()
{
  int arr[100],arr2[100];
  int size,i,j,count,check;
  printf("Enter the size of the array\n");
  scanf("%d",&size);
  printf("Input %d integer numbers\n",size);
  for(i=0;i<size;i++)
  {
    scanf("%d",&arr[i]);
    arr2[i]=-1;
  }
  for(i=0;i<size;i++)
  {
    count=1;
    for(j=i+1;j<size;j++)
    {
      if(arr[i]==arr[j])
      {
        count++;
        arr2[j]=0;
      }
    }
    if(arr2[i]!=0)
    {
      arr2[i]=count;
    }
  }


   for(i=0;i<size;i++)
   {
     for(j=i+1;j<size;j++)
     {
       if(arr[i]==arr[j])
       {
         for(i=0; i<size; i++)
         {
           if(arr2[i]==1)
           {
             check=1;
           }
         }
       }
      
     }
   }

  if(check==1)
  {
    for(i=0;i<size;i++)
    {
      for(j=i+1;j<size;j++)
      {
        if(arr[i]==arr[j])
        {
          printf("The unique elements are\n");
          for(i=0; i<size; i++)
          {
            if(arr2[i]==1)
            {
              printf("%d\n",arr[i]);
            }
          }
        }
      }  
    }
  }
  else
    printf("no elements have more than one occurrence in the given array");
    return 0;
}