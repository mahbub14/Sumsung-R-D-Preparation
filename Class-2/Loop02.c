// n, n-1, n-2, ... 3, 2, 1
#include<stdio.h>

int main() {
    int n, i;
    scanf("%d", &n);
    for (i=n; i>=1; i--)
        printf("%d ", i);
    printf("\n");
    return 0;
}
