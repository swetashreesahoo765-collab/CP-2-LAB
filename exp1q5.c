#include<stdio.h>
void countwords(char a[])
{
	int i,count=1;
	for(i=0;a[i]!=0;i++)
	{
	if(a[i]==32)
	count++;
	}
	printf("%d",count);
}
main()
{
	char ch[]="My name is Swetashree";
	countwords(ch);
}
