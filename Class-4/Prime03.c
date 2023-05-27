// Prime
#include<stdio.h>
int main() {
    int N;
    int i;
    scanf("%d", &N);
    for (i=2; i<N; i++) {
        if (N%i == 0) {
            printf("%d is not Prime\n", N);
            break;
        }
        else {
            printf("%d is Prime\n", N);
            break;
        }
    }
    return 0;
}
