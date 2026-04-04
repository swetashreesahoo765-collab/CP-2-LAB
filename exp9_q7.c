#include <stdio.h>
int main()
{
    char s[100];
	printf("Enter a sentence: ");
    gets(s);
	removeSpace(s);
	printf("Result: %s", s);
}
void removeSpace(char *s)
{
    char *d = s;
	while(*s)
    {
        if(*s != ' ')
            *d++ = *s;
        s++;
    }
    *d = '\0';
}

