#include <stdio.h>

enum Menu {ADD = 1, SUB, EXIT};

int main() {
    int choice, a, b;

    printf("1. Add\n2. Sub\n3. Exit\n");
    printf("Enter your choice like 1,2 or 3: ");
    scanf("%d", &choice);

    switch(choice) {
        case ADD:
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            printf("Sum = %d", a + b);
            break;

        case SUB:
            printf("Enter two numbers: ");
            scanf("%d %d", &a, &b);
            printf("Difference = %d", a - b);
            break;

        case EXIT:
            printf("Exit");
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}
