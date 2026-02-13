#include<stdio.h>
struct complex
{
	int r,i;
}
main()
{
	struct complex c1,c2,c3;
	printf("Enter 1st complex number:");
	scanf("%d%d",&c1.r,&c1.i);
	printf("Enter 2nd complex number.:");
	scanf("%d%d",&c2.r,&c2.i);
	c3.r=c1.r+c2.r;
	c3.i=c1.i+c2.i;
	printf("%d + %di",c3.r,c3.i);
}
