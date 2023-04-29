#include<stdio.h>

int main() {
    int A[100], n, i;
    scanf("%d", &n);
    for (i=0; i<n; i++)
        scanf("%d", &A[i]);

     //int find;
     int even =0;
     int odd =0;

     //scanf("%d",&find);
     //int f=0;
    for (i=0; i<n; i++)
       {
           if(A[i]%2==0)
              printf("%d ",A[i]);
       }



    return 0;
}
