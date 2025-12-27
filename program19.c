#include <stdio.h>
#include <stdlib.h>
typedef struct node {
    int data;
    struct node *left, *right;
} Node;
Node* create(int v) {
    Node* n = malloc(sizeof(Node));
    n->data = v; n->left = n->right = NULL;
    return n;
}
void printTree(Node* root) {
    if (!root) return;
    printf("%d ", root->data);
    printTree(root->left);
    printTree(root->right);
}
int main() {
    int n, v;
    printf("Number of nodes: "); scanf("%d", &n);
    if (n <= 0) return 0;
    printf("Root value: "); scanf("%d", &v);
    Node* root = create(v);
    Node* queue[100]; int f = 0, r = 0;
    queue[r++] = root;
    int count = 1;
    while (count < n) {

        Node* cur = queue[f++];
        if (count < n) { printf("Left of %d: ", cur->data);
             scanf("%d", &v); 
             cur->left = create(v); 
             queue[r++] = cur->left;
              count++; }
        if (count < n) { printf("Right of %d: ", cur->data); 
            scanf("%d", &v); 
            cur->right = create(v); 
            queue[r++] = cur->right; 
            count++; }
    }

    printf("Tree (root->left->right): ");
    printTree(root);
    printf("\n");
    system("getmac");
}
    