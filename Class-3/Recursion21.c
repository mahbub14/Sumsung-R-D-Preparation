#include<stdio.h>
int N, Set[100], dp[101][50001];
int Total;
int solve(int i, int sum1) {
    if (dp[i][sum1] != -1)
        return dp[i][sum1];
    if (i == N) {
        int sum2 = Total - sum1;
        return dp[i][sum1] = abs(sum1 - sum2);
    }
    int left = solve(i+1, sum1);
    int right = solve(i+1, sum1 + Set[i]);
    if (left < right)
        return dp[i][sum1] = left;
    else
        return dp[i][sum1] = right;
}
int main() {
    int i, j;
    freopen("input.txt", "r", stdin);
    scanf("%d", &N);
    Total = 0;
    for (i=0; i<N; i++) {
        scanf("%d", &Set[i]);
        Total += Set[i];
    }
    for (i=0; i<=100; i++) {
        for (j=0; j<=50000; j++)
            dp[i][j] = -1;
    }
    printf("%d\n", solve(0, 0));
    return 0;
}
