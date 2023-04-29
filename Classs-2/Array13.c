#include<stdio.h>
// Input: 2 1 0 4 0 3 5
// Output:2 1 4 3 5
int main() {
    int n, A[100], i, j;
    freopen("input.txt", "r", stdin);
    scanf("%d", &n);
    for (i=0; i<n; i++)
        scanf("%d", &A[i]);
    for (i=j=0; i<n; i++) {
        if (A[i] != 0)
            A[j++] = A[i];
    }
    n = j;
    for (i=0; i<n; i++)
        printf("%d ", A[i]);
    return 0;
}
