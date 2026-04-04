#include <stdio.h>
int main()
{
    char s[100], ch, *p;
    int c = 0;
	printf("Enter the string: ");
    scanf("%s", s);
	printf("Enter character you want to know the frequency: ");
    scanf(" %c", &ch);
	p = s;
	while(*p)
    {
        if(*p == ch)
            c++;
        p++;
    }
	printf("Frequency = %d", c);
}
