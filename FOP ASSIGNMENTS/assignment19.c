#include <stdio.h>

struct emp {
    char name[50], des[50], gender;
    float salary;
};

int main() {
    struct emp e[10];
    int n,i,m=0,f=0;

    printf("Enter n: ");
    scanf("%d",&n);

    for(i=0;i<n;i++) {
        scanf("%s %s %c %f", e[i].name, e[i].des, &e[i].gender, &e[i].salary);

        if(e[i].gender=='M') m++;
        else f++;
    }

    printf("Total=%d\nMale=%d\nFemale=%d\n",n,m,f);

    printf("Salary >10000:\n");
    for(i=0;i<n;i++)
        if(e[i].salary>10000)
            printf("%s\n",e[i].name);

    printf("Asst Manager:\n");
    for(i=0;i<n;i++)
        if(strcmp(e[i].des,"AsstManager")==0)
            printf("%s\n",e[i].name);

    return 0;
}
