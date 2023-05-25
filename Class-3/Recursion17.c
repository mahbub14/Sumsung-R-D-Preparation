#include<stdio.h>
int N, A[100], Visited[100], Set[100];
void print() {
    int i;
    printf("{");
    for (i=0; i<N; i++){
       printf("%d", Set[A[i]]);
       if(i<N-1) printf(",");
    }
        printf("}");
    printf("\n");
}
void solve(int i) {
    if (i == N) {
        print();
        return;
    }
    for (int j=0; j<N; j++) if (0 == Visited[j]) {
        A[i] = j;
        Visited[j] = 1;
        solve(i+1);
        Visited[j] = 0;
    }
}
int main() {
    int i;
    scanf("%d", &N);
    for (i=0; i<N; i++)
        scanf("%d", &Set[i]);
    for (i=0; i<N; i++)
        Visited[i] = 0;
    solve(0);
    return 0;
}
