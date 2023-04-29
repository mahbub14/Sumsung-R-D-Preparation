// 2, 4, 6, 8, .... up to nth term
#include<stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    for (i=1; i<=n; i++)
        printf("%d ", 2*i);
    printf("\n");
    return 0;
}
