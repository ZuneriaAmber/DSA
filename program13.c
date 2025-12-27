#include <stdio.h>
#include <stdlib.h>
typedef struct node {
    int data;
    struct node *next;
} NODE;
NODE *front = NULL, *rear = NULL;
void insert() {
    NODE *n = (NODE *)malloc(sizeof(NODE));
    printf("Enter value: ");
    scanf("%d", &n->data);
    n->next = NULL;
    if (rear == NULL) {
        front = rear = n;
    } else {
        rear->next = n;
        rear = n; } }
void delete() {
    if (front == NULL) {
        printf("List is empty\n");
        return; }
    NODE *t = front;
    printf("Deleted element: %d\n", t->data);
    front = front->next;
    if (front == NULL)  
    rear = NULL;
    free(t); }
void display() {
    NODE *t = front;
    if (t == NULL) {
        printf("List is empty\n");
        return; }
    printf("Elements:\n");
    while (t != NULL) {
        printf("%d ", t->data);
        t = t->next; }
    printf("\n"); }
int main() {
    int ch;
    while (1) {
        printf("\n1.Insert 2.Delete 3.Display 4.Exit\n");
        scanf("%d", &ch);
        if (ch == 1) insert();
        else if (ch == 2) delete();
        else if (ch == 3) display();
        else break; }
    system("getmac");
    return 0;
}
