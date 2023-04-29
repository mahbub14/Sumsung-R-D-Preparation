#include<stdio.h>
    int sum=0;
int main() {
    int A[100], n, i;
    scanf("%d", &n);
    for (i=0; i<n; i++)
        scanf("%d", &A[i]);
    for (i=0; i<n; i++)
        sum+= A[i];
    printf("%d\n",sum);
    return 0;
}
