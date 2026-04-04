#include <stdio.h>
int main()
{
    int arr[100], n, i, temp;
    int *p;
	printf("Enter size of array elements:\n");
    scanf("%d", &n);
	printf("Enter the elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
		p = arr;
		temp = *p;
	for(i = 0; i < n - 1; i++)
        *(p + i) = *(p + i + 1);
		*(p + n - 1) = temp;
		printf("Array after rotation:\n");
    for(i = 0; i < n; i++)
        printf("%d ", *(p + i));
}
