#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int subtract(int a, int b) {
    return a - b;
}

int multiply(int a, int b) {
    return a * b;
}


int divide(int a, int b) {
    if (b != 0) {
        return a / b;
    }
    printf("Division by zero error. \n");
    return 0;
}

int main () {
    int (*operation[])(int, int) = {add, subtract, multiply, divide};
    int choice, a, b;

    while (1) {
        printf("\nSelect operation\n");
        printf("0: add\n1: Subtract\n2: Multiply\n3: Divide\n4: Exit\n");
        printf("Enter choice: ");
        scanf("%d", &choice);

        if (choice == 4) {
            printf("Exition the program.\n");
            break;
        }

        if (choice < 0 || choice > 3) {
            printf("Invalid choice: Try again.\n");
            continue;
        }

        printf("Enter choice: %d\n", choice);
        printf("Enter two numbers: ");
        scanf("%d %d", &a, &b);

        printf("Result: %d\n", operation[choice](a, b));
    }
}