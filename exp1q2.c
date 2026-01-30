#include<stdio.h>
void displaystring(char s[])
{
	int i;
	for(i=0;s[i]!=0;i++)
	printf("%c\n",s[i]);
}
main()
{
	char ch[]="Hello world\n";
	displaystring(ch);
}
