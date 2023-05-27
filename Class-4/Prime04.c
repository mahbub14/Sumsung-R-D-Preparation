// Prime
#include<stdio.h>
int main() {
    int N;
    int i;
    int isPrime;
    scanf("%d", &N);
    isPrime = 1;
    for (i=2; i<N; i++) {
        if (N%i == 0) {
            isPrime = 0;
            break;
        }
    }
    if (1 == isPrime)
        printf("%d is Prime\n", N);
    else
        printf("%d is not Prime\n", N);
    return 0;
}
