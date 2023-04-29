// 2, 4, 6, 8, .... up to n
#include<stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    for (i=2; i<=n; i+=2)
        printf("%d ", i);
    printf("\n");
    return 0;
}
