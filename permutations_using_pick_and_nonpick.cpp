#include<bits/stdc++.h>
using namespace std;
void printpermutations(string s,vector<int>freq,string ans)
{
    //basecase
    if(ans.size()==s.size())
    {
        cout<<ans<<endl;
        return;
    }
    //recursive case
    for(int i=0;i<s.size();i++)
    {
        if(freq[i]==0)
        {
            freq[i] = 1;
            printpermutations(s,freq,ans+s[i]);
            freq[i] = 0;
        }
    }
}
int main()
{
    int n;
    cin>>n;
    string s;
    cin>>s;
    vector<int>freq(n,0);
    printpermutations(s,freq,"");
}
