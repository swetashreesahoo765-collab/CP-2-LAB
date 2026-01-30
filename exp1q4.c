#include<stdio.h>
void countvowels(char a[])
{
	int i,count=0;
	for(i=0;a[i]!=0;i++)
	if( a[i]=='a'|| a[i]=='e'|| a[i]=='i'|| a[i]=='o'|| a[i]=='u'|| a[i]=='A'|| a[i]=='E'|| a[i]=='I'|| a[i]=='O'|| a[i]=='U')
	count++;
	printf("%d",count);
}
main()
{
	char ch[]="hello";
	countvowels(ch);
}
