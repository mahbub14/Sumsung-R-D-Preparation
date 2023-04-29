// 1, 3, 5, 7, .... up to n
#include<stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    for (i=1; i<=n; i+=2)
        printf("%d ", i);
    printf("\n");
    return 0;
}
