#include <stdio.h>

union Data {
    struct {
        unsigned int a : 2;
        unsigned int b : 3;
    } bits;
};

int main() 
{
    union Data d;

    d.bits.a = 2;
    d.bits.b = 5;

    printf("a = %d\nb = %d", d.bits.a, d.bits.b);
}
