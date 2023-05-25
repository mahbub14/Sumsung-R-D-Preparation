#include<stdio.h>
#include<math.h>
int N, A[100], Set[100];
int mn=1e6;
void print() {
    int i;

    int isCheck = 0;
    int sum=0;
    int sum1=0;
    for (i=0; i<N; i++){
        /*if(A[i] == 1){
            if(isCheck == 1){
                printf(", ");
            }
            isCheck = 1;
            printf("%d", Set[i]);
        }*/
        if(A[i] == 1){
         sum+=Set[i];
        }
        else sum1+=Set[i];

    }
    if(mn>abs(sum-sum1))
       {
           mn=abs(sum-sum1);
       }

}
void solve(int i) {
    if (i == N) {
        print();
        return;
    }
    A[i] = 0;
    solve(i+1);
    A[i] = 1;
    solve(i+1);
}
int main() {
    int t;
    scanf("%d",&t);
    while(t--)
    {
     int i;
    scanf("%d", &N);
    for (i=0; i<N; i++)
        scanf("%d", &Set[i]);
    solve(0);
    printf("%d\n",mn);
    mn=1e6;
    }
    return 0;
}
