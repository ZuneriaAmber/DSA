#include <stdio.h>
#include <stdlib.h>
#define SIZE 3
int queue[SIZE];
int front = -1, rear = -1;
int isFull() { return ((rear + 1) % SIZE == front); }
int isEmpty() { return (front == -1); }
void insert(int x) {
    if (isFull()) {
        printf("Queue is full\n");
        return; }
    if (isEmpty()) front = 0;
    rear = (rear + 1) % SIZE;
    queue[rear] = x;
    printf("%d inserted\n", x); }
void removeItem() {
    if (isEmpty()) {
        printf("Queue is empty\n");
        return; }
    int val = queue[front];
    if (front == rear) { // only one element
        front = rear = -1; }
    else {
        front = (front + 1) % SIZE; }
    printf("Removed item: %d\n", val); }
void display() {
    if (isEmpty()) {
        printf("Queue is empty\n"); return; }
    printf("Queue elements: ");
    int i = front;
    while (1) {
        printf("%d ", queue[i]);
        if (i == rear) break;
        i = (i + 1) % SIZE; }
    printf("\n"); }
int main() {
    int ch, x;
    while (1) {
        printf("\n1.Insert  2.Remove  3.Display  4.Exit\n");
        scanf("%d", &ch);
        switch (ch) {
            case 1: printf("Enter value: "); scanf("%d", &x);
                insert(x); break;
            case 2: removeItem(); break;
            case 3: display(); break;
            case 4: system("getmac");  exit(0);
            default: printf("Invalid choice\n");
        }  } }
