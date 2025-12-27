#include <stdio.h>
#include <stdlib.h>
#define SIZE 3 // Maximum size of the queue
int main() {
    int queue[SIZE];
    int front = -1, rear = -1;
    int choice, value;
    while (1) {
        printf("\n--- Queue Menu ---\n");
        printf("1. Insert 2. Delete 3. Display 4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
            case 1: // Insert
                if (rear == SIZE - 1) {
                    printf("Queue Overflow! Cannot insert.\n");
                } else {
                    printf("Enter value to insert: ");
                    scanf("%d", &value);
                    if (front == -1) front = 0; // First element
                    queue[++rear] = value;
                    printf("%d inserted into queue.\n", value);
                }break;
            case 2: // Delete
                if (front == -1 || front > rear) {
                    printf("Queue Underflow! Cannot delete.\n");
                } else {
                    printf("%d deleted from queue.\n", queue[front]);
                   front++;
                }  break;
            case 3: // Display
                if (front == -1 || front > rear) {
                    printf("Queue is empty.\n");
                } else {
                    printf("Queue elements: ");
                    for (int i = front; i <= rear; i++) {
                        printf("%d ", queue[i]);
                    }
                    printf("\n");
                }break;
            case 4:  system("getmac"); return 0; //Exit
            default: printf("Invalid choice! Try again.\n");
        }
    }
}
