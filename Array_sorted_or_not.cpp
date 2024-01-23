#include<bits/stdc++.h>
using namespace std;
bool sorted_or_not(int *a,int n)
{
    //base case
    if(n==1)return true;
    
    //recursive
    if(a[0]<a[1] && sorted_or_not(a+1,n-1))
    {
        return true;
    }
    return false;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    cout<<sorted_or_not(a,n);
}

