#include <stdio.h>
#include <stdlib.h>
int main() {
    int i, n = 5;
    int *arr = (int *)calloc(n, sizeof(int));
    printf("Array elements ");
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    free(arr);
    system("getmac");
    return 0;
}
