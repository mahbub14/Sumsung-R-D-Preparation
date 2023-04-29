#include<stdio.h>

int main() {
    int A[100], n, i;
    scanf("%d", &n);
    for (i=0; i<n; i++)
        scanf("%d", &A[i]);

     //int find;
     int even[50];
     int odd[50];

     //scanf("%d",&find);
     //int f=0;
     int j=0,k=0;
    for (i=0; i<n; i++)
       {
           if(A[i]%2==0)
              {
                  even[j]=A[i];
                  j++;
              }
              else{
                odd[k]=A[i];
                k++;
              }
       }
       printf("\n");
          for (i=0; i<=j; i++)
       {
           printf("%d",even[i]);
       }
       for (i=0; i<=k; i++)
       {
           printf("%d",odd[i]);
       }



    return 0;
}
