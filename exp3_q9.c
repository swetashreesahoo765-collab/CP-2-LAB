#include <stdio.h>

struct Owner {
    char name[20];
};
struct Car {
    char make[20];
    char model[20];
    int year;
    struct Owner o;
};
int main() {
    struct Car c;

    printf("Enter make, model, year: ");
    scanf("%s %s %d", c.make, c.model, &c.year);

    printf("Enter owner name: ");
    scanf("%s", c.o.name);

    printf("\nCar Details:\nMake: %s\nModel: %s\nYear: %d\nOwner: %s",
           c.make, c.model, c.year, c.o.name);
}
