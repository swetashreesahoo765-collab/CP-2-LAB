#include <stdio.h>

struct Data 
{
    unsigned int a : 2; 
    unsigned int b : 3;
};
int main() 
{
    struct Data d;

    d.a = 2;
    d.b = 5;

    printf("Value of a = %d\n", d.a);
    printf("Value of b = %d\n", d.b);
}
