#include <stdio.h>
#include <stdlib.h>
typedef struct node {
    int data;
    struct node *left, *right;
} Node;
// Create a new node
Node* create(int value) {
    Node* n = (Node*)malloc(sizeof(Node));
    n->data = value;
    n->left = n->right = NULL;
    return n;
}
// Insert a node into BST
Node* insert(Node* root, int value) {
    if (root == NULL) return create(value);
    if (value < root->data) root->left = insert(root->left, value);
    else if (value > root->data) root->right = insert(root->right, value);
    return root;
}
// Preorder print: root -> left -> right
void printTree(Node* root) {
    if (!root) return;
    printf("%d ", root->data);
    printTree(root->left);
    printTree(root->right);
}

int main() {
    Node* root = NULL;
    int n, value;
    printf("Number of nodes to insert: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Enter value: ");
        scanf("%d", &value);
        root = insert(root, value);
    }
    printf("Tree (root->left->right): ");
    printTree(root);
    printf("\n");
    system("getmac");
}
