#include <stdio.h>

int main() {
    int choice;
    float a, b, result;

    printf("MENU\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");

    printf("Enter your choice: ");
    scanf("%d", &choice);

    printf("Enter two numbers: ");
    scanf("%f %f", &a, &b);

    switch (choice) {
        case 1:
            result = a + b;
            printf("Addition = %.2f\n", result);
            break;

        case 2:
            result = a - b;
            printf("Subtraction = %.2f\n", result);
            break;

        case 3:
            result = a * b;
            printf("Multiplication = %.2f\n", result);
            break;

        case 4:
            if (b != 0) {
                result = a / b;
                printf("Division = %.2f\n", result);
            } else {
                printf("Division by zero not allowed\n");
            }
            break;

        default:
            printf("Invalid choice\n");
    }

    return 0;
}