#include<stdio.h>
void upper(char *p)
{
	while(*p!='\0')
	{
		if(*p>='a'&& *p<='z')
		*p=*p-32;
		p++;
	}
}
int main()
{
	char s[100];
	printf("Enter a word:\n");
	gets(s);
	upper(s);
	printf("Uppercase character are:%s",s);
}
