#include<stdio.h>

int main() {
    int A[100], n, i;
    scanf("%d", &n);
    for (i=0; i<n; i++)
        scanf("%d", &A[i]);

    int small=A[0];

    for (i=1; i<n; i++)
        if(A[i]<small) small=A[i];
    printf("%d\n",small);
    return 0;
}
