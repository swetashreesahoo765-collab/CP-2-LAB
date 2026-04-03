#include<stdio.h>
struct book
{
	char name[50];
	char author[50];
	float price;
};
int main()
{
	struct book b[5];
	struct book *ptr=b;
	int i;
	for(i=0;i<2;i++)
	{
		printf("Enter details of book\n");
		printf("Name:");
		gets((ptr+i)->name);
		printf("Author:");
		fflush(stdin);
		gets((ptr+i)->author);
		printf("Price:");
		scanf("%f",&(ptr+i)->price);
		fflush(stdin);
	}
	printf("\nBook details:\n");
	for(i=0;i<2;i++)
	printf("Name:%s\t Author:%s\t Price:%f\n",(ptr+i)->name,(ptr+i)->author,(ptr+i)->price);
}
