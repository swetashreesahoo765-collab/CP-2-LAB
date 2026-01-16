#include<stdio.h>
int factorial (int n)
{
	int f=1,i;
	if (n<0)
	{
		return -1;
	}
	else
	{
		for (i=1;i<=n;i++)
		{
			f=f*i;
		}
		return f;
	}
}
main()
{
	int x=factorial(5);
	if(x<0)
		printf("You cant find out factorial of negative number");
	else
		printf("%d",x);
}


