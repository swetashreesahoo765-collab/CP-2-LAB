#include<stdio.h>
int vowel(char a[],int size)
{
	int i;
	for(i=0;i<size;i++)
	{
		if(a[i]=='a'||a[i]=='A'||a[i]=='e'||a[i]=='E'||a[i]=='i'||a[i]=='I'||a[i]=='o'||a[i]=='O'||a[i]=='u'||a[i]=='U')
		printf("%c\n",a[i]);
	}
}
main()
{
	char b[]={'a','b','e','o','g','s','u'};
	vowel(b,7);
}
