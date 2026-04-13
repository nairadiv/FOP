#include <stdio.h>

int main() {
    int choice, i, n;
    float a, b, result = 1;

    printf("1.Add\n2.Subtract\n3.Multiply\n4.Divide\n5.Power\n6.Factorial\n");
    printf("Enter choice: ");
    scanf("%d", &choice);

    switch(choice) {
        case 1:
            scanf("%f %f", &a, &b);
            printf("Result = %.2f", a + b);
            break;

        case 2:
            scanf("%f %f", &a, &b);
            printf("Result = %.2f", a - b);
            break;

        case 3:
            scanf("%f %f", &a, &b);
            printf("Result = %.2f", a * b);
            break;

        case 4:
            scanf("%f %f", &a, &b);
            if(b != 0)
                printf("Result = %.2f", a / b);
            else
                printf("Division by zero not allowed");
            break;

        case 5:  // Power
            scanf("%f %f", &a, &b);
            result = 1;
            for(i = 1; i <= b; i++)
                result *= a;
            printf("Result = %.2f", result);
            break;

        case 6:  // Factorial
            printf("Enter number: ");
            scanf("%d", &n);
            result = 1;
            for(i = 1; i <= n; i++)
                result *= i;
            printf("Factorial = %.0f", result);
            break;

        default:
            printf("Invalid choice");
    }

    return 0;
}