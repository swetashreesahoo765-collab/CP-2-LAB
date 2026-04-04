#include <stdio.h>
int main()
{
    char ch;
    char *p = &ch;
	printf("Enter a character: ");
    scanf(" %c", &ch);
	printf("Character using pointer: %c", *p);

}
