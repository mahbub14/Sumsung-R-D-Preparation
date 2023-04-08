#include<stdio.h>

int main() {
    int a, b;
    double c;
    scanf("%d %d", &a, &b);
    c = a / (double) b;
    printf("%.2lf\n", c);
    return 0;
}
