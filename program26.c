#include <stdio.h>
#include <stdlib.h>
int main() {
    int i, n = 5;
    int *m, *c;
    // malloc allocation
    m = (int*)malloc(n * sizeof(int));
    printf("Values after malloc():\n");
    for (i = 0; i < n; i++) {
        printf("%d ", m[i]); }
    // calloc allocation
    c = (int*)calloc(n, sizeof(int));
    printf("\n\nValues after calloc():\n");
    for (i = 0; i < n; i++) {
        printf("%d ", c[i]); }
    free(m);
    free(c);
    system("getmac");
    return 0; 
}
