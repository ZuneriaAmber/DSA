#include <stdio.h>
#include <stdlib.h>
typedef struct node {
    int data;
    struct node *left, *right;
} Node;
// create a new node
Node* createNode(int x) {
    Node* n = malloc(sizeof(Node));
    n->data = x;
    n->left = n->right = NULL;
    return n; }
// traversals
void preorder(Node* t) {
    if (!t) return;
    printf("%d ", t->data);
    preorder(t->left);
    preorder(t->right); }
void inorder(Node* t) {
    if (!t) return;
    inorder(t->left);
    printf("%d ", t->data);
    inorder(t->right); }
void postorder(Node* t) {
    if (!t) return;
    postorder(t->left);
    postorder(t->right);
    printf("%d ", t->data); }
// main
int main() {
    int n, i, val;
    printf("Enter number of nodes: ");
    scanf("%d", &n);
    if (n == 0) return 0;
    Node* nodes[n];
    for (i = 0; i < n; i++) {
        printf("Enter value for node %d: ", i+1);
        scanf("%d", &val);
        nodes[i] = createNode(val); }
    for (i = 0; i < n; i++) {
        int leftIndex = 2*i + 1;
        int rightIndex = 2*i + 2;
        if (leftIndex < n) nodes[i]->left = nodes[leftIndex];
        if (rightIndex < n) nodes[i]->right = nodes[rightIndex]; }
    Node* root = nodes[0];
    printf("\nPreorder: "); preorder(root);
    printf("\nInorder: "); inorder(root);
    printf("\nPostorder: "); postorder(root);
    printf("\n");
    system("getmac"); 
    return 0; }
