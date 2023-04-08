#include<stdio.h>

int main() {
    int n;
    int x = 0;
    scanf("%d", &n);
    while (n) {
        n = n & (n-1);
        x++;
    }
    printf("%d\n", x);
    return 0;
}
