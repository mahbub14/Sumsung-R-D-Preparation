#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    //if (n%2 == 1)
    //if (n%2)
    if (n&1)
        printf("Odd\n");
    else
        printf("Even\n");
    return 0;
}
