#include <stdio.h>
int main() 
{
    char str[100], sub[50];
    int i, pos, len;
	printf("Enter string: ");
    gets(str);
	printf("Enter position and length: ");
    scanf("%d %d", &pos, &len);
	for(i = 0; i < len; i++) 
	{
        sub[i] = str[pos + i];
    }
	sub[i] = '\0';
	printf("Substring: %s", sub);
}
