#include <stdio.h>
int main()
{
    char s1[100], s2[100], *p1, *p2;
	printf("Enter string: ");
    scanf("%s", s1);
	p1 = s1;
    p2 = s2;
	while(*p1)
        *p2++ = *p1++;
		*p2 = '\0';
		printf("Copied string: %s", s2);    
}
