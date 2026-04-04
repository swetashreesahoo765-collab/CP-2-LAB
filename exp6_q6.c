#include <stdio.h>
int main()
{
    int arr[100], n, i, x, count = 0;
    int *p;
	printf("Enter size of array elements:\n");
    scanf("%d", &n);
	printf("Enter the elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
	printf("Enter element to search:\n");
    scanf("%d", &x);
	p = arr;
	for(i = 0; i < n; i++)
        if(*(p + i) == x)
            count++;
	printf("Frequency of the element is %d", count);
}
