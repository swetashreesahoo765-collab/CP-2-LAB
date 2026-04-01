#include <stdio.h>
#include <stdlib.h>

int main() 
{
    char str[20];
    int num;

    printf("Enter a number in string form: ");
    gets(str);

    num = atoi(str);

    printf("Integer value: %d", num);

    return 0;
}
