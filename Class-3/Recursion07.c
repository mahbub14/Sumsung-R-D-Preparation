#include<stdio.h>
int N, A[100];
void print() {
    int i;
    for (i=0; i<N; i++)
        printf("%d", A[i]);
    printf("\n");
}
void solve(int i) {
    if (i == N) {
        print();
        return ;
    }
    /*A[i] = 0;
    solve(i+1);
    A[i] = 1;
    solve(i+1);*/
    for (int j=0; j<2; j++) {
        A[i] = j;
        solve(i+1);
    }
}
int main() {
    scanf("%d", &N);
    solve(0);
    return 0;
}
