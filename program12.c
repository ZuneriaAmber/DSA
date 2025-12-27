#include <stdio.h>
#include <stdlib.h>
typedef struct node {
    int data;
    struct node *next;
} NODE;
int stack[50], top = -1;
void push(int x) { 
stack[++top] = x; }
int pop() { 
return stack[top--]; }
int main() {
    NODE *head = NULL, *temp, *newnode;
    int n, i;
    printf("Enter number of nodes: ");
    scanf("%d", &n);
    printf("Enter %d node values:\n", n);
    for (i = 0; i < n; i++) {
        newnode = (NODE *)malloc(sizeof(NODE));
        scanf("%d", &newnode->data);
        newnode->next = NULL;
        if (head == NULL) {
            head = newnode;
        } else {
            temp = head;
            while (temp->next != NULL)
                temp = temp->next;
           
temp->next = newnode;
        } }
    // Push into stack
    temp = head;
    while (temp != NULL) {
        push(temp->data);
        temp = temp->next;
    }
    // Pop back to reverse
    temp = head;
    while (temp != NULL) {
        temp->data = pop();
        temp = temp->next; }
    printf("Reversed Linked List:\n");
    temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next; }
    printf("NULL\n");
    system("getmac");
    return 0; }
