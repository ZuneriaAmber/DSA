#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    char s1[50], s2[50];
    printf("Enter first string: ");
    fgets(s1, sizeof(s1), stdin);
    printf("Enter second string: ");
    fgets(s2, sizeof(s2), stdin);
    // Remove newline character added by fgets
    s1[strcspn(s1, "\n")] = '\0';
    s2[strcspn(s2, "\n")] = '\0';
    if (strcmp(s1, s2) == 0)
        printf("Strings are equal\n");
    else
        printf("Strings are not equal\n");
    system("getmac");
    return 0;
}
