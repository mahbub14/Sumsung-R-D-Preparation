#include<stdio.h>

int main() {
    int A[100], n, i;
    scanf("%d", &n);
    for (i=0; i<n; i++)
        scanf("%d", &A[i]);

     //int find;
     int max1 = A[0];
     int max2 = A[1];

     //scanf("%d",&find);
     //int f=0;
    for (i=2; i<n; i++)
       {
           if(A[i]>max1)
           {
               max2 = max1;
               max1 = A[i];
           }
           else if (max1>A[i] && max2 < A[i])
            max2 = A[i];
       }
       printf("%d",max2);


    return 0;
}
