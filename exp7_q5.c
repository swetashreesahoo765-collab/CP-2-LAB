#include<stdio.h>
main()
{
	char s[100],*p;
	printf("Enter a word:\n");
	gets(s);
	p=s;
	while(*p!='\0')
	{
		if(*p>='a'&& *p<='z')
	
		*p=*p-32;
		p++;
	
	}
	
	printf("Uppercase charcter are:%s",s);
}
