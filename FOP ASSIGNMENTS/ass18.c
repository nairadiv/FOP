#include <stdio.h>
#include <string.h>

int main() {
    char s1[100], s2[100], temp[100];

    printf("Enter string: ");
    scanf("%s", s1);

    printf("Enter second string: ");
    scanf("%s", s2);

    printf("Length = %lu\n", strlen(s1));

    strcpy(temp, s1);
    strrev(temp);
    printf("Reverse = %s\n", temp);

    if(strcmp(s1, temp)==0)
        printf("Palindrome\n");

    if(strcmp(s1, s2)==0)
        printf("Equal\n");
    else
        printf("Not Equal\n");

    if(strstr(s1, s2))
        printf("Substring found\n");

    return 0;
}