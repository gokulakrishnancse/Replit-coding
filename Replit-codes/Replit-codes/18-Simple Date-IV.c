#include <stdio.h>
int main(void) {
	int date,month,year,cen,format,days,con;
	int ly[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	int nly[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	printf("Enter the date in DD format\n");
	scanf("%d",&date);
	printf("Enter the month in MM format\n");
	scanf("%d",&month);
	printf("Enter the year in YY format\n");
	scanf("%d",&year);
	printf("Choose century\n1.19th\n2.20th\n3.21st\n");
	scanf("%d",&cen);
	if(cen==1)
	year=year+1800;
	if(cen==2)
	year=year+1900;
	if(cen==3)
	year=year+2000;
	printf("Choose the format\n1.MM-DD-YYYY\n2.DD-MM-YYYY\n3.YYYY-MM-DD\n");
	scanf("%d",&format);
	if(format==1)
	printf("The date is %d-%d-%d\n",month,date,year);
	if(format==2)
	printf("The date is %d-%d-%d\n",date,month,year);
	if(format==3)
	printf("The date is %d-%d-%d\n",year,month,date);
	do{
		printf("How many days you want to add\n");
		scanf("%d",&days);
		for(int i=0;i<days;i++)
		{
			date=date+1;
			if(year%4==0)
			{
				if(date>ly[month-1])
				{
					date=1;
					month=month+1;
					if(month==13)
					{
						month=1;
						year=year+1;
					}
				}
			}
			else
			{
				if(date>nly[month-1])
				{
					date=1;
					month=month+1;
					if(month==13)
					{
						month=1;
						year=year+1;
					}
				}
			}
		}
	printf("The date is %d-%d-%d\n",date,month,year);
	printf("Do you want to continue\n1.Yes\n2.No\n");
	scanf("%d",&con);
	}while(con==1);
return 0;
}