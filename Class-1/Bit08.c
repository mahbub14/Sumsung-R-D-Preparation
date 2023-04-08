// Decimal to Hexadecimal
#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    int c = 0;
    scanf("%d", &n);
    printf("%X\n", n);
    int i;
    for (i=28; i>0; i-=4) if ((n>>i)&15) break;

    for (; i>=0; i-=4) {
        int digit = (n>>i)&15;
        if (digit < 10)
            printf("%d", digit);
        else
            printf("%c", digit + 55);
    }
    return 0;
}
/*
010 011
 2   3
3322 2222 2222 1111 1111 1100 0000 0000
1098 7654 3210 9876 5432 1098 7654 3210
                                   010 011
                                   000 111
*/
