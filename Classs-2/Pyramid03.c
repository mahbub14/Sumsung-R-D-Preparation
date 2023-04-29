#include<stdio.h>

int main() {
    int n, i, j, k=1;
    scanf("%d", &n);
    printf("123456789012345678901234567890\n");
    for (i=1; i<=n; i++) {
        for (j=1; j<=n-i; j++)
        printf("  ");
        for (j=1; j<=i; j++)
        printf("%4d", i);
        printf("\n");
    }
    return 0;
}
