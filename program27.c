#include <stdio.h>
#include <stdlib.h>
typedef struct node {
    int data;
    struct node *next;
} Node;
Node *last = NULL;
void insert(int x) {
    Node *n = malloc(sizeof(Node));
    n->data = x;
    if (last == NULL) {
        last = n;
        n->next = n; }
    else {
        n->next = last->next;
        last->next = n;
        last = n; } }
void delete() {
    if (last == NULL) {
        printf("List empty\n");
        return; }
    Node *t = last->next;
    int del = t->data;
    if (t == last) {
        last = NULL; }
    else {
        last->next = t->next; }
    free(t);
    printf("Deleted item: %d\n", del); }
void display() {
    if (last == NULL) {
        printf("List empty\n");
        return; }
    Node *t = last->next;
    do {
        printf("%d ", t->data);
        t = t->next;
    } while (t != last->next);
    printf("\n"); }
int main() {
    int ch, x;
    while (1) {
        printf("\n1.Insert  2.Delete  3.Display  4.Exit\n");
        scanf("%d",&ch);
        switch (ch) {
            case 1: printf("Enter value: "); scanf("%d",&x); insert(x); break;
            case 2: delete(); break;
            case 3: display(); break;
            case 4: system("getmac"); exit(0);
        } } }
