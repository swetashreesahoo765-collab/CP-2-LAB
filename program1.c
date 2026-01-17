#include<stdio.h>
int max (int a, int b, int c)
{
	if(a>b)
	{
		if (a>c)
		{
			return a;
		}
		else
		{
			return c;
		}
	}
	else
	{
		if(b>c)
		{
			return b;
		}
		else
		{
			return c;
		}
	}
}
void main()
{
	printf("The largest no. is %d",max(9,7,8));
}
