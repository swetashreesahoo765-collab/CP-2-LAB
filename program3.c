#include<stdio.h>
int power(int x,int y)
{
	int p=1,i;
	for(i=1;i<=y;i++)
		p=p*x;
	return p;
}
main()
{
	printf("%d",power(2,3));	
}
