#include <stdio.h>
main()
{
	int x=10,y=5;
	printf("x=%d and y=%d",x,y);
	swap(&x,&y);
	printf("\nx=%d and y=%d",x,y);


}
void swap(int *a,int *b)
{
	int c;
	c=*a;
	*a=*b;
	*b=c;
}
