#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", n&3);    // n&3 means n%4
    return 0;
}
