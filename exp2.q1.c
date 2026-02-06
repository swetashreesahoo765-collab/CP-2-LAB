#include<stdio.h>
#include<string.h>
void main()
{
	char str1[100],str2[100];
	printf("Enter string 1:");
	gets(str1);
	printf("Enter string 2:");
	gets(str2);
	strcat(str1,str2);
	printf("%s",str1);
}
