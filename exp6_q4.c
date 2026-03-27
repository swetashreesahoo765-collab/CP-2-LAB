#include<stdio.h>
int main()
{
	int n,i,a[100],*p=a;
	int sum=0;
	printf("Enter size:");
	scanf("%d",&n);
	printf("Enter array elemnts:\n");
	for(i=0;i<n;i++)
	scanf("%d",(p+i));
	printf("Sum of array elments are:\n");
	for(i=0;i<n;i++)
	sum+=*(p+i);
	printf("%d",sum);
}
	
