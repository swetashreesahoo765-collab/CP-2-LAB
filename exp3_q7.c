#include <stdio.h>
#include<string.h>
struct Dept {
    char name[20];
};
struct Employee {
    int id;
    char name[20];
    struct Dept d;
};
int main() 
{
    struct Employee e[5];
    int i, count = 0;
    char dept[20];
	for(i = 0; i < 2; i++) {
        printf("\nEnter ID, Name, Department: ");
        scanf("%d %s %s", &e[i].id, e[i].name, e[i].d.name);
    }
	printf("\nEnter department to count: ");
    scanf("%s", dept);
	for(i = 0; i < 2; i++) {
        if(strcmp(e[i].d.name, dept) == 0) {
            count++;
        }
    }
	printf("Number of employees in %s = %d", dept, count);

}
