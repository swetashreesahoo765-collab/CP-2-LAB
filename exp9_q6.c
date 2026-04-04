#include <stdio.h>
int main()
{
    int n;
	printf("Enter a number: ");
    scanf("%d", &n);
	reverse(&n);
	printf("Reversed = %d", n);
}
void reverse(int *n)
{
    int r, rev = 0, t = *n;
	while(t)
    {
        r = t % 10;
        rev = rev * 10 + r;
        t /= 10;
    }
    *n = rev;
}

