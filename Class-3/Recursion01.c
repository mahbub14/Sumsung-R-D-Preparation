#include<stdio.h>
int main() {
    int N, A[100], i;
    scanf("%d", &N);
    for (i=0; i<N; i++)
        A[i] = 0;
    for (i=0; i<N; i++)
        printf("%d", A[i]);
    printf("\n");
    return 0;
}
