#include<stdio.h>
void swap(int *a, int *b)
{
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
int main()
{
	int x,y;
	printf("Enter two nos.:\n");
	scanf("%d %d",&x,&y);
	swap(&x,&y);
	printf("After swap:\n x=%d\n y=%d",x,y);
}
