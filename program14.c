#include <stdio.h>
#include <stdlib.h>
#include <time.h>
typedef struct node {
    int data;
    struct node *next;
} NODE;
int main() {
    int n = 10000;
    int arr[20000];
    int i;
    clock_t start, end;
    double t_array, t_list;
    // -------- ARRAY INSERTION --------
    start = clock();
    for (i = 0; i < n; i++)
        arr[i] = i;
    end = clock();
    t_array = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Array insertion time: %f seconds\n", t_array);
    // -------- ARRAY DELETION --------
    start = clock();
    for (i = 0; i < n - 1; i++)
    arr[i] = arr[i + 1];
    end = clock();
    t_array = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Array deletion time: %f seconds\n", t_array);
    // -------- LINKED LIST INSERTION --------
    NODE *head = NULL, *newnode;
    start = clock();
    for (i = 0; i < n; i++) {
        newnode = (NODE *)malloc(sizeof(NODE));
        newnode->data = i;
        newnode->next = head;
        head = newnode; }
    end = clock();
    t_list = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Linked list insertion time: %f seconds\n", t_list);
    // -------- LINKED LIST DELETION --------
    start = clock();
    while (head != NULL) {
        NODE *temp = head;
        head = head->next;
        free(temp); }
    end = clock();
    t_list = (double)(end - start) / CLOCKS_PER_SEC;
    printf("Linked list deletion time: %f seconds\n", t_list);
    system("getmac");
    return 0;
}
