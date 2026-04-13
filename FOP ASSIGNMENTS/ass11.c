#include <stdio.h>
#include <math.h>

int main() {
    int n, i, fact = 1, flag = 1;

    printf("Enter number: ");
    scanf("%d", &n);

    printf("Square = %d\n", n*n);
    printf("Cube = %d\n", n*n*n);
    printf("Square Root = %.2f\n", sqrt(n));

    // Prime check
    if(n <= 1) flag = 0;
    for(i=2;i<=n/2;i++) {
        if(n % i == 0) {
            flag = 0;
            break;
        }
    }
    if(flag) printf("Prime\n");
    else printf("Not Prime\n");

    // Factorial
    for(i=1;i<=n;i++)
        fact *= i;
    printf("Factorial = %d\n", fact);

    // Prime factors
    printf("Prime factors: ");
    for(i=2;i<=n;i++) {
        while(n % i == 0) {
            printf("%d ", i);
            n /= i;
        }
    }

    return 0;
}