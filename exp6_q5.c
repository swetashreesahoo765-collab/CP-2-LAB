#include <stdio.h>
int main()
{
    int arr[5], i;
	printf("Enter 5 elements:\n");
	for(i = 0; i < 5; i++)
        scanf("%d", &arr[i]);
		sort(arr, 5);
	printf("Sorted array in ascending order:\n");
	for(i = 0; i < 5; i++)
        printf("%d ", *(arr + i));
}
void sort(int *p, int n)
{
    int i, j, temp;

    for(i = 0; i < n - 1; i++)
        for(j = i + 1; j < n; j++)
            if(*(p + i) > *(p + j))
            {
                temp = *(p + i);
                *(p + i) = *(p + j);
                *(p + j) = temp;
            }
}

