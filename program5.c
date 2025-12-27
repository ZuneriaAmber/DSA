#include <stdio.h>
#include <stdlib.h>
int main() {
    int **arr;
    int rows, cols;
    int i, j;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);
    // Allocate memory for rows (array of pointers)
    arr = (int **)malloc(rows * sizeof(int *));
    if (arr == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    // Allocate memory for columns in each row
    for (i = 0; i < rows; i++) {
        arr[i] = (int *)malloc(cols * sizeof(int));
        if (arr[i] == NULL) {
            printf("Memory allocation failed for row %d\n", i);
            return 1;
        }
    }
    // Input elements
    printf("Enter elements of the 2D array:\n");
    for (i = 0; i < rows; i++) {
        
for (j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
    // Print elements
    printf("The 2D array is:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
    // Free allocated memory
    for (i = 0; i < rows; i++) {
        free(arr[i]);
    }
    free(arr);
    system("getmac");
    return 0;
}
