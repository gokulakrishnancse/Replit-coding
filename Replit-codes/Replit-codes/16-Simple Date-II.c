#include <stdio.h>

int main(void)
{
    int date,month,year,cen,format;
    printf("Enter the date in DD format\n");
    scanf("%d",&date);
    printf("Enter the month in MM format\n");
    scanf("%d",&month);
    printf("Enter the year in YY format\n");
    scanf("%d",&year);
    printf("Choose Century\n1.19th\n2.20th\n3.21st");
    scanf("%d",&cen);
    if(cen==1)
    year=1800+year;
    if(cen==2)
    year=1900+year;
    if(cen==3)
    year=2000+year;
    printf("Choose the format\n1.MM-DD-YYYY\n2.DD-MM-YYYY\n3.YYYY-MM-DD");
    scanf("%d",&format);
    if(format==1)
    printf("\nThe date is %d-%d-%d",month,date,year);
    if(format==2)
    printf("\nThe date is %d-%d-%d",date,month,year);
    if(format==3)
    printf("\nThe date is %d-%d-%d",year,month,date);
    return 0;
}
