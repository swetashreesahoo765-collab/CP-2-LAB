#include<stdio.h>
int main()
{
	int n,i,a[100],*p=a;
	int max;
	printf("Enter array elements:\n");
	scanf("%d",&n);
	printf("Enter elemnts in array:\n");
	for(i=0;i<n;i++)
	scanf("%d",(p+i));
	printf("largest element in array is:\n");
	max=*p;
	for(i=0;i<n;i++)
	if(*(p+i)>max)
	max=*(p+i);
	printf("%d",max);
}

