#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100];
    int ch;

    printf("Enter string1: ");
    scanf("%s", s1);

    printf("Enter string2: ");
    scanf("%s", s2);

    printf("1.Length\n2.Copy\n3.Concat\n4.Compare\n");
    scanf("%d",&ch);

    switch(ch) {
        case 1:
            printf("Length=%lu", strlen(s1));
            break;
        case 2:
            strcpy(s2,s1);
            printf("Copy=%s", s2);
            break;
        case 3:
            strcat(s1,s2);
            printf("Concat=%s", s1);
            break;
        case 4:
            if(strcmp(s1,s2)==0)
                printf("Equal");
            else
                printf("Not Equal");
            break;
    }

    return 0;
}