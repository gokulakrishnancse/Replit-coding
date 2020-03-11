#include <stdio.h>

int main(void) {
  int date,month,year;
  printf("\nInput the Date");
  printf("\nDate\n");
  scanf("%d",&date);
  printf("\nMonth\n");
  scanf("%d",&month);
  printf("\nYear\n");
  scanf("%d",&year);
  
  if(date>0&&date<32&&month>0&&month<13)
  {
    if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
    {
      if(date<32)
      {
        printf("The entered date is %d-%d-%d",month,date,year);
      }
      else
      {
        printf("Entered Date is invalid");
      }
    }
    
    if(month==4||month==6||month==9||month==11)
    {
      if(date<31)
      {
        printf("The entered date is %d-%d-%d",month,date,year);
      }
      else
      {
        printf("Entered Date is invalid");
      }
    }
    
    if(month==2)
    {
      if(year%4==0)
      {
        if(date<30)
        {
          printf("The entered date is %d-%d-%d",month,date,year);
        }
        else
        {
        printf("Entered Date is invalid");
        }
      }
      else
      {
        if(date<29)
        {
          printf("The entered date is %d-%d-%d",month,date,year);
        }
        else
        {
          printf("Entered Date is invalid");
        }
      }
    }
  }
  else
  {
    printf("Entered Date is invalid");
  }
  return 0;
}