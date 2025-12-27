#include <stdio.h>
#include <stdlib.h>
typedef struct Node {
    int row, col, value;
    struct Node* next;
} Node;
Node* head = NULL;
void insert(int r, int c, int val) {
    Node* n = malloc(sizeof(Node));
    n->row = r; n->col = c;
    n->value = val;
    n->next = NULL;
    if (head == NULL) {
        head = n; }
    else {
        Node* t = head;
        while (t->next) t = t->next;
        t->next = n; } }
void displayList() {
    Node* t = head;
    printf("Sparse Matrix as Linked List:\n");
    printf("Row\tCol\tValue\n");
    while (t) {
        printf("%d\t%d\t%d\n", t->row, t->col, t->value);
        t = t->next; } }
void displayMatrix(int rows, int cols) {
    printf("\nSparse Matrix in Matrix Form:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            Node* t = head;
            int found = 0;
            while (t) {
                if (t->row == i && t->col == j) {
                    printf("%d ", t->value);
                    found = 1; break; }
                t = t->next; }
            if (!found) printf("0 "); }
        printf("\n"); } }
int main() {
    int rows, cols, num, r, c, val;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);
    printf("Enter number of non-zero elements: ");
    scanf("%d", &num);
    for (int i = 0; i < num; i++) {
        printf("Enter row, column, and value of element %d: ", i+1);
        scanf("%d %d %d", &r, &c, &val);
        r--;c--; insert(r, c, val); }
    displayList();
    displayMatrix(rows, cols);
    system("getmac"); return 0; }
