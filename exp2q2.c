#include<stdio.h>
#include<string.h>
void main()
{
	char str1[100],str2[100];
	printf("Enter string 1:");
	gets(str1);
	printf("Enter string 2:");
	gets(str2);
	if(strcmp(str1,str2)==0)
	printf("Strings are equal");
	else
	printf("strings are not equal");
}
