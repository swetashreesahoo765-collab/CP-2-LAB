#include <stdio.h>
int main()
{
    int arr[100], n, i, even = 0, odd = 0;
    int *p;
	printf("Enter size of array elements:\n");
    scanf("%d", &n);
	printf("Enter the elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
		p = arr;
	for(i = 0; i < n; i++)
        if(*(p + i) % 2 == 0)
            even++;
        else
            odd++;

    printf("Even=%d Odd=%d", even, odd);
}
