#include <stdio.h>
#include <stdlib.h>
// Define a self-referential structure
typedef struct Node {
    int data;
    struct Node *next; // pointer to the same type
} Node;
int main() {
    // Create two nodes dynamically
    Node *first = (Node *)malloc(sizeof(Node));
    Node *second = (Node *)malloc(sizeof(Node));

    if (first == NULL || second == NULL) {
        printf("Memory allocation failed\n");
        return 1;
    }
    // Assign values
    first->data = 10;
    first->next = second;

    second->data = 20;
    second->next = NULL;

    // Print the data
    Node *ptr = first;
    printf("Elements in the linked list: ");
    while (ptr != NULL) {
        
        printf("%d -> ", ptr->data);
        ptr = ptr->next;
    }
    printf("NULL\n");

    // Free memory
    free(first);
    free(second);
    system("getmac");
    return 0;
}
