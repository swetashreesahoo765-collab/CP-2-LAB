#include<stdio.h>
void main()
{
	char a[]="134";
	char rev[50];
	strcpy(rev,a);
	strrev(a);
	if(strcmp(a,rev)==0)
	printf("Pallindrome");
	else
	printf("Not a pallindrome");
}
