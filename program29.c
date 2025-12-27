#include <stdio.h>
#include <stdlib.h>
typedef struct node {
    int data;
    struct node *next;
} Node;
Node *head = NULL;
void insert_end(int x) {
    Node *n = malloc(sizeof(Node));
    n->data = x;
    n->next = NULL;
    if (head == NULL) {
        head = n;
        return; }
    Node *t = head;
    while (t->next)
        t = t->next;
    t->next = n; }
void insert_middle(int x, int pos) {
    Node *n = malloc(sizeof(Node));
    n->data = x;
    Node *t = head;
    for (int i = 1; i < pos - 1 && t; i++)
        t = t->next;
    if (t == NULL) {
        printf("Invalid position\n");
        return;
    }

    n->next = t->next;
    t->next = n; }
void delete_middle(int pos) {
    if (head == NULL) {
        printf("List empty\n");
        return; }
    Node *t = head;
    for (int i = 1; i < pos - 1 && t; i++)
        t = t->next;
    if (t == NULL || t->next == NULL) {
        printf("Invalid position\n");
        return; }
    Node *d = t->next;
    printf("Deleted item: %d\n", d->data);
    t->next = d->next;
    free(d); }
void display() {
    Node *t = head;
    while (t) {
        printf("%d ", t->data);
        t = t->next; }
    printf("\n"); }
int main() {
    int ch, x, pos;
    while (1) {
        printf("\n1.Insert End  2.Insert Middle  3.Delete Middle  4.Display  5.Exit\n");
        scanf("%d", &ch);
        switch (ch) {
            case 1: printf("Enter value: ");
                
    scanf("%d", &x);
                insert_end(x);
                break;
            case 2: printf("Enter value and position: ");
                scanf("%d %d", &x, &pos);
                insert_middle(x, pos);
                break;
            case 3: printf("Enter position: ");
                scanf("%d", &pos);
                delete_middle(pos);
                break;
            case 4: display(); break;
            case 5: system("getmac"); exit(0);
        } } }
