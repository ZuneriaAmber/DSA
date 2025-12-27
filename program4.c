#include <stdio.h>
#include <stdlib.h>
int main() {
    int n, i, j, min, temp;
    int arr[50];   // static array
    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    // Selection Sort
    for (i = 0; i < n - 1; i++) {
        min = i;
        for (j = i + 1; j < n; j++) {
            if (arr[j] < arr[min]) {
                min = j;
            }
        }
        if (min != i) {
            temp = arr[i];
            arr[i] = arr[min];
            arr[min] = temp;
        }
    }
    printf("Sorted array:\n");
    
   
    for (i = 0; i < n; i++) {  
    printf("%d ", arr[i]);
    }
    system("getmac");
    return 0;
}
