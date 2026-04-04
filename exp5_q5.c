#include <stdio.h>
int main()
{
    long x;
    long *p;
    printf("Enter value\n");
	scanf("%ld", &x);
    p = &x;
	*p = *p + 10;
	printf(" Modified value is %ld", x);
}
