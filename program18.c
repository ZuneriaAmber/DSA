#include <stdio.h>
#include <stdlib.h>
int main() {
    int n;
    printf("Enter number of nodes: ");
    scanf("%d", &n);
    int tree[n]; // array to store tree nodes
    // Input tree values
    for (int i = 0; i < n; i++) {
        printf("Enter value for node %d: ", i);
        scanf("%d", &tree[i]); }
    printf("\nTree structure (parent -> left child, right child):\n");
    for (int i = 0; i < n; i++) {
        int left = 2*i + 1;
        int right = 2*i + 2;
        printf("Node %d: %d", i, tree[i]);
        if (left < n) printf(", Left child: %d", tree[left]);
        if (right < n) printf(", Right child: %d", tree[right]);
        printf("\n"); }
    system("getmac");
    return 0; }
