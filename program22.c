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
    if (v < root->data)
        root->left = insert(root->left, v);
    else if (v > root->data)
        root->right = insert(root->right, v);
    return root;
}
/* DFS = Preorder traversal */
void DFS(Node* root) {
    if (!root) return;
    printf("%d ", root->data);   // visit
    DFS(root->left);             // left
    DFS(root->right);            // right
}

int main() {
    Node* root = NULL;
    int n, v;
    printf("Number of nodes: ");
    scanf("%d", &n);
    printf("Enter node values:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &v);
        root = insert(root, v);
    }
    printf("DFS traversal: ");
    DFS(root);
    printf("\n");
    system("getmac");
}
