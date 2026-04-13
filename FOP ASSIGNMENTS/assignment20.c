#include <stdio.h>

void swap_val(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("Without pointer: a=%d b=%d\n", a, b);
}

void swap_ref(int *x, int *y) {
    int temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a=10,b=20;

    swap_val(a,b);

    swap_ref(&a,&b);
    printf("With pointer: a=%d b=%d", a,b);

    return 0;
}
