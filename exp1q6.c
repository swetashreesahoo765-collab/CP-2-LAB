#include<stdio.h>
void replace(char a[])
{
	int i;
	for(i=0;a[i]!=0;i++)
	{
	if(a[i]==32)
	a[i]='-';
	printf("%c",a[i]);
	}
	
}
main()
{
	char ch[]="My name is Swetashree";
	replace(ch);
}
