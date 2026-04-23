#include <stdio.h>

// Matrix Addition
void addition(int a[10][10], int b[10][10], int r, int c) {
    int i, j, sum[10][10];

    printf("\nMatrix Addition:\n");
    for(i=0;i<r;i++) {
        for(j=0;j<c;j++) {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d ", sum[i][j]);
        }
        printf("\n");
    }
}

// Saddle Point
void saddle(int a[10][10], int r, int c) {
    int i, j, k, min, col, flag=0;

    for(i=0;i<r;i++) {
        min = a[i][0];
        col = 0;

        for(j=1;j<c;j++) {
            if(a[i][j] < min) {
                min = a[i][j];
                col = j;
            }
        }

        for(k=0;k<r;k++) {
            if(a[k][col] > min)
                break;
        }

        if(k == r) {
            printf("Saddle Point = %d\n", min);
            flag = 1;
        }
    }

    if(flag==0)
        printf("No Saddle Point\n");
}

// Magic Square Check
void magic(int a[10][10], int n) {
    int i, j, sum=0, d1=0, d2=0, flag=1;

    for(j=0;j<n;j++)
        sum += a[0][j];

    for(i=0;i<n;i++) {
        int row=0, col=0;
        for(j=0;j<n;j++) {
            row += a[i][j];
            col += a[j][i];
        }
        if(row != sum || col != sum)
            flag=0;
    }

    for(i=0;i<n;i++) {
        d1 += a[i][i];
        d2 += a[i][n-i-1];
    }

    if(d1!=sum || d2!=sum)
        flag=0;

    if(flag)
        printf("Magic Square\n");
    else
        printf("Not Magic Square\n");
}

int main() {
    int a[10][10], b[10][10];
    int r, c, i, j;

    printf("Enter rows and columns: ");
    scanf("%d %d",&r,&c);

    printf("Enter first matrix:\n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&a[i][j]);

    printf("Enter second matrix:\n");
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d",&b[i][j]);

    addition(a,b,r,c);
    saddle(a,r,c);

    if(r==c)
        magic(a,r);
    else
        printf("Magic square only for square matrix\n");

    return 0;
}
