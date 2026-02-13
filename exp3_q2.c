#include<stdio.h>
struct date
{
	int date,month,year;
};
main()
{
	struct date d;
	printf ("Enter Date, Month, Year:\n");
	scanf("%d %d %d", &d.date, &d.month, &d.year);
	printf("Date is %d/%d/%d",d.date,d.month,d.year);

}
