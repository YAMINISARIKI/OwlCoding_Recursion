#include<bits/stdc++.h>
using namespace std;
void ratinmaz(int i,int j,int n,int m,vector<vector<char>>&grid,vector<vector<int>>&path)
{
    //basecase
    if(i>n-1 or j>m-1){
        return;
    }
    if(i==n-1 and j==m-1)
    {
        path[i][j]=1;
        for(int k=0;k<n;k++)
        {
            for(int l=0;l<m;l++)
            {
                cout<<path[k][l];
            }
            cout<<endl;
        }
        cout<<endl;
        return;
    }
    if(grid[i][j]=='x')
    {
        return;
    }
    path[i][j]=1;
    ratinmaz(i,j+1,n,m,grid,path);
    ratinmaz(i+1,j,n,m,grid,path);
    path[i][j]=1;
}
int main()
{
    int n,m;
    cin>>n>>m;
    vector<vector<char>>grid(n,vector<char>(m));
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            cin>>grid[i][j];
        }
    }
    vector<vector<int>>path(n,vector<int>(m,0));
    ratinmaz(0,0,n,m,grid,path);
}
