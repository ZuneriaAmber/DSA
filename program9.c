#include <stdio.h>
#include <stdlib.h>
int main() {
    int x;
    printf("Enter a number: ");
    scanf("%d", &x);
    // Demonstrate pre-decrement
    printf("\nOriginal value of x: %d\n", x);
    printf("Pre-decrement (--x): %d\n", --x);  // Decrements first, then uses the value
    printf("Value of x after pre-decrement: %d\n", x);
     // Reset x for post-decrement demo
    printf("\nEnter another number: ");
    scanf("%d", &x);
    printf("\nOriginal value of x: %d\n", x);
    printf("Post-decrement (x--): %d\n", x--); // Uses the value first, then decrements
    printf("Value of x after post-decrement: %d\n", x);
    system("getmac");
    return 0;
}
