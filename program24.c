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
/* Level Order Traversal */
void levelOrder(Node* root) {
    if (!root) return;
    Node* q[100];
    int f = 0, r = 0;
    q[r++] = root;
    while (f < r) {

        Node* cur = q[f++];
        printf("%d ", cur->data);
        if (cur->left)  q[r++] = cur->left;
        if (cur->right) q[r++] = cur->right;
    }
}
int main() {
    Node* root = NULL;
    int n, v;
    printf("Number of nodes: ");
    scanf("%d", &n);
    printf("Enter the node values:");
    for (int i = 0; i < n; i++) {
        scanf("%d", &v);
        root = insert(root, v);
    }
    printf("Level Order Traversal: ");
    levelOrder(root);
    printf("\n");
    system("getmac");
}
