#include <stdio.h>

int main() {
    float marks[5];
    float total = 0.0, percentage;
    int i;
    int isFail = 0;

    printf("Enter marks for 5 courses:\n");
    for (i = 0; i < 5; i++) {
        printf("Course %d: ", i + 1);
        scanf("%f", &marks[i]);


        if (marks[i] < 40) {
            isFail = 1;
        }
        total += marks[i];
    }


    if (isFail) {
        printf("\nResult: FAIL (Scored less than 40 in one or more courses)\n");
    } else {

        percentage = total / 5.0;

        printf("\nTotal Marks: %.2f\n", total);
        printf("Aggregate Percentage: %.2f%%\n", percentage);


        if (percentage >= 75) {
            printf("Grade: Distinction\n");
        } else if (percentage >= 60) {
            printf("Grade: First Division\n");
        } else if (percentage >= 50) {
            printf("Grade: Second Division\n");
        } else {

            printf("Grade: Third Division\n");
        }
    }

    return 0;
}
