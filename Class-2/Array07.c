#include<stdio.h>

int main() {
    int A[100], n, i;
    scanf("%d", &n);
    for (i=0; i<n; i++)
        scanf("%d", &A[i]);

     //int find;
     int min1 = A[0];
     int min2 = A[1];

     //scanf("%d",&find);
     //int f=0;
    for (i=2; i<n; i++)
       {
           if(A[i]<min1)
           {
               min2 = min1;
               min1 = A[i];
           }
           else if (min1>A[i] && min2 < A[i])
            min2 = A[i];
       }
       printf("%d",min2);


    return 0;
}
