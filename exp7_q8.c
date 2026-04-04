#include <stdio.h>
int main()
{
    char s[100], *p;
    int n;
	printf("Enter string: ");
    scanf("%s", s);
	printf("Enter shift: ");
    scanf("%d", &n);
	p = s;
	while(*p)
    {
        if(*p >= 'a' && *p <= 'z')
            *p = ((*p - 'a' + n) % 26) + 'a';

        else if(*p >= 'A' && *p <= 'Z')
            *p = ((*p - 'A' + n) % 26) + 'A';

        p++;
    }
	printf("Result: %s", s);
}
