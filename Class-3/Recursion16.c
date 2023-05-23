#include<stdio.h>
int N, A[100], Used[100];
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
    //for (int j=0; j<N; j++, count++) if (0 == check(i, j)) {
    for (int j=0; j<N; j++) if (0 == Used[j]) {
    //for (int j=0; j<N; j++) {
        A[i] = j;
        //Used[j] = 1;
        solve(i+1);
        //Used[j] = 0;
    }
}
int main() {
    scanf("%d", &N);
    for (int i=0; i<N; i++)
        Used[i] = 0;
    solve(0);
    //printf("%d\n", count);
    return 0;
}
