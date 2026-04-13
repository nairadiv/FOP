#include<stdio.h>

int main() {
    float basic, hra, ta, gross, tax, net;

    printf("Enter Basic Pay: ");
    scanf("%f", &basic);

    hra = 0.10 * basic;        // 10% HRA
    ta  = 0.05 * basic;        // 5% TA
    gross = basic + hra + ta;  // Gross salary
    tax = 0.02 * gross;        // 2% Professional tax
    net = gross - tax;         // Net salary

    printf("\nBasic Pay = %.2f", basic);
    printf("\nHRA = %.2f", hra);
    printf("\nTA = %.2f", ta);
    printf("\nGross Salary = %.2f", gross);
    printf("\nProfessional Tax = %.2f", tax);
    printf("\nNet Salary = %.2f\n", net);

    return 0;
}
