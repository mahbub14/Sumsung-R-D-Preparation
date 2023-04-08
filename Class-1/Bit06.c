// Binary of 32bit integer without leading zero
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    int c = 0;
    scanf("%d", &n);
    int i;
    for (i=31; i>0; i--) if ((n>>i)&1) break;

    for (; i>=0; i--)
        printf("%d", (n>>i)&1 );
    return 0;
}
