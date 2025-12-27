#include <stdio.h>
#include <stdlib.h>
typedef struct node {
    int coeff;
    int exp;
    struct node *next;
} NODE;
// Function to create a new node
NODE* createNode(int c, int e) {
    NODE *newnode = (NODE*)malloc(sizeof(NODE));
    newnode->coeff = c;
    newnode->exp = e;
    newnode->next = NULL;
    return newnode; }
// Function to insert at end
NODE* insertEnd(NODE *head, int c, int e) {
    NODE *newnode = createNode(c, e);
    if (head == NULL)
        return newnode;
    NODE *temp = head;
    while (temp->next != NULL)
        temp = temp->next;
    temp->next = newnode;
    return head; }
// Function to display polynomial
void display(NODE *head) {
    NODE *temp = head;
    while (temp != NULL) {
        if (temp->exp != 0)
            printf("%dx^%d", temp->coeff, temp->exp);
        else
            printf("%d", temp->coeff);
        if (temp->next != NULL)
            printf(" + ");
        temp = temp->next; }
    printf("\n"); }
int main() {
    NODE *poly = NULL;
    int n, coeff, exp, i;
    printf("Enter number of terms in polynomial: ");
    scanf("%d", &n);
    for (i = 0; i < n; i++) {
        printf("Enter coefficient and exponent for term %d: ", i + 1);
        scanf("%d %d", &coeff, &exp);
        poly = insertEnd(poly, coeff, exp);
    }
    printf("Polynomial: ");
    display(poly);
    system("getmac");
    return 0;
}
