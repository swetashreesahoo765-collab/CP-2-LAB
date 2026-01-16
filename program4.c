#include<stdio.h>
int main()
{
	int a[]={1.,2,3,4};
	print(a,4);
	add (a,4);
	print(a,4);
}
void print(int b[3],int size)
{
	int i;
	for(i=0;i<size;i++)
		printf("%d\n",b[i]);
}
void add(int b[],int size)
{
	int i;
	for(i=0;i<size;i++)
		b[i]=b[i]+10;
}

