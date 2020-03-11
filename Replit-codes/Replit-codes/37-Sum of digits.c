#include <stdio.h>
#include <string.h>
int main(void){
  int n,sum=0,num=0,a[50],i,j,len,c[50],total;
  int arr[]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x','y','z'};
  char str[50];
  printf("What do you want to choose\n1.String\n2.Integer\n");
  scanf("%d",&n);
  switch(n){
    case 1: printf("Enter the string\n");
            scanf("%s",str);
            printf("The number equivalent of a given text is\n");
            len=strlen(str);
            for(i=0;i<=len;i++)
              c[i]=str[i];
            for(i=0;i<len;i++)
            {
              for(j=0;j<=26;j++)
              {
                if(c[i]==arr[j])
                {
                  total=j+1;
                  printf("%d",total);
                  num=num+total;
                }
              }
            }
            while(num>0||sum>9) 
            { 
              if(num==0) 
              { 
                num=sum; 
                sum=0; 
              } 
              sum=sum+(num%10); 
              num=num/10; 
            }
            printf("\nSum of digits is %d",sum);
            break;

    case 2: printf("Enter the number\n");
            scanf("%d",&num);
            while(num>0||sum>9) 
            { 
              if(num==0) 
              { 
                num=sum; 
                sum=0; 
              } 
              sum=sum+(num%10); 
              num=num/10; 
            }
            printf("\nSum of digits is %d",sum);
            break;
  }
  return 0;
}