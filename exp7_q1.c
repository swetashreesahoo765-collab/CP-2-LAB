#include<stdio.h>
int main()
{
	char s[100],*p;
	int len=0;
	printf("Enter a string:\n");
	scanf("%s",s);
	p=s;
	while(*p!='\0')
	{
		len++;
		p++;
	
	}printf("\length=%d",len);
}
