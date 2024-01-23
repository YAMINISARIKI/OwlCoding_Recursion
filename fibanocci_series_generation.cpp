#include <bits/stdc++.h>
using namespace std;
int fibanocci(int n)
{
    if(n==0 || n==1)return n;
    return fibanocci(n-1)+fibanocci(n-2);
}
int main() {
    // Write C++ code here
    int n;
    cin>>n;
    for(int i=0;i<=n;i++)
    {
        cout<<fibanocci(i)<<" ";
    }
    return 0;
}
