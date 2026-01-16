#include<stdio.h>
void display (int a[10],int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		printf("%d\n",a[i]);
	}
}
main()
{
	int b[]={3,4,7,8};
	display (b,4);
}
