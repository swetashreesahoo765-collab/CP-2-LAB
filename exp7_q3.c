#include<stdio.h>
int main()
{
	char s1[100],s2[100];
	char *p=s1,*q=s2 ;
	printf("Enter a  strings 1:\n");
	gets(s1);
	printf("Enter a string 2:\n");
	gets(s2);
	while(*p==*q&&*p!='\0')
	{
		p++; 
		q++;
	}
	if(*p==*q)
	printf("strings are equal");
	else
	printf("strings are not equal");
}
