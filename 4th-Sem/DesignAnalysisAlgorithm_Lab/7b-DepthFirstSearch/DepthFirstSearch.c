/*
Algorithm 7b - Depth First Search
Check whether a given graph is connected or not using DFS method.
*/

#include <stdio.h>
#include <conio.h>

void depthFirstSearch(int a[10][10], int n, int source, int s[100]);

int main() {
    int n, a[10][10], i, j, source, s[10];

    printf("Enter the number of nodes: ");
    scanf("%d", &n);

    printf("Enter the adjacency matrix:\n");
    for (i = 1; i <= n; i++)
        for (j = 1; j <= n; j++)
            scanf("%d", &a[i][j]);

    printf("Enter the source node: ");
    scanf("%d", &source);

    for (i = 1; i <= n; i++)
        s[i] = 0;

    printf("The Depth First Search Traversal is:\n");
    depthFirstSearch(a, n, source, s);

    return 0;
}

void depthFirstSearch(int a[10][10], int n, int source, int s[100]) {
    int i;

    printf(" %d ", source);
    s[source] = 1;

    for (i = 1; i <= n; i++)
        if (s[i] == 0 && a[source][i] == 1)
            depthFirstSearch(a, n, i, s);
}

/*
OUTPUT:
Enter the number of nodes: 6
Enter the adjacency matrix:
0 1 1 0 0 0
1 0 0 1 0 0
1 0 0 0 1 0
0 1 0 0 0 1
0 0 1 0 0 1
0 0 0 1 1 0
Enter the source node: 1
The Depth First Search Traversal is:
 1  2  4  6  5  3
*/
