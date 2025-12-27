#include <stdio.h>
#include <stdlib.h>
int main() {
    int *ptr1, *ptr2;
    // Using malloc()
    ptr1 = (int *)malloc(sizeof(int));
    if (ptr1 == NULL) {
        printf("malloc failed\n");
        return 1;
    }
    *ptr1 = 10;
    // Using calloc()
    ptr2 = (int *)calloc(1, sizeof(int));
    if (ptr2 == NULL) {
        printf("calloc failed\n");
        return 1;
    }
    printf("---- Using malloc() ----\n");
    printf("Value stored            : %d\n", *ptr1);
    printf("Address stored in ptr1  : %p\n", ptr1);
    printf("Address of ptr1         : %p\n\n", &ptr1);

    printf("---- Using calloc() ----\n");
    printf("Value stored            : %d\n", *ptr2);
    printf("Address stored in ptr2  : %p\n", ptr2);
    printf("Address of ptr2         : %p\n", &ptr2);

   
    free(ptr1);
    free(ptr2);
    system("getmac");
    return 0;
}
