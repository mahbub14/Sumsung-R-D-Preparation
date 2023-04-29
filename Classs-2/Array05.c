#include<stdio.h>

int main() {
    int A[100], n, i;
    scanf("%d", &n);
    for (i=0; i<n; i++)
        scanf("%d", &A[i]);

     int find;

     scanf("%d",&find);
     int f=0;
    for (i=1; i<n; i++)
        if(A[i]==find)
        {

            f++;

        }

            printf("%d frequency %d\n",find ,f);

    return 0;
}
