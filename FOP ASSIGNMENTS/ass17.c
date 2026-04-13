#include <stdio.h>

int main() {
    float x, sum=0, term;
    int n, i, j, fact;

    printf("Enter x (radians): ");
    scanf("%f", &x);

    printf("Enter terms: ");
    scanf("%d", &n);

    for(i=1;i<=n;i++) {
        term = 1;
        fact = 1;

        for(j=1;j<=2*i-1;j++) {
            term *= x;
            fact *= j;
        }

        if(i%2==0)
            sum -= term/fact;
        else
            sum += term/fact;
    }

    printf("Sum = %f", sum);

    return 0;
}