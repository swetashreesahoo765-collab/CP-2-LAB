#include<stdio.h>
int MinArray(int a[], int size)
{
	int min,i;
	min=a[0];
	for(i=1;i<size;i++)
		if(a[i]<min)
			min=a[i];
	return min;
}
main()
{
	int b[]={8,4,7,2};
	printf("Smallest element is %d", MinArray(b,4));
}

