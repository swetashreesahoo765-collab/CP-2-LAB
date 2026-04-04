#include <stdio.h>
int main()
{
    int a[10][10], r, c, i, j;
	printf("Enter rows cols: ");
    scanf("%d%d", &r, &c);
	printf("Enter elements:\n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d", &a[i][j]);

    printf("Transpose:\n");
    transpose(a, r, c);
}
void transpose(int a[10][10], int r, int c)
{
    int i, j;

    for(i=0;i<c;i++)
    {
        for(j=0;j<r;j++)
            printf("%d ", a[j][i]);
        printf("\n");
    }
}
