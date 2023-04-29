// 1, 4, 7, 10, 13, .... up to n
#include<stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    for (i=1; i<=n; i+=3)
        printf("%d ", i);
    printf("\n");
    return 0;
}
