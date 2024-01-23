#include<bits/stdc++.h>
using namespace std;
int factorial(int n)
{
    //base case
    if(n==0)return 1;
    
    //recursive case
    int sub = factorial(n-1);
    return n*sub;
}

int fibanocci(int n)
{
    //base case
    if(n==0 or n==1)return n;
    
    //recursive case
    int sub1 = fibanocci(n-1);
    int sub2 = fibanocci(n-2);
    return sub1+sub2;
}

int main()
{
    int n;
    cin>>n;
    cout<<factorial(n)<<endl;
    cout<<fibanocci(n)<<endl;
}
