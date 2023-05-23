#include<stdio.h>
int N, A[100];
int count = 0;
void print() {
    int i;
    for (i=0; i<N; i++)
        printf("%d", A[i]);
    printf("\n");
}
int check(int i, int j) {
    int k;
    for (k=0; k<i; k++) {
        if (A[k] == j)
            return 1;
    }
    return 0;
}
void solve(int i) {
    if (i == N) {
        print();
        return;
    }
    for (int j=0; j<N; j++, count++) if (0 == check(i, j)) {
        A[i] = j;
        solve(i+1);
    }
}
int main() {
    scanf("%d", &N);
    solve(0);
    //printf("%d\n", count);
    return 0;
}
