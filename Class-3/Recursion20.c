// KISS = Keep It Short and Simple
#include<stdio.h>
int N, Set[100];
int Total;
//void solve(int i, int sum1) {
int solve(int i, int sum1) {
    if (i == N) {
        int sum2 = Total - sum1;
        //printf("%d %d\n", sum1, sum2);
        return abs(sum1 - sum2);
    }
    int left = solve(i+1, sum1);
    int right = solve(i+1, sum1 + Set[i]);
    if (left < right) return left;
    else return right;
}
int main() {
    int i;
    freopen("input.txt", "r", stdin);
    scanf("%d", &N);
    Total = 0;
    for (i=0; i<N; i++) {
        scanf("%d", &Set[i]);
        Total += Set[i];
    }
    printf("%d\n", solve(0, 0));
    return 0;
}
