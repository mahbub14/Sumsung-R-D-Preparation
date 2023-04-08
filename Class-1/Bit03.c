#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    /*printf("%d", (n>>2)&1);
    printf("%d", (n>>1)&1);
    printf("%d", (n>>0)&1);*/
    for (int i=2; i>=0; i--)
        printf("%d", (n>>i)&1);
    return 0;
}
