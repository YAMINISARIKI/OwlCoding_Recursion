#include<bits/stdc++.h>
using namespace std;
//dp
int dp[1000];
int fib(int n)
{
    if(n<=1)return n;
    if(dp[n]!=-1)return dp[n];
    return dp[n] = fib(n-1)+fib(n-2);
}
int main()
{
    int n;
    cin>>n;
    memset(dp,-1,sizeof(dp));
    cout<<fib(n);
}
