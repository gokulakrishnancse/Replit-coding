#include <stdio.h>
int main()
{
    int arr[100],freq[100];
    int size,i,j,count;
    printf("Enter the size of the array\n");
    scanf("%d",&size);
    printf("Input %d integer numbers\n",size);
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
        freq[i]=-1;
    }
    for(i=0;i<size;i++)
    {
        count=1;
        for(j=i+1;j<size;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                freq[j]=0;
            }
        }
        if(freq[i]!=0)
            freq[i]=count;
    }
    for(i=0;i<size;i++)
    {
        if(freq[i]!=0)
            printf("%d occurs %d time(s)\n",arr[i],freq[i]);
    }
    return 0;
}