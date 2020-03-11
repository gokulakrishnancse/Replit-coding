#include <stdio.h>

int main(void) {
  int nly[12]={31,28,31,30,31,30,31,31,30,31,30,31};
  int ly[12]={31,28,31,30,31,30,31,31,30,31,30,31};
  int mnt[12]={0,3,3,6,1,4,6,2,5,0,3,5};
  int date,month,year,sum,temp;
  printf("Enter the date\n");
  scanf("%d-%d-%d",&date,&month,&year);
  temp=year;
  if(year<=1900 && year>=1999)
    sum=0;
  if(year<=2000 && year>=2099)
    sum=6;
  year=year%100;
  sum=sum+mnt[month-1];
  sum=sum+year;
  year=year/4;
  sum=sum+year;
  sum=sum+date;
  sum=sum-1;
  sum=sum%7;
  if(temp%4==0)
  {
    if(date<=ly[month-1])
    {
      switch(sum)
      {
        case 0:printf("Sunday-Weekend");
              break;
        case 1:printf("Monday-Weekday");
              break;
        case 2:printf("Tuesday-Weekday");
              break;
        case 3:printf("Wednesday-Weekday");
              break;
        case 4:printf("Thursday-Weekday");
              break;
        case 5:printf("Friday-Weekday");
              break;
        case 6:printf("Saturday-Weekend");
              break;
      }
    }
    else
      printf("Entered date is invalid");
  }
  else
  {
    if(date<=nly[month-1])
    {
      switch(sum)
      {
        case 0:printf("Sunday-Weekend");
              break;
        case 1:printf("Monday-Weekday");
              break;
        case 2:printf("Tuesday-Weekday");
              break;
        case 3:printf("Wednesday-Weekday");
              break;
        case 4:printf("Thursday-Weekday");
              break;
        case 5:printf("Friday-Weekday");
              break;
        case 6:printf("Saturday-Weekend");
              break;
      }
    }
    else
      printf("Entered date is invalid");
  }
  
  return 0;
}