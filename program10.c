#include<stdio.h>
int sum(int a[],int size)
{
	int i,sum=0;
	for(i=0;i<size;i++)
		sum = sum+a[i];
	printf("%d\n",sum);
}
main()
{
	int b[]={10,20,30,40};
	sum(b,4);
}
