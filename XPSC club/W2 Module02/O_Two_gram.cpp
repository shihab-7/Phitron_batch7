#include<bits/stdc++.h>
using namespace std;

#define shihab ios_base::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define test int t; cin>>t; while(t--)
#define endl '\n'
#define printv(v) for(auto a:v) cout<<a<<" ";
#define printmp(m) for(auto a:m) cout<<a.first<<" "<<a.second<<endl;
#define ll long long

int main()
{
    shihab
    int n;
    cin>>n;
    string s;
    cin>>s;
    map<string,int>mp;
    for(int i=0;i<n-1;i++)
    {
        // cout<<s.substr(i,2)<<endl;
        string tmp=s.substr(i,2);
        mp[tmp]++;
    }
    // printmp(mp);
    int mx=INT_MIN;
    string ans="";
    for(auto a:mp)
    {
        mx=max(mx,a.second);
        if(a.second==mx) ans=a.first;
    }
    cout<<ans<<endl;
    return 0;
}