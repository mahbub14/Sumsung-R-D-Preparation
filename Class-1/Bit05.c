// Binary of 32bit integer without leading zero
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    int c = 0;
    scanf("%d", &n);
    for (int i=31; i>=0; i--){

        if(pow(2,i)<=n)
        {
            printf("%d", (n>>i)&1 );
        }

    }
    return 0;

}
