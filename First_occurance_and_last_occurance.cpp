#include<bits/stdc++.h>
using namespace std;
int first_occurance(int *a,int key,int n)
{
    //base case
    if(n==0)return -1;
    
    //recursive case
    if(a[0]==key)return 0; //if you found key at initial position , return 0
    int sub = first_occurance(a+1,key,n-1); 
    if(sub==-1)return -1;
    else return sub+1;
}

int last_occurance(int *a,int key,int n)
{
    //base case
    if(n==0)return -1;
    //recursive case
    int sub = last_occurance(a+1,key,n-1);
    if(sub==-1)
    {
        if(a[0]==key)return 0;
        else return 1;
    }
    else
    {
        return sub+1;
    }
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
    int key;
    cin>>key;
    cout<<first_occurance(a,key,n)<<endl;
    cout<<last_occurance(a,key,n)<<endl;
}

