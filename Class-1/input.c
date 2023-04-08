#include<stdio.h>

int main() {
    int T;
    int Case;
    int N, M, K;
    int i, j;
    freopen("input.txt", "w", stdout);
    T = 50;
    printf("%d\n", T);
    for (Case = 1; Case <=T; Case++) {
        N = rand()%198 + 3;
        if (Case <= 5 && N > 5)
            N = 5;
        M = rand()%18 + 3;
        if (Case <= 5 && M > 5)
            M = 5;
        K = rand()%M + 1;
        printf("%d %d %d\n", N, M, K);
        for (i=0; i<N; i++) {
            for (j=0; j<M; j++)
                printf("%d ", rand()%2);
            printf("\n");
        }
    }
    return 0;
}
