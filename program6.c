#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main() {
    char text[100], pattern[50];
    char *ptr;
    printf("Enter the text: ");
    fgets(text, sizeof(text), stdin); 
    text[strcspn(text, "\n")] = '\0'; // remove newline
    printf("Enter the pattern to search: ");
    fgets(pattern, sizeof(pattern), stdin);
    pattern[strcspn(pattern, "\n")] = '\0';
    // Pattern matching using strstr()
    ptr = strstr(text, pattern);
    if (ptr != NULL) {
        printf("Pattern found at position: %ld\n", ptr - text + 1);
    } else {
        printf("Pattern not found.\n"); }
    system("getmac");
    return 0; 
}
