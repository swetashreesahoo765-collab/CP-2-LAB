#include <stdio.h>
struct Distance
{
    int km, m, cm;
};
int main()
{
    struct Distance d1, d2;
	printf("Enter d1 (km m cm): ");
    scanf("%d%d%d", &d1.km, &d1.m, &d1.cm);
	printf("Enter d2 (km m cm): ");
    scanf("%d%d%d", &d2.km, &d2.m, &d2.cm);
	swap(&d1, &d2);
	printf("After swap:\n");
    printf("d1 = %d %d %d\n", d1.km, d1.m, d1.cm);
    printf("d2 = %d %d %d", d2.km, d2.m, d2.cm);
}
void swap(struct Distance *a, struct Distance *b)
{
    struct Distance t = *a;
    *a = *b;
    *b = t;
}

