#include <stdio.h>
#include <stdlib.h>
// Node structure
typedef struct node {
    int data;
    struct node *left;
    struct node *right;
} Node;
// Function to create a new node
Node* createNode(int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = value;
    newNode->left = NULL;
    newNode->right = NULL;
    return newNode; }
// Insert a node into the binary tree
Node* insertNode(Node* root, int value) {
    if (root == NULL) {
        return createNode(value); }
    if (value < root->data) {
        root->left = insertNode(root->left, value);
    } else if (value > root->data) {
        root->right = insertNode(root->right, value);
    }
   return root; }
// Preorder print: root -> left -> right
void printTree(Node* root) {
    
if (root == NULL) return;
    printf("%d ", root->data); // Print root
    printTree(root->left);     // Then left subtree
    printTree(root->right);    // Then right subtree
}
int main() {
    Node* root = NULL;
    int n, value;
    printf("Enter number of nodes: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("Enter node value: ");
        scanf("%d", &value);
        root = insertNode(root, value); }
    printf("Tree values (root -> left -> right): ");
    printTree(root);
    printf("\n");
    system("getmac");
    return 0; 
}
