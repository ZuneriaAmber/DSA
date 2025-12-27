#include <stdio.h>
#include <stdlib.h>
typedef struct node {
    int data;
    struct node *next;
} NODE;
int main() {
    NODE *head = NULL, *temp, *newnode;
    int choice;
    do {
        printf("\n1.Insert  2.Delete  3.Traverse  4.Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
        case 1:   // Insert at end
            newnode = (NODE *)malloc(sizeof(NODE));
            printf("Enter value: ");
            scanf("%d", &newnode->data);
            newnode->next = NULL;
            if (head == NULL) {
                head = newnode;
            } else {
                temp = head;
                while (temp->next != NULL)
                    temp = temp->next;
                temp->next = newnode; } break;
        case 2:   // Delete from beginning
            if (head == NULL) {
                printf("List is empty\n");
            } else {
                temp = head;
                head = head->next;
                printf("Deleted element: %d\n", temp->data);
                free(temp);  }break;
        case 3:   // Traversal
            if (head == NULL) {
                printf("List is empty\n");
            } else {
                temp = head;
                printf("Linked List: ");
                while (temp != NULL) {
                    printf("%d -> ", temp->data);
                    temp = temp->next; }
                printf("NULL\n"); }break;
        case 4: printf("Exiting...\n"); break;
        default: printf("Invalid choice\n");
        } } while (choice != 4);
    system("getmac");
    return 0; }
