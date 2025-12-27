#include <stdio.h>
#include <stdlib.h>
int main() {
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    // Demonstrate pre-increment
    printf("\nOriginal value of x: %d\n", x);
    printf("Pre-increment (++x): %d\n", ++x);  // Increments first, then uses the value
    printf("Value of x after pre-increment: %d\n", x);
    // Reset x for post-increment demo
    printf("\nEnter another number: ");
    scanf("%d", &x);
    printf("\nOriginal value of x: %d\n", x);
    printf("Post-increment (x++): %d\n", x++); // Uses the value first, then increments
    printf("Value of x after post-increment: %d\n", x);
    system("getmac");
    return 0;
}
