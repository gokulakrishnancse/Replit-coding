#include <stdio.h>

int main(void) {
  int n,size,arr[100],i,del,index;
  do{
  printf("What do you want to do\n\n1. Insert\n2. Delete\n3. Display\n4. Exit\n");
  scanf("%d",&n);
  switch (n)
  {
    case 1: printf("Enter the size of the array\n");
            scanf("%d",&size);
            printf("Input %d integer numbers\n",size);
            for(i=0;i<size;i++)
              scanf("%d",&arr[i]);
            break;
              
    case 2: printf("Which element you want to delete from the given array\n");
            scanf("%d",&del);
            
            for (i=0;i<size;i++)
            {
              if (arr[i]==del)
              {
                i=i+1;
                break;
              }
            }
            if (i==size)
            printf("The element %d was not found in the given array\n",del);

            if(i!=size)
            {
              printf("The element %d found in the following positions\n",del);
              for(i=0;i<size;i++)
              {
                if(arr[i]==del)
                  printf("%d\n",i);
              }
              printf("Which index you’re targeting?\n");
              scanf("%d",&index);

              if(index>=size)
                printf("Deletion not possible\n");
              else
              {
                for(i=index;i<size;i++)
                arr[i]=arr[i+1];

                printf("The element %d at the index %d removed successfully\n",del,index);
              }
            }
            break;

    case 3: for(i=0;i<size-1;i++)
            printf("%d\n",arr[i]);
            break;

    case 4: 
            break;

    default: printf("Invalid input\n");
  }
  }while(n!=4);
  return 0;
}