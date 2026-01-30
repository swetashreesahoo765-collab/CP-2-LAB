#include<stdio.h>
void printstring (char s[])
{
	int i;
	for(i=0;s[i]!=0;i++)
	printf ("%c",s[i]);
}
main()
{
	char ch[]="Hello World";
	printstring(ch);
}
