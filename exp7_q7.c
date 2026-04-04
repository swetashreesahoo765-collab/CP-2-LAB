#include <stdio.h>
int main()
{
    char s[100];

    printf("Enter a sentence: ");
    gets(s);
	printf("Words = %d", words(s));
}
int words(char *p)
{
    int c = 0;
	while(*p)
    {
        if(*p!=' ' && (*(p+1)==' ' || *(p+1)=='\0'))
            c++;
        p++;
    }
    return c;
}


