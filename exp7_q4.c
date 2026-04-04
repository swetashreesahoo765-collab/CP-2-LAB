#include <stdio.h>
int main()
{
    char s[100];
	printf("Enter string: ");
    scanf("%s", s);
	printf("Vowels = %d", count(s));
}
int count(char *p)
{
    int c = 0;
	while(*p)
    {
        if(*p=='a'||*p=='e'||*p=='i'||*p=='o'||*p=='u'||
           *p=='A'||*p=='E'||*p=='I'||*p=='O'||*p=='U')
            c++;
        p++;
    }
    return c;
}
