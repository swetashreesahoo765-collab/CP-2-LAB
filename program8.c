#include<stdio.h>
void display(int a[],int size)
{
	int i;
	for (i=0;i<size;i++)
	{
		printf("%u\n",&a[i]);
	}
}
main()
{
	int b[]={2,47,8};
	display(b,4);
}
