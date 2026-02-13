#include<stdio.h>
struct student
{
	struct address
	{
		char city[50];
		int pin;
	};
	struct address a;
	char name[30];
	int roll;
	float marks;
};
main()
{
	struct student s;
	printf("Enter student name,roll no., marks,city, pin\n");
	scanf(" %s %d %f %s %d",s.name,&s.roll,&s.marks,s.a.city,&s.a.pin);
	printf("Name:%s\n Roll:%d\n Marks:%f\n City;%s\n Pincode:%d",s.name,s.roll,s.marks,s.a.city,s.a.pin);
}
