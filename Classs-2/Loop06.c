// 1, 3, 5, 7, .... up to nth term
#include<stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    for (i=1; i<=n; i++)
        printf("%d ", 2*i-1);
    printf("\n");
    return 0;
}
