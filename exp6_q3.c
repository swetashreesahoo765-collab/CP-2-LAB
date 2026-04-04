#include <stdio.h>
int main()
{
    int arr[100], n, i;
    int *p, temp;
	printf("Enter size of array elements:\n");
    scanf("%d", &n);
	printf("Enter the elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
		p = arr;
	for(i = 0; i < n/2; i++)
    {
        temp = *(p + i);
        *(p + i) = *(p + n - i - 1);
        *(p + n - i - 1) = temp;
    }
	printf("Reversed array:\n");
    for(i = 0; i < n; i++)
        printf("%d ", *(p + i));
}
