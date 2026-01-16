#include<stdio.h>
void Multi_Scalar(int a[], int size,int scalar)
{
	int i;
	for(i=0;i<size;i++)
	{
		a[i]=a[i]*scalar;
		printf("%d\n",a[i]);
	}
}
main()
{
	int b[]={3,7,4,8};
	Multi_Scalar(b,4,5);
}
