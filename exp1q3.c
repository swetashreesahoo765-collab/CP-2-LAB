#include<stdio.h>
void revstr(char a[])
{
	int i;
	for(i=0;a[i]!=0;i++)
	printf("%c",a[i]);
}
main()
{
	char s[]="Hello";
	strrev(s);
	revstr(s);
}
