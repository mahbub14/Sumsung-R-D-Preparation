//  4, 12, 20, .... up to nth term
#include<stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    for (i=1; i<=n; i++);
        printf("%d ", 8*i-4);
    printf("\n");
    return 0;
}
