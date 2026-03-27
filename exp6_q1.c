#include<stdio.h>
int main()
{
	int n,i,a[100],*p=a;
	printf("Enter size:");
	scanf("%d",&n);
	printf("Enter array elemnts:\n");
	for(i=0;i<n;i++)
	scanf("%d",p+i);
	printf("Array elemnts are:\n");
	for(i=0;i<n;i++)
	printf("%d\n",*(p+i));
}
