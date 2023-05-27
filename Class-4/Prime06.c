// Write a function to check a number is prime or not.
// KISS = Keep It Short and Simple
#include<stdio.h>
int checkPrime(int N) {
    int i;
    int isPrime = 1;
    for (i=2; i<N; i++) {
        if (N%i == 0) {
            isPrime = 0;
            break;
        }
    }
    return isPrime;
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
