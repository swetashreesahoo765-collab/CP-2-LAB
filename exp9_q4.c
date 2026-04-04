#include <stdio.h>
int main()
{
    int a[100], n, i;
	printf("Enter size of the array: ");
    scanf("%d", &n);
	printf("Enter elements: ");
    for(i=0;i<n;i++)
        scanf("%d", &a[i]);
		sort(a, n);
	printf("Sorted elements: ");
    for(i=0;i<n;i++)
        printf("%d ", a[i]);
}
void sort(int *a, int n)
{
    int i, j, t;

    for(i=0;i<n;i++)
        for(j=i+1;j<n;j++)
            if(*(a+i) > *(a+j))
            {
                t = *(a+i);
                *(a+i) = *(a+j);
                *(a+j) = t;
            }
}

