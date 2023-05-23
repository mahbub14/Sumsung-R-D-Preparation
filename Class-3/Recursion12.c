#include<stdio.h>
int N, A[100];
void print() {
    int i;
    for (i=0; i<N; i++)
        printf("%d", A[i]);
    printf("\n");
}
void solve() {
    int i;
    for (i=0; i<N; i++)
        A[i] = 0;
}
int main() {
    scanf("%d", &N);
    solve();
    print();
    return 0;
}
