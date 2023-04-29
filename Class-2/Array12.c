#include<stdio.h>

int main() {
    int A[100], n, i;
    scanf("%d", &n);
    for (i=0; i<n; i++)
        scanf("%d", &A[i]);

     int j;

     for (i=0,j=n-1; i<n/2; i++,j--)
       {
          int tmp=A[i];
          A[i]=A[j];
          A[j]=tmp;

       }

       for(int i=0;i<n;i++)
       {
           printf("%d ",A[i]);
       }





    return 0;
}
