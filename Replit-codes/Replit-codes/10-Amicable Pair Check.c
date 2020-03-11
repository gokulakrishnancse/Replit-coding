#include <stdio.h>

int main(void) {
  int int1,int2,ans1,ans2;
int i,s;
ans1=0;
ans2=0;
printf("Enter two numbers to check if Amicable or not");
scanf("%d%d",&int1,&int2);

for(i=1;i<int1;i++)
{
if(int1%i==0)
{
ans1=ans1+i;
}
}

for(s=1;s<int2;s++)
{
if(int2%s==0)
{
ans2=ans2+s;
}
}

if(int1==ans2 || int2==ans1)
{
printf("%d and %d are Amicable numbers",int1,int2);
}
else
{
printf("%d and %d are not Amicable numbers",int1,int2);
}
  return 0;
}