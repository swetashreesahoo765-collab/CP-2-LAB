#include <stdio.h>
int main()
{
    double arr[3];
    int i;
    double *p;
	printf("Enter 3 elements:\n");
	for(i = 0; i < 3; i++)
        scanf("%lf", &arr[i]);
		p = arr;
	for(i = 0; i < 3; i++)
        printf("%lf ", *(p + i));
}
