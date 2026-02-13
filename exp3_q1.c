#include <stdio.h>
struct student
{
	char name[30];
	int rollno;
	float marks;
}student;
main()
{
	struct student s1;
	printf("Enter student name,roll no. and marks:\n");
	gets(s1.name);
	scanf("%d %f",&s1.rollno,&s1.marks);
	printf("Name;%s\n Roll no:%d\n Marks:%f\n",s1.name,s1.rollno,s1.marks);
}
