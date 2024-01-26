#include<bits/stdc++.h>
using namespace std;
void combinationsum(int index,int arr[],int n,int k,vector<int>&ds)
{
    //base case
    if(index==n)
    {
        if(k==0)
        {
            for(auto it:ds){
                cout<<it<<" ";
            }
            cout<<endl;
        }
        return;
    }
    //recursuve
    if(arr[index]<=k)
    {
        ds.push_back(arr[index]);
        k = k-arr[index];
        combinationsum(index,arr,n,k,ds); //if we have chance to pick multiple times
        // combinationsum(index+1,arr,n,k,ds); //if we have chance to pick element only once
        k = k+arr[index];
        ds.pop_back();
    }
    
    combinationsum(index+1,arr,n,k,ds);
}
int main()
{
    int n,k;
    cin>>n>>k;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    vector<int>ds;
    combinationsum(0,arr,n,k,ds);
}
