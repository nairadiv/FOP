#include <stdio.h>

int main() {
    int a[100], n, i;

    printf("Enter n: ");
    scanf("%d", &n);

    for(i=0;i<n;i++)
        scanf("%d", &a[i]);

    printf("Even: ");
    for(i=0;i<n;i++)
        if(a[i]%2==0)
            printf("%d ", a[i]);

    printf("\nOdd: ");
    for(i=0;i<n;i++)
        if(a[i]%2!=0)
            printf("%d ", a[i]);

    return 0;
}