#include <stdio.h>

struct Book {
    char title[20];
    char author[20];
    float price;
};

int main() {
    struct Book b[10];
    int i;

    for(i = 0; i < 2; i++) {
        printf("Enter title, author, price:\n ");
        scanf("%s %s %f", b[i].title, b[i].author, &b[i].price);
    }

    printf("\nBook Details:\n");
    for(i = 0; i < 2; i++) {
        printf("%s %s %.2f\n", b[i].title, b[i].author, b[i].price);
    }
}
