#include <stdio.h>
#include <stdlib.h>
typedef struct node {
    int data;
    struct node *left, *right;
} Node;
Node* create(int v) {
    Node* n = malloc(sizeof(Node));
    n->data = v;
    n->left = n->right = NULL;
    return n;
}
Node* insert(Node* root, int v) {
    if (!root) return create(v);
    if (v < root->data) root->left = insert(root->left, v);
    else if (v > root->data) root->right = insert(root->right, v);
    return root;
}
Node* findMin(Node* root) {
    while (root->left) root = root->left;
    return root;
}
Node* deleteNode(Node* root, int v) {
    if (!root) return root;
    if (v < root->data)
        root->left = deleteNode(root->left, v);
    else if (v > root->data)

        root->right = deleteNode(root->right, v);
    else {
        // Case 1 & 2: one or no child
        if (!root->left) {
            Node* temp = root->right;
            free(root);
            return temp; }
        if (!root->right) {
            Node* temp = root->left;
            free(root);
            return temp; }
        // Case 3: two children
        Node* temp = findMin(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root; }
void printTree(Node* root) {
    if (!root) return;
    printf("%d ", root->data);
    printTree(root->left);
    printTree(root->right); }
int main() {
    Node* root = NULL;
    int n, v, del;
    printf("Number of nodes: ");
    scanf("%d", &n);
    printf("Enter node values:\n");

 
   for (int i = 0; i < n; i++) {
        scanf("%d", &v);
        root = insert(root, v);
    }
    printf("Enter value to delete: ");
    scanf("%d", &del);
    root = deleteNode(root, del);
    printf("Tree after deletion: ");
    printTree(root);
    system("getmac");
}
