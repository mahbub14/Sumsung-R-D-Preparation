#include<stdio.h>
int N,A[100],price[100],weight[100];
int mx=-1e6;
void print()
{
    for(int i=0;i<N;i++)
        printf("%d",A[i]);
    printf("\n");
}
void solve(int i,int cap)
{
    if(i==N){

       int sum=0;
       for(int i=0;i<N;i++){
        if(A[i]==1){
            sum+=price[i];
        }
       }
       printf("%d\n",sum);
       if(sum>mx){
        mx=sum;
       }
        return ;
    }
    A[i]=0;
    solve(i+1,cap);
    A[i]=1;
    if(cap-weight[i]>0)solve(i+1,cap-weight[i]);
}

int main()
{
    freopen("input.txt","r",stdin);
    scanf("%d",&N);

    for(int i=0;i<N;i++)
    {
        scanf("%d%d",&price[i],&weight[i]);
    }

    solve(0,26);

    printf("MAx is %d\n",mx);
}
