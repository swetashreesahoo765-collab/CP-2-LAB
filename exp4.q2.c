#include<stdio.h>
enum nameofdays {Monday,Tuesday,Wednesday,Thursday,Friday,Saturday,Sunday };
int main()
{
	enum nameofdays x;
	x = Sunday;
	printf("%d",x);
	return 0;
}
