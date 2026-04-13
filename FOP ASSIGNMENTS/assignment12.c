#include <stdio.h>

int main() {
    int a, b, i, gcd;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    // Smallest common divisor
    for(i=2; i<=a && i<=b; i++) {
        if(a%i==0 && b%i==0) {
            printf("Smallest Common Divisor = %d\n", i);
            break;
        }
    }

    // GCD (Euclidean)
    int x=a, y=b, temp;
    while(y!=0) {
        temp = x % y;
        x = y;
        y = temp;
    }
    gcd = x;

    printf("GCD = %d", gcd);

    return 0;
}
