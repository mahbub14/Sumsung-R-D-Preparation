// Write a function to check a number is prime or not.
// KISS = Keep It Short and Simple
#include<stdio.h>
int checkPrime(int N) {
    int i;
    for (i=2; i<N; i++) if (N%i == 0) return 0;
    return 1;
}
int main() {
    int N;
    int i;
    scanf("%d", &N);
    if (1 == checkPrime(N))
        printf("%d is Prime\n", N);
    else
        printf("%d is not Prime\n", N);
    return 0;
}
