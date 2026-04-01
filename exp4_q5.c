#include<stdio.h>
struct Student {
    int id;
    char name[20];
};
int main() {
    struct Student s[2] = 
	{
        {1, "Amit"},
        {2, "Riya"}
    };

    int i;
    for(i = 0; i < 2; i++) 
	{
        printf("\nID: %d Name: %s", s[i].id, s[i].name);
    }
}
