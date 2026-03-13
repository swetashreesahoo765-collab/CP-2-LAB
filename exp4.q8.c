#include<stdio.h>
#define size 2
struct student
{
	char name[30];
	char sic[15]; 
	int roll;
	float cgpa;
};
int main()
{
	struct student s[size];
	int i;
	for(i=0;i<size;i++)
	{
	
	printf("Enter the details of students;\n");
	
		gets(s[i].name);
		scanf("%s %d %f",&s[i].sic,&s[i].roll,&s[i].cgpa);
		fflush(stdin);
		
	}
	for(i=0;i<size;i++)
	printf("\nName:%s\t SIC:%s\t Roll:%d\t CGPA:%f", s[i].name,s[i].sic,s[i].roll,s[i].cgpa);	
	int max=0;
	for(i=1;i<size;i++)
	{
		if(s[i].cgpa>s[max].cgpa)
		{
			max=i;
		}
		
	}
	printf("\nName:%s\t SIC:%s\t Roll:%d\t CGPA:%f has secured highest mark", s[max].name,s[max].sic,s[max].roll,s[max].cgpa);
}
