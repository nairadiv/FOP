#include <stdio.h>

// Recursive function
int factorial_rec(int n) {
    if(n == 0 || n == 1)
        return 1;
    else
        return n * factorial_rec(n - 1);
}

// Iterative function
int factorial_iter(int n) {
    int i, fact = 1;
    for(i = 1; i <= n; i++)
        fact *= i;
    return fact;
}

int main() {
    int n;

    printf("Enter a number: ");
    scanf("%d", &n);

    if(n < 0) {
        printf("Factorial not defined for negative numbers");
    } else {
        printf("Factorial (Iterative) = %d\n", factorial_iter(n));
        printf("Factorial (Recursive) = %d\n", factorial_rec(n));
    }

    return 0;
}
