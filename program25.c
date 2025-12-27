#include <stdio.h>
#include <stdlib.h>
#define MAX 10
typedef struct node {
    int v;
    struct node *next;
} Node;
Node* adj[MAX];
int visited[MAX];
/* create adjacency node */
Node* createNode(int v) {
    Node* n = malloc(sizeof(Node));
    n->v = v;
    n->next = NULL;
    return n; }
/* add edge */
void addEdge(int s, int d) {
    Node* n = createNode(d);
    n->next = adj[s];
    adj[s] = n; }
/* DFS using STACK */
void DFS(int start, int n) {
    int stack[MAX], top = -1;
    for (int i = 0; i < n; i++) visited[i] = 0;
    stack[++top] = start;
    printf("DFS: ");
    while (top != -1) {
        int cur = stack[top--];
        if (!visited[cur]) {
            printf("%d ", cur);
            visited[cur] = 1; }
        Node* t = adj[cur];
        while (t) {
            if (!visited[t->v])
                stack[++top] = t->v;
            t = t->next;
        } }
    printf("\n"); }
/* BFS using QUEUE */
void BFS(int start, int n) {
    int q[MAX], f = 0, r = 0;
    for (int i = 0; i < n; i++) visited[i] = 0;
    q[r++] = start;
    visited[start] = 1;
    printf("BFS: ");
    while (f < r) {
        int cur = q[f++];
        printf("%d ", cur);
        Node* t = adj[cur];
        while (t) {
            if (!visited[t->v]) {
                visited[t->v] = 1;
                q[r++] = t->v;
            } t = t->next;
        } }
    printf("\n");
}

int main() {
    int n, e, s, d, start;
    printf("Enter number of vertices: ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
        adj[i] = NULL;
    printf("Enter number of edges: ");
    scanf("%d", &e);
    printf("Enter edges as pairs (source destination)\n");
    printf("Example: 0 1\n\n");
    for (int i = 0; i < e; i++) {
        printf("Edge %d: ", i + 1);
        scanf("%d %d", &s, &d);
        addEdge(s, d);
        addEdge(d, s); }
    printf("Enter start vertex: ");
    scanf("%d", &start);
    DFS(start, n);
    BFS(start, n);
    system("getmac");
    return 0; }
